#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BattleInteractiveDataStruct.BattleInteractiveDataStruct
// 0x00B9
struct FBattleInteractiveDataStruct
{
	int                                                SkillIndex_2_1D6468514D718E7627333080FB209A4A;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       IconName_6_22CFFB1A44CD620353D81E87883E0DA7;              // 0x0004(0x000C) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Image_9_01E299E646738D7FC060038B27EF9890;                 // 0x0010(0x0098) (Edit, BlueprintVisible)
	float                                              CDTime_12_BC8E32844653869F92AF27AFA2C8A0B2;               // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<EPawnState>                                 DisallowedPawnState_16_ACA978204905C4EF34088B9F68648767;  // 0x00AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TriggerActivityFromSkillAction_18_BFD8BC9C41BC0FA191B542862807C9F0;// 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

