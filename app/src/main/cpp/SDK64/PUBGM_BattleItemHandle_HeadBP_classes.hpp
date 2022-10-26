#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_HeadBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C
// 0x0016 (0x0C18 - 0x0C02)
class UBattleItemHandle_HeadBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0C02(0x0006) MISSED OFFSET
	TArray<int>                                        BodyResIDList;                                            // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C");
		return pStaticClass;
	}

};


}

