#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_corps_race_act_config_type.BP_STRUCT_corps_race_act_config_type
// 0x01E8
struct FBP_STRUCT_corps_race_act_config_type
{
	struct FString                                     act_end_time_0_7408FFC037E53E6B52E3BD000A788415;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                act_id_1_1CE701C06A71C95F6FABA0980EFE2C54;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     act_start_time_2_531EDD80317ECE0E3837C29107C9AC45;        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     enroll_end_time_3_13D034C04C5BDFD178033B9D055CAF85;       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                limit_number_4_13AD8A8016040108531356030BF8F182;          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     res_id1_5_08B7B280759D32E620029DE10081C581;               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     res_id2_6_08B8B2C0759D32E720029DE00081C582;               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     res_id3_7_08B9B300759D32E820029DE30081C583;               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     res_num1_8_622FF3400DCB1B65285D7062081DF501;              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     res_num2_9_6230F3800DCB1B66285D7061081DF502;              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     res_num3_10_6231F3C00DCB1B67285D7060081DF503;             // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     task_end_time_11_2CBFDE803BFD067C5E7D10CC06640165;        // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     task_start_time_12_017EFC401FB3FC4F1047404D0B4AF875;      // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     valid_hours1_13_6674DD00250DEB16100323260AB26F21;         // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     valid_hours2_14_6675DD40250DEB17100323250AB26F22;         // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     valid_hours3_15_6676DD80250DEB18100323240AB26F23;         // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_res_id1_16_41B97F803250BDC24A4EC3220168CA91;           // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_res_id2_17_41BA7FC03250BDC34A4EC3230168CA92;           // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_res_id3_18_41BB80003250BDC44A4EC32C0168CA93;           // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_res_num1_19_1D1B404059B4E6F716C45118068D0611;          // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_res_num2_20_1D1C408059B4E6F816C45119068D0612;          // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_res_num3_21_1D1D40C059B4E6F916C45106068D0613;          // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_valid_hours1_22_49862A003AACC6D80A6EC24A0BC81FB1;      // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_valid_hours2_23_49872A403AACC6D90A6EC24B0BC81FB2;      // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     jk_valid_hours3_24_49882A803AACC6DA0A6EC2B40BC81FB3;      // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                limit_person_score_25_573C8CC01352A2F578AF4C490BA9D7A5;   // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FString                                     first_res_id_26_46ABA800715E946473688B9C08D8A6B4;         // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     first_res_num_27_3D9368C04A3F64EB5A8308CB0D8A713D;        // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     first_valid_hours_28_2AADB280736D7BB45401364D0ED82F53;    // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     fist_jk_res_id_29_561478800C52B5C238CB26BB02AE9A94;       // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     fist_jk_res_num_30_449BF9406AE3B49D1F5C81060AE9B39D;      // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     fist_jk_valid_hours_31_297543004B22B29603171BE400710E83;  // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

