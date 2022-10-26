#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_BP_Shirt_01_Bra_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_BP_Shirt_01_Bra.BattleItemHandle_BP_Shirt_01_Bra_C
// 0x0000 (0x0C02 - 0x0C02)
class UBattleItemHandle_BP_Shirt_01_Bra_C : public UBattleItemHandle_AvatarBP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_BP_Shirt_01_Bra.BattleItemHandle_BP_Shirt_01_Bra_C");
		return pStaticClass;
	}

};


}

