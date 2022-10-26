#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_LoadingResourceConfig_type.BP_STRUCT_LoadingResourceConfig_type
// 0x0060
struct FBP_STRUCT_LoadingResourceConfig_type
{
	struct FString                                     begin_time_0_0EC8014070B48F3525879F5F0E31CFE5;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     end_time_1_09FDCDC0596A0DC160D8CFCD0EA4B955;              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     groups_2_4763248079AC892C2793871D07036E63;                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_3_4585CFC01C9328B9068F51240A021714;                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     path_4_4399E7C0726004CF009573C5021682A8;                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                weight_5_0C065E804AC03F1C454244BA0631FFE4;                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     loading_tip_7_2E177F005B74177814D7D4AB0FC29E80;           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

