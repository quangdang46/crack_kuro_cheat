#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CS_Land_Heavy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_Land_Heavy.CS_Land_Heavy_C
// 0x0000 (0x0140 - 0x0140)
class UCS_Land_Heavy_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CS_Land_Heavy.CS_Land_Heavy_C");
		return pStaticClass;
	}

};


}

