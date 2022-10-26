#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Buff_Freeze_Speed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Freeze_Speed.Buff_Freeze_Speed_C
// 0x0000 (0x0140 - 0x0140)
class UBuff_Freeze_Speed_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Buff_Freeze_Speed.Buff_Freeze_Speed_C");
		return pStaticClass;
	}

};


}

