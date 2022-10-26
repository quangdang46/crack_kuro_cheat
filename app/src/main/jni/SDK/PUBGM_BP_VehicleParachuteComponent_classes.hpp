#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_VehicleParachuteComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleParachuteComponent.BP_VehicleParachuteComponent_C
// 0x0010 (0x0180 - 0x0170)
class UBP_VehicleParachuteComponent_C : public UVehicleParachuteComponent
{
public:
	float                                              CameraTargetArmLength;                                    // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraRelativeLocation;                                   // 0x0174(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_VehicleParachuteComponent.BP_VehicleParachuteComponent_C");
		return pStaticClass;
	}

};


}

