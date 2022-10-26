#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_DownloaderTable_type.BP_STRUCT_DownloaderTable_type
// 0x0038
struct FBP_STRUCT_DownloaderTable_type
{
	struct FString                                     BundleContent_0_1AACD08017EAD48E3276DC230B38BEB4;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BundleIcon_1_59383C0037BF3F0634905A63016ECF8E;            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BundleID_2_406A9D004C9B983857CE26E707D16EE4;              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     BundleName_3_25231A005CD41C383490E2A8016F71E5;            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

