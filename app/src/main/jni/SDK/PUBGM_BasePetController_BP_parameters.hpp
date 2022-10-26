#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BasePetController_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BasePetController_BP.BasePetController_BP_C.CalcInAirAttackArea
struct ABasePetController_BP_C_CalcInAirAttackArea_Params
{
};

// Function BasePetController_BP.BasePetController_BP_C.OnPlayerStopEmote
struct ABasePetController_BP_C_OnPlayerStopEmote_Params
{
	int                                                EmoteId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetController_BP.BasePetController_BP_C.OnPlayerPlayEmote
struct ABasePetController_BP_C_OnPlayerPlayEmote_Params
{
	int                                                Emote;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetController_BP.BasePetController_BP_C.UserConstructionScript
struct ABasePetController_BP_C_UserConstructionScript_Params
{
};

// Function BasePetController_BP.BasePetController_BP_C.ReceiveBeginPlay
struct ABasePetController_BP_C_ReceiveBeginPlay_Params
{
};

// Function BasePetController_BP.BasePetController_BP_C.OnAirAttackEvent
struct ABasePetController_BP_C_OnAirAttackEvent_Params
{
	TEnumAsByte<enum EAirAttackInfo>                   airattacktype;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                waveindex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasePetController_BP.BasePetController_BP_C.ExecuteUbergraph_BasePetController_BP
struct ABasePetController_BP_C_ExecuteUbergraph_BasePetController_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

