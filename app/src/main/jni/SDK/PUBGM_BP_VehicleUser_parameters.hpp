#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_VehicleUser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VehicleUser.BP_VehicleUser_C.EditorAxisMoveFreezed
struct UBP_VehicleUser_C_EditorAxisMoveFreezed_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.SetUAVSpeedPercent
struct UBP_VehicleUser_C_SetUAVSpeedPercent_Params
{
	float                                              SpeedPercent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.SetUAVCameraMode
struct UBP_VehicleUser_C_SetUAVCameraMode_Params
{
	bool                                               FreeCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnUnmanedVehicleHPChanged
struct UBP_VehicleUser_C_OnUnmanedVehicleHPChanged_Params
{
	float                                              HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnUnmanedVehicleFuelChanged
struct UBP_VehicleUser_C_OnUnmanedVehicleFuelChanged_Params
{
	float                                              Fuel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MacFuel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.SendUIMsgWhenChangeSeatCompleted
struct UBP_VehicleUser_C_SendUIMsgWhenChangeSeatCompleted_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.SendUIMsgWhenEnterVehicleCompleted
struct UBP_VehicleUser_C_SendUIMsgWhenEnterVehicleCompleted_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.SendUIMsgWhenExitVehicleCompleted
struct UBP_VehicleUser_C_SendUIMsgWhenExitVehicleCompleted_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.GetVehicleGoStraight
struct UBP_VehicleUser_C_GetVehicleGoStraight_Params
{
	float                                              VehicleGoStraight;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.SetHelicopterCameraMode
struct UBP_VehicleUser_C_SetHelicopterCameraMode_Params
{
	bool                                               IsFreeCamera;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.HandleCharacterUnequipWeapon
struct UBP_VehicleUser_C_HandleCharacterUnequipWeapon_Params
{
	class ASTExtraWeapon*                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.HandleCharacterEquipWeapon
struct UBP_VehicleUser_C_HandleCharacterEquipWeapon_Params
{
	class ASTExtraWeapon*                              NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESurviveWeaponPropSlot>           Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.SwitchToLastWeapon
struct UBP_VehicleUser_C_SwitchToLastWeapon_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.CacheLastUseWeaponSlot
struct UBP_VehicleUser_C_CacheLastUseWeaponSlot_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.SetPlayMusic
struct UBP_VehicleUser_C_SetPlayMusic_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.SetDrivingViewMode
struct UBP_VehicleUser_C_SetDrivingViewMode_Params
{
	int                                                int_mode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.ResetInputs
struct UBP_VehicleUser_C_ResetInputs_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnMotorcycleContactChanged
struct UBP_VehicleUser_C_OnMotorcycleContactChanged_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.FixGoStraight
struct UBP_VehicleUser_C_FixGoStraight_Params
{
	float                                              InMoveRightRate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoStraightThreshold;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMoveRightRate;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnUpdateSeatGUI
struct UBP_VehicleUser_C_OnUpdateSeatGUI_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleWheelsHPChanged
struct UBP_VehicleUser_C_OnVehicleWheelsHPChanged_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.StopPlayerAutoSprint
struct UBP_VehicleUser_C_StopPlayerAutoSprint_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleFuelChanged
struct UBP_VehicleUser_C_OnVehicleFuelChanged_Params
{
	float                                              Fuel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FuelMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnVehicleHPChanged
struct UBP_VehicleUser_C_OnVehicleHPChanged_Params
{
	float                                              HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HPMax;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.GetPlayerController
struct UBP_VehicleUser_C_GetPlayerController_Params
{
	class ABP_STExtraPlayerController_C*               PlayerController;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.ExitVehicle
struct UBP_VehicleUser_C_ExitVehicle_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.EnterVehicle
struct UBP_VehicleUser_C_EnterVehicle_Params
{
	bool                                               IsDriver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnEnterVehicleCompleted
struct UBP_VehicleUser_C_OnEnterVehicleCompleted_Params
{
	ESTExtraVehicleSeatType*                           SeatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnExitVehicleCompleted
struct UBP_VehicleUser_C_OnExitVehicleCompleted_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.ReceiveBeginPlay
struct UBP_VehicleUser_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnChangeVehicleSeatCompleted
struct UBP_VehicleUser_C_OnChangeVehicleSeatCompleted_Params
{
	ESTExtraVehicleSeatType*                           SeatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnCurrrentClosestVehicleChanged
struct UBP_VehicleUser_C_OnCurrrentClosestVehicleChanged_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.EventSetDrivingViewMode
struct UBP_VehicleUser_C_EventSetDrivingViewMode_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveForward
struct UBP_VehicleUser_C_OnInputAxisMoveForward_Params
{
	float*                                             Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnInputAxisMoveRight
struct UBP_VehicleUser_C_OnInputAxisMoveRight_Params
{
	float*                                             Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.EventSetCarMusicSwitch
struct UBP_VehicleUser_C_EventSetCarMusicSwitch_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.EventSetHelicopterFreeCamera
struct UBP_VehicleUser_C_EventSetHelicopterFreeCamera_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnShutDownUnmannedVehicleCompleted
struct UBP_VehicleUser_C_OnShutDownUnmannedVehicleCompleted_Params
{
	float*                                             cdTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnLaunchUnmannedVehicleCompleted
struct UBP_VehicleUser_C_OnLaunchUnmannedVehicleCompleted_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.OnPauseUnmannedVehicleCompleted
struct UBP_VehicleUser_C_OnPauseUnmannedVehicleCompleted_Params
{
};

// Function BP_VehicleUser.BP_VehicleUser_C.EventSetUAVFreeCamera
struct UBP_VehicleUser_C_EventSetUAVFreeCamera_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.EventSetSpeedPercent
struct UBP_VehicleUser_C_EventSetSpeedPercent_Params
{
	float                                              FloatValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.EventUAVSingleOperate
struct UBP_VehicleUser_C_EventUAVSingleOperate_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleUser.BP_VehicleUser_C.ExecuteUbergraph_BP_VehicleUser
struct UBP_VehicleUser_C_ExecuteUbergraph_BP_VehicleUser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

