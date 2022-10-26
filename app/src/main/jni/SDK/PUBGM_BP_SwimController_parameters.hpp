#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SwimController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SwimController.BP_SwimController_C.EnterWater_BluePrint
struct UBP_SwimController_C_EnterWater_BluePrint_Params
{
};

// Function BP_SwimController.BP_SwimController_C.BP_UnderWaterStateChanged
struct UBP_SwimController_C_BP_UnderWaterStateChanged_Params
{
	bool*                                              bEnterWater;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimController.BP_SwimController_C.ExecuteUbergraph_BP_SwimController
struct UBP_SwimController_C_ExecuteUbergraph_BP_SwimController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

