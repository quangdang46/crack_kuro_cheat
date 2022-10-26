#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuffAction_EnterCamouflage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnAvatarEquiped
struct UBuffAction_EnterCamouflage_C_OnAvatarEquiped_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquiped;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.GetTimeAlpha
struct UBuffAction_EnterCamouflage_C_GetTimeAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPExecute
struct UBuffAction_EnterCamouflage_C_OnBPExecute_Params
{
};

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPEnd
struct UBuffAction_EnterCamouflage_C_OnBPEnd_Params
{
};

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPTick
struct UBuffAction_EnterCamouflage_C_OnBPTick_Params
{
	float*                                             DetalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnItemEquiped
struct UBuffAction_EnterCamouflage_C_OnItemEquiped_Params
{
	class UMeshComponent**                             MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.ExecuteUbergraph_BuffAction_EnterCamouflage
struct UBuffAction_EnterCamouflage_C_ExecuteUbergraph_BuffAction_EnterCamouflage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

