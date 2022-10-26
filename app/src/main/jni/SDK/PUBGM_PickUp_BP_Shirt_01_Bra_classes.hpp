#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PickUp_BP_Shirt_01_Bra_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PickUp_BP_Shirt_01_Bra.PickUp_BP_Shirt_01_Bra_C
// 0x0004 (0x0644 - 0x0640)
class APickUp_BP_Shirt_01_Bra_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Bag_03_icon;                                              // 0x0640(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PickUp_BP_Shirt_01_Bra.PickUp_BP_Shirt_01_Bra_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

