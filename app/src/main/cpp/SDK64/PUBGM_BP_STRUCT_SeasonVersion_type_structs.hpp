#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_SeasonVersion_type.BP_STRUCT_SeasonVersion_type
// 0x0048
struct FBP_STRUCT_SeasonVersion_type
{
	int                                                SeasonID_1_37EED6C0265C64EB753705C10E9C1764;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     MinVersion_2_631EDBC03A79884B4EECE45E0E9C857E;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MaxVersion_3_44581C4049916A796DCF1E470E9C839E;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonStartBPpath_4_238D26C06BD735631644A269091629F8;     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonSwitchBPpath_5_2323DFC07EF3F6B756B2708A0A63FE28;    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

