#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PickUp_BP_Pants_06_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PickUp_BP_Pants_06_B.PickUp_BP_Pants_06_B_C
// 0x0008 (0x07D8 - 0x07D0)
class APickUp_BP_Pants_06_B_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Bag_03_icon;                                              // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PickUp_BP_Pants_06_B.PickUp_BP_Pants_06_B_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

