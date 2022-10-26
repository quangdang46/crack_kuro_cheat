#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngameMapSys_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IngameMapSys.IngameMapSys_C.CheckNeedMiniMap
struct UIngameMapSys_C_CheckNeedMiniMap_Params
{
	bool                                               bNeed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IngameMapSys.IngameMapSys_C.CheckUseNewMap
struct UIngameMapSys_C_CheckUseNewMap_Params
{
	bool                                               Use;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IngameMapSys.IngameMapSys_C.CheckCloseMiniMap
struct UIngameMapSys_C_CheckCloseMiniMap_Params
{
	bool                                               needClose;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IngameMapSys.IngameMapSys_C.OpenOrHideEntireMap
struct UIngameMapSys_C_OpenOrHideEntireMap_Params
{
};

// Function IngameMapSys.IngameMapSys_C.GetMapDataPath
struct UIngameMapSys_C_GetMapDataPath_Params
{
	class AGameStateBase*                              GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMapType>                         MapType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function IngameMapSys.IngameMapSys_C.GetShowMakerLocation
struct UIngameMapSys_C_GetShowMakerLocation_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IngameMapSys.IngameMapSys_C.SetShowMakerLocation
struct UIngameMapSys_C_SetShowMakerLocation_Params
{
};

// Function IngameMapSys.IngameMapSys_C.GetPlayerColorByIndexC
struct UIngameMapSys_C_GetPlayerColorByIndexC_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

}

