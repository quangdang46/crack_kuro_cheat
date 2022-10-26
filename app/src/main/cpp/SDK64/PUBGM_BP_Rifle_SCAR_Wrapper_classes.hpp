#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Rifle_SCAR_Wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_SCAR_Wrapper.BP_Rifle_SCAR_Wrapper_C
// 0x0010 (0x07E0 - 0x07D0)
class ABP_Rifle_SCAR_Wrapper_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Mag;                                                      // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_SCAR_L;                                                // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_SCAR_Wrapper.BP_Rifle_SCAR_Wrapper_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

