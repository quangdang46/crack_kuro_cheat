#include "Includes.h"

#include "Tools.h"
#include "fake_dlfcn.h"

#include "imgui.h"
#include "imgui_impl_android.h"
#include "imgui_impl_opengl3.h"

#include "StrEnc.h"
#include "Spoof.h"
#include "plthook.h"
#include "Items.h"

#include "json.hpp"

using json = nlohmann::json;

#include "SDK.hpp"

using namespace SDK;

#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"

#include "KuroAPI.h"

// ======================================================================== //
bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;

json items_data;

time_t expiredDate = 0;
std::string g_Token, g_Auth;
bool bValid = false;

KuroAPI *kAPI = 0;
// ======================================================================== //
enum EAimTarget {
    Head = 0,
    Chest = 1
};

enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};

std::map<int, bool> Items;

struct sConfig {
    struct sESPMenu {
        bool Line;
        bool Box;
        bool Health;
        bool Name;
        bool Distance;
        bool TeamID;
        bool Vehicle;
    };
    sESPMenu ESPMenu{0};

    struct sAimMenu {
        bool Enable;
        bool AimBot;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool IgnoreKnocked;
        bool VisCheck;
    };
    sAimMenu SilentAim{0};

    struct sColorsESP {
        float *Line;
        float *Box;
    };
    sColorsESP ColorsESP{0};
};
sConfig Config{0};

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};

// ======================================================================== //
uintptr_t UE4;

android_app *g_App = 0;

ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;

// ======================================================================== //
#if defined(__LP64__)
#define GWorld_Offset 0xA62FA30
#define get_GNames_Offset 0x3C48E2C
#define GUObjectArray_Offset 0xA43E7F0
#define GNativeAndroidApp_Offset 0xA211AD8
#define Actors_Offset 0xA0
#else
#define GWorld_Offset 0x77FDAD8
#define get_GNames_Offset 0x29049DC
#define GUObjectArray_Offset 0x768BD68
#define GNativeAndroidApp_Offset 0x7337478
#define Actors_Offset 0x70
#endif

struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}

// ======================================================================== //
std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}

// ======================================================================== //
int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

// ======================================================================== //
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)

auto GetTargetByCrossDist() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = kAPI->getActors(false);

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.SilentAim.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.SilentAim.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }

    return result;
}

const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}

void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;

void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
    if (Config.SilentAim.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
        if (Target) {
            bool triggerOk = false;
            if (Config.SilentAim.Trigger != EAimTrigger::None) {
                if (Config.SilentAim.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.SilentAim.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                    rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                }
            }
        }
    }
    return orig_shoot_event(thiz, start, rot, weapon, unk1);
}

void DrawESP(ImDrawList *draw) {
    auto Actors = kAPI->getActors(false);

    int totalEnemies = 0, totalBots = 0;

    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;

    for (auto Actor : Actors) {
        if (isObjectInvalid(Actor))
            continue;

        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
            localController = (ASTExtraPlayerController *) Actor;
            break;
        }
    }

    if (localController) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
                    localPlayer = (ASTExtraPlayerCharacter *) Actor;
                    break;
                }
            }
        }


        if (localPlayer) {
            if (Config.SilentAim.Enable) {
                auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                if (WeaponManagerComponent) {
                    auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                    if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                            if (ShootWeaponComponent) {
                                int shoot_event_idx = 148;
                                auto VTable = (void **) ShootWeaponComponent->VTable;
                                if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                    orig_shoot_event = decltype(orig_shoot_event)(VTable[shoot_event_idx]);
                                    VTable[shoot_event_idx] = (void *) shoot_event;
                                }
                            }
                        }
                    }
                }
            }

            for (auto & i : Actors) {
                auto Actor = i;
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    auto Player = (ASTExtraPlayerCharacter *) Actor;

                    float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                    if (Distance > 500.0f)
                        continue;

                    if (Player->PlayerKey == localController->PlayerKey)
                        continue;

                    if (Player->TeamID == localController->TeamID)
                        continue;

                    if (Player->bDead)
                        continue;

                    if (!Player->Mesh)
                        continue;

                    if (Player->bIsAI)
                        totalBots++;
                    else totalEnemies++;

                    auto HeadPos = Player->GetBonePos("Head", {});
                    ImVec2 HeadPosSC;

                    auto RootPos = Player->GetBonePos("Root", {});
                    ImVec2 RootPosSC;
                    if (W2S(HeadPos, (FVector2D *) &HeadPosSC) && W2S(RootPos, (FVector2D *) &RootPosSC)) {
                        if (Config.ESPMenu.Line) {
                            draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC, ToColor(Config.ColorsESP.Line), 1.0f);
                        }
                        if (Config.ESPMenu.Box) {
                            float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                            float boxWidth = boxHeight * 0.65f;
                            ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y};
                            ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};

                            draw->AddRect(vStart, vEnd, ToColor(Config.ColorsESP.Box), 0.5f);
                        }
                        if (Config.ESPMenu.Health) {
                            int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                            int MaxHP = (int) Player->HealthMax;

                            long HPColor = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                            if (Player->Health == 0.0f && !Player->bDead) {
                                HPColor = IM_COL32(255, 0, 0, 155);

                                CurHP = Player->NearDeathBreath;
                                if (Player->NearDeatchComponent) {
                                    MaxHP = Player->NearDeatchComponent->BreathMax;
                                }
                            }

                            float boxWidth = density / 6.0f;
                            boxWidth -= std::min(((boxWidth / 2) / 500.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.15f;


                            ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 1.5f)};

                            ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP), vStart.y + boxHeight};
                            ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                            draw->AddRectFilled(vStart, vEndFilled, HPColor);
                            draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                        }
                        if (Config.ESPMenu.TeamID || Config.ESPMenu.Name || Config.ESPMenu.Distance) {
                            float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                            float boxWidth = boxHeight * 0.65f;
                            std::string s;

                            if (Config.ESPMenu.TeamID) {
                                s += "[";
                                s += std::to_string(Player->TeamID);
                                s += "]";
                            }

                            if (Config.ESPMenu.Name) {
                                if (!s.empty()) {
                                    s += " ";
                                }
                                if (Player->PlayerName.IsValid()) {
                                    s += Player->PlayerName.ToString();
                                }
                            }

                            if (Config.ESPMenu.Distance) {
                                if (!s.empty()) {
                                    s += " - ";
                                }
                                s += std::to_string((int) Distance);
                                s += "m";
                            }

                            auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
                            draw->AddText(NULL, ((float) density / 30.0f), {RootPosSC.x - (boxWidth / 2) - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 0, 0, 255), s.c_str());
                        }
                    }
                }

                if (Config.ESPMenu.Vehicle) {
                    if (i->IsA(ASTExtraVehicleBase::StaticClass())) {
                        auto Vehicle = (ASTExtraVehicleBase *) i;

                        if (!Vehicle->Mesh)
                            continue;

                        float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;

                        FVector2D vehiclePos;
                        if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
                            std::string s = GetVehicleName(Vehicle);
                            s += " [";
                            s += std::to_string((int) Distance);
                            s += "m]";

                            draw->AddText(NULL, ((float) density / 30.0f), {vehiclePos.X, vehiclePos.Y}, IM_COL32(255, 0, 0, 255), s.c_str());
                        }
                    }
                }

                if (i->IsA(APickUpWrapperActor::StaticClass())) {
                    auto PickUp = (APickUpWrapperActor *) i;
                    if (Items[PickUp->DefineID.TypeSpecificID]) {
                        auto RootComponent = PickUp->RootComponent;
                        if (!RootComponent)
                            continue;

                        float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;

                        FVector2D itemPos;
                        if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                            std::string s;
                            uint32_t tc = 0xFF000000;

                            for (auto &category : items_data) {
                                for (auto &item : category["Items"]) {
                                    if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
                                        s = item["itemName"].get<std::string>();
                                        tc = strtoul(item["itemTextColor"].get<std::string>().c_str(), 0, 16);
                                        break;
                                    }
                                }
                            }

                            s += " - ";
                            s += std::to_string((int) Distance);
                            s += "m";

                            draw->AddText(NULL, ((float) density / 25.0f), {itemPos.X, itemPos.Y}, tc, s.c_str());
                        }
                    }
                }
            }
        }
    }

    g_LocalController = localController;
    g_LocalPlayer = localPlayer;

    if (totalEnemies > 0 || totalBots > 0) {
        std::string s;
        if (totalEnemies > 0) {
            s = "Enem";
            if (totalEnemies > 1)
                s += "ies";
            else s += "y";
            s += " Around: ";
            s += std::to_string(totalEnemies);
            if (totalBots > 0)
                s += " | ";
        }
        if (totalBots) {
            s += "Bot";
            if (totalBots > 1)
                s += "s";
            s += " Around: ";
            s += std::to_string(totalBots);
        }

        auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 125.5f));
        draw->AddText(NULL, ((float) density / 12.5f), {((float) glWidth / 2) - (textSize.x / 2), 100}, IM_COL32(255, 155, 255, 255), s.c_str());
    }
}

// ======================================================================== //
std::string getClipboardText() {
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
        auto ContextClass = env->FindClass("android/content/Context");
        auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

        auto str = env->NewStringUTF("clipboard");
        auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
        env->DeleteLocalRef(str);

        auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
        auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

        auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
        auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

        auto text = env->CallObjectMethod(clipboardManager, getText);
        if (text) {
            str = (jstring) env->CallObjectMethod(text, toStringMethod);
            result = env->GetStringUTFChars(str, 0);
            env->DeleteLocalRef(str);
            env->DeleteLocalRef(text);
        }

        env->DeleteLocalRef(CharSequenceClass);
        env->DeleteLocalRef(ClipboardManagerClass);
        env->DeleteLocalRef(clipboardManager);
        env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();

    return result;
}

// ======================================================================== //
const char *GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

std::string RSA_Encrypt(const std::string &clear_text, const std::string &pub_key) {
    std::string result;
    BIO *key = BIO_new_mem_buf((unsigned char *) pub_key.c_str(), -1);
    RSA *rsa = RSA_new();
    rsa = PEM_read_bio_RSA_PUBKEY(key, &rsa, NULL, NULL);
    if (!rsa) {
        return "";
    }

    int key_len = RSA_size(rsa);
    int block_len = key_len - 11;

    char *sub_text = new char[key_len + 1];
    memset(sub_text, 0, key_len + 1);
    int ret = 0;
    int pos = 0;
    std::string sub_str;

    while (pos < clear_text.length()) {
        sub_str = clear_text.substr(pos, block_len);
        memset(sub_text, 0, key_len + 1);
        ret = RSA_public_encrypt(sub_str.length(), (const unsigned char *) sub_str.c_str(), (unsigned char *) sub_text, rsa, RSA_PKCS1_PADDING);
        if (ret >= 0) {
            result.append(std::string(sub_text, ret));
        }
        pos += block_len;
    }

    BIO_free_all(key);
    RSA_free(rsa);
    delete[] sub_text;

    return result;
}

std::string RSA_Decrypt(const std::string &cipher_text, const std::string &pub_key) {
    std::string result;
    BIO *key = BIO_new_mem_buf((unsigned char *) pub_key.c_str(), -1);
    RSA *rsa = RSA_new();

    rsa = PEM_read_bio_RSA_PUBKEY(key, &rsa, NULL, NULL);
    if (!rsa) {
        return "";
    }

    int len = RSA_size(rsa);
    char *buf = new char[len + 1];
    memset(buf, 0, len + 1);

    int ret = RSA_public_decrypt(cipher_text.length(), (const unsigned char *) cipher_text.c_str(), (unsigned char *) buf, rsa, RSA_PKCS1_PADDING);
    if (ret >= 0) {
        result.append(std::string(buf, ret));
    }

    free(buf);
    BIO_free_all(key);
    RSA_free(rsa);

    return result;
}

uint8_t PUBLIC_KEY[450] = {0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0xE2, 0xE5, 0xE7, 0xE9, 0xEE, 0x80, 0xF0, 0xF5, 0xE2, 0xEC, 0xE9, 0xE3, 0x80, 0xEB, 0xE5, 0xF9, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0xAA, 0xED, 0xE9, 0xE9, 0xE2, 0xE9, 0xCA, 0xE1, 0xEE, 0xE2, 0xC7, 0xCB, 0xD1, 0xC8, 0xCB, 0xC9, 0xE7, 0x99, 0xD7, 0x90, 0xE2, 0xE1, 0xF1, 0xE5, 0xE6, 0xE1, 0xE1, 0xEF, 0xE3, 0xE1, 0xF1, 0x98, 0xE1, 0xED, 0xE9, 0xE9, 0xE2, 0xE3, 0xC7, 0xEB, 0xE3, 0xE1, 0xF1, 0xE5, 0xE1, 0x91, 0xD4, 0xCF, 0xEA, 0x96, 0xED, 0x95, 0xCB, 0xF4, 0xEA, 0xCD, 0xCA, 0xE2, 0xC9, 0xE6, 0xD0, 0xFA, 0xCE, 0xC8, 0xC3, 0xAA, 0x96, 0x90, 0xCB, 0x8B, 0xD8, 0xE7, 0xF7, 0xD6, 0xC6, 0xE1, 0xC4, 0xD1, 0xD7, 0xD6, 0xE5, 0xEA, 0xE7, 0xE2, 0xED, 0x95, 0x93, 0xDA, 0xEA, 0x94, 0xCF, 0x99, 0xF9, 0xDA, 0x91, 0xF0, 0xC3, 0x90, 0x94, 0xE6, 0xEA, 0x98, 0xF4, 0xF6, 0xFA, 0xE1, 0xE8, 0xC1, 0x95, 0x8F, 0xCB, 0x96, 0xEA, 0xC8, 0xC7, 0xD0, 0x8F, 0xC7, 0xF3, 0xC6, 0xC7, 0xE1, 0xF6, 0x8F, 0xF0, 0xEB, 0xC1, 0xC5, 0xD8, 0xCA, 0xAA, 0x96, 0x90, 0x94, 0x98, 0xD3,
                           0xEA, 0xCE, 0xC9, 0x8B, 0xF9, 0x97, 0xF8, 0xE2, 0xD2, 0xC8, 0xEE, 0xF9, 0x93, 0xE5, 0xD2, 0xC7, 0xF2, 0xEA, 0x96, 0xED, 0xCF, 0xC5, 0xED, 0xCB, 0xDA, 0xF0, 0xE9, 0xEF, 0xD4, 0xEA, 0xE7, 0xCB, 0x90, 0xC7, 0xD8, 0xEF, 0xF7, 0x95, 0x93, 0xC6, 0xCF, 0x8F, 0xD3, 0xC8, 0xEB, 0xC8, 0xCD, 0xF5, 0xC2, 0x96, 0xC7, 0xC7, 0x90, 0xD0, 0xCE, 0xD6, 0xD0, 0x92, 0xE8, 0xAA, 0x98, 0xE3, 0xE9, 0x97, 0xD2, 0x99, 0xFA, 0xEC, 0xEB, 0x96, 0xC7, 0xF3, 0xF9, 0xC4, 0xF6, 0xD0, 0xD5, 0x98, 0xD4, 0xF9, 0xCA, 0xFA, 0xEC, 0xEE, 0xD1, 0xE6, 0x95, 0xF3, 0xF2, 0xCB, 0xCE, 0xE1, 0xE7, 0xED, 0x92, 0x93, 0xC8, 0xC9, 0x8F, 0xF8, 0x8B, 0xCD, 0xF4, 0x92, 0xF8, 0x93, 0xEC, 0xEF, 0x93, 0xF0, 0x91, 0xC8, 0xCB, 0xC1, 0x8F, 0xC7, 0xF5, 0xCD, 0xF5, 0xEB, 0xC5, 0x95, 0xCF, 0xFA, 0xAA, 0x90, 0x8B, 0xEB, 0xC6, 0xF1, 0x90, 0xF4, 0xCA, 0x96, 0x91, 0xF7, 0xCE, 0xE6, 0x93, 0xE7, 0x92, 0xC1, 0x95, 0xF7, 0xF9, 0xE2, 0xD9, 0x96, 0x8F, 0xCA, 0xE7, 0xE5, 0xDA, 0xC8, 0xF1, 0xC5, 0xEC, 0xC7, 0x95, 0x92, 0x91, 0x90,
                           0xF4, 0x99, 0xD9, 0x91, 0xD3, 0xD8, 0xF6, 0xEC, 0xE5, 0xF6, 0xF6, 0xF6, 0x95, 0xD8, 0xC8, 0xCA, 0xF1, 0xE8, 0xE7, 0xE1, 0xD2, 0x95, 0xD7, 0xC6, 0x97, 0xF1, 0xE9, 0xAA, 0xCD, 0x96, 0xF5, 0xC7, 0xCE, 0xF7, 0xEC, 0xD9, 0xCD, 0x8B, 0xDA, 0xC6, 0x99, 0xE9, 0xCA, 0xC6, 0xC9, 0xCE, 0xE2, 0xC7, 0xF2, 0x99, 0xF0, 0xF4, 0x99, 0xC3, 0xE8, 0xFA, 0xF4, 0x93, 0xD0, 0xC4, 0x8B, 0x97, 0xC9, 0xE1, 0x91, 0xE4, 0xF7, 0x93, 0x92, 0xE3, 0x98, 0xC4, 0xD7, 0xF5, 0xEA, 0xD6, 0xE2, 0xF4, 0xF0, 0xCE, 0xD8, 0xDA, 0xEE, 0xC9, 0xEA, 0x96, 0xCF, 0x96, 0xE2, 0x90, 0xF3, 0xCC, 0xAA, 0xD5, 0xD7, 0xE9, 0xE4, 0xE1, 0xF1, 0xE1, 0xE2, 0xAA, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0xE5, 0xEE, 0xE4, 0x80, 0xF0, 0xF5, 0xE2, 0xEC, 0xE9, 0xE3, 0x80, 0xEB, 0xE5, 0xF9, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D};

struct MemoryStruct {
    char *memory;
    size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *) userp;

    mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
    if (mem->memory == NULL) {
        return 0;
    }

    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    for (auto &pk : PUBLIC_KEY) {
        pk ^= 0xA0;
    }

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);
    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    vm->DetachCurrentThread();

    std::string token = Tools::RandomString(32);
    token += std::to_string(time(0));
    std::string token_hash = Tools::CalcMD5(token);

    json json_data;
    json_data[/*ukey*/ StrEnc("FoR&", "\x33\x04\x37\x5F", 4).c_str()] = user_key;
    json_data[/*hwid*/ StrEnc("&t!Z", "\x4E\x03\x48\x3E", 4).c_str()] = UUID;
    json_data[/*token*/ StrEnc("-R|+F", "\x59\x3D\x17\x4E\x28", 5).c_str()] = token_hash;
    json_data[/*game_id*/ StrEnc("KxBF7A ", "\x2C\x19\x2F\x23\x68\x28\x44", 7).c_str()] = /*pubgm*/ StrEnc("l;5a]", "\x1C\x4E\x57\x06\x30", 5).c_str();

    std::string post_data_encrypted = RSA_Encrypt(json_data.dump(), std::string(PUBLIC_KEY, PUBLIC_KEY + sizeof PUBLIC_KEY));
    std::string post_data = base64_encode(post_data_encrypted);

    std::string hSignature = /*Client-Signature: */ StrEnc("y|vZY'mg:/~^?D;91y", "\x3A\x10\x1F\x3F\x37\x53\x40\x34\x53\x48\x10\x3F\x4B\x31\x49\x5C\x0B\x59", 18).c_str();
    std::string s = Tools::CalcSHA256(post_data_encrypted);
    reverse(s.begin(), s.end());
    hSignature += s;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

    std::string errMsg;
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: text/plain*/ StrEnc("Za*lT!JV!d:hO#R`bXGI$41w", "\x19\x0E\x44\x18\x31\x4F\x3E\x7B\x75\x1D\x4A\x0D\x75\x03\x26\x05\x1A\x2C\x68\x39\x48\x55\x58\x19", 24).c_str());
        headers = curl_slist_append(headers, hSignature.c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, post_data.length());

        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc("um-5", "\x25\x22\x7E\x61", 4).c_str());
        curl_easy_setopt(curl, CURLOPT_URL, /*https://pandamodzvip.com/api/v1/license*/ StrEnc("_nzs#_1X-=[K9Jv1oX> [HtK\"E5-)@%B<n-I#w^", "\x37\x1A\x0E\x03\x50\x65\x1E\x77\x5D\x5C\x35\x2F\x58\x27\x19\x55\x15\x2E\x57\x50\x75\x2B\x1B\x26\x0D\x24\x45\x44\x06\x36\x14\x6D\x50\x07\x4E\x2C\x4D\x04\x3B", 39).c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(RSA_Decrypt(base64_decode(std::string(chunk.memory, chunk.size)), std::string(PUBLIC_KEY, PUBLIC_KEY + sizeof PUBLIC_KEY)));
                if (result[/*success*/ StrEnc("9ion&_>", "\x4A\x1C\x0C\x0D\x43\x2C\x4D", 7).c_str()] == true) {
                    std::string auth = user_key;
                    auth += UUID;
                    auth += token_hash;
                    auth += /*pubgm*/ StrEnc("k@]8D", "\x1B\x35\x3F\x5F\x29", 5).c_str();
                    g_Auth = Tools::CalcSHA256(auth);

                    g_Token = result[/*data*/ StrEnc("l)_2", "\x08\x48\x2B\x53", 4).c_str()].get<std::string>();

                    bValid = g_Auth == g_Token;
                } else {
                    errMsg = result[/*message*/ StrEnc("[?W\"K`y", "\x36\x5A\x24\x51\x2A\x07\x1C", 7).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = chunk.memory;
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }

    if (chunk.memory)
        free(chunk.memory);

    curl_easy_cleanup(curl);
    curl_global_cleanup();

    memset(PUBLIC_KEY, 0, sizeof PUBLIC_KEY);

    return bValid ? "OK" : errMsg;
}

// ======================================================================== //
int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);
int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    if (initImGui) {
        ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
    }
    return orig_onInputEvent(app, inputEvent);
}


EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (glWidth <= 0 || glHeight <= 0)
        return orig_eglSwapBuffers(dpy, surface);

    if (!g_App)
        return orig_eglSwapBuffers(dpy, surface);

    if (g_App->onInputEvent != onInputEvent) {
        orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
        g_App->onInputEvent = onInputEvent;
    }

    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);

    if (!initImGui) {
        ImGui::CreateContext();

        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowRounding = 5.3f;
        style.FrameRounding = 2.3f;
        style.ScrollbarRounding = 0;

        style.Colors[ImGuiCol_Text]                  = ImVec4(0.90f, 0.90f, 0.90f, 0.90f);
        style.Colors[ImGuiCol_TextDisabled]          = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
        style.Colors[ImGuiCol_WindowBg]              = ImVec4(0.09f, 0.09f, 0.15f, 1.00f);
        style.Colors[ImGuiCol_ChildBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_PopupBg]               = ImVec4(0.05f, 0.05f, 0.10f, 0.85f);
        style.Colors[ImGuiCol_Border]                = ImVec4(0.70f, 0.70f, 0.70f, 0.65f);
        style.Colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_FrameBg]               = ImVec4(0.00f, 0.00f, 0.01f, 1.00f);
        style.Colors[ImGuiCol_FrameBgHovered]        = ImVec4(0.90f, 0.80f, 0.80f, 0.40f);
        style.Colors[ImGuiCol_FrameBgActive]         = ImVec4(0.90f, 0.65f, 0.65f, 0.45f);
        style.Colors[ImGuiCol_TitleBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.83f);
        style.Colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.40f, 0.40f, 0.80f, 0.20f);
        style.Colors[ImGuiCol_TitleBgActive]         = ImVec4(0.00f, 0.00f, 0.00f, 0.87f);
        style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(0.01f, 0.01f, 0.02f, 0.80f);
        style.Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.20f, 0.25f, 0.30f, 0.60f);
        style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.55f, 0.53f, 0.55f, 0.51f);
        style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.56f, 0.56f, 0.56f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.56f, 0.56f, 0.56f, 0.91f);
        style.Colors[ImGuiCol_CheckMark]             = ImVec4(0.90f, 0.90f, 0.90f, 0.83f);
        style.Colors[ImGuiCol_SliderGrab]            = ImVec4(0.70f, 0.70f, 0.70f, 0.62f);
        style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.30f, 0.30f, 0.30f, 0.84f);
        style.Colors[ImGuiCol_Button]                = ImVec4(0.48f, 0.72f, 0.89f, 0.49f);
        style.Colors[ImGuiCol_ButtonHovered]         = ImVec4(0.50f, 0.69f, 0.99f, 0.68f);
        style.Colors[ImGuiCol_ButtonActive]          = ImVec4(0.80f, 0.50f, 0.50f, 1.00f);
        style.Colors[ImGuiCol_Header]                = ImVec4(0.30f, 0.69f, 1.00f, 0.53f);
        style.Colors[ImGuiCol_HeaderHovered]         = ImVec4(0.44f, 0.61f, 0.86f, 1.00f);
        style.Colors[ImGuiCol_HeaderActive]          = ImVec4(0.38f, 0.62f, 0.83f, 1.00f);
        style.Colors[ImGuiCol_ResizeGrip]            = ImVec4(1.00f, 1.00f, 1.00f, 0.85f);
        style.Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(1.00f, 1.00f, 1.00f, 0.60f);
        style.Colors[ImGuiCol_ResizeGripActive]      = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
        style.Colors[ImGuiCol_PlotLines]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
        style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.00f, 0.00f, 1.00f, 0.35f);

        style.ScaleAllSizes(std::max(1.0f, density / 150.0f));
        style.ScrollbarSize /= 2;

        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");

        ImGuiIO &io = ImGui::GetIO();

        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;

        ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 20.0f);
        io.Fonts->AddFontDefault(&cfg);

        memset(&Config, 0, sizeof(sConfig));

        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 255, 255);

        initImGui = true;
    }

    ImGuiIO &io = ImGui::GetIO();

    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
    ImGui::NewFrame();

    DrawESP(ImGui::GetBackgroundDrawList());

    ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.40f, (float) glHeight * 0.65f), ImGuiCond_Once); // 45% width 70% height
    if (ImGui::Begin("ANON MODS", 0, ImGuiWindowFlags_NoSavedSettings)) {
        static bool isLogin = true;

        if (!isLogin) {
            ImGui::Text("Please Login! (Copy Key to Clipboard)");

            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::InputText("##key", s, sizeof s);
            ImGui::PopItemWidth();

            if (ImGui::Button("^^ Put Key ^^", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
            }

            static std::string err;
            if (ImGui::Button("Login", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                }
            }

            if (!err.empty() && err != "OK") {
                ImGui::Text("Error: %s", err.c_str());
            }

        } else {
            if (ImGui::BeginTabBar("Tab", ImGuiTabBarFlags_FittingPolicyScroll)) {
                if (ImGui::BeginTabItem("ESP Menu")) {
                    ImGui::Spacing();

                    ImGui::Checkbox("ESP Line", &Config.ESPMenu.Line);
                    ImGui::SameLine(ImGui::GetWindowContentRegionMax().x - 40);
                    ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f), ImGuiCond_Once);
                    ImGui::ColorEdit3("##LineCol", Config.ColorsESP.Line, ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);

                    ImGui::Checkbox("ESP Box", &Config.ESPMenu.Box);
                    ImGui::SameLine(ImGui::GetWindowContentRegionMax().x - 40);
                    ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f), ImGuiCond_Once);
                    ImGui::ColorEdit3("##BoxCol", Config.ColorsESP.Box, ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);

                    ImGui::Checkbox("ESP Health", &Config.ESPMenu.Health);

                    ImGui::Checkbox("ESP Name", &Config.ESPMenu.Name);
                    ImGui::Checkbox("ESP Distance", &Config.ESPMenu.Distance);
                    ImGui::Checkbox("ESP Team ID", &Config.ESPMenu.TeamID);
                    ImGui::Checkbox("ESP Vehicle", &Config.ESPMenu.Vehicle);

                    ImGui::EndTabItem();
                }
                if (ImGui::BeginTabItem("ESP Items")) {
                    ImGui::Spacing();

                    for (auto &i : items_data) {
                        if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
                            for (auto &item : i["Items"]) {
                                ImGui::Checkbox(item["itemName"].get<std::string>().c_str(), (bool *) &Items[item["itemId"].get<int>()]);
                            }
                            ImGui::TreePop();
                        }
                    }

                    ImGui::EndTabItem();
                }

                if (ImGui::BeginTabItem("BULLET TRACK 2.0")) {
                    ImGui::Spacing();

                    ImGui::Checkbox("Enable", &Config.SilentAim.Enable);

                    ImGui::Text("Target: ");
                    ImGui::SameLine();
                    static const char *targets[] = {"Head", "Chest"};
                    ImGui::Combo("##Target", (int *) &Config.SilentAim.Target, targets, 2, -1);

                    ImGui::Text("Trigger: ");
                    ImGui::SameLine();
                    static const char *triggers[] = {"None", "Shooting", "Scoping", "Both (Shooting & Scoping)", "Any (Shooting / Scoping)"};
                    ImGui::Combo("##Trigger", (int *) &Config.SilentAim.Trigger, triggers, 5, -1);

                    ImGui::Checkbox("Ignore Knocked", &Config.SilentAim.IgnoreKnocked);
                    ImGui::Checkbox("Visibility Check", &Config.SilentAim.VisCheck);


                    ImGui::EndTabItem();
                }

                if (ImGui::BeginTabItem("Memory Hack")) {
                    ImGui::Spacing();

                   // ImGui::Checkbox("No Recoil", &Config.SilentAim.Enable);
                   // ImGui::Checkbox("No Shake", &Config.SilentAim.Enable);
                   // ImGui::Checkbox("Instant Hit", &Config.SilentAim.Enable);

                    ImGui::EndTabItem();
                }
                ImGui::EndTabBar();
            }
        }
    }

    ImGui::End();
    ImGui::Render();

    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    return orig_eglSwapBuffers(dpy, surface);
}

#define SLEEP_TIME 1000LL / 60LL

[[noreturn]] void *maps_thread(void *) {
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        std::vector<sRegion> tmp;
        char line[512];
        FILE *f = fopen("/proc/self/maps", "r");
        if (f) {
            while (fgets(line, sizeof line, f)) {
                uintptr_t start, end;
                char tmpProt[16];
                if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
                    if (tmpProt[0] != 'r') {
                        tmp.push_back({start, end});
                    }
                }
            }
            fclose(f);
        }
        trapRegions = tmp;

        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
}

void *main_thread(void *) {
    UE4 = Tools::GetBaseAddress("libUE4.so");
    while (!UE4) {
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }

    kAPI = new KuroAPI();
    InitAPI(&kAPI);

    if (!kAPI->Initialize("nx1i1SLtBiUOsU4s4CcVFcF5Uk6qSTB0", &FName::GNames, &UObject::GUObjectArray)) {
        return 0;
    }

    // startHook();

    #define GNativeAndroidApp 0xA211AD8

    while (!g_App) {
        g_App = *(android_app **) (UE4 + GNativeAndroidApp);
        sleep(1);
    }

    void *egl = dlopen_ex("libEGL.so", 4);
    while (!egl) {
        egl = dlopen_ex("libEGL.so", 4);
        sleep(1);
    }

    void *addr = dlsym_ex(egl, "eglSwapBuffers");
    HOOK(addr, _eglSwapBuffers, &orig_eglSwapBuffers);
    dlclose_ex(egl);

    pthread_t t;
    pthread_create(&t, 0, maps_thread, 0);

    items_data = json::parse(JSON_ITEMS);

    return 0;
}

__attribute__((constructor)) void _init() {
    pthread_t t;
    pthread_create(&t, 0, main_thread, 0);
}