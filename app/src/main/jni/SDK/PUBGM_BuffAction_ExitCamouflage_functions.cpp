// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuffAction_ExitCamouflage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.GetTimeAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuffAction_ExitCamouflage_C::GetTimeAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.GetTimeAlpha");

	UBuffAction_ExitCamouflage_C_GetTimeAlpha_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.OnBPExecute
// (Event, Public, BlueprintEvent)

void UBuffAction_ExitCamouflage_C::OnBPExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.OnBPExecute");

	UBuffAction_ExitCamouflage_C_OnBPExecute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.OnBPTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DetalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuffAction_ExitCamouflage_C::OnBPTick(float* DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.OnBPTick");

	UBuffAction_ExitCamouflage_C_OnBPTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.ExecuteUbergraph_BuffAction_ExitCamouflage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuffAction_ExitCamouflage_C::ExecuteUbergraph_BuffAction_ExitCamouflage(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_ExitCamouflage.BuffAction_ExitCamouflage_C.ExecuteUbergraph_BuffAction_ExitCamouflage");

	UBuffAction_ExitCamouflage_C_ExecuteUbergraph_BuffAction_ExitCamouflage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

