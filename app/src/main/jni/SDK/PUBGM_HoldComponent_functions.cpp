// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_HoldComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HoldComponent.HoldComponent_C.HoldTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHoldComponent_C::HoldTime(float* Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function HoldComponent.HoldComponent_C.HoldTime");

	UHoldComponent_C_HoldTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}

// Function HoldComponent.HoldComponent_C.Release
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHoldComponent_C::Release(TEnumAsByte<enum ETouchIndex> FingerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function HoldComponent.HoldComponent_C.Release");

	UHoldComponent_C_Release_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function HoldComponent.HoldComponent_C.Push
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHoldComponent_C::Push(int FingerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function HoldComponent.HoldComponent_C.Push");

	UHoldComponent_C_Push_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function HoldComponent.HoldComponent_C.HoldAndRelease__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FingeerIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHoldComponent_C::HoldAndRelease__DelegateSignature(int FingeerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function HoldComponent.HoldComponent_C.HoldAndRelease__DelegateSignature");

	UHoldComponent_C_HoldAndRelease__DelegateSignature_Params params;
	params.FingeerIndex = FingeerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

