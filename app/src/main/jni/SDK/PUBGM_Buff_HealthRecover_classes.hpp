#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Buff_HealthRecover_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HealthRecover.Buff_HealthRecover_C
// 0x0000 (0x0140 - 0x0140)
class UBuff_HealthRecover_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Buff_HealthRecover.Buff_HealthRecover_C");
		return pStaticClass;
	}

};


}

