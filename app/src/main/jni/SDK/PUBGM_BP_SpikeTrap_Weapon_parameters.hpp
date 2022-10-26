#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SpikeTrap_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.HideAvatar
struct ABP_SpikeTrap_Weapon_C_HideAvatar_Params
{
	bool                                               NewHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.Vehicle
struct ABP_SpikeTrap_Weapon_C_Vehicle_Params
{
	EThrowState                                        CurrentState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.GetSkillEntryForMeleeWeapon
struct ABP_SpikeTrap_Weapon_C_GetSkillEntryForMeleeWeapon_Params
{
	bool                                               IsPressed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillEntry                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.UserConstructionScript
struct ABP_SpikeTrap_Weapon_C_UserConstructionScript_Params
{
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.HandleThrowStateChanged
struct ABP_SpikeTrap_Weapon_C_HandleThrowStateChanged_Params
{
	EThrowState*                                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EThrowState*                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.ReceiveBeginPlay
struct ABP_SpikeTrap_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnDetachedFromVehicle_Event_1
struct ABP_SpikeTrap_Weapon_C_OnDetachedFromVehicle_Event_1_Params
{
	class ASTExtraVehicleBase*                         LastVehicle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnWeaponChangeStateCommon_Event_1
struct ABP_SpikeTrap_Weapon_C_OnWeaponChangeStateCommon_Event_1_Params
{
	TEnumAsByte<enum EFreshWeaponStateType>            LastState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EFreshWeaponStateType>            NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnAttachedToVehicle_Event_1
struct ABP_SpikeTrap_Weapon_C_OnAttachedToVehicle_Event_1_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.ExecuteUbergraph_BP_SpikeTrap_Weapon
struct ABP_SpikeTrap_Weapon_C_ExecuteUbergraph_BP_SpikeTrap_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

