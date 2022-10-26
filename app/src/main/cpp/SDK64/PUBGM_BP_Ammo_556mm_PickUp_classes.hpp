#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Ammo_556mm_PickUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ammo_556mm_PickUp.BP_Ammo_556mm_Pickup_C
// 0x0008 (0x07D8 - 0x07D0)
class ABP_Ammo_556mm_Pickup_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        SM_Ammo_556mm;                                            // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Ammo_556mm_PickUp.BP_Ammo_556mm_Pickup_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

