#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_UnderWaterCamEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnderWaterCamEffect.BP_UnderWaterCamEffect_C
// 0x0000 (0x0760 - 0x0760)
class UBP_UnderWaterCamEffect_C : public UInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_UnderWaterCamEffect.BP_UnderWaterCamEffect_C");
		return pStaticClass;
	}

};


}

