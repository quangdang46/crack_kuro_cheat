#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuildSystemComp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestRotation
struct UBuildSystemComp_BP_C_GetNewDestRotation_Params
{
	struct FRotator                                    DestRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      CacheActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsLocationValid
struct UBuildSystemComp_BP_C_IsLocationValid_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxBuildDist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.GetNewDestLocation
struct UBuildSystemComp_BP_C_GetNewDestLocation_Params
{
	struct FVector                                     DestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      CacheActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPProcessNothingHitTrace
struct UBuildSystemComp_BP_C_BPProcessNothingHitTrace_Params
{
	struct FVector                                     DestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxBuildDist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                buildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.BPCheckPlacement
struct UBuildSystemComp_BP_C_BPCheckPlacement_Params
{
	TArray<struct FHitResult>                          HitArray;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     BoxExtent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FBuildingData                               CurBuildData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FRotator                                    ControlRot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               bHasForbiddenObject;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ProccessNothingHitTraceOverlap
struct UBuildSystemComp_BP_C_ProccessNothingHitTraceOverlap_Params
{
	struct FVector                                     DestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             MaxBuildDist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	int*                                               buildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CheckPlacementOverlap
struct UBuildSystemComp_BP_C_CheckPlacementOverlap_Params
{
	TArray<struct FHitResult>                          HitArray;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBuildingData                               CurBuildData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FRotator                                    BuildRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ControlRot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               HasForbiddenObject;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ShouldEnableDoubleTouchMode
struct UBuildSystemComp_BP_C_ShouldEnableDoubleTouchMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.IsCanPlaceBuildingBP
struct UBuildSystemComp_BP_C_IsCanPlaceBuildingBP_Params
{
	int*                                               InBuildID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ReceiveBeginPlay
struct UBuildSystemComp_BP_C_ReceiveBeginPlay_Params
{
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.InitBuildDataFromDataTable
struct UBuildSystemComp_BP_C_InitBuildDataFromDataTable_Params
{
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnConstructionComplete_Event_1
struct UBuildSystemComp_BP_C_OnConstructionComplete_Event_1_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBuildingActionType>              ConstructionType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromServer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.OnInsufficientMaterial_Event_1
struct UBuildSystemComp_BP_C_OnInsufficientMaterial_Event_1_Params
{
	TEnumAsByte<enum EBuildingActionType>              BuildType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.RegisterUIEvents
struct UBuildSystemComp_BP_C_RegisterUIEvents_Params
{
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_2
struct UBuildSystemComp_BP_C_CustomEvent_2_Params
{
	float                                              FloatValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_3
struct UBuildSystemComp_BP_C_CustomEvent_3_Params
{
	float                                              FloatValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.UpdateParameters
struct UBuildSystemComp_BP_C_UpdateParameters_Params
{
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_4
struct UBuildSystemComp_BP_C_CustomEvent_4_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_5
struct UBuildSystemComp_BP_C_CustomEvent_5_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.CustomEvent_1
struct UBuildSystemComp_BP_C_CustomEvent_1_Params
{
	float                                              FloatValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.LuaReceiveBeginPlay
struct UBuildSystemComp_BP_C_LuaReceiveBeginPlay_Params
{
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.TryAttachToMoveablePlatform
struct UBuildSystemComp_BP_C_TryAttachToMoveablePlatform_Params
{
	class AActor**                                     SpawnedBuilding;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    BuildLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BuildSystemComp_BP.BuildSystemComp_BP_C.ExecuteUbergraph_BuildSystemComp_BP
struct UBuildSystemComp_BP_C_ExecuteUbergraph_BuildSystemComp_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

