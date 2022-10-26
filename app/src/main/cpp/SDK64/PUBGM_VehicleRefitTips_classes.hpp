#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VehicleRefitTips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleRefitTips.VehicleRefitTips_C
// 0x0024 (0x03BC - 0x0398)
class AVehicleRefitTips_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleRefitTipsUI_C*                       tempTipsUI;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                tipState;                                                 // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleRefitTips.VehicleRefitTips_C");
		return pStaticClass;
	}


	void UpdateTipImage(const struct FString& imgPath);
	void AttachToRefitSocket(class ALobbyModelShowActorBP_C* ShowActor, int SlotID);
	void SetRefitSlot(int SlotID);
	void UserConstructionScript();
	void HideOutTipFrom1To0();
	void HideTip();
	void FadeInToTransparent();
	void ReceiveBeginPlay();
	void FadeOut();
	void FadeIn();
	void HideoutTipFromTransparentTo0();
	void ExecuteUbergraph_VehicleRefitTips(int EntryPoint);
};


}

