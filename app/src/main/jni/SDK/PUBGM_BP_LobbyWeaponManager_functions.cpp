// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_LobbyWeaponManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::SetWeaponVisibility(bool bHide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponVisibility");

	UBP_LobbyWeaponManager_C_SetWeaponVisibility_Params params;
	params.bHide = bHide;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponPendantSocketType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponPendantSocketType       SocketType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::SetWeaponPendantSocketType(class ASTExtraWeapon* Target, EWeaponPendantSocketType SocketType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponPendantSocketType");

	UBP_LobbyWeaponManager_C_SetWeaponPendantSocketType_Params params;
	params.Target = Target;
	params.SocketType = SocketType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.OnWeaponEquipDone
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LobbyWeaponManager_C::OnWeaponEquipDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.OnWeaponEquipDone");

	UBP_LobbyWeaponManager_C_OnWeaponEquipDone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   Handle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyWeaponManager_C::CreateWeapon(int inInt, class ASTExtraWeapon** Weapon, class UBattleItemHandleBase** Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeapon");

	UBP_LobbyWeaponManager_C_CreateWeapon_Params params;
	params.inInt = inInt;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
	if (Handle != nullptr)
		*Handle = params.Handle;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetLobbyWeaponClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InWeaponAvatarID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBP_LobbyWeaponManager_C::GetLobbyWeaponClass(int InWeaponAvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetLobbyWeaponClass");

	UBP_LobbyWeaponManager_C_GetLobbyWeaponClass_Params params;
	params.InWeaponAvatarID = InWeaponAvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeaponAndChangeSkin
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponSkinID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSync                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraWeapon* UBP_LobbyWeaponManager_C::CreateWeaponAndChangeSkin(int* WeaponSkinID, bool* bSync)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeaponAndChangeSkin");

	UBP_LobbyWeaponManager_C_CreateWeaponAndChangeSkin_Params params;
	params.WeaponSkinID = WeaponSkinID;
	params.bSync = bSync;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

