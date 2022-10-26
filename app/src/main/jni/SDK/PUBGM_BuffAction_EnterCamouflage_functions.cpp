// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuffAction_EnterCamouflage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnAvatarEquiped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAvatarSlotType                SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquiped                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuffAction_EnterCamouflage_C::OnAvatarEquiped(EAvatarSlotType SlotType, bool IsEquiped, int InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnAvatarEquiped");

	UBuffAction_EnterCamouflage_C_OnAvatarEquiped_Params params;
	params.SlotType = SlotType;
	params.IsEquiped = IsEquiped;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.GetTimeAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBuffAction_EnterCamouflage_C::GetTimeAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.GetTimeAlpha");

	UBuffAction_EnterCamouflage_C_GetTimeAlpha_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPExecute
// (Event, Public, BlueprintEvent)

void UBuffAction_EnterCamouflage_C::OnBPExecute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPExecute");

	UBuffAction_EnterCamouflage_C_OnBPExecute_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPEnd
// (Event, Public, BlueprintEvent)

void UBuffAction_EnterCamouflage_C::OnBPEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPEnd");

	UBuffAction_EnterCamouflage_C_OnBPEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DetalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuffAction_EnterCamouflage_C::OnBPTick(float* DetalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnBPTick");

	UBuffAction_EnterCamouflage_C_OnBPTick_Params params;
	params.DetalTime = DetalTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnItemEquiped
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMeshComponent**         MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuffAction_EnterCamouflage_C::OnItemEquiped(class UMeshComponent** MeshComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.OnItemEquiped");

	UBuffAction_EnterCamouflage_C_OnItemEquiped_Params params;
	params.MeshComp = MeshComp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.ExecuteUbergraph_BuffAction_EnterCamouflage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuffAction_EnterCamouflage_C::ExecuteUbergraph_BuffAction_EnterCamouflage(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BuffAction_EnterCamouflage.BuffAction_EnterCamouflage_C.ExecuteUbergraph_BuffAction_EnterCamouflage");

	UBuffAction_EnterCamouflage_C_ExecuteUbergraph_BuffAction_EnterCamouflage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

