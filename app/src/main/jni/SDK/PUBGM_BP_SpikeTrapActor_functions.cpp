// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SpikeTrapActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCreateRuntimeMesh
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URuntimeMeshComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URuntimeMeshComponent* ABP_SpikeTrapActor_C::BPCreateRuntimeMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCreateRuntimeMesh");

	ABP_SpikeTrapActor_C_BPCreateRuntimeMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCreateSplineMesh
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              MeshTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class USplineMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USplineMeshComponent* ABP_SpikeTrapActor_C::BPCreateSplineMesh(struct FTransform* MeshTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCreateSplineMesh");

	ABP_SpikeTrapActor_C_BPCreateSplineMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MeshTransform != nullptr)
		*MeshTransform = params.MeshTransform;

	return params.ReturnValue;
}

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpikeTrapActor_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.UserConstructionScript");

	ABP_SpikeTrapActor_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.AddHandle
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_SpikeTrapActor_C::AddHandle(struct FTransform* Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.AddHandle");

	ABP_SpikeTrapActor_C_AddHandle_Params params;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCopySegmentsToAnimation
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FVector>*        Locations                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRotator>*       Rotations                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_SpikeTrapActor_C::BPCopySegmentsToAnimation(TArray<struct FVector>* Locations, TArray<struct FRotator>* Rotations)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.BPCopySegmentsToAnimation");

	ABP_SpikeTrapActor_C_BPCopySegmentsToAnimation_Params params;
	params.Locations = Locations;
	params.Rotations = Rotations;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.OnPopped
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector*                LaunchDirection                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_SpikeTrapActor_C::OnPopped(struct FVector* LaunchDirection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.OnPopped");

	ABP_SpikeTrapActor_C_OnPopped_Params params;
	params.LaunchDirection = LaunchDirection;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.ExecuteUbergraph_BP_SpikeTrapActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrapActor_C::ExecuteUbergraph_BP_SpikeTrapActor(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrapActor.BP_SpikeTrapActor_C.ExecuteUbergraph_BP_SpikeTrapActor");

	ABP_SpikeTrapActor_C_ExecuteUbergraph_BP_SpikeTrapActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

