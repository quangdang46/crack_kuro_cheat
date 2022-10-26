#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_LobbyWeaponManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponVisibility
struct UBP_LobbyWeaponManager_C_SetWeaponVisibility_Params
{
	bool                                               bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.SetWeaponPendantSocketType
struct UBP_LobbyWeaponManager_C_SetWeaponPendantSocketType_Params
{
	class ASTExtraWeapon*                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponPendantSocketType                           SocketType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.OnWeaponEquipDone
struct UBP_LobbyWeaponManager_C_OnWeaponEquipDone_Params
{
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeapon
struct UBP_LobbyWeaponManager_C_CreateWeapon_Params
{
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       Handle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.GetLobbyWeaponClass
struct UBP_LobbyWeaponManager_C_GetLobbyWeaponClass_Params
{
	int                                                InWeaponAvatarID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LobbyWeaponManager.BP_LobbyWeaponManager_C.CreateWeaponAndChangeSkin
struct UBP_LobbyWeaponManager_C_CreateWeaponAndChangeSkin_Params
{
	int*                                               WeaponSkinID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSync;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

