#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyRefitCloseUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C
// 0x0038 (0x03D0 - 0x0398)
class ABP_LobbyRefitCloseUp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ____0_time_5C46C2804013FEE671133C8FDC77B8D4;              // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               ____0__Direction_5C46C2804013FEE671133C8FDC77B8D4;        // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ˆeÙïtè_1;                                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                closeUpSlotId;                                            // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class ABP_LobbyRefitCloseUp_C*                     tempCameraCloseUp;                                        // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C");
		return pStaticClass;
	}


	void GetCameraWorldLocation(struct FVector* cameraWorldLocation);
	void UserConstructionScript();
	void ˆeÙïtè_();
	void ChanTransformWithBlend(const struct FTransform& B);
	void ExecuteUbergraph_BP_LobbyRefitCloseUp(int EntryPoint);
};


}

