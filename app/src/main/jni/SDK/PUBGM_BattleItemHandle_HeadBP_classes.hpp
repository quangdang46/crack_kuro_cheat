#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BattleItemHandle_HeadBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C
// 0x000E (0x0A88 - 0x0A7A)
class UBattleItemHandle_HeadBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0A7A(0x0002) MISSED OFFSET
	TArray<int>                                        BodyResIDList;                                            // 0x0A7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C");
		return pStaticClass;
	}

};


}

