#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_NightVisionComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NightVisionComponent.BP_NightVisionComponent_C
// 0x0000 (0x0740 - 0x0740)
class UBP_NightVisionComponent_C : public UNightVisionComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_NightVisionComponent.BP_NightVisionComponent_C");
		return pStaticClass;
	}

};


}

