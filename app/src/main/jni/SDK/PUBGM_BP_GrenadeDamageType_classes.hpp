#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_GrenadeDamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GrenadeDamageType.BP_GrenadeDamageType_C
// 0x0000 (0x0030 - 0x0030)
class UBP_GrenadeDamageType_C : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_GrenadeDamageType.BP_GrenadeDamageType_C");
		return pStaticClass;
	}

};


}

