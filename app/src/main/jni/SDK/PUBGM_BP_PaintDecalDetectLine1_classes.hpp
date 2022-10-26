#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PaintDecalDetectLine1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C
// 0x0018 (0x02F8 - 0x02E0)
class ABP_PaintDecalDetectLine1_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0004) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachePos;                                                 // 0x02EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C");
		return pStaticClass;
	}


	void UpdateDetectLine();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void StopDetecting();
	void StartDetecting();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PaintDecalDetectLine1(int EntryPoint);
};


}

