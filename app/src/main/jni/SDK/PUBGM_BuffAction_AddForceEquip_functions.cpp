// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuffAction_AddForceEquip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuffAction_AddForceEquip.BuffAction_AddForceEquip_C.OnBPExecute
// (Event, Public, BlueprintEvent)

void UBuffAction_AddForceEquip_C::OnBPExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_AddForceEquip.BuffAction_AddForceEquip_C.OnBPExecute");

	UBuffAction_AddForceEquip_C_OnBPExecute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_AddForceEquip.BuffAction_AddForceEquip_C.OnBPEnd
// (Event, Public, BlueprintEvent)

void UBuffAction_AddForceEquip_C::OnBPEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_AddForceEquip.BuffAction_AddForceEquip_C.OnBPEnd");

	UBuffAction_AddForceEquip_C_OnBPEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_AddForceEquip.BuffAction_AddForceEquip_C.ExecuteUbergraph_BuffAction_AddForceEquip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuffAction_AddForceEquip_C::ExecuteUbergraph_BuffAction_AddForceEquip(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_AddForceEquip.BuffAction_AddForceEquip_C.ExecuteUbergraph_BuffAction_AddForceEquip");

	UBuffAction_AddForceEquip_C_ExecuteUbergraph_BuffAction_AddForceEquip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

