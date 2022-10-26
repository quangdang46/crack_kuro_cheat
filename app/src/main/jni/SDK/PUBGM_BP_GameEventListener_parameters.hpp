#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_GameEventListener_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultNearClipPlane
struct UBP_GameEventListener_C_SetDefaultNearClipPlane_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.IsIOSPlatform
struct UBP_GameEventListener_C_IsIOSPlatform_Params
{
	bool                                               IsIOS;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultRendering
struct UBP_GameEventListener_C_SetDefaultRendering_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.EnableGrassLOD
struct UBP_GameEventListener_C_EnableGrassLOD_Params
{
	int                                                Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.ChangeStreamingLevel
struct UBP_GameEventListener_C_ChangeStreamingLevel_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.InitIncaseReconnect
struct UBP_GameEventListener_C_InitIncaseReconnect_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveBeginPlay
struct UBP_GameEventListener_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.CustomEvent_1
struct UBP_GameEventListener_C_CustomEvent_1_Params
{
	TEnumAsByte<enum EGamePawnEvent>                   gamePawnEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveEndPlay
struct UBP_GameEventListener_C_ReceiveEndPlay_Params
{
	TEnumAsByte<enum EEndPlayReason>*                  EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameEventListener.BP_GameEventListener_C.UnloadTree
struct UBP_GameEventListener_C_UnloadTree_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.LoadTree
struct UBP_GameEventListener_C_LoadTree_Params
{
};

// Function BP_GameEventListener.BP_GameEventListener_C.ExecuteUbergraph_BP_GameEventListener
struct UBP_GameEventListener_C_ExecuteUbergraph_BP_GameEventListener_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

