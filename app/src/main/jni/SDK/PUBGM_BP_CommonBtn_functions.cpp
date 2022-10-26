// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_CommonBtn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CommonBtn.BP_CommonBtn_C.OnChangeOpenDoorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            openmode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::OnChangeOpenDoorMode(int openmode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.OnChangeOpenDoorMode");

	UBP_CommonBtn_C_OnChangeOpenDoorMode_Params params;
	params.openmode = openmode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.UnRegistShowDoorButton
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_CommonBtn_C::UnRegistShowDoorButton()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.UnRegistShowDoorButton");

	UBP_CommonBtn_C_UnRegistShowDoorButton_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.OnShowDoorButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ECommonBtn>   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::OnShowDoorButton(TEnumAsByte<enum ECommonBtn> Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.OnShowDoorButton");

	UBP_CommonBtn_C_OnShowDoorButton_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.RegistShowDoorButton
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_CommonBtn_C::RegistShowDoorButton()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.RegistShowDoorButton");

	UBP_CommonBtn_C_RegistShowDoorButton_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.ShowDoorButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            openmode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::ShowDoorButton(bool Show, bool Open, int openmode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.ShowDoorButton");

	UBP_CommonBtn_C_ShowDoorButton_Params params;
	params.Show = Show;
	params.Open = Open;
	params.openmode = openmode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.GetPlayerController
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_STExtraPlayerController_C* PlayerController               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::GetPlayerController(class ABP_STExtraPlayerController_C** PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.GetPlayerController");

	UBP_CommonBtn_C_GetPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;
}

// Function BP_CommonBtn.BP_CommonBtn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CommonBtn_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.ReceiveBeginPlay");

	UBP_CommonBtn_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.CharacterStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNearDeath                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRescueingOther               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::CharacterStatusChanged(bool IsNearDeath, bool IsRescueingOther)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.CharacterStatusChanged");

	UBP_CommonBtn_C_CharacterStatusChanged_Params params;
	params.IsNearDeath = IsNearDeath;
	params.IsRescueingOther = IsRescueingOther;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.PlayerControllerReconnectedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_CommonBtn_C::PlayerControllerReconnectedDelegate_Event_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.PlayerControllerReconnectedDelegate_Event_1");

	UBP_CommonBtn_C_PlayerControllerReconnectedDelegate_Event_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.UI_Click
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSimulateExtraDoor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::UI_Click(bool bSimulateExtraDoor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.UI_Click");

	UBP_CommonBtn_C_UI_Click_Params params;
	params.bSimulateExtraDoor = bSimulateExtraDoor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.ToogleDoor
// (BlueprintCallable, BlueprintEvent)

void UBP_CommonBtn_C::ToogleDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.ToogleDoor");

	UBP_CommonBtn_C_ToogleDoor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.BP_ShowDoorBtn
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOpen                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           doorOpenMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::BP_ShowDoorBtn(bool* bShow, bool* bOpen, int* doorOpenMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.BP_ShowDoorBtn");

	UBP_CommonBtn_C_BP_ShowDoorBtn_Params params;
	params.bShow = bShow;
	params.bOpen = bOpen;
	params.doorOpenMode = doorOpenMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.AutoOpenDoor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::AutoOpenDoor(bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.AutoOpenDoor");

	UBP_CommonBtn_C_AutoOpenDoor_Params params;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.BP_SimulateUIClick
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bExtraDoor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::BP_SimulateUIClick(bool* bExtraDoor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.BP_SimulateUIClick");

	UBP_CommonBtn_C_BP_SimulateUIClick_Params params;
	params.bExtraDoor = bExtraDoor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_CommonBtn.BP_CommonBtn_C.ExecuteUbergraph_BP_CommonBtn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CommonBtn_C::ExecuteUbergraph_BP_CommonBtn(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_CommonBtn.BP_CommonBtn_C.ExecuteUbergraph_BP_CommonBtn");

	UBP_CommonBtn_C_ExecuteUbergraph_BP_CommonBtn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

