#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Buff_Protection_InvincibleEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Protection_InvincibleEffect.Buff_Protection_InvincibleEffect_C
// 0x0000 (0x0140 - 0x0140)
class UBuff_Protection_InvincibleEffect_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Buff_Protection_InvincibleEffect.Buff_Protection_InvincibleEffect_C");
		return pStaticClass;
	}

};


}

