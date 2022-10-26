#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_GlideBP_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_GlideBP_Base.BattleItemHandle_GlideBP_Base_C
// 0x0000 (0x0C18 - 0x0C18)
class UBattleItemHandle_GlideBP_Base_C : public UBattleItemHandle_GlideBP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_GlideBP_Base.BattleItemHandle_GlideBP_Base_C");
		return pStaticClass;
	}

};


}

