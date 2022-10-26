#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct VaultData.VaultData
// 0x0050
struct FVaultData
{
	struct FString                                     montageSectionName_7_0E6EFDD2441CFF562A032DAC952922CF;    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 upCurve_69_EB26D4B04E0BF112150F9DAEBC25B4F7;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fowardCurve_31_D55B5E974DFC24E74019D6A31F141C7C;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              blockdis_28_FAA34AE04D5F621CD5FA08B1C4D4B37E;             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              blockheight_27_6E4FCDFF4446BA2250C19BB28913EBD8;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              blokcThicklength_70_9688AE2B4F2BEF79873A64A463F93E21;     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsJump_18_602D0B664C933E0434EF71A8DFFDBD7F;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               forceStartSync_39_921F70144A2C12C3A5C929BEE107315F;       // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              CountTime_44_F467486040D210D7A55E3A93FD62BD77;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              playSpeed_50_D2F6C3D243B8799B4E0FE88E44823E6D;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              speedChangeTime_58_14BE38BF403A2B6F8E94E387CB638965;      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              changeSpeedRate_61_5D150C9C4C80B4F16BD0EF8309AC2BEA;      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               standState_63_6706D1D149B7C65CE7BCB0B80179A054;           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               walkState_65_CABF0046484F703B4F0E4BA3AC9869C4;            // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SprintState_67_661945074C9AB243C7C7B98121DC76CC;          // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPutUpGun_73_29CDC65141670209C60AC7B5423932FF;           // 0x0037(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakWindowDelayTime_76_9869354F4F44910A229A82B65F612FF6; // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCancelable_78_298DE56E46F42A44C1EC8F9E8BA27BD0;         // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              MinCancelVTimer_84_5B6F3A36470D81814354F49C1D1C7B1B;      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCancelVTimer_85_94626C4447005BBF447CAE8AC5AEE74F;      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               fallingVault_88_3046B4B14EF3BA7227B5539D7C499A1A;         // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              fallingvaultMinHeight_90_25148B5C4D1A78FCE3A2BF9FD6B3E882;// 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

