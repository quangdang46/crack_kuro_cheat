#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ThrowComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ThrowComponent.BP_ThrowComponent_C.SetPawnStateDisabled
struct UBP_ThrowComponent_C_SetPawnStateDisabled_Params
{
	class ASTExtraBaseCharacter*                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ThrowComponent.BP_ThrowComponent_C.InitializeNewProjectile
struct UBP_ThrowComponent_C_InitializeNewProjectile_Params
{
	class AEliteProjectile**                           NewProjectile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDrop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExplosionDelay;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ThrowComponent.BP_ThrowComponent_C.ReceiveThrowStateChanged
struct UBP_ThrowComponent_C_ReceiveThrowStateChanged_Params
{
	EThrowState*                                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EThrowState*                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ThrowComponent.BP_ThrowComponent_C.ReceiveBeginPlay
struct UBP_ThrowComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_ThrowComponent.BP_ThrowComponent_C.ThrowCanceledDelegate_Event_1
struct UBP_ThrowComponent_C_ThrowCanceledDelegate_Event_1_Params
{
	class UThrowComponent*                             ThrowComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ThrowComponent.BP_ThrowComponent_C.ExecuteUbergraph_BP_ThrowComponent
struct UBP_ThrowComponent_C_ExecuteUbergraph_BP_ThrowComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

