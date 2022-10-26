#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ChangeWearingComp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChangeWearingComp.BP_ChangeWearingComp_C
// 0x0000 (0x0100 - 0x0100)
class UBP_ChangeWearingComp_C : public UChangeWearingComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ChangeWearingComp.BP_ChangeWearingComp_C");
		return pStaticClass;
	}

};


}

