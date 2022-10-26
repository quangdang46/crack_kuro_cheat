#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_GuideComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GuideComponent_BP.GuideComponent_BP_C.ShowGuideByStep
struct UGuideComponent_BP_C_ShowGuideByStep_Params
{
};

// Function GuideComponent_BP.GuideComponent_BP_C.AddUIGuide
struct UGuideComponent_BP_C_AddUIGuide_Params
{
	class UWidget*                                     widget1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                guildUI1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   offset1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   size1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                childData1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GuideComponent_BP.GuideComponent_BP_C.InitUIGuide
struct UGuideComponent_BP_C_InitUIGuide_Params
{
};

// Function GuideComponent_BP.GuideComponent_BP_C.CreateGuideUI
struct UGuideComponent_BP_C_CreateGuideUI_Params
{
};

// Function GuideComponent_BP.GuideComponent_BP_C.ExecuteUbergraph_GuideComponent_BP
struct UGuideComponent_BP_C_ExecuteUbergraph_GuideComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

