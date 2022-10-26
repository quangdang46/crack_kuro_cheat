// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_GameEventListener_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultNearClipPlane
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::SetDefaultNearClipPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultNearClipPlane");

	UBP_GameEventListener_C_SetDefaultNearClipPlane_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.IsIOSPlatform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsIOS                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::IsIOSPlatform(bool* IsIOS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.IsIOSPlatform");

	UBP_GameEventListener_C_IsIOSPlatform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsIOS != nullptr)
		*IsIOS = params.IsIOS;
}

// Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultRendering
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::SetDefaultRendering()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultRendering");

	UBP_GameEventListener_C_SetDefaultRendering_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.EnableGrassLOD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::EnableGrassLOD(int Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.EnableGrassLOD");

	UBP_GameEventListener_C_EnableGrassLOD_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.ChangeStreamingLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::ChangeStreamingLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ChangeStreamingLevel");

	UBP_GameEventListener_C_ChangeStreamingLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.InitIncaseReconnect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::InitIncaseReconnect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.InitIncaseReconnect");

	UBP_GameEventListener_C_InitIncaseReconnect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GameEventListener_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ReceiveBeginPlay");

	UBP_GameEventListener_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EGamePawnEvent> gamePawnEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::CustomEvent_1(TEnumAsByte<enum EGamePawnEvent> gamePawnEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.CustomEvent_1");

	UBP_GameEventListener_C_CustomEvent_1_Params params;
	params.gamePawnEvent = gamePawnEvent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EEndPlayReason>* EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::ReceiveEndPlay(TEnumAsByte<enum EEndPlayReason>* EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ReceiveEndPlay");

	UBP_GameEventListener_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.UnloadTree
// (BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::UnloadTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.UnloadTree");

	UBP_GameEventListener_C_UnloadTree_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.LoadTree
// (BlueprintCallable, BlueprintEvent)

void UBP_GameEventListener_C::LoadTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.LoadTree");

	UBP_GameEventListener_C_LoadTree_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_GameEventListener.BP_GameEventListener_C.ExecuteUbergraph_BP_GameEventListener
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameEventListener_C::ExecuteUbergraph_BP_GameEventListener(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_GameEventListener.BP_GameEventListener_C.ExecuteUbergraph_BP_GameEventListener");

	UBP_GameEventListener_C_ExecuteUbergraph_BP_GameEventListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

