#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_MapPakTable_type.BP_STRUCT_MapPakTable_type
// 0x0054
struct FBP_STRUCT_MapPakTable_type
{
	struct FString                                     MapKey_1_4544DFC0334EDD5D34A9E30F069493F9;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                event_3_25231680475817D804605AFA03760874;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     filepre_4_2B7BC7C0632F3D5963C50A7D064EE4F5;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_7_6D2B96401074429F2CEED5770238ECF5;                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                showInDownloader_8_3CAC6FC048591B6B353B8E2C0F01DF42;      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     mapDesc_9_07F67D406147490D7FA0665A09488F13;               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                defaultMount_12_73E00C002F28DAD84178E075049562C4;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

