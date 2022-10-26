#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_SelectBuildActor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SelectBuildActor_BP.SelectBuildActor_BP_C
// 0x0000 (0x02E8 - 0x02E8)
class ASelectBuildActor_BP_C : public ASelectBuildActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass SelectBuildActor_BP.SelectBuildActor_BP_C");
		return pStaticClass;
	}

};


}

