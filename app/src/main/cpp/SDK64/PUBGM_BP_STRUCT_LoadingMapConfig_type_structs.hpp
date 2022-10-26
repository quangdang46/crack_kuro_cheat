#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_LoadingMapConfig_type.BP_STRUCT_LoadingMapConfig_type
// 0x0038
struct FBP_STRUCT_LoadingMapConfig_type
{
	int                                                id_0_52F0E54063D172533DDCEE3F06CF7B54;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     maps_1_38411E4070E4C6573956B5480F7C9EB3;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     zones_2_221A9DC045D2FC2561D7C71B07BB4833;                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     switch_3_561B5680076845FE4FF885840A0CC5E8;                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

