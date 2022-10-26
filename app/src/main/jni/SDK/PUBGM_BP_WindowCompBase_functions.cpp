// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_WindowCompBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WindowCompBase.BP_WindowCompBase_C.callvoicecheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_WindowCompBase_C::callvoicecheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.callvoicecheck");

	UBP_WindowCompBase_C_callvoicecheck_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_WindowCompBase.BP_WindowCompBase_C.NotifyServerBroken
// (Event, Protected, BlueprintEvent)

void UBP_WindowCompBase_C::NotifyServerBroken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.NotifyServerBroken");

	UBP_WindowCompBase_C_NotifyServerBroken_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_WindowCompBase.BP_WindowCompBase_C.LocalHandleWindowBrokenBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInitial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLocal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WindowCompBase_C::LocalHandleWindowBrokenBP(bool* bInitial, bool* bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.LocalHandleWindowBrokenBP");

	UBP_WindowCompBase_C_LocalHandleWindowBrokenBP_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_WindowCompBase.BP_WindowCompBase_C.ExecuteUbergraph_BP_WindowCompBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WindowCompBase_C::ExecuteUbergraph_BP_WindowCompBase(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_WindowCompBase.BP_WindowCompBase_C.ExecuteUbergraph_BP_WindowCompBase");

	UBP_WindowCompBase_C_ExecuteUbergraph_BP_WindowCompBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

