#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PickUp_BP_Shoes_02_C_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PickUp_BP_Shoes_02_C.PickUp_BP_Shoes_02_C_C
// 0x0008 (0x07D8 - 0x07D0)
class APickUp_BP_Shoes_02_C_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        ST_ShortShoes_Pickup;                                     // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PickUp_BP_Shoes_02_C.PickUp_BP_Shoes_02_C_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

