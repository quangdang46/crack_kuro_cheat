#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_GlobalCountryInfo.BP_STRUCT_GlobalCountryInfo
// 0x003C
struct FBP_STRUCT_GlobalCountryInfo
{
	int                                                Level_0_1F196F80254C869A3D23EFF402720ABC;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ID_1_2D1134C0465CAEEB44B7481C0C6026D4;                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContinentId_2_3619094057FB59CB509DB0300E22FB54;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     CountryKey_5_0D3FB8C047E3DDBB729536F0059F8B29;            // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CountryFlag_6_07DF8D001A2225281DD98EA009F77C27;           // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WarzoneCountry_7_5E1DA80041AD1FDA51A37D2D0D6BD8D9;        // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WarzoneContinentName_8_508ED7C0494453E7235D0765073D6B35;  // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

