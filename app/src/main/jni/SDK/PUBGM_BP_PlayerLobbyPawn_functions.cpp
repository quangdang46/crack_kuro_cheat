// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PlayerLobbyPawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponBySocketID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Use                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CharEquipWeaponBySocketID(int resID, bool Use, const struct FName& SocketID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponBySocketID");

	ABP_PlayerLobbyPawn_C_CharEquipWeaponBySocketID_Params params;
	params.resID = resID;
	params.Use = Use;
	params.SocketID = SocketID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeaponByResId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CharUnEquipWeaponByResId(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeaponByResId");

	ABP_PlayerLobbyPawn_C_CharUnEquipWeaponByResId_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAsyncLobbyWeaponAllAssetsLoadedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnAsyncLobbyWeaponAllAssetsLoadedEvent(class ASTExtraWeapon* Weapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAsyncLobbyWeaponAllAssetsLoadedEvent");

	ABP_PlayerLobbyPawn_C_OnAsyncLobbyWeaponAllAssetsLoadedEvent_Params params;
	params.Weapon = Weapon;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAsyncLobbyWeaponAnimLoadedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnAsyncLobbyWeaponAnimLoadedEvent(class ASTExtraWeapon* Weapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAsyncLobbyWeaponAnimLoadedEvent");

	ABP_PlayerLobbyPawn_C_OnAsyncLobbyWeaponAnimLoadedEvent_Params params;
	params.Weapon = Weapon;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipExtraWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::CharUnEquipExtraWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipExtraWeapon");

	ABP_PlayerLobbyPawn_C_CharUnEquipExtraWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetWeaponSocketNameByResId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetWeaponSocketNameByResId(int resID, struct FName* SocketName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetWeaponSocketNameByResId");

	ABP_PlayerLobbyPawn_C_GetWeaponSocketNameByResId_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarEquippedLua
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnAvatarEquippedLua(int SlotType, bool IsEquipped, int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarEquippedLua");

	ABP_PlayerLobbyPawn_C_OnAvatarEquippedLua_Params params;
	params.SlotType = SlotType;
	params.IsEquipped = IsEquipped;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetForceUseDefaultIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetForceUseDefaultIdle(bool force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetForceUseDefaultIdle");

	ABP_PlayerLobbyPawn_C_SetForceUseDefaultIdle_Params params;
	params.force = force;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.checkCanEquipWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canEquip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::checkCanEquipWeapon(int WeaponId, bool* canEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.checkCanEquipWeapon");

	ABP_PlayerLobbyPawn_C_checkCanEquipWeapon_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (canEquip != nullptr)
		*canEquip = params.canEquip;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.NeedLODOptimize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerLobbyPawn_C::NeedLODOptimize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.NeedLODOptimize");

	ABP_PlayerLobbyPawn_C_NeedLODOptimize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothInten
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          leten                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::UpdateClothInten(float leten)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothInten");

	ABP_PlayerLobbyPawn_C_UpdateClothInten_Params params;
	params.leten = leten;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothMatParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotateSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::UpdateClothMatParam(float RotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothMatParam");

	ABP_PlayerLobbyPawn_C_UpdateClothMatParam_Params params;
	params.RotateSpeed = RotateSpeed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopActionCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::StopActionCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopActionCamera");

	ABP_PlayerLobbyPawn_C_StopActionCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTickInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::RotateOnTickInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTickInternal");

	ABP_PlayerLobbyPawn_C_RotateOnTickInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.EnableClothAndHairAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::EnableClothAndHairAnimation(bool IsEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.EnableClothAndHairAnimation");

	ABP_PlayerLobbyPawn_C_EnableClothAndHairAnimation_Params params;
	params.IsEnable = IsEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetCurrentActionID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetCurrentActionID(int* ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetCurrentActionID");

	ABP_PlayerLobbyPawn_C_GetCurrentActionID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetAvatarLevel(int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarLevel");

	ABP_PlayerLobbyPawn_C_SetAvatarLevel_Params params;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarAllMeshLoaded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnAvatarAllMeshLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarAllMeshLoaded");

	ABP_PlayerLobbyPawn_C_OnAvatarAllMeshLoaded_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetLobbyWeaponClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InWeaponAvatarID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ObjectClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetLobbyWeaponClass(int InWeaponAvatarID, class UClass** ObjectClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetLobbyWeaponClass");

	ABP_PlayerLobbyPawn_C_GetLobbyWeaponClass_Params params;
	params.InWeaponAvatarID = InWeaponAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObjectClass != nullptr)
		*ObjectClass = params.ObjectClass;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TryRotateAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::TryRotateAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TryRotateAvatar");

	ABP_PlayerLobbyPawn_C_TryRotateAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CheckAndShowWeaponPendant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponAvatarID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CheckAndShowWeaponPendant(int WeaponAvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CheckAndShowWeaponPendant");

	ABP_PlayerLobbyPawn_C_CheckAndShowWeaponPendant_Params params;
	params.WeaponAvatarID = WeaponAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.testLoadHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::testLoadHandle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.testLoadHandle");

	ABP_PlayerLobbyPawn_C_testLoadHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarVisibleForEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetAvatarVisibleForEmote(bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarVisibleForEmote");

	ABP_PlayerLobbyPawn_C_SetAvatarVisibleForEmote_Params params;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RequestWeaponDIYData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InPlayerUID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            WeaponAvatarID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InDIYPlanID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::RequestWeaponDIYData(const struct FString& InPlayerUID, int WeaponAvatarID, int InDIYPlanID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RequestWeaponDIYData");

	ABP_PlayerLobbyPawn_C_RequestWeaponDIYData_Params params;
	params.InPlayerUID = InPlayerUID;
	params.WeaponAvatarID = WeaponAvatarID;
	params.InDIYPlanID = InDIYPlanID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetEquipingWeaponScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetEquipingWeaponScale(float Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetEquipingWeaponScale");

	ABP_PlayerLobbyPawn_C_SetEquipingWeaponScale_Params params;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetWeaponPendantSocketType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponPendantSocketType       Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetWeaponPendantSocketType(EWeaponPendantSocketType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetWeaponPendantSocketType");

	ABP_PlayerLobbyPawn_C_SetWeaponPendantSocketType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetIsMVPMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMVPMotion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetIsMVPMotion(bool isMVPMotion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetIsMVPMotion");

	ABP_PlayerLobbyPawn_C_SetIsMVPMotion_Params params;
	params.isMVPMotion = isMVPMotion;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SyncWeaponMontage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::SyncWeaponMontage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SyncWeaponMontage");

	ABP_PlayerLobbyPawn_C_SyncWeaponMontage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.InitDefaultAvatarByResID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AGender                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::InitDefaultAvatarByResID(int AGender, int Head, int Hair)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.InitDefaultAvatarByResID");

	ABP_PlayerLobbyPawn_C_InitDefaultAvatarByResID_Params params;
	params.AGender = AGender;
	params.Head = Head;
	params.Hair = Hair;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SwitchMeshUpdateFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::SwitchMeshUpdateFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SwitchMeshUpdateFlag");

	ABP_PlayerLobbyPawn_C_SwitchMeshUpdateFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaInst
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetClothAnimDyAlphaInst(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaInst");

	ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaInst_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaGrad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetClothAnimDyAlphaGrad(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaGrad");

	ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaGrad_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetClothAnimDyAlpha(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlpha");

	ABP_PlayerLobbyPawn_C_SetClothAnimDyAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopEmotionSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::StopEmotionSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopEmotionSound");

	ABP_PlayerLobbyPawn_C_StopEmotionSound_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::RotateOnTick(float RotateTime, float TargetRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTick");

	ABP_PlayerLobbyPawn_C_RotateOnTick_Params params;
	params.RotateTime = RotateTime;
	params.TargetRotation = TargetRotation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SwitchSexAndHeadAndHair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            headid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SwitchSexAndHeadAndHair(int sex, int headid, int Hair)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SwitchSexAndHeadAndHair");

	ABP_PlayerLobbyPawn_C_SwitchSexAndHeadAndHair_Params params;
	params.sex = sex;
	params.headid = headid;
	params.Hair = Hair;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEndActionHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnEndActionHandle(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEndActionHandle");

	ABP_PlayerLobbyPawn_C_OnEndActionHandle_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayActionHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnPlayActionHandle(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayActionHandle");

	ABP_PlayerLobbyPawn_C_OnPlayActionHandle_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId_ForceClientMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CharEquipWeaponByResId_ForceClientMode(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId_ForceClientMode");

	ABP_PlayerLobbyPawn_C_CharEquipWeaponByResId_ForceClientMode_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentListLobby
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Result                         (Parm, OutParm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::GetAllEquipmentListLobby(TArray<struct FString>* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentListLobby");

	ABP_PlayerLobbyPawn_C_GetAllEquipmentListLobby_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetConflictRuleEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnableConflictRule            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetConflictRuleEnable(bool bEnableConflictRule)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetConflictRuleEnable");

	ABP_PlayerLobbyPawn_C_SetConflictRuleEnable_Params params;
	params.bEnableConflictRule = bEnableConflictRule;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEquipmentInfoBySlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ColorID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PatternID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetEquipmentInfoBySlot(EAvatarSlotType SlotType, int* ItemId, int* ColorID, int* PatternID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEquipmentInfoBySlot");

	ABP_PlayerLobbyPawn_C_GetEquipmentInfoBySlot_Params params;
	params.SlotType = SlotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemId != nullptr)
		*ItemId = params.ItemId;
	if (ColorID != nullptr)
		*ColorID = params.ColorID;
	if (PatternID != nullptr)
		*PatternID = params.PatternID;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsSlotHasEquipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::IsSlotHasEquipped(EAvatarSlotType SlotType, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsSlotHasEquipped");

	ABP_PlayerLobbyPawn_C_IsSlotHasEquipped_Params params;
	params.SlotType = SlotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsItemHasEquipped
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PatternID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::IsItemHasEquipped(int InItemID, int ColorID, int PatternID, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsItemHasEquipped");

	ABP_PlayerLobbyPawn_C_IsItemHasEquipped_Params params;
	params.InItemID = InItemID;
	params.ColorID = ColorID;
	params.PatternID = PatternID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentBySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::PutOffEquipmentBySlot(EAvatarSlotType SlotType, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentBySlot");

	ABP_PlayerLobbyPawn_C_PutOffEquipmentBySlot_Params params;
	params.SlotType = SlotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayEmoteLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::PlayEmoteLoop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayEmoteLoop");

	ABP_PlayerLobbyPawn_C_PlayEmoteLoop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShouldCurEmoteShowWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::ShouldCurEmoteShowWeapon(bool* ShouldShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShouldCurEmoteShowWeapon");

	ABP_PlayerLobbyPawn_C_ShouldCurEmoteShowWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ShouldShow != nullptr)
		*ShouldShow = params.ShouldShow;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HandleWeaponDisplayWhenPlayEmote
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::HandleWeaponDisplayWhenPlayEmote()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HandleWeaponDisplayWhenPlayEmote");

	ABP_PlayerLobbyPawn_C_HandleWeaponDisplayWhenPlayEmote_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Result                         (Parm, OutParm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::GetAllEquipmentList(TArray<int>* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentList");

	ABP_PlayerLobbyPawn_C_GetAllEquipmentList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsAnimShowMan
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::IsAnimShowMan(bool* bMan)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsAnimShowMan");

	ABP_PlayerLobbyPawn_C_IsAnimShowMan_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bMan != nullptr)
		*bMan = params.bMan;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayAnimHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::PlayAnimHit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayAnimHit");

	ABP_PlayerLobbyPawn_C_PlayAnimHit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCanRotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canRotate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetCanRotate(bool canRotate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCanRotate");

	ABP_PlayerLobbyPawn_C_SetCanRotate_Params params;
	params.canRotate = canRotate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetPawnAndClothVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetPawnAndClothVisibility(bool Show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetPawnAndClothVisibility");

	ABP_PlayerLobbyPawn_C_SetPawnAndClothVisibility_Params params;
	params.Show = Show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RemoveAvatarBySlot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::RemoveAvatarBySlot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RemoveAvatarBySlot");

	ABP_PlayerLobbyPawn_C_RemoveAvatarBySlot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentByResID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::PutOffEquipmentByResID(int resID, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentByResID");

	ABP_PlayerLobbyPawn_C_PutOffEquipmentByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOnEquipmentByResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PatternID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::PutOnEquipmentByResID(int resID, int ColorID, int PatternID, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOnEquipmentByResID");

	ABP_PlayerLobbyPawn_C_PutOnEquipmentByResID_Params params;
	params.resID = resID;
	params.ColorID = ColorID;
	params.PatternID = PatternID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharStopEmoteByResId
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::CharStopEmoteByResId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharStopEmoteByResId");

	ABP_PlayerLobbyPawn_C_CharStopEmoteByResId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.AvatarDisplaySceneEquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceClientMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::AvatarDisplaySceneEquipWeapon(bool ForceClientMode, int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.AvatarDisplaySceneEquipWeapon");

	ABP_PlayerLobbyPawn_C_AvatarDisplaySceneEquipWeapon_Params params;
	params.ForceClientMode = ForceClientMode;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isHide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::HideWeapon(bool isHide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideWeapon");

	ABP_PlayerLobbyPawn_C_HideWeapon_Params params;
	params.isHide = isHide;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharPlayEmoteByResId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtraInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::CharPlayEmoteByResId(int resID, const struct FString& ExtraInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharPlayEmoteByResId");

	ABP_PlayerLobbyPawn_C_CharPlayEmoteByResId_Params params;
	params.resID = resID;
	params.ExtraInfo = ExtraInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::CharUnEquipWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeapon");

	ABP_PlayerLobbyPawn_C_CharUnEquipWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::CharEquipWeaponByResId(int resID, bool bUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId");

	ABP_PlayerLobbyPawn_C_CharEquipWeaponByResId_Params params;
	params.resID = resID;
	params.bUse = bUse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackEmoteHandle*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackEmoteHandle* ABP_PlayerLobbyPawn_C::GetEmoteHandle(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle");

	ABP_PlayerLobbyPawn_C_GetEmoteHandle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetExtraWeaponByResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          extraWeaponObj                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   WeaponHandle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PlayIdleAnim                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetExtraWeaponByResID(int WeaponId, class ASTExtraWeapon** extraWeaponObj, class UBattleItemHandleBase** WeaponHandle, bool* PlayIdleAnim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetExtraWeaponByResID");

	ABP_PlayerLobbyPawn_C_GetExtraWeaponByResID_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (extraWeaponObj != nullptr)
		*extraWeaponObj = params.extraWeaponObj;
	if (WeaponHandle != nullptr)
		*WeaponHandle = params.WeaponHandle;
	if (PlayIdleAnim != nullptr)
		*PlayIdleAnim = params.PlayIdleAnim;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBattleItemFromResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackAvatarHandle*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackAvatarHandle* ABP_PlayerLobbyPawn_C::GetBattleItemFromResID(int RowName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBattleItemFromResID");

	ABP_PlayerLobbyPawn_C_GetBattleItemFromResID_Params params;
	params.RowName = RowName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetBPID(int RowName, int* BPID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID");

	ABP_PlayerLobbyPawn_C_GetBPID_Params params;
	params.RowName = RowName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetHiddenFlags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EAvatarSlotType>        hiddenFlags                    (Parm, OutParm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::GetHiddenFlags(int resID, TArray<EAvatarSlotType>* hiddenFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetHiddenFlags");

	ABP_PlayerLobbyPawn_C_GetHiddenFlags_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hiddenFlags != nullptr)
		*hiddenFlags = params.hiddenFlags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript");

	ABP_PlayerLobbyPawn_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerLobbyPawn_C::Timeline_0__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__FinishedFunc");

	ABP_PlayerLobbyPawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerLobbyPawn_C::Timeline_0__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__UpdateFunc");

	ABP_PlayerLobbyPawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveTick");

	ABP_PlayerLobbyPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature");

	ABP_PlayerLobbyPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature");

	ABP_PlayerLobbyPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::ReceiveDestroyed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveDestroyed");

	ABP_PlayerLobbyPawn_C_ReceiveDestroyed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEmoteFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnEmoteFinish(int EmoteIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEmoteFinish");

	ABP_PlayerLobbyPawn_C_OnEmoteFinish_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEmoteBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnEmoteBegin(int EmoteIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEmoteBegin");

	ABP_PlayerLobbyPawn_C_OnEmoteBegin_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.EventPlayHurtAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::EventPlayHurtAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.EventPlayHurtAnim");

	ABP_PlayerLobbyPawn_C_EventPlayHurtAnim_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetMaleAnimClass
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::SetMaleAnimClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetMaleAnimClass");

	ABP_PlayerLobbyPawn_C_SetMaleAnimClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetFemaleAnimClass
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::SetFemaleAnimClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetFemaleAnimClass");

	ABP_PlayerLobbyPawn_C_SetFemaleAnimClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPutOnEquipByIdFaild
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           NewItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerLobbyPawn_C::OnPutOnEquipByIdFaild(int SlotID, const struct FItemDefineID& NewItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPutOnEquipByIdFaild");

	ABP_PlayerLobbyPawn_C_OnPutOnEquipByIdFaild_Params params;
	params.SlotID = SlotID;
	params.NewItemID = NewItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnAvatarEquipped(EAvatarSlotType SlotType, bool IsEquipped, int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarEquipped");

	ABP_PlayerLobbyPawn_C_OnAvatarEquipped_Params params;
	params.SlotType = SlotType;
	params.IsEquipped = IsEquipped;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TickClothLeten
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          from                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::TickClothLeten(float from)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TickClothLeten");

	ABP_PlayerLobbyPawn_C_TickClothLeten_Params params;
	params.from = from;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CustomBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::CustomBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CustomBeginPlay");

	ABP_PlayerLobbyPawn_C_CustomBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn");

	ABP_PlayerLobbyPawn_C_ExecuteUbergraph_BP_PlayerLobbyPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnSetForceUseDefaultIdle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnSetForceUseDefaultIdle__DelegateSignature(bool force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnSetForceUseDefaultIdle__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnSetForceUseDefaultIdle__DelegateSignature_Params params;
	params.force = force;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEquipClothStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackAvatarHandle*   AvatarHandle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEuqiped                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnEquipClothStateChange__DelegateSignature(class UBackpackAvatarHandle* AvatarHandle, bool IsEuqiped, int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEquipClothStateChange__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnEquipClothStateChange__DelegateSignature_Params params;
	params.AvatarHandle = AvatarHandle;
	params.IsEuqiped = IsEuqiped;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnChangeWeapon__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeWeapon__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnChangeWeapon__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnchangeGender__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnchangeGender__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnchangeGender__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnchangeGender__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeEquipment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::OnChangeEquipment__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeEquipment__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnChangeEquipment__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnStopAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnStopAction__DelegateSignature(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnStopAction__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnStopAction__DelegateSignature_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnPlayAction__DelegateSignature(int ActionID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayAction__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnPlayAction__DelegateSignature_Params params;
	params.ActionID = ActionID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnLogicPuton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           NewItemID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           OldParam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            LuaID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::OnLogicPuton__DelegateSignature(EAvatarSlotType SlotType, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldParam, int LuaID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnLogicPuton__DelegateSignature");

	ABP_PlayerLobbyPawn_C_OnLogicPuton__DelegateSignature_Params params;
	params.SlotType = SlotType;
	params.NewItemID = NewItemID;
	params.OldParam = OldParam;
	params.LuaID = LuaID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

