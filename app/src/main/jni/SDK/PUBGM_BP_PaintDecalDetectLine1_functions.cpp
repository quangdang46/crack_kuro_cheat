// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PaintDecalDetectLine1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.UpdateDetectLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PaintDecalDetectLine1_C::UpdateDetectLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.UpdateDetectLine");

	ABP_PaintDecalDetectLine1_C_UpdateDetectLine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PaintDecalDetectLine1_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.UserConstructionScript");

	ABP_PaintDecalDetectLine1_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PaintDecalDetectLine1_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.ReceiveTick");

	ABP_PaintDecalDetectLine1_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.StopDetecting
// (BlueprintCallable, BlueprintEvent)

void ABP_PaintDecalDetectLine1_C::StopDetecting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.StopDetecting");

	ABP_PaintDecalDetectLine1_C_StopDetecting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.StartDetecting
// (BlueprintCallable, BlueprintEvent)

void ABP_PaintDecalDetectLine1_C::StartDetecting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.StartDetecting");

	ABP_PaintDecalDetectLine1_C_StartDetecting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PaintDecalDetectLine1_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.ReceiveBeginPlay");

	ABP_PaintDecalDetectLine1_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.ExecuteUbergraph_BP_PaintDecalDetectLine1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PaintDecalDetectLine1_C::ExecuteUbergraph_BP_PaintDecalDetectLine1(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_PaintDecalDetectLine1.BP_PaintDecalDetectLine1_C.ExecuteUbergraph_BP_PaintDecalDetectLine1");

	ABP_PaintDecalDetectLine1_C_ExecuteUbergraph_BP_PaintDecalDetectLine1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

