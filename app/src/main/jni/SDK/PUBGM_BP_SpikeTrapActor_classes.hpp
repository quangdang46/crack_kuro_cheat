#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SpikeTrapActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpikeTrapActor.BP_SpikeTrapActor_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_SpikeTrapActor_C : public ASpikeTrapActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0004) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_SpikeTrapActor.BP_SpikeTrapActor_C");
		return pStaticClass;
	}


	class URuntimeMeshComponent* BPCreateRuntimeMesh();
	class USplineMeshComponent* BPCreateSplineMesh(struct FTransform* MeshTransform);
	void UserConstructionScript();
	void AddHandle(struct FTransform* Transform);
	void BPCopySegmentsToAnimation(TArray<struct FVector>* Locations, TArray<struct FRotator>* Rotations);
	void OnPopped(struct FVector* LaunchDirection);
	void ExecuteUbergraph_BP_SpikeTrapActor(int EntryPoint);
};


}

