#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_VehicleAvatarHandle_BP_VH_UAZ01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleAvatarHandle_BP_VH_UAZ01.VehicleAvatarHandle_BP_VH_UAZ01_C
// 0x0000 (0x0320 - 0x0320)
class UVehicleAvatarHandle_BP_VH_UAZ01_C : public UVehicleAvatarHandleBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAvatarHandle_BP_VH_UAZ01.VehicleAvatarHandle_BP_VH_UAZ01_C");
		return pStaticClass;
	}

};


}

