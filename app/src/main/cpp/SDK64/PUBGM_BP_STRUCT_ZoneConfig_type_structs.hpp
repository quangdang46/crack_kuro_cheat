#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_ZoneConfig_type.BP_STRUCT_ZoneConfig_type
// 0x0048
struct FBP_STRUCT_ZoneConfig_type
{
	struct FString                                     NameInChinese_0_179F480A43D68450578ED9A60DFEB1E4;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NameInEnglish_1_B81817404D37E6DECDF39182C3C84D5D;         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ZoneID_2_25BADFA44D29882BDEA26BA1D8923C64;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     GVoiceServer_3_D482EC9D4F05594214C23F9157E39271;          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Abbreviation_6_4C2637806FA82E564BCE6B490463DB5E;          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

