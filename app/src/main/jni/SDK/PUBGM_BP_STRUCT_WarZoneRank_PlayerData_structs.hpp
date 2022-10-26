#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_BP_STRUCT_AvatarInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_WarZoneRank_PlayerData.BP_STRUCT_WarZoneRank_PlayerData
// 0x0030
struct FBP_STRUCT_WarZoneRank_PlayerData
{
	int                                                headid_0_3230DB004096FABC15474DC20748E694;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid_1_6181904029A6052D7F12CF9309C677C4;                   // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                sex_2_5EAB1740620C13197F13712D09C663F8;                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList_6_729655C05D11A59525EEAE1401301D14;   // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_FeatureList_4_16B771001AE8502E6F7058D606209BA4;  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                weapon_5_4D12C5C031DC1837264E9EB206781B3E;                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

