#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Rifle_M16A4_Wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_M16A4_Wrapper.BP_Rifle_M16A4_Wrapper_C
// 0x000C (0x064C - 0x0640)
class ABP_Rifle_M16A4_Wrapper_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Mag;                                                      // 0x0640(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0644(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_M16A4;                                                 // 0x0648(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_M16A4_Wrapper.BP_Rifle_M16A4_Wrapper_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

