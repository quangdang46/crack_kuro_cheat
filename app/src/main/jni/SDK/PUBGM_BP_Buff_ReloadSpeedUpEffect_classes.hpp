#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Buff_ReloadSpeedUpEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Buff_ReloadSpeedUpEffect.BP_Buff_ReloadSpeedUpEffect_C
// 0x0000 (0x0140 - 0x0140)
class UBP_Buff_ReloadSpeedUpEffect_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Buff_ReloadSpeedUpEffect.BP_Buff_ReloadSpeedUpEffect_C");
		return pStaticClass;
	}

};


}

