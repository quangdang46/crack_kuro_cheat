#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_AutoAimingComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckInAngle
struct UBP_AutoAimingComponent_C_CheckInAngle_Params
{
	class ASTExtraBaseCharacter**                      MyPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter**                      EnemyPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxAngle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CheckSmoke
struct UBP_AutoAimingComponent_C_CheckSmoke_Params
{
	struct FVector*                                    StartPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ASTExtraPlayerCharacter**                    Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AutoAimingComponent.BP_AutoAimingComponent_C.CanEnemeyRaycastReach
struct UBP_AutoAimingComponent_C_CanEnemeyRaycastReach_Params
{
	struct FVector*                                    StartPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ASTExtraPlayerCharacter**                    Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

