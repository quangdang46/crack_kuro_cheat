#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_SeasonInfo_type.BP_STRUCT_SeasonInfo_type
// 0x00C0
struct FBP_STRUCT_SeasonInfo_type
{
	struct FString                                     EndTime_0_0F1BA3744D5F3DA87281BEAB14C40A90;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonName_1_4C9D5A5A493547374E8641B559BF5C60;            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     StartTime_3_516014BD440E93095B254B858865A44C;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DisplayTime_5_7E06B3934D109BD0266488B7F9BD9B8F;           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonID_6_C3D5DCA6461ABDC335A0EF8072436715;              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     TitlePath2_7_54A333006E09388C65077154088E9F02;            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TitlePath1_8_54A232C06E09388B65077157088E9F01;            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonIconPath_9_3F1A0280443460A476E6B77B08E7E268;        // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AudioPath_10_0B71C28016EB92661F82B5940A66FA48;            // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     AudioEndPath_11_683BA840434F031F60FB1FF70367CEB8;         // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonYearID_12_23F1E48041FAEDDA1E28432C0BC50254;         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     SeasonYearTabIcon_13_4E20C94010EB122F5030B51302CAAA6E;    // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonNameNew_14_1BE107C001BA4BA579EF426707ABEC77;        // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

