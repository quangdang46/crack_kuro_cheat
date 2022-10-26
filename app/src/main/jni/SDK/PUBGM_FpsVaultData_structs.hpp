#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FpsVaultData.FpsVaultData
// 0x0020
struct FFpsVaultData
{
	float                                              height_2_6778DFBB410A85EE91BEA6B781695021;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     montageName_7_CA242A584BEEC1452642F38AA6D6DBDC;           // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TimeLength_6_7FB8643042854CAE734259ADA01E6C94;            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isJunp_9_ACBB864A4F8D9AC4532F6A813ABF2CA8;                // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              movespeed_12_E5EBE4EE4240C619828D8BAC783C265D;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              speedrate_15_62D9B9D84072A09B660969889D7617FC;            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

