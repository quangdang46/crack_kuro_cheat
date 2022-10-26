#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Buff_Sustained_Teammate_Distance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Sustained_Teammate_Distance.Buff_Sustained_Teammate_Distance_C
// 0x0000 (0x0140 - 0x0140)
class UBuff_Sustained_Teammate_Distance_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Buff_Sustained_Teammate_Distance.Buff_Sustained_Teammate_Distance_C");
		return pStaticClass;
	}

};


}

