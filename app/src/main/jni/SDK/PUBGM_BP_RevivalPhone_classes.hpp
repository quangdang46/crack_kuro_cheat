#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_RevivalPhone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevivalPhone.BP_RevivalPhone_C
// 0x0004 (0x02E4 - 0x02E0)
class ABP_RevivalPhone_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_RevivalPhone.BP_RevivalPhone_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

