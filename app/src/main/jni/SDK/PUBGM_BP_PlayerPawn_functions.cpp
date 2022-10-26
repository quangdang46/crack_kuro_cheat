// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PlayerPawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeNameByGrenadeID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InGrenadeID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PlayerPawn_C::GetGrenadeNameByGrenadeID(int* InGrenadeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeNameByGrenadeID");

	ABP_PlayerPawn_C_GetGrenadeNameByGrenadeID_Params params;
	params.InGrenadeID = InGrenadeID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetTpCameraFov
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SetTpCameraFov(float FOV)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SetTpCameraFov");

	ABP_PlayerPawn_C_SetTpCameraFov_Params params;
	params.FOV = FOV;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnRep_Cache(ForceStill)
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::OnRep_Cache_ForceStill_()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnRep_Cache(ForceStill)");

	ABP_PlayerPawn_C_OnRep_Cache_ForceStill__Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetCapsuleParentBounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseParentBounds                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SetCapsuleParentBounds(bool UseParentBounds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SetCapsuleParentBounds");

	ABP_PlayerPawn_C_SetCapsuleParentBounds_Params params;
	params.UseParentBounds = UseParentBounds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ClearDecalBakingRTCache
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ClearDecalBakingRTCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ClearDecalBakingRTCache");

	ABP_PlayerPawn_C_ClearDecalBakingRTCache_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeWeaponMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, class UClass*> OutWeaponMap                   (Parm, OutParm, ZeroConstructor)

void ABP_PlayerPawn_C::GetGrenadeWeaponMap(TMap<struct FName, class UClass*>* OutWeaponMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeWeaponMap");

	ABP_PlayerPawn_C_GetGrenadeWeaponMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutWeaponMap != nullptr)
		*OutWeaponMap = params.OutWeaponMap;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.TriggerActivityByID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetNameOnly                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UIName                         (Parm, OutParm, ZeroConstructor)
// int                            ActivityID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::TriggerActivityByID(bool GetNameOnly, struct FString* UIName, int* ActivityID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TriggerActivityByID");

	ABP_PlayerPawn_C_TriggerActivityByID_Params params;
	params.GetNameOnly = GetNameOnly;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UIName != nullptr)
		*UIName = params.UIName;
	if (ActivityID != nullptr)
		*ActivityID = params.ActivityID;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.RegisterInitGrenadeMap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::RegisterInitGrenadeMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.RegisterInitGrenadeMap");

	ABP_PlayerPawn_C_RegisterInitGrenadeMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InitGrenadeMapData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::InitGrenadeMapData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InitGrenadeMapData");

	ABP_PlayerPawn_C_InitGrenadeMapData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.IsAngledSightAvailable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerPawn_C::IsAngledSightAvailable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.IsAngledSightAvailable");

	ABP_PlayerPawn_C_IsAngledSightAvailable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.RefreshAngledSightUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HaveAngledSight                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAngledSight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::RefreshAngledSightUI(bool HaveAngledSight, bool IsAngledSight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.RefreshAngledSightUI");

	ABP_PlayerPawn_C_RefreshAngledSightUI_Params params;
	params.HaveAngledSight = HaveAngledSight;
	params.IsAngledSight = IsAngledSight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowAngledSightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAngled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ShowAngledSightState(bool IsAngled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ShowAngledSightState");

	ABP_PlayerPawn_C_ShowAngledSightState_Params params;
	params.IsAngled = IsAngled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetAngledSightRotator
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewParam1                      (Parm, OutParm, IsPlainOldData)

void ABP_PlayerPawn_C::GetAngledSightRotator(class ASTExtraShootWeapon* NewParam, struct FRotator* NewParam1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetAngledSightRotator");

	ABP_PlayerPawn_C_GetAngledSightRotator_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EAngledSightType> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::AngledSightAnimLogic(TEnumAsByte<enum EAngledSightType> Selection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimLogic");

	ABP_PlayerPawn_C_AngledSightAnimLogic_Params params;
	params.Selection = Selection;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsOnlyTurn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::AngledSightAnimUpdate(float InputPin, bool bIsOnlyTurn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimUpdate");

	ABP_PlayerPawn_C_AngledSightAnimUpdate_Params params;
	params.InputPin = InputPin;
	params.bIsOnlyTurn = bIsOnlyTurn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_CreateEnemyFrameUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlayingCompletePlayback      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_enemy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::Replay_CreateEnemyFrameUI(bool isPlayingCompletePlayback, bool is_enemy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_CreateEnemyFrameUI");

	ABP_PlayerPawn_C_Replay_CreateEnemyFrameUI_Params params;
	params.isPlayingCompletePlayback = isPlayingCompletePlayback;
	params.is_enemy = is_enemy;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_SetVisiableOfFrameUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_Visiable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::Replay_SetVisiableOfFrameUI(bool is_Visiable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_SetVisiableOfFrameUI");

	ABP_PlayerPawn_C_Replay_SetVisiableOfFrameUI_Params params;
	params.is_Visiable = is_Visiable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateEmoteWeaponIdInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::UpdateEmoteWeaponIdInfo(int ID, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateEmoteWeaponIdInfo");

	ABP_PlayerPawn_C_UpdateEmoteWeaponIdInfo_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.AllowWater
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanEnter                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::AllowWater(bool* bCanEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.AllowWater");

	ABP_PlayerPawn_C_AllowWater_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bCanEnter != nullptr)
		*bCanEnter = params.bCanEnter;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldRedBlood
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerPawn_C::ShouldRedBlood()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldRedBlood");

	ABP_PlayerPawn_C_ShouldRedBlood_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.CheckHasVehicleAvatar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InItemID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::CheckHasVehicleAvatar(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PlayerCharacter, int* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.CheckHasVehicleAvatar");

	ABP_PlayerPawn_C_CheckHasVehicleAvatar_Params params;
	params.InVehicle = InVehicle;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InItemID != nullptr)
		*InItemID = params.InItemID;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ChangeCurVehicleAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ChangeCurVehicleAvatar(class ASTExtraVehicleBase* InVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ChangeCurVehicleAvatar");

	ABP_PlayerPawn_C_ChangeCurVehicleAvatar_Params params;
	params.InVehicle = InVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnChangedVehicleSeat
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::HandleOnChangedVehicleSeat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnChangedVehicleSeat");

	ABP_PlayerPawn_C_HandleOnChangedVehicleSeat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetMasterBoneComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MasterBoneComponent            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::GetMasterBoneComponent(class UMeshComponent** MasterBoneComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetMasterBoneComponent");

	ABP_PlayerPawn_C_GetMasterBoneComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MasterBoneComponent != nullptr)
		*MasterBoneComponent = params.MasterBoneComponent;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InitDefaultAvatarByResID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AGender                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::InitDefaultAvatarByResID(int AGender, int Head, int Hair)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InitDefaultAvatarByResID");

	ABP_PlayerPawn_C_InitDefaultAvatarByResID_Params params;
	params.AGender = AGender;
	params.Head = Head;
	params.Hair = Hair;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeCameraShakeByDir
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ImpulseDir                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UClass*                  RetVar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::GetGrenadeCameraShakeByDir(const struct FVector& ImpulseDir, class UClass** RetVar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeCameraShakeByDir");

	ABP_PlayerPawn_C_GetGrenadeCameraShakeByDir_Params params;
	params.ImpulseDir = ImpulseDir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RetVar != nullptr)
		*RetVar = params.RetVar;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandle
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackEmoteHandle*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackEmoteHandle* ABP_PlayerPawn_C::GetEmoteHandle(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandle");

	ABP_PlayerPawn_C_GetEmoteHandle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PlayerPawn_C::GetShootWeaponNameByWeapon(int* ItemDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon");

	ABP_PlayerPawn_C_GetShootWeaponNameByWeapon_Params params;
	params.ItemDefineID = ItemDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetThirdPersonCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera");

	ABP_PlayerPawn_C_GetThirdPersonCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetThirdPersonSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm");

	ABP_PlayerPawn_C_GetThirdPersonSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetFPPCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera");

	ABP_PlayerPawn_C_GetFPPCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetFPPSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm");

	ABP_PlayerPawn_C_GetFPPSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetFirstPersonCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera");

	ABP_PlayerPawn_C_GetFirstPersonCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetFirstPersonSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm");

	ABP_PlayerPawn_C_GetFirstPersonSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCameraComponent* ABP_PlayerPawn_C::GetScopeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera");

	ABP_PlayerPawn_C_GetScopeCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetScopeSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm");

	ABP_PlayerPawn_C_GetScopeSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_OnFighting
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonSimulatedComponents_OnFighting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_OnFighting");

	ABP_PlayerPawn_C_GetNonSimulatedComponents_OnFighting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerPawn_C::ShouldAutoScopeWhenPeek()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek");

	ABP_PlayerPawn_C_ShouldAutoScopeWhenPeek_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_NonTeammates
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonSimulatedComponents_NonTeammates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_NonTeammates");

	ABP_PlayerPawn_C_GetNonSimulatedComponents_NonTeammates_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::GetControllerViewCamera(class UCameraComponent** Camera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera");

	ABP_PlayerPawn_C_GetControllerViewCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonSimulatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents");

	ABP_PlayerPawn_C_GetNonSimulatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonDedicatedComponents
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ABP_PlayerPawn_C::GetNonDedicatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonDedicatedComponents");

	ABP_PlayerPawn_C_GetNonDedicatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::HandleOnDetachedVehicle(class ASTExtraVehicleBase* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle");

	ABP_PlayerPawn_C_HandleOnDetachedVehicle_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::HandleOnAttachedVehicle(class ASTExtraVehicleBase* InVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle");

	ABP_PlayerPawn_C_HandleOnAttachedVehicle_Params params;
	params.InVehicle = InVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpringArmComponent* ABP_PlayerPawn_C::GetActiveSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm");

	ABP_PlayerPawn_C_GetActiveSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::AimInterupted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted");

	ABP_PlayerPawn_C_AimInterupted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewParam1                      (Parm, OutParm, IsPlainOldData)
// bool                           bHaveWeapon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::GetWeapon(struct FVector* NewParam, struct FRotator* NewParam1, bool* bHaveWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon");

	ABP_PlayerPawn_C_GetWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
	if (bHaveWeapon != nullptr)
		*bHaveWeapon = params.bHaveWeapon;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ClientHandlePreOnPlane
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ClientHandlePreOnPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ClientHandlePreOnPlane");

	ABP_PlayerPawn_C_ClientHandlePreOnPlane_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ResetBPCameraSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting");

	ABP_PlayerPawn_C_ResetBPCameraSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InRot                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerPawn_C::ShowDebugArrow(class USceneComponent* self2, const struct FRotator& InRot, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow");

	ABP_PlayerPawn_C_ShowDebugArrow_Params params;
	params.self2 = self2;
	params.InRot = InRot;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.IsAutonomous
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::IsAutonomous(bool* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.IsAutonomous");

	ABP_PlayerPawn_C_IsAutonomous_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickUpWrapperActor*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::PickUp(class APickUpWrapperActor* NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp");

	ABP_PlayerPawn_C_PickUp_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::DoPickUpTarget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget");

	ABP_PlayerPawn_C_DoPickUpTarget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerPawn_C::RotateMesh(const struct FRotator& NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh");

	ABP_PlayerPawn_C_RotateMesh_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SetAllCollisionEnabled(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled");

	ABP_PlayerPawn_C_SetAllCollisionEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::MoveOutScope()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope");

	ABP_PlayerPawn_C_MoveOutScope_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::MoveInScope()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope");

	ABP_PlayerPawn_C_MoveInScope_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.Reload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::Reload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.Reload");

	ABP_PlayerPawn_C_Reload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ESTEPoseState> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum ESTEPoseState> PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SwitchCrouch(TEnumAsByte<enum ESTEPoseState> NewParam, TEnumAsByte<enum ESTEPoseState> PreState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch");

	ABP_PlayerPawn_C_SwitchCrouch_Params params;
	params.NewParam = NewParam;
	params.PreState = PreState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript");

	ABP_PlayerPawn_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ParachuteCamBlend__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__FinishedFunc");

	ABP_PlayerPawn_C_ParachuteCamBlend__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ParachuteCamBlend__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__UpdateFunc");

	ABP_PlayerPawn_C_ParachuteCamBlend__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::LerpAlpha__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__FinishedFunc");

	ABP_PlayerPawn_C_LerpAlpha__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::LerpAlpha__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__UpdateFunc");

	ABP_PlayerPawn_C_LerpAlpha__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ScopeTimeline__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__FinishedFunc");

	ABP_PlayerPawn_C_ScopeTimeline__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::ScopeTimeline__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__UpdateFunc");

	ABP_PlayerPawn_C_ScopeTimeline__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSigntTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::AngledSigntTimeline__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSigntTimeline__FinishedFunc");

	ABP_PlayerPawn_C_AngledSigntTimeline__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSigntTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::AngledSigntTimeline__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSigntTimeline__UpdateFunc");

	ABP_PlayerPawn_C_AngledSigntTimeline__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::RearSightTimeline__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeline__FinishedFunc");

	ABP_PlayerPawn_C_RearSightTimeline__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::RearSightTimeline__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeline__UpdateFunc");

	ABP_PlayerPawn_C_RearSightTimeline__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::TurnLerpAlpha__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__FinishedFunc");

	ABP_PlayerPawn_C_TurnLerpAlpha__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerPawn_C::TurnLerpAlpha__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__UpdateFunc");

	ABP_PlayerPawn_C_TurnLerpAlpha__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_T_K2Node_InputKeyEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_T_K2Node_InputKeyEvent_32(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_T_K2Node_InputKeyEvent_32");

	ABP_PlayerPawn_C_InpActEvt_T_K2Node_InputKeyEvent_32_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Fire_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_6");

	ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Fire_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_5");

	ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Vault_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Vault_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Vault_K2Node_InputActionEvent_4");

	ABP_PlayerPawn_C_InpActEvt_Vault_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Q_K2Node_InputKeyEvent_31(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_31");

	ABP_PlayerPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_31_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Q_K2Node_InputKeyEvent_30(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_30");

	ABP_PlayerPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_30_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_E_K2Node_InputKeyEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_E_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_E_K2Node_InputKeyEvent_29");

	ABP_PlayerPawn_C_InpActEvt_E_K2Node_InputKeyEvent_29_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_E_K2Node_InputKeyEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_E_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_E_K2Node_InputKeyEvent_28");

	ABP_PlayerPawn_C_InpActEvt_E_K2Node_InputKeyEvent_28_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Z_K2Node_InputKeyEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Z_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Z_K2Node_InputKeyEvent_27");

	ABP_PlayerPawn_C_InpActEvt_Z_K2Node_InputKeyEvent_27_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_V_K2Node_InputKeyEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_V_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_V_K2Node_InputKeyEvent_26");

	ABP_PlayerPawn_C_InpActEvt_V_K2Node_InputKeyEvent_26_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_C_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_C_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_C_K2Node_InputKeyEvent_25");

	ABP_PlayerPawn_C_InpActEvt_C_K2Node_InputKeyEvent_25_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_LeftAlt_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_24");

	ABP_PlayerPawn_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_24_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_LeftAlt_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_23");

	ABP_PlayerPawn_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_23_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_22");

	ABP_PlayerPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_R_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_R_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_R_K2Node_InputKeyEvent_21");

	ABP_PlayerPawn_C_InpActEvt_R_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Z_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_Z_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Z_K2Node_InputKeyEvent_20");

	ABP_PlayerPawn_C_InpActEvt_Z_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_19");

	ABP_PlayerPawn_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_19_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_18");

	ABP_PlayerPawn_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::InpActEvt_F10_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_17");

	ABP_PlayerPawn_C_InpActEvt_F10_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.CE(ForceStill)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceStill                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::CE_ForceStill_(bool ForceStill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.CE(ForceStill)");

	ABP_PlayerPawn_C_CE_ForceStill__Params params;
	params.ForceStill = ForceStill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.CE(ForceStill(ServerOnly))
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceStill                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::CE_ForceStill_ServerOnly__(bool ForceStill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.CE(ForceStill(ServerOnly))");

	ABP_PlayerPawn_C_CE_ForceStill_ServerOnly___Params params;
	params.ForceStill = ForceStill;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPetOwnerPossessed
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::OnPetOwnerPossessed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnPetOwnerPossessed");

	ABP_PlayerPawn_C_OnPetOwnerPossessed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraFromParachuteOpeningToTPPBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::SwitchCameraFromParachuteOpeningToTPPBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraFromParachuteOpeningToTPPBeginPlay");

	ABP_PlayerPawn_C_SwitchCameraFromParachuteOpeningToTPPBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraFromParachuteOpeningToTPPStop
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::SwitchCameraFromParachuteOpeningToTPPStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraFromParachuteOpeningToTPPStop");

	ABP_PlayerPawn_C_SwitchCameraFromParachuteOpeningToTPPStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerPawn_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay");

	ABP_PlayerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AController**            Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             KillingHitInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                KillingHitImpulseDir           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UClass**                 KillingHitDamageType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::BPNotifyStartDying(class AController** Killer, class AActor** DamageCauser, struct FHitResult* KillingHitInfo, struct FVector* KillingHitImpulseDir, class UClass** KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying");

	ABP_PlayerPawn_C_BPNotifyStartDying_Params params;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ReloadEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent");

	ABP_PlayerPawn_C_ReloadEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ESurviveWeaponPropSlot>* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnEquipWeapon(TEnumAsByte<enum ESurviveWeaponPropSlot>* Slot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon");

	ABP_PlayerPawn_C_OnEquipWeapon_Params params;
	params.Slot = Slot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_CameraSetting      CameraSetting                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_C::SwitchCamera(const struct FSTR_CameraSetting& CameraSetting)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCamera");

	ABP_PlayerPawn_C_SwitchCamera_Params params;
	params.CameraSetting = CameraSetting;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnNotifyHurt()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt");

	ABP_PlayerPawn_C_OnNotifyHurt_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyPickUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAvailable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::NotifyPickUp(bool bIsAvailable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyPickUp");

	ABP_PlayerPawn_C_NotifyPickUp_Params params;
	params.bIsAvailable = bIsAvailable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PlayerPawn_C::OnLanded(struct FHitResult* Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded");

	ABP_PlayerPawn_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ESTEPoseState>* LastState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum ESTEPoseState>* CurState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnPoseStateChange(TEnumAsByte<enum ESTEPoseState>* LastState, TEnumAsByte<enum ESTEPoseState>* CurState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange");

	ABP_PlayerPawn_C_OnPoseStateChange_Params params;
	params.LastState = LastState;
	params.CurState = CurState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_UpdateCustomMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::K2_UpdateCustomMovement(float* DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.K2_UpdateCustomMovement");

	ABP_PlayerPawn_C_K2_UpdateCustomMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EMovementMode>* PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EMovementMode>* NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::K2_OnMovementModeChanged(TEnumAsByte<enum EMovementMode>* PrevMovementMode, TEnumAsByte<enum EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.K2_OnMovementModeChanged");

	ABP_PlayerPawn_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::BPReceiveDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage");

	ABP_PlayerPawn_C_BPReceiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ParachuteOnWater()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater");

	ABP_PlayerPawn_C_ParachuteOnWater_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyTombBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAvailable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::NotifyTombBox(bool bIsAvailable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyTombBox");

	ABP_PlayerPawn_C_NotifyTombBox_Params params;
	params.bIsAvailable = bIsAvailable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::DoAutoReloadCurrentWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon");

	ABP_PlayerPawn_C_DoAutoReloadCurrentWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnUnEquipWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon");

	ABP_PlayerPawn_C_OnUnEquipWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPResetCharacter
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::BPResetCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BPResetCharacter");

	ABP_PlayerPawn_C_BPResetCharacter_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnInitGrenadeData
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::OnInitGrenadeData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnInitGrenadeData");

	ABP_PlayerPawn_C_OnInitGrenadeData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.VaultFailPawnBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString*                Content                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerPawn_C::VaultFailPawnBluePrint(struct FString* Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.VaultFailPawnBluePrint");

	ABP_PlayerPawn_C_VaultFailPawnBluePrint_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                VaultKey                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 WindowActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerPawn_C::PawnVaultServerBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* StartPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* HitPoint, class AActor** WindowActor, struct FRotator* movedir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint");

	ABP_PlayerPawn_C_PawnVaultServerBluePrint_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.HitPoint = HitPoint;
	params.WindowActor = WindowActor;
	params.movedir = movedir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                VaultKey                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               movedir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerPawn_C::PawnVaultAllBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* StartPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* HitPoint, struct FRotator* movedir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint");

	ABP_PlayerPawn_C_PawnVaultAllBluePrint_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.StartPos = StartPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.HitPoint = HitPoint;
	params.movedir = movedir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::ScopeInStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop");

	ABP_PlayerPawn_C_ScopeInStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::PlayScopeInTimeline(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline");

	ABP_PlayerPawn_C_PlayScopeInTimeline_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveRadialDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ImpulseDir                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PlayerPawn_C::BPReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, float* Radius, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FVector* ImpulseDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveRadialDamage");

	ABP_PlayerPawn_C_BPReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.Radius = Radius;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.ImpulseDir = ImpulseDir;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ReceivePossessed(class AController** NewController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ReceivePossessed");

	ABP_PlayerPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAkAudioEvent**          LocalAkEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          RemoteAkEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ParachutePlaySound(class UAkAudioEvent** LocalAkEvent, class UAkAudioEvent** RemoteAkEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound");

	ABP_PlayerPawn_C_ParachutePlaySound_Params params;
	params.LocalAkEvent = LocalAkEvent;
	params.RemoteAkEvent = RemoteAkEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnWeaponEquipmentUpdate
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnWeaponEquipmentUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnWeaponEquipmentUpdate");

	ABP_PlayerPawn_C_OnWeaponEquipmentUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.BindAndExecStateChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::BindAndExecStateChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.BindAndExecStateChanged");

	ABP_PlayerPawn_C_BindAndExecStateChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.StateEnterHandler_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::StateEnterHandler_Event_1(EPawnState State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.StateEnterHandler_Event_1");

	ABP_PlayerPawn_C_StateEnterHandler_Event_1_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnHitByCake
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::OnHitByCake()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnHitByCake");

	ABP_PlayerPawn_C_OnHitByCake_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.EnablePet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::EnablePet(bool* Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.EnablePet");

	ABP_PlayerPawn_C_EnablePet_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEnterStateForBp
// (Event, Public, BlueprintEvent)
// Parameters:
// EPawnState*                    State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnEnterStateForBp(EPawnState* State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnEnterStateForBp");

	ABP_PlayerPawn_C_OnEnterStateForBp_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLeaveStateForBp
// (Event, Public, BlueprintEvent)
// Parameters:
// EPawnState*                    State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnLeaveStateForBp(EPawnState* State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnLeaveStateForBp");

	ABP_PlayerPawn_C_OnLeaveStateForBp_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::ReceiveDestroyed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveDestroyed");

	ABP_PlayerPawn_C_ReceiveDestroyed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerStopCheckBluePrint
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::PawnVaultServerStopCheckBluePrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerStopCheckBluePrint");

	ABP_PlayerPawn_C_PawnVaultServerStopCheckBluePrint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultStopBluePrint
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::PawnVaultStopBluePrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultStopBluePrint");

	ABP_PlayerPawn_C_PawnVaultStopBluePrint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnMiniTreeTriggerServerLogicCPP
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnMiniTreeTriggerServerLogicCPP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnMiniTreeTriggerServerLogicCPP");

	ABP_PlayerPawn_C_OnMiniTreeTriggerServerLogicCPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchSightAngledLocal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EAngledSightType>* Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsOnlyTurn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::SwitchSightAngledLocal(TEnumAsByte<enum EAngledSightType>* Type, bool* IsOnlyTurn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchSightAngledLocal");

	ABP_PlayerPawn_C_SwitchSightAngledLocal_Params params;
	params.Type = Type;
	params.IsOnlyTurn = IsOnlyTurn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAngledSight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPush                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::DoAngledSight(bool IsPush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoAngledSight");

	ABP_PlayerPawn_C_DoAngledSight_Params params;
	params.IsPush = IsPush;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoNormalSight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPush                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::DoNormalSight(bool IsPush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DoNormalSight");

	ABP_PlayerPawn_C_DoNormalSight_Params params;
	params.IsPush = IsPush;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.StopSwitchAngledSight
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::StopSwitchAngledSight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.StopSwitchAngledSight");

	ABP_PlayerPawn_C_StopSwitchAngledSight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::CustomEvent_4(class ASTExtraShootWeapon* Weapon, EWeaponAttachmentSocketType Type, bool bEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_4");

	ABP_PlayerPawn_C_CustomEvent_4_Params params;
	params.Weapon = Weapon;
	params.Type = Type;
	params.bEquip = bEquip;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBegin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::CustomEvent_1(bool bIsBegin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_1");

	ABP_PlayerPawn_C_CustomEvent_1_Params params;
	params.bIsBegin = bIsBegin;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::CustomEvent_2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_2");

	ABP_PlayerPawn_C_CustomEvent_2_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnBPStateCheckIn
// (Event, Public, BlueprintEvent)

void ABP_PlayerPawn_C::OnBPStateCheckIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnBPStateCheckIn");

	ABP_PlayerPawn_C_OnBPStateCheckIn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.DynamicHoldGun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::DynamicHoldGun(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.DynamicHoldGun");

	ABP_PlayerPawn_C_DynamicHoldGun_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.LuaReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::LuaReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.LuaReceiveBeginPlay");

	ABP_PlayerPawn_C_LuaReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchRearSight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PrevIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AngleRotator                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerPawn_C::SwitchRearSight(int PrevIndex, int NewIndex, const struct FRotator& AngleRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchRearSight");

	ABP_PlayerPawn_C_SwitchRearSight_Params params;
	params.PrevIndex = PrevIndex;
	params.NewIndex = NewIndex;
	params.AngleRotator = AngleRotator;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.StopTurningInPlace
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::StopTurningInPlace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.StopTurningInPlace");

	ABP_PlayerPawn_C_StopTurningInPlace_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TurnInPlaceStart               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                TurnInPlaceTarget              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            TurnAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::TurnInPlace(const struct FRotator& TurnInPlaceStart, const struct FRotator& TurnInPlaceTarget, class UCurveFloat* Curve, class UAnimMontage* TurnAnimation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.TurnInPlace");

	ABP_PlayerPawn_C_TurnInPlace_Params params;
	params.TurnInPlaceStart = TurnInPlaceStart;
	params.TurnInPlaceTarget = TurnInPlaceTarget;
	params.Curve = Curve;
	params.TurnAnimation = TurnAnimation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::ExecuteUbergraph_BP_PlayerPawn(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn");

	ABP_PlayerPawn_C_ExecuteUbergraph_BP_PlayerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnCakePlacement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_C::OnCakePlacement__DelegateSignature(bool Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.OnCakePlacement__DelegateSignature");

	ABP_PlayerPawn_C_OnCakePlacement__DelegateSignature_Params params;
	params.Success = Success;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.UnequipWeaponComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::UnequipWeaponComplete__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.UnequipWeaponComplete__DelegateSignature");

	ABP_PlayerPawn_C_UnequipWeaponComplete__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerPawn.BP_PlayerPawn_C.EquipWeaponComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPawn_C::EquipWeaponComplete__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerPawn.BP_PlayerPawn_C.EquipWeaponComplete__DelegateSignature");

	ABP_PlayerPawn_C_EquipWeaponComplete__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

