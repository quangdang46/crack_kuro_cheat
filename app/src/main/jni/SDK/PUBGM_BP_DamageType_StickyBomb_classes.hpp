#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_DamageType_StickyBomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamageType_StickyBomb.BP_DamageType_StickyBomb_C
// 0x0000 (0x0100 - 0x0100)
class UBP_DamageType_StickyBomb_C : public USTExtraDamageType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_DamageType_StickyBomb.BP_DamageType_StickyBomb_C");
		return pStaticClass;
	}

};


}

