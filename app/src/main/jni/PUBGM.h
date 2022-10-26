#include "StrEnc.h"
#include "Includes.h"

#include "SDK.hpp"
#include "fake_dlfcn.h"

#include <curl/curl.h>

#include "Tools.h"
#include "json.hpp"
#include "base64/base64.h"

#include "Log.h"
#include "Spoof.h"

#include "Engine/Canvas.h"

using json = nlohmann::ordered_json;
using namespace SDK;

#include "UE4.h"
#include "zip.h"

extern void StartRuntimeHook(const char *);

// ================================================================================================================================ //
uintptr_t g_UE4 = 0;
uintptr_t GWorld_Offset, GUObjectArray_Offset, GNames_Offset, CanvasMap_Offset, AimBullet_Offset;

#define SLEEP_TIME 1000LL / 120LL

int g_screenWidth = 0, g_screenHeight = 0;
std::map<std::string, u_long> Config;

bool bScanPatternCompleted = false;

std::map<int, bool> itemConfig;
json itemData;

bool bValid = false;
std::string g_Auth, g_Token;

ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
TArray<AActor *> g_Actors = TArray<AActor *>();

// ================================================================================================================================ //
struct MemTrap_t {
    uintptr_t baseAddr;
    uintptr_t endAddr;
};
std::vector<MemTrap_t> MemTraps;

bool isObjectInvalid(UObject *pObject) {
    if (pObject == 0)
        return true;

    for (auto &i : MemTraps) {
        if ((uintptr_t) pObject >= i.baseAddr && (uintptr_t) pObject <= i.endAddr) {
            return true;
        }
    }
    return false;
}

std::string getObjectPath(UObject *Object) {
    if (isObjectInvalid(Object))
        return "";

    std::string s;
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super) && !isObjectInvalid(super); super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->GetName();
    }
    return s;
}

bool isObjectPlayer(UObject *Object) {
    if (isObjectInvalid(Object)) {
        return false;
    }
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super) && !isObjectInvalid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraPlayerCharacter::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectController(UObject *Object) {
    if (isObjectInvalid(Object)) {
        return false;
    }
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super) && !isObjectInvalid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraPlayerController::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectGrenade(UObject *Object) {
    if (isObjectInvalid(Object)) {
        return false;
    }
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super) && !isObjectInvalid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraGrenadeBase::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectVehicle(UObject *Object) {
    if (isObjectInvalid(Object)) {
        return false;
    }
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super) && !isObjectInvalid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraVehicleBase::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectLoot(UObject *Object) {
    if (isObjectInvalid(Object)) {
        return false;
    }
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super) && !isObjectInvalid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectLootBox(UObject *Object) {
    if (isObjectInvalid(Object)) {
        return false;
    }
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super) && !isObjectInvalid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpListWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

#define OFFSET_ULevel_Actors 0x70
#define OFFSET_UCanvas_ViewProjectionMatrix 0x200
#define OFFSET_USceneComponent_ComponentToWorld 0x150

FVector WorldToScreen(FVector pos) {
    FVector resultPos = {0, 0, 0};
    if (CanvasMap_Offset) {
        auto canvasMap = *(uintptr_t *) (CanvasMap_Offset);
        if (Tools::IsPtrValid((void *) canvasMap)) {
            auto Canvas = *(uintptr_t *) (canvasMap + (0x8 * 3) + 0x8);
            if (Tools::IsPtrValid((void *) Canvas)) {
                Matrix viewMatrix = *(Matrix *) (Canvas + OFFSET_UCanvas_ViewProjectionMatrix);

                float screenW = (viewMatrix.M[0][3] * pos.X) + (viewMatrix.M[1][3] * pos.Y) + (viewMatrix.M[2][3] * pos.Z + viewMatrix.M[3][3]);
                resultPos.Z = screenW;

                float screenY = (viewMatrix.M[0][1] * pos.X) + (viewMatrix.M[1][1] * pos.Y) + (viewMatrix.M[2][1] * pos.Z + viewMatrix.M[3][1]);
                float screenX = (viewMatrix.M[0][0] * pos.X) + (viewMatrix.M[1][0] * pos.Y) + (viewMatrix.M[2][0] * pos.Z + viewMatrix.M[3][0]);

                resultPos.Y = (g_screenHeight / 2) - (g_screenHeight / 2) * screenY / screenW;
                resultPos.X = (g_screenWidth / 2) + (g_screenWidth / 2) * screenX / screenW;
            }
        }
    }
    return resultPos;
}

// ================================================================================================================================ //
ASTExtraPlayerCharacter *GetTargetByDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    TArray<AActor *> Actors = g_Actors;

    FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
    if (localPlayer) {
        LocalPos = localPlayer->GetBonePos("Root");
        ViewPos = localPlayer->GetBonePos("Head");
        ViewPos.Z += 15.f;
    }

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        if (localPlayer && localController)  {
            for (int i = 0; i < Actors.Num(); i++) {
                if (!isObjectInvalid(Actors[i]) && isObjectPlayer(Actors[i])) {
                    auto Actor = (ASTExtraPlayerCharacter *) Actors[i];
                    if (Actor->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Actor->TeamID == localPlayer->TeamID)
                        continue;

                    if (Actor->bDead)
                        continue;

                    if (Config["AIM::VISCHECK"]) {
                        if (!localController->LineOfSightTo(Actor, {0, 0, 0}, true))
                            continue;
                    }

                    if (Config["AIM::KNOCKED"]) {
                        if (Actor->Health == 0.0f)
                            continue;
                    }
                    float dist = FVector::Distance(LocalPos, Actor->GetBonePos("Root"));
                    if (dist < max) {
                        max = dist;
                        result = Actor;
                    }
                }
            }
        }
    }

    return result;
}

bool isInsideFOV(int x, int y) {
    if (!Config["AIM::SIZE"])
        return true;

    int circle_x = g_screenWidth / 2;
    int circle_y = g_screenHeight / 2;
    int rad = Config["AIM::SIZE"];
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

ASTExtraPlayerCharacter *GetTargetByCrosshairDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        auto localPlayer = g_LocalPlayer;

        TArray<AActor *> Actors = g_Actors;

        FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
        if (localPlayer) {
            LocalPos = localPlayer->GetBonePos("Root");
            ViewPos = localPlayer->GetBonePos("Head");
            ViewPos.Z += 15.f;
        }

        if (localPlayer) {
            for (int i = 0; i < Actors.Num(); i++) {
                if (isObjectPlayer(Actors[i])) {
                    auto Actor = (ASTExtraPlayerCharacter *) Actors[i];
                    if (Actor->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Actor->TeamID == localPlayer->TeamID)
                        continue;

                    if (Actor->bDead)
                        continue;

                    if (Config["AIM::VISCHECK"]) {
                        FHitResult out;
                        if (UKismetSystemLibrary::LineTraceSingle(GWorld, ViewPos, Actor->GetBonePos("Head"), ETraceTypeQuery::TraceTypeQuery1, true, Actors, EDrawDebugTrace::EDrawDebugTrace__None, 0.0f, true, {}, {}, &out)) {
                            continue;
                        }
                    }

                    if (Config["AIM::KNOCKED"]) {
                        if (Actor->Health == 0.0f)
                            continue;
                    }

                    auto Root = Actor->GetBonePos("Root");
                    auto Head = Actor->GetBonePos("Head");

                    FVector RootSc = WorldToScreen(Root);
                    FVector HeadSc = WorldToScreen(Head);
                    if (RootSc.Z > 0 && HeadSc.Z > 0) {
                        float height = abs(HeadSc.Y - RootSc.Y);
                        float width = height * 0.65f;

                        FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                        if ((middlePoint.X >= 0 && middlePoint.X <= g_screenWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= g_screenHeight)) {
                            FVector2D v2Middle = FVector2D((float) (g_screenWidth / 2), (float) (g_screenHeight / 2));
                            FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                            if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Actor;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}

// ================================================================================================================================ //
void native_onCanvasDraw(JNIEnv *env, jobject obj, jobject canvas, int screenWidth, int screenHeight, float screenDensity) {
    static Canvas *m_Canvas = 0;
    if (!m_Canvas) {
        LOGI("Canvas Object: %p | Width: %d | Height: %d | Density: %f", canvas, screenWidth, screenHeight, screenDensity);
        m_Canvas = new Canvas(env, screenWidth, screenHeight, screenDensity);
    }

    m_Canvas->UpdateCanvas(canvas);

    if (!bScanPatternCompleted)
        return;

    if (g_Auth.empty())
        return;

    if (g_Token.empty())
        return;

    if (g_Auth != g_Token)
        return;

    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;
    TArray<AActor *> Actors = TArray<AActor *>();

    g_screenWidth = screenWidth;
    g_screenHeight = screenHeight;

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel + OFFSET_ULevel_Actors);

            for (int i = 0; i < Actors.Num(); i++) {
                if (isObjectController(Actors[i])) {
                    localController = (ASTExtraPlayerController *) Actors[i];
                    break;
                }
            }

            if (localController) {

                localController->AntiCheatManagerComp = 0;

                for (int i = 0; i < Actors.Num(); i++) {
                    if (!isObjectInvalid(Actors[i]) && isObjectPlayer(Actors[i])) {
                        auto Player = (ASTExtraPlayerCharacter *) Actors[i];
                        if (Player->PlayerKey == localController->PlayerKey) {
                            localPlayer = Player;
                            break;
                        }
                    }
                }

                if (Config["AIM::TARGET"] == 1) {
                    m_Canvas->drawCircle(screenWidth / 2, screenHeight / 2, Config["AIM::SIZE"], 1.0f, false, ARGB(255, 0, 255, 0));
                }

                int totalEnemies = 0, totalBots = 0;

                FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
                if (localPlayer) {
                    LocalPos = localPlayer->GetBonePos("Root");
                    ViewPos = localPlayer->GetBonePos("Head");
                    ViewPos.Z += 15.f;
                }

                auto PlayerCameraManager = localController->PlayerCameraManager;
                if (PlayerCameraManager) {
                    ViewPos = PlayerCameraManager->CameraCache.POV.Location;
                }

                for (int i = 0; i < Actors.Num(); i++) {
                    if (!isObjectInvalid(Actors[i]) && isObjectPlayer(Actors[i])) {
                        auto Player = (ASTExtraPlayerCharacter *) Actors[i];

                        if (localPlayer) {
                            if (Player->PlayerKey == localPlayer->PlayerKey)
                                continue;

                            if (Player->TeamID == localPlayer->TeamID)
                                continue;
                        }

                        if (Player->bDead)
                            continue;

                        if (Player->bIsAI)
                            totalBots++;
                        else totalEnemies++;

                        FVector HeadPos = Player->GetBonePos("Head");
                        HeadPos.Z += 12.5f;

                        FVector RootPos = Player->GetBonePos("Root");

                        float Distance = FVector::Distance(LocalPos, RootPos) / 100.f;
                        if (Distance > 500.0f)
                            continue;

                        FVector HeadSc = WorldToScreen(HeadPos);
                        FVector RootSc = WorldToScreen(RootPos);

                        if (HeadSc.Z > 0 && RootSc.Z > 0) {
                            // ESP LINE
                            if (Config["ESP::LINE"]) {
                                m_Canvas->drawLine(screenWidth / 2, 0, HeadSc.X, HeadSc.Y, 1.0f, GetRandomColorByIndex(Player->TeamID));
                            }

                            if (Config["ESP::SKELETON"]) {
                                // ESP SKELETON
                                static std::vector<std::string> right_arm{"neck_01", "clavicle_r", "upperarm_r", "lowerarm_r", "hand_r", "item_r"};
                                static std::vector<std::string> left_arm{"neck_01", "clavicle_l", "upperarm_l", "lowerarm_l", "hand_l", "item_l"};
                                static std::vector<std::string> spine{"Head", "neck_01", "spine_03", "spine_02", "spine_01", "pelvis"};
                                static std::vector<std::string> lower_right{"pelvis", "thigh_r", "calf_r", "foot_r"};
                                static std::vector<std::string> lower_left{"pelvis", "thigh_l", "calf_l", "foot_l"};
                                static std::vector<std::vector<std::string>> skeleton{right_arm, left_arm, spine, lower_right, lower_left};

                                for (auto &boneStructure : skeleton) {
                                    std::string lastBone;
                                    for (std::string &currentBone : boneStructure) {
                                        if (!lastBone.empty()) {
                                            FVector boneFrom = WorldToScreen(Player->GetBonePos(lastBone.c_str()));
                                            FVector boneTo = WorldToScreen(Player->GetBonePos(currentBone.c_str()));

                                            if (boneFrom.Z > 0 && boneTo.Z > 0) {
                                                m_Canvas->drawLine(boneFrom.X, boneFrom.Y, boneTo.X, boneTo.Y, 1.0f, PURPLE);
                                            }
                                        }
                                        lastBone = currentBone;
                                    }
                                }
                            }

                            // ESP BOX
                            if (Config["ESP::BOX"]) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.65f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.0f, LIME);
                            }

                            // ESP HEALTH
                            if (Config["ESP::HEALTH"]) {
                                int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                                int MaxHP = (int) Player->HealthMax;

                                long curHP_Color = ARGB(155, std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0);

                                if (Player->Health == 0.0f && !Player->bDead) {
                                    curHP_Color = ARGB(255, 255, 0, 0);

                                    CurHP = Player->NearDeathBreath;
                                    if (Player->NearDeatchComponent) {
                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                auto AboveHead = Player->GetBonePos("Head");
                                AboveHead.Z += 35.f;
                                FVector AboveHeadSc = WorldToScreen(AboveHead);
                                if (AboveHeadSc.Z > 0) {
                                    auto mWidthScale = std::min(0.5f * Distance, 50.f);

                                    auto mWidth = m_Canvas->scaleSize(45.f) - mWidthScale;
                                    auto mHeight = mWidth * 0.125f;

                                    AboveHeadSc.X -= (mWidth / 2);
                                    AboveHeadSc.Y -= (mHeight * 2.f);

                                    m_Canvas->drawBox(AboveHeadSc.X, AboveHeadSc.Y, (CurHP * mWidth / MaxHP), mHeight, curHP_Color);
                                    m_Canvas->drawBorder(AboveHeadSc.X, AboveHeadSc.Y, mWidth, mHeight, 1.0f, BLACK);
                                }
                            }
                            // ESP INFO
                            if (Config["ESP::NAME"] || Config["ESP::DISTANCE"]) {
                                FVector BelowRoot = RootPos;
                                BelowRoot.Z -= 35.f;
                                FVector BelowRootSc = WorldToScreen(BelowRoot);
                                if (BelowRootSc.Z > 0) {
                                    std::wstring ws;

                                    if (Config["ESP::NAME"]) {
                                        if (Player->bIsAI)
                                            ws = L"Bot";
                                        else if (Player->PlayerName.IsValid())
                                            ws = Player->PlayerName.ToWString();
                                    }

                                    if (Config["ESP::DISTANCE"]) {
                                        ws += L" [";
                                        ws += std::to_wstring((int) Distance);
                                        ws += L"m]";
                                    }

                                    float mFontScale = std::max(5.0f, 10.f - (Distance / 75.0f));
                                    auto mText = m_Canvas->getTextBounds(ws.c_str(), 0, ws.size());
                                    m_Canvas->drawText(ws.c_str(), BelowRootSc.X, BelowRootSc.Y + mText->getHeight(), mFontScale, Align::CENTER, WHITE, BLACK);
                                }
                            }
                        }
                    }
                    if (Config["ESP::GRENADE"]) {
                        if (isObjectGrenade(Actors[i])) {
                            auto RootComponent = Actors[i]->RootComponent;
                            if (!RootComponent)
                                continue;

                            float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                            if (Distance <= 500.f) {
                                m_Canvas->drawText("Warning! Grenade(s) near you!", screenWidth / 2, 350, 15.f, Align::CENTER, RED, BLACK);

                                FVector Location = WorldToScreen(RootComponent->RelativeLocation);
                                if (Location.Z > 0) {
                                    m_Canvas->drawText("[ GRENADE ]", Location.X, Location.Y, 12.5f, Align::CENTER, RED, BLACK);
                                }
                            }
                        }
                    }
                    if (Config["ESP::VEHICLE"]) {
                        if (isObjectVehicle(Actors[i])) {
                            ASTExtraVehicleBase *Vehicle = (ASTExtraVehicleBase *) Actors[i];

                            auto RootComponent = Vehicle->RootComponent;
                            if (!RootComponent)
                                continue;

                            float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                            if (Distance <= 500.f) {
                                FVector Location = WorldToScreen(RootComponent->RelativeLocation);
                                if (Location.Z > 0) {
                                    std::string s = GetVehicleName(Vehicle);
                                    s += " [";
                                    s += std::to_string((int) Distance);
                                    s += "m]";
                                    m_Canvas->drawText(s.c_str(), Location.X, Location.Y, 10.f, Align::CENTER, ORANGE, BLACK);
                                }
                            }
                        }
                    }

                    if (isObjectLoot(Actors[i])) {
                        APickUpWrapperActor *PickUp = (APickUpWrapperActor *) Actors[i];
                        if (Tools::IsPtrValid(PickUp)) {
                            if (itemConfig[PickUp->DefineID.TypeSpecificID]) {

                                auto RootComponent = PickUp->RootComponent;
                                if (!RootComponent)
                                    continue;

                                float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                                if (Distance <= 500.f) {
                                    std::string s;
                                    int tc = 0xFF000000, oc = 0xFFFFFFFF;

                                    for (auto &e : itemData) {
                                        if (e["itemId"] == PickUp->DefineID.TypeSpecificID) {
                                            s = e["itemName"].get<std::string>();
                                            tc = strtoul(e["itemTextColor"].get<std::string>().c_str(), 0, 16);
                                            oc = strtoul(e["itemOutlineColor"].get<std::string>().c_str(), 0, 16);
                                            break;
                                        }
                                    }

                                    s += " [";
                                    s += std::to_string((int) Distance);
                                    s += "m]";

                                    FVector Location = WorldToScreen(RootComponent->RelativeLocation);
                                    if (Location.Z > 0) {
                                        m_Canvas->drawText(s.c_str(), Location.X, Location.Y, 7.5f, Align::CENTER, tc, oc);
                                    }
                                }
                            }
                        }
                    }

                    if (Config["ESP::LOOT_BOX"]) {
                        if (isObjectLootBox(Actors[i])) {
                            APickUpListWrapperActor *PickUpList = (APickUpListWrapperActor *) Actors[i];

                            auto RootComponent = PickUpList->RootComponent;
                            if (!RootComponent)
                                continue;

                            float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                            if (Distance <= 500.f) {
                                std::string s = "Loot Box";
                                s += " [";
                                s += std::to_string((int) Distance);
                                s += "m]";

                                FVector Location = WorldToScreen(RootComponent->RelativeLocation);
                                if (Location.Z > 0) {
                                    m_Canvas->drawText(s.c_str(), Location.X, Location.Y, 7.5f, Align::LEFT, WHITE, BLACK);

                                    if (Config["ESP::LOOT_BOX_ITEMS"]) {
                                        if (Distance <= (float) (Config["ESP::LOOT_BOX_MAX_DISTANCE"])) {
                                            Rect *m_Rect = m_Canvas->getTextBounds(s.c_str(), 0, s.size());
                                            float posY = Location.Y - (m_Rect->getHeight() * 1.5f);
                                            for (int j = 0; j < PickUpList->PickUpDataList.Num(); j++) {
                                                std::vector<std::string> s2;
                                                long tc = 0xFF000000, oc = 0xFFFFFFFF;

                                                for (auto &e : itemData) {
                                                    if (e["itemId"] == PickUpList->PickUpDataList[j].ID.TypeSpecificID) {
                                                        s2.push_back(e["itemName"].get<std::string>());
                                                        tc = strtoul(e["itemTextColor"].get<std::string>().c_str(), 0, 16);
                                                        oc = strtoul(e["itemOutlineColor"].get<std::string>().c_str(), 0, 16);
                                                        break;
                                                    }
                                                }
                                                if (!s2.empty()) {
                                                    if (PickUpList->PickUpDataList[j].Count > 1) {
                                                        s2.push_back(" * ");
                                                        s2.push_back(std::to_string(PickUpList->PickUpDataList[j].Count));
                                                    }

                                                    std::string s3;
                                                    for (auto &s4 : s2) {
                                                        s3 += s4;
                                                    }

                                                    m_Canvas->drawText(s2, Location.X, posY, 7.0f, Align::LEFT, {tc, WHITE, LIME}, {oc, BLACK, BLACK});
                                                    m_Rect = m_Canvas->getTextBounds(s3.c_str(), 0, s3.size());
                                                    posY -= m_Rect->getHeight() * 1.25f;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }


                if (totalEnemies > 0 || totalBots > 0) {
                    std::string s;
                    if (totalEnemies > 0) {
                        s = "Enem";
                        if (totalEnemies > 1)
                            s += "ies";
                        else s += "y";
                        s += " Nearby: ";
                        s += std::to_string(totalEnemies);
                        if (totalBots > 0)
                            s += " | ";
                    }
                    if (totalBots) {
                        s += "Bot";
                        if (totalBots > 1)
                            s += "s";
                        s += " Nearby: ";
                        s += std::to_string(totalBots);
                    }

                    m_Canvas->drawText(s.c_str(), screenWidth / 2, 75, 15, Align::CENTER, RED, BLACK);
                }
            }
        }
    }

    g_LocalPlayer = localPlayer;
    g_LocalController = localController;
    g_Actors = Actors;
}

// ================================================================================================================================ //
void *Memory_Thread(void *) {
    uint8_t shellCode_AimBullet[] = {0x14, 0x10, 0x9F, 0xE5, 0x14, 0x20, 0x9F, 0xE5, 0x14, 0x30, 0x9F, 0xE5, 0x00, 0x10, 0x80, 0xE5, 0x04, 0x20, 0x80, 0xE5, 0x08, 0x30, 0x80, 0xE5, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    uint8_t origCode_AimBullet[40]{0x00};

    while (true) {
        if (g_Auth.empty())
            continue;

        if (g_Token.empty())
            continue;

        if (g_Auth != g_Token)
            continue;

        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        static bool bAimBulletPatch = false;
        bool bAimBulletOK = false;

        auto localPlayer = g_LocalPlayer;
        auto localController = g_LocalController;
        if (localPlayer && localController) {
            if (Config["MEMORY::RECOIL"] || Config["MEMORY::CAMERA_SHAKE"] || Config["MEMORY::INSTANT_HIT"]) {
                auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                if (WeaponManagerComponent) {
                    auto Slot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                    if ((int) Slot.GetValue() >= 1 && (int) Slot.GetValue() <= 3) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config["MEMORY::RECOIL"]) {
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;

                                    ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;

                                    ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;

                                    ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;

                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }

                                if (Config["MEMORY::CAMERA_SHAKE"]) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }

                                if (Config["MEMORY::INSTANT_HIT"]) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                }
                            }
                        }
                    }
                }
            }

            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
            if (WeaponManagerComponent) {
                auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                if (CurrentWeaponReplicated) {
                    if (Config["AIM::AIMBULLET"]) {
                        auto ShootWeaponEntityComponent = CurrentWeaponReplicated->ShootWeaponEntityComp;
                        if (ShootWeaponEntityComponent) {
                            bool bReady = Config["AIM::TRIGGER"] == 0;
                            if (Config["AIM::TRIGGER"] == 1) {
                                bReady = localPlayer->bIsWeaponFiring;
                            }
                            if (Config["AIM::TRIGGER"] == 2) {
                                bReady = localPlayer->bIsGunADS;
                            }
                            if (Config["AIM::TRIGGER"] == 3) {
                                bReady = (localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS);
                            }
                            if (Config["AIM::TRIGGER"] == 4) {
                                bReady = (localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS);
                            }
                            if (bReady) {
                                ASTExtraPlayerCharacter *Target = 0;
                                if (Config["AIM::TARGET"] == 0) {
                                    Target = GetTargetByDistance();
                                }
                                if (Config["AIM::TARGET"] == 1) {
                                    Target = GetTargetByCrosshairDistance();
                                }
                                if (Target) {
                                    FVector targetAimPos = Target->GetBonePos("Head");
                                    if (Config["AIM::LOCATION"] == 1) {
                                        targetAimPos = Target->GetBonePos("Head");
                                        targetAimPos.Z -= 25.f;
                                    }

                                    if (Config["AIM::PREDICTION"]) {
                                        ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                        if (CurrentVehicle) {
                                            FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                            float dist = FVector::Distance(localPlayer->GetBonePos("Root"), Target->GetBonePos("Root"));
                                            auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                            targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                        } else {
                                            auto STCharacterMovement = Target->STCharacterMovement;
                                            if (STCharacterMovement) {
                                                FVector Velocity = STCharacterMovement->Velocity;

                                                float dist = FVector::Distance(localPlayer->GetBonePos("Root"), Target->GetBonePos("Root"));
                                                auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                                targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                            }
                                        }
                                    }

                                    if (Config["AIM::AIMBOT"]) {
                                        FRotator AimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
                                        localController->SetControlRotation(AimRotation, "");

                                    }

                                    if (Config["AIM::AIMBULLET"]) {
                                        if (origCode_AimBullet[0] == 0x00) {
                                            Tools::Read((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                                        }

                                        if (*(uint8_t *) (AimBullet_Offset) == 0xF0) {
                                            if (Tools::Write((void *) (AimBullet_Offset), shellCode_AimBullet, sizeof(shellCode_AimBullet))) {
                                                bAimBulletPatch = true;
                                            }
                                        }

                                        if (bAimBulletPatch) {
                                            if (Tools::Write((void *) (AimBullet_Offset + 0x1C), &targetAimPos, sizeof(FVector))) {
                                                bAimBulletOK = true;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                if (origCode_AimBullet[0] != 0x00) {
                    if (bAimBulletPatch && !bAimBulletOK) {
                        Tools::Write((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                        bAimBulletPatch = false;
                    }
                }
            }
        }

        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
    return 0;
}

void *Update_MTraps(void *) {
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        std::vector<MemTrap_t> tmp;

        FILE *f = fopen("/proc/self/maps", "r");
        if (f) {
            char line[512];
            while (fgets(line, sizeof line, f)) {
                uintptr_t tmpBase, tmpEnd;
                char tmpProt[8];
                if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %s %*s %*s %*s %*s", &tmpBase, &tmpEnd, tmpProt) > 0) {
                    if (tmpProt[0] != 'r') {
                        MemTrap_t mt = MemTrap_t();
                        mt.baseAddr = tmpBase;
                        mt.endAddr = tmpEnd;
                        tmp.push_back(mt);
                    }
                }
            }

            fclose(f);
        }

        MemTraps = tmp;

        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
    return 0;
}

// ================================================================================================================================ //
void *Init_Thread(void *) {
    while (!g_UE4) {
        if (g_Auth.empty())
            continue;

        if (g_Token.empty())
            continue;

        if (g_Auth != g_Token)
            continue;

        g_UE4 = Tools::GetBaseAddress(/*libUE4.so*/ StrEnc("a${p|h1h;", "\x0D\x4D\x19\x25\x39\x5C\x1F\x1B\x54", 9).c_str());
    }

    LOGI("libUE4.so: %p", g_UE4);

    GWorld_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 60 8F E0 ?? ?? ?? E5 04 00 80 E0");
    if (GWorld_Offset) {
        GWorld_Offset += *(uintptr_t *) ((GWorld_Offset + *(uint8_t *) (GWorld_Offset) + 0x8)) + 0x18;
        LOGI("GWorld_Offset: %p", GWorld_Offset - g_UE4);
    } else {
        LOGI("Failed to search GWorld pattern!");
    }

    GUObjectArray_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 1F 01 C2 E7 04 00 84 E5 00 20 A0 E3");
    if (GUObjectArray_Offset) {
        GUObjectArray_Offset += *(uintptr_t *) ((GUObjectArray_Offset + *(uint8_t *) (GUObjectArray_Offset) + 0x8)) + 0x18;
        LOGI("GUObjectArray_Offset: %p", GUObjectArray_Offset - g_UE4);
    } else {
        LOGI("Failed to search GUObjectArray pattern!");
    }

    GNames_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 00 8F E0 ?? ?? ?? E5 04 00 A0 E1 10 8C BD E8");
    if (GNames_Offset) {
        GNames_Offset += *(uintptr_t *) ((GNames_Offset + *(uint8_t *) (GNames_Offset) + 0x8)) + 0x10;
        LOGI("GNames_Offset: %p", GNames_Offset - g_UE4);
    } else {
        LOGI("Failed to search GNames pattern!");
    }

    CanvasMap_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 24 10 4B E2 18 40 0B E5 00 20 A0 E3");
    if (CanvasMap_Offset) {
        CanvasMap_Offset += *(uintptr_t *) ((CanvasMap_Offset + *(uint8_t *) (CanvasMap_Offset) + 0x8)) + 0x1C;
        LOGI("CanvasMap_Offset: %p", CanvasMap_Offset - g_UE4);
    } else {
        LOGI("Failed to search CanvasMap pattern!");
    }

    AimBullet_Offset = Tools::FindPattern("libUE4.so", "F0 4F 2D E9 1C B0 8D E2 04 D0 4D E2 06 8B 2D ED D0 D0 4D E2 0C 70 8B E2 44 C0 4B E2 01 50 A0 E1 00 40 A0 E1 83 00 97 E8 08 60 9B E5 4C 00 8C E8 50 20 4B E2 83 00 82 E8 ?? ?? 95 E5");
    LOGI("AimBullet_Offset: %p", AimBullet_Offset - g_UE4);

    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    if (mprotect((void *) ((uintptr_t) AimBullet_Offset - ((uintptr_t) AimBullet_Offset % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) != 0) {
        LOGI("mprotect failed! Feature may not be working!");
    } else {
        LOGI("mprotect succeeded!");
    }

    FName::GNames = *(TNameEntryArray **) (GNames_Offset);
    UObject::GUObjectArray = (FUObjectArray *) (GUObjectArray_Offset);

    bScanPatternCompleted = true;

    pthread_t t;
    pthread_create(&t, 0, Memory_Thread, 0);
    pthread_create(&t, 0, Update_MTraps, 0);

    Config["ESP::LOOT_BOX_MAX_DISTANCE"] = 10.f;

    return 0;
}

// ================================================================================================================================ //
#include "LicenseTools.h"

void native_Init(JNIEnv *env, jclass clazz, jobject mContext) {
    // szToast = "Modded by Kuroyama\nTelegram: @KuroHackOfficial"
    char szToast[47] = {0x28, 0x08, 0x05, 0x07, 0x08, 0x0B, 0x51, 0x11,
                        0x2C, 0x57, 0x3E, 0x26, 0x2B, 0x20, 0x38, 0x22,
                        0x28, 0x26, 0x8F, 0x57, 0x28, 0x33, 0x2C, 0x2C,
                        0x43, 0x36, 0x3C, 0x91, 0x7D, 0x5F, 0x66, 0x4E,
                        0x53, 0x48, 0x71, 0x4A, 0x4A, 0x54, 0x72, 0x4D,
                        0x4F, 0x5E, 0x56, 0x62, 0x5C, 0x63, 0xC1};

    for (unsigned int oywdm = 0, SmnWs = 0; oywdm < 47; oywdm++) {
        SmnWs = szToast[oywdm];
        SmnWs++;
        SmnWs -= oywdm;
        SmnWs++;
        SmnWs -= oywdm;
        SmnWs ^= 0x67;
        szToast[oywdm] = SmnWs;
    }

    jstring pMsg = env->NewStringUTF(szToast);

    jclass toastClass = env->FindClass(/*android/widget/Toast*/ StrEnc("eCS7dp(}Z:2f/$i/S'CO", "\x04\x2D\x37\x45\x0B\x19\x4C\x52\x2D\x53\x56\x01\x4A\x50\x46\x7B\x3C\x46\x30\x3B", 20).c_str());
    jmethodID makeTextMethod = env->GetStaticMethodID(toastClass, /*makeText*/ StrEnc("jI/4d64U", "\x07\x28\x44\x51\x30\x53\x4C\x21", 8).c_str(), /*(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;*/ StrEnc("H#L{!#l1/A\"2Z.X>f@XyZ3A*Za^XIT6&u0^zeYt%go5U[V!{X6(RXl>-!sFl9cE(l^[%f\\a2XM", "\x60\x6F\x2D\x15\x45\x51\x03\x58\x4B\x6E\x41\x5D\x34\x5A\x3D\x50\x12\x6F\x1B\x16\x34\x47\x24\x52\x2E\x5A\x12\x32\x28\x22\x57\x09\x19\x51\x30\x1D\x4A\x1A\x1C\x44\x15\x3C\x50\x24\x2E\x33\x4F\x18\x3D\x0D\x61\x7B\x14\x0D\x50\x49\x53\x1C\x2F\x08\x16\x14\x2C\x4C\x0B\x3B\x2F\x0A\x32\x33\x00\x41\x2C\x76", 74).c_str());

    jobject toastObj = env->CallStaticObjectMethod(toastClass, makeTextMethod, mContext, pMsg, 0);

    jmethodID methodShow = env->GetMethodID(toastClass, /*show*/ StrEnc("!;N9", "\x52\x53\x21\x4E", 4).c_str(), /*()V*/ StrEnc("U*9", "\x7D\x03\x6F", 3).c_str());
    env->CallVoidMethod(toastObj, methodShow);

    auto pkgName = GetPackageName(env, mContext);

    StartRuntimeHook(pkgName);
}

jstring native_Check(JNIEnv *env, jclass clazz, jobject mContext, jstring mUserKey) {
    auto userKey = env->GetStringUTFChars(mUserKey, 0);

    std::string hwid = userKey;
    hwid += GetAndroidID(env, mContext);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        curl_easy_setopt(curl, CURLOPT_URL, /*https://kuro.vip.online/public/connect*/ StrEnc("^?=1A4E%r7'YHk#?xCSvXmCIKF=Pd3$-O+xMKhjL?P1", "\x36\x4B\x49\x41\x32\x0E\x6A\x0A\x19\x42\x55\x36\x66\x0A\x4D\x50\x16\x2E\x3C\x12\x2B\x43\x2C\x27\x27\x2F\x53\x35\x4B\x43\x51\x4F\x23\x42\x1B\x62\x28\x07\x04\x22\x5A\x33\x45", 43).c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), userKey, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();

                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += userKey;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("ZD$_K NtaM8Fu=n0fFyO;!Ae<H)*Gy4%", "\x0C\x29\x1C\x13\x20\x17\x1B\x1E\x53\x07\x55\x35\x1F\x7E\x3E\x66\x36\x10\x13\x3D\x77\x40\x76\x1F\x5B\x2E\x51\x19\x32\x03\x0D\x60", 32).c_str();;
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;

                        if (bValid) {
                            pthread_t t;
                            pthread_create(&t, 0, Init_Thread, 0);
                        }
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);
    return bValid ? env->NewStringUTF(/*OK*/ StrEnc("8q", "\x77\x3A", 2).c_str()) : env->NewStringUTF(errMsg.c_str());
}