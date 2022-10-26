#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CS_ReloadEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_ReloadEffect.CS_ReloadEffect_C
// 0x0000 (0x0140 - 0x0140)
class UCS_ReloadEffect_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CS_ReloadEffect.CS_ReloadEffect_C");
		return pStaticClass;
	}

};


}

