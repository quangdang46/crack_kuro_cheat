#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_corps_race_image_cfg_type.BP_STRUCT_corps_race_image_cfg_type
// 0x0038
struct FBP_STRUCT_corps_race_image_cfg_type
{
	int                                                index_0_42EC10007593749C4C13968A0FCB1D68;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     pic_url_1_1A01658011CD21067B3734D203B0C35C;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     india_pic_url_2_32BBFE803B4E9130238A13B50DE6362C;         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jp_pic_url_3_377D53C02E80E3DB4320B93A0C062D9C;            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

