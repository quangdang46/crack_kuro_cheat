#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MinitvAvatarComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C.MakeAvatarTableData
struct UMinitvAvatarComponent_BP_C_MakeAvatarTableData_Params
{
	struct FItemDefineID                               InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAvatarTableData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinitvAvatarComponent_BP.MinitvAvatarComponent_BP_C.RayEquipItemById
struct UMinitvAvatarComponent_BP_C_RayEquipItemById_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

