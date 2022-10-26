#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_WateringArea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WateringArea.BP_WateringArea_C.OnAreaOverlapEnd
struct ABP_WateringArea_C_OnAreaOverlapEnd_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WateringArea.BP_WateringArea_C.OnAreaOverlapBegin
struct ABP_WateringArea_C_OnAreaOverlapBegin_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WateringArea.BP_WateringArea_C.StartDrop
struct ABP_WateringArea_C_StartDrop_Params
{
};

// Function BP_WateringArea.BP_WateringArea_C.UserConstructionScript
struct ABP_WateringArea_C_UserConstructionScript_Params
{
};

// Function BP_WateringArea.BP_WateringArea_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_WateringArea_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_WateringArea.BP_WateringArea_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_WateringArea_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WateringArea.BP_WateringArea_C.ShowAnimationButton
struct ABP_WateringArea_C_ShowAnimationButton_Params
{
	class ABP_PlayerPawn_C*                            PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WateringArea.BP_WateringArea_C.ServerDoWaterLogic
struct ABP_WateringArea_C_ServerDoWaterLogic_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_WateringArea.BP_WateringArea_C.OnWateringUIChanged
struct ABP_WateringArea_C_OnWateringUIChanged_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WateringArea.BP_WateringArea_C.DelayResetParticleCD
struct ABP_WateringArea_C_DelayResetParticleCD_Params
{
};

// Function BP_WateringArea.BP_WateringArea_C.ReceiveBeginPlay
struct ABP_WateringArea_C_ReceiveBeginPlay_Params
{
};

// Function BP_WateringArea.BP_WateringArea_C.SpawnTreeParticle
struct ABP_WateringArea_C_SpawnTreeParticle_Params
{
};

// Function BP_WateringArea.BP_WateringArea_C.CustomEvent_1
struct ABP_WateringArea_C_CustomEvent_1_Params
{
};

// Function BP_WateringArea.BP_WateringArea_C.ExecuteUbergraph_BP_WateringArea
struct ABP_WateringArea_C_ExecuteUbergraph_BP_WateringArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

