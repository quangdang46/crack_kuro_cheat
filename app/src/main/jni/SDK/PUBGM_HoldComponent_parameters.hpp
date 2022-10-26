#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_HoldComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HoldComponent.HoldComponent_C.HoldTime
struct UHoldComponent_C_HoldTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HoldComponent.HoldComponent_C.Release
struct UHoldComponent_C_Release_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoldComponent.HoldComponent_C.Push
struct UHoldComponent_C_Push_Params
{
	int                                                FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoldComponent.HoldComponent_C.HoldAndRelease__DelegateSignature
struct UHoldComponent_C_HoldAndRelease__DelegateSignature_Params
{
	int                                                FingeerIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

