#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Buff_haloViolent2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_haloViolent2.Buff_haloViolent2_C
// 0x0000 (0x0140 - 0x0140)
class UBuff_haloViolent2_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Buff_haloViolent2.Buff_haloViolent2_C");
		return pStaticClass;
	}

};


}

