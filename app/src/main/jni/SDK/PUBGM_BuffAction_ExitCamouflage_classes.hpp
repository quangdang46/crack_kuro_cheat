#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuffAction_ExitCamouflage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C
// 0x0010 (0x0048 - 0x0038)
class UBuffAction_ExitCamouflage_C : public USTBuffAction_SurvivorReplaceMaterial
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0004) (Transient, DuplicateTransient)
	float                                              TickTimer;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickInterval;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    EquipedMaterial;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C");
		return pStaticClass;
	}


	float GetTimeAlpha();
	void OnBPExecute();
	void OnBPTick(float* DetalTime);
	void ExecuteUbergraph_BuffAction_ExitCamouflage(int EntryPoint);
};


}

