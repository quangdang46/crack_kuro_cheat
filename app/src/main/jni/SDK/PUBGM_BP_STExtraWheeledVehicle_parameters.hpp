#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_STExtraWheeledVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleRepCandidateAvatar
struct ABP_STExtraWheeledVehicle_C_HandleRepCandidateAvatar_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleSeatChanged
struct ABP_STExtraWheeledVehicle_C_HandleSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            LastSeatType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSeatIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            NewSeatType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleAvatarEquiped
struct ABP_STExtraWheeledVehicle_C_HandleAvatarEquiped_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleSeatOccupiersChanged
struct ABP_STExtraWheeledVehicle_C_HandleSeatOccupiersChanged_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.HandleDriverChanged
struct ABP_STExtraWheeledVehicle_C_HandleDriverChanged_Params
{
	class ASTExtraPlayerCharacter*                     LastDriver;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     NewDriver;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChangedToDestory
struct ABP_STExtraWheeledVehicle_C_OnClientVehicleHealthStateChangedToDestory_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.CreateDMI
struct ABP_STExtraWheeledVehicle_C_CreateDMI_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.SetDMIParam
struct ABP_STExtraWheeledVehicle_C_SetDMIParam_Params
{
	class UMaterialInstanceDynamic*                    Dim;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UpdateExhaustFx
struct ABP_STExtraWheeledVehicle_C_UpdateExhaustFx_Params
{
	struct FName                                       ExhaustName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnClientVehicleHealthStateChanged
struct ABP_STExtraWheeledVehicle_C_OnClientVehicleHealthStateChanged_Params
{
	ESTExtraVehicleHealthState                         VehicleHealthState;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.UserConstructionScript
struct ABP_STExtraWheeledVehicle_C_UserConstructionScript_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveBeginPlay
struct ABP_STExtraWheeledVehicle_C_ReceiveBeginPlay_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStart
struct ABP_STExtraWheeledVehicle_C_OnEngineStart_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnEngineStop
struct ABP_STExtraWheeledVehicle_C_OnEngineStop_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnSetTailLightValue
struct ABP_STExtraWheeledVehicle_C_OnSetTailLightValue_Params
{
	float*                                             LightValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.OnBoostingChanged
struct ABP_STExtraWheeledVehicle_C_OnBoostingChanged_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.VehicleMeshChanged
struct ABP_STExtraWheeledVehicle_C_VehicleMeshChanged_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BPPlayOverlapDamageCameraShake
struct ABP_STExtraWheeledVehicle_C_BPPlayOverlapDamageCameraShake_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ReceiveActorBeginOverlap
struct ABP_STExtraWheeledVehicle_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.AdvanceVehicleMeshChanged
struct ABP_STExtraWheeledVehicle_C_AdvanceVehicleMeshChanged_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_1_DriverChangeDelegate__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_1_DriverChangeDelegate__DelegateSignature_Params
{
	class ASTExtraPlayerCharacter*                     OldChara;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     NewChara;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatOccupiersChangedDelegate__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatOccupiersChangedDelegate__DelegateSignature_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleLoadedFPPMesh__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleLoadedFPPMesh__DelegateSignature_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatChangeDelegate__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatChangeDelegate__DelegateSignature_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            LastSeatType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSeatIdx;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleSeatType                            NewSeatType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSeatIdx;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature
struct ABP_STExtraWheeledVehicle_C_BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature_Params
{
};

// Function BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C.ExecuteUbergraph_BP_STExtraWheeledVehicle
struct ABP_STExtraWheeledVehicle_C_ExecuteUbergraph_BP_STExtraWheeledVehicle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

