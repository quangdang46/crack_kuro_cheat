#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngameTeamItemSys_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IngameTeamItemSys.IngameTeamItemSys_C.GetItemAddonMap
struct UIngameTeamItemSys_C_GetItemAddonMap_Params
{
	TMap<struct FString, struct FString>               AddonMap;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

}

