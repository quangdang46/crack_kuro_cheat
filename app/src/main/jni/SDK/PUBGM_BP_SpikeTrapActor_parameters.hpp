#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SpikeTrapActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCreateRuntimeMesh
struct ABP_SpikeTrapActor_C_BPCreateRuntimeMesh_Params
{
	class URuntimeMeshComponent*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCreateSplineMesh
struct ABP_SpikeTrapActor_C_BPCreateSplineMesh_Params
{
	struct FTransform                                  MeshTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class USplineMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.UserConstructionScript
struct ABP_SpikeTrapActor_C_UserConstructionScript_Params
{
};

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.AddHandle
struct ABP_SpikeTrapActor_C_AddHandle_Params
{
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCopySegmentsToAnimation
struct ABP_SpikeTrapActor_C_BPCopySegmentsToAnimation_Params
{
	TArray<struct FVector>*                            Locations;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRotator>*                           Rotations;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.OnPopped
struct ABP_SpikeTrapActor_C_OnPopped_Params
{
	struct FVector*                                    LaunchDirection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.ExecuteUbergraph_BP_SpikeTrapActor
struct ABP_SpikeTrapActor_C_ExecuteUbergraph_BP_SpikeTrapActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

