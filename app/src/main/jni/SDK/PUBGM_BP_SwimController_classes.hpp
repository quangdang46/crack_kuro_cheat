#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SwimController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SwimController.BP_SwimController_C
// 0x0004 (0x0194 - 0x0190)
class UBP_SwimController_C : public UPlayerSwimComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_SwimController.BP_SwimController_C");
		return pStaticClass;
	}


	void EnterWater_BluePrint();
	void BP_UnderWaterStateChanged(bool* bEnterWater);
	void ExecuteUbergraph_BP_SwimController(int EntryPoint);
};


}

