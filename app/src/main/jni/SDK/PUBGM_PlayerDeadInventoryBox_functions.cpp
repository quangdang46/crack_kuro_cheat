// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PlayerDeadInventoryBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.LuaCheckCanPlayAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanPlayAudio                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::LuaCheckCanPlayAudio(bool* bCanPlayAudio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.LuaCheckCanPlayAudio");

	APlayerDeadInventoryBox_C_LuaCheckCanPlayAudio_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bCanPlayAudio != nullptr)
		*bCanPlayAudio = params.bCanPlayAudio;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetGroundLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector APlayerDeadInventoryBox_C::GetGroundLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetGroundLocation");

	APlayerDeadInventoryBox_C_GetGroundLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetVector4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Dest                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::GetVector4(const struct FVector& Dest, float Ratio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetVector4");

	APlayerDeadInventoryBox_C_GetVector4_Params params;
	params.Dest = Dest;
	params.Ratio = Ratio;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.UserConstructionScript");

	APlayerDeadInventoryBox_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__FinishedFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::MatParamTimeline__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__FinishedFunc");

	APlayerDeadInventoryBox_C_MatParamTimeline__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__UpdateFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::MatParamTimeline__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__UpdateFunc");

	APlayerDeadInventoryBox_C_MatParamTimeline__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__FinishedFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::PitchTimeline__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__FinishedFunc");

	APlayerDeadInventoryBox_C_PitchTimeline__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__UpdateFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::PitchTimeline__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__UpdateFunc");

	APlayerDeadInventoryBox_C_PitchTimeline__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__FinishedFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::CameraMove__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__FinishedFunc");

	APlayerDeadInventoryBox_C_CameraMove__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__UpdateFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::CameraMove__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__UpdateFunc");

	APlayerDeadInventoryBox_C_CameraMove__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerDeadInventoryBox_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerDeadInventoryBox_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerDeadInventoryBox_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveBeginPlay");

	APlayerDeadInventoryBox_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.SwitchToDeadTombBox
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::SwitchToDeadTombBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.SwitchToDeadTombBox");

	APlayerDeadInventoryBox_C_SwitchToDeadTombBox_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveTick");

	APlayerDeadInventoryBox_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowNormal
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::ShowNormal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowNormal");

	APlayerDeadInventoryBox_C_ShowNormal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.HideDeadTombApparence
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::HideDeadTombApparence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.HideDeadTombApparence");

	APlayerDeadInventoryBox_C_HideDeadTombApparence_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowShine
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::ShowShine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowShine");

	APlayerDeadInventoryBox_C_ShowShine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	APlayerDeadInventoryBox_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ExecuteUbergraph_PlayerDeadInventoryBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::ExecuteUbergraph_PlayerDeadInventoryBox(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ExecuteUbergraph_PlayerDeadInventoryBox");

	APlayerDeadInventoryBox_C_ExecuteUbergraph_PlayerDeadInventoryBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

