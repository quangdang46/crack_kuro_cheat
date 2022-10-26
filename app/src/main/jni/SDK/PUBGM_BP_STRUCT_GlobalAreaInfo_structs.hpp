#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_GlobalAreaInfo.BP_STRUCT_GlobalAreaInfo
// 0x003C
struct FBP_STRUCT_GlobalAreaInfo
{
	int                                                ContinentId_1_710F0A80425FDF0A1533252E07011274;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level_2_2D2B30C04808660B1B1D739C0951A39C;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ID_3_62E8D6006D08B09E7393EDEB06F294E4;                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     CountryFlag_5_42D58E40374D1C932E8F8DEE02D6D707;           // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CountryKey_6_19F25A0016DFF63075EC9D79072D7199;            // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WarzoneContinentName_7_3DF33900596728686176CE60046F3905;  // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WarzoneCountry_8_7DBDC9402B1020876B62CADE08198AE9;        // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

