#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_VehicleShowFrameComp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleShowFrameComp.BP_VehicleShowFrameComp_C
// 0x0000 (0x0310 - 0x0310)
class UBP_VehicleShowFrameComp_C : public UShowActorFrameComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_VehicleShowFrameComp.BP_VehicleShowFrameComp_C");
		return pStaticClass;
	}

};


}

