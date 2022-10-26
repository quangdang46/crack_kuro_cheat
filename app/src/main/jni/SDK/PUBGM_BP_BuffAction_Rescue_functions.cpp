// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_BuffAction_Rescue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.BPInitialize
// (Event, Protected, BlueprintEvent)

void UBP_BuffAction_Rescue_C::BPInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.BPInitialize");

	UBP_BuffAction_Rescue_C_BPInitialize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.OnExecuteEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_BuffAction_Rescue_C::OnExecuteEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.OnExecuteEvent");

	UBP_BuffAction_Rescue_C_OnExecuteEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.OnEndEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_BuffAction_Rescue_C::OnEndEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.OnEndEvent");

	UBP_BuffAction_Rescue_C_OnEndEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.ExecuteUbergraph_BP_BuffAction_Rescue
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BuffAction_Rescue_C::ExecuteUbergraph_BP_BuffAction_Rescue(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_BuffAction_Rescue.BP_BuffAction_Rescue_C.ExecuteUbergraph_BP_BuffAction_Rescue");

	UBP_BuffAction_Rescue_C_ExecuteUbergraph_BP_BuffAction_Rescue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

