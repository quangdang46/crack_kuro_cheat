#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_LBSRegionLevelConfig_type.BP_STRUCT_LBSRegionLevelConfig_type
// 0x0088
struct FBP_STRUCT_LBSRegionLevelConfig_type
{
	int                                                ID_0_60D74D80503C16AA0CA445020AD7BB64;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name_2_510F4A807BA4F1B64A63DFBE07BCFEE5;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                continent_id_3_74EBC9C078776E6754C7CD4A0E0528A4;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     continent_name_4_07277EC0400422A17EA6C9BC05291A35;        // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     country_5_7303CF40515507315141DA3103C72009;               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     father_6_70EF08C00C220503249A5C0209727972;                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     hide_7_4AD1B0C05B4BDD614952094507B95575;                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_8_7E7E70403D91557B752B11020BA961CC;                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     sort_key_9_4149464056F4B9771857A3640C4FF9F9;              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RewardsBlock_10_275E1B005283818269D2C0FF014F3AAB;         // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

