#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_GlideBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_GlideBP.BattleItemHandle_GlideBP_C
// 0x0016 (0x0C18 - 0x0C02)
class UBattleItemHandle_GlideBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0C02(0x0006) MISSED OFFSET
	class UAnimMontage*                                startAimn;                                                // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           IdleAnim;                                                 // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_GlideBP.BattleItemHandle_GlideBP_C");
		return pStaticClass;
	}


	void NewFunction_1();
};


}

