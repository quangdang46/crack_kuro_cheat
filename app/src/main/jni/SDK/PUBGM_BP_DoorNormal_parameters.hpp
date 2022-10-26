#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_DoorNormal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DoorNormal.BP_DoorNormal_C.UserConstructionScript
struct ABP_DoorNormal_C_UserConstructionScript_Params
{
};

// Function BP_DoorNormal.BP_DoorNormal_C.ZeroToOne__FinishedFunc
struct ABP_DoorNormal_C_ZeroToOne__FinishedFunc_Params
{
};

// Function BP_DoorNormal.BP_DoorNormal_C.ZeroToOne__UpdateFunc
struct ABP_DoorNormal_C_ZeroToOne__UpdateFunc_Params
{
};

// Function BP_DoorNormal.BP_DoorNormal_C.ReceiveBeginPlay
struct ABP_DoorNormal_C_ReceiveBeginPlay_Params
{
};

// Function BP_DoorNormal.BP_DoorNormal_C.ReceiveAnyDamage
struct ABP_DoorNormal_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DoorNormal.BP_DoorNormal_C.EventTimer
struct ABP_DoorNormal_C_EventTimer_Params
{
};

// Function BP_DoorNormal.BP_DoorNormal_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DoorNormal_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DoorNormal.BP_DoorNormal_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_DoorNormal_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DoorNormal.BP_DoorNormal_C.ActionDoorOnClient
struct ABP_DoorNormal_C_ActionDoorOnClient_Params
{
	int*                                               doorStateDst;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bExtraDoor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DoorNormal.BP_DoorNormal_C.BP_DoorBroken
struct ABP_DoorNormal_C_BP_DoorBroken_Params
{
	bool*                                              isBeginPlay;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bExtraDoor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DoorNormal.BP_DoorNormal_C.ActionDoorImmediatly
struct ABP_DoorNormal_C_ActionDoorImmediatly_Params
{
	int*                                               doorStateDst;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bExtraDoor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DoorNormal.BP_DoorNormal_C.OnBPRespawned
struct ABP_DoorNormal_C_OnBPRespawned_Params
{
};

// Function BP_DoorNormal.BP_DoorNormal_C.ExecuteUbergraph_BP_DoorNormal
struct ABP_DoorNormal_C_ExecuteUbergraph_BP_DoorNormal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

