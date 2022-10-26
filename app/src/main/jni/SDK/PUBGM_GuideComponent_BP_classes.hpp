#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_GuideComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GuideComponent_BP.GuideComponent_BP_C
// 0x0009 (0x00F9 - 0x00F0)
class UGuideComponent_BP_C : public UGuideComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0004) (Transient, DuplicateTransient)
	int                                                guideStep;                                                // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass GuideComponent_BP.GuideComponent_BP_C");
		return pStaticClass;
	}


	void ShowGuideByStep();
	void AddUIGuide(class UWidget* widget1, int guildUI1, const struct FVector2D& offset1, const struct FVector2D& size1, int childData1);
	void InitUIGuide();
	void CreateGuideUI();
	void ExecuteUbergraph_GuideComponent_BP(int EntryPoint);
};


}

