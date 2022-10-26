#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_WeaponAttrBPTable_type.BP_STRUCT_WeaponAttrBPTable_type
// 0x0060
struct FBP_STRUCT_WeaponAttrBPTable_type
{
	struct FString                                     AttachmentSkinIDList_1_68C117003440A0EE1A2DDA300D678804;  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BPID_2_5A4F6D006A4E746E1527F1660046AA94;                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<int>                                        AttachmentIDList_a_5_6E7001C028E30A41653FBE36025F1751;    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ParentIDList_a_6_3486FA0030D9987A663B62F90FFCB731;        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DeadInventoryBoxPath_7_1883E1C0339C8C7958767FF2080EC2C8;  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PendantID_8_32B77B0039C6C1D620F9E77400A423B4;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     DeadInventoryBoxIDs_10_7CB7FE8050FC74B432EE0A820680F713;  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

