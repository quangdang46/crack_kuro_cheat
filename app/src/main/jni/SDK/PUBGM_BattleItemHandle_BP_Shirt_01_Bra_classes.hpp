#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BattleItemHandle_BP_Shirt_01_Bra_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_BP_Shirt_01_Bra.BattleItemHandle_BP_Shirt_01_Bra_C
// 0x0000 (0x0A7A - 0x0A7A)
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

