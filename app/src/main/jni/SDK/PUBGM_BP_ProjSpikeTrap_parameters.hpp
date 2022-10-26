#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ProjSpikeTrap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.UserConstructionScript
struct ABP_ProjSpikeTrap_C_UserConstructionScript_Params
{
};

// Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.ReceiveProjectileBouncedEvent
struct ABP_ProjSpikeTrap_C_ReceiveProjectileBouncedEvent_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ProjSpikeTrap.BP_ProjSpikeTrap_C.ExecuteUbergraph_BP_ProjSpikeTrap
struct ABP_ProjSpikeTrap_C_ExecuteUbergraph_BP_ProjSpikeTrap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

