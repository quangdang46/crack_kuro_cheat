// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_QuickSignComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HidPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// EQuickSignSubType              MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::SetDistanceText(const struct FVector& HidPosition, EQuickSignSubType MsgType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetDistanceText");

	UQuickSignComponent_BP_C_SetDistanceText_Params params;
	params.HidPosition = HidPosition;
	params.MsgType = MsgType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetAudioEventAndBank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            audioID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutBankName                    (Parm, OutParm, ZeroConstructor)
// struct FString                 OutEventName                   (Parm, OutParm, ZeroConstructor)

void UQuickSignComponent_BP_C::GetAudioEventAndBank(int audioID, int ActorId, struct FString* OutBankName, struct FString* OutEventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetAudioEventAndBank");

	UQuickSignComponent_BP_C_GetAudioEventAndBank_Params params;
	params.audioID = audioID;
	params.ActorId = ActorId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBankName != nullptr)
		*OutBankName = params.OutBankName;
	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetLocalizeActorID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AudioKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActorId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::GetLocalizeActorID(int AudioKey, int* ActorId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetLocalizeActorID");

	UQuickSignComponent_BP_C_GetLocalizeActorID_Params params;
	params.AudioKey = AudioKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActorId != nullptr)
		*ActorId = params.ActorId;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceAndText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg           msgItem                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSelf                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::PlayVoiceAndText(const struct FQuickSignMsg& msgItem, bool IsSelf)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceAndText");

	UQuickSignComponent_BP_C_PlayVoiceAndText_Params params;
	params.msgItem = msgItem;
	params.IsSelf = IsSelf;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetVoiceAudioID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuickSignSubType*             MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UQuickSignComponent_BP_C::GetVoiceAudioID(EQuickSignSubType* MsgType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetVoiceAudioID");

	UQuickSignComponent_BP_C_GetVoiceAudioID_Params params;
	params.MsgType = MsgType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetStrArgument
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuickSignID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StringParam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 StrArgument                    (Parm, OutParm, ZeroConstructor)

void UQuickSignComponent_BP_C::GetStrArgument(const struct FString& QuickSignID, const struct FString& StringParam, struct FString* StrArgument)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetStrArgument");

	UQuickSignComponent_BP_C_GetStrArgument_Params params;
	params.QuickSignID = QuickSignID;
	params.StringParam = StringParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (StrArgument != nullptr)
		*StrArgument = params.StrArgument;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.OrganizeMsg
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TextId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsSelf                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StrParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 HitPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// EQuickSignSubType              MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MsgString                      (Parm, OutParm, ZeroConstructor)

void UQuickSignComponent_BP_C::OrganizeMsg(int TextId, const struct FString& PlayerName, bool IsSelf, const struct FString& StrParam, const struct FVector& HitPos, EQuickSignSubType MsgType, struct FString* MsgString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.OrganizeMsg");

	UQuickSignComponent_BP_C_OrganizeMsg_Params params;
	params.TextId = TextId;
	params.PlayerName = PlayerName;
	params.IsSelf = IsSelf;
	params.StrParam = StrParam;
	params.HitPos = HitPos;
	params.MsgType = MsgType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MsgString != nullptr)
		*MsgString = params.MsgString;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PickupWrapperActorHandle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FQuickSignMark          MarkInfo                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickSignComponent_BP_C::PickupWrapperActorHandle(const struct FString& Param, struct FQuickSignMark* MarkInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.PickupWrapperActorHandle");

	UQuickSignComponent_BP_C_PickupWrapperActorHandle_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MarkInfo != nullptr)
		*MarkInfo = params.MarkInfo;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GenerateMarkInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg           msgItem                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQuickSignMark          MarkInfo                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuickSignComponent_BP_C::GenerateMarkInfo(struct FQuickSignMsg* msgItem, struct FQuickSignMark* MarkInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.GenerateMarkInfo");

	UQuickSignComponent_BP_C_GenerateMarkInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (msgItem != nullptr)
		*msgItem = params.msgItem;
	if (MarkInfo != nullptr)
		*MarkInfo = params.MarkInfo;

	return params.ReturnValue;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.LoadConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuickSignComponent_BP_C::LoadConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.LoadConfig");

	UQuickSignComponent_BP_C_LoadConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UQuickSignComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReceiveBeginPlay");

	UQuickSignComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ShowMsgTipsVoice
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg*          msgItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          IsSelf                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::ShowMsgTipsVoice(struct FQuickSignMsg* msgItem, bool* IsSelf)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ShowMsgTipsVoice");

	UQuickSignComponent_BP_C_ShowMsgTipsVoice_Params params;
	params.msgItem = msgItem;
	params.IsSelf = IsSelf;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceCD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::PlayVoiceCD(float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceCD");

	UQuickSignComponent_BP_C_PlayVoiceCD_Params params;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReportQuickSign
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FQuickSignMsg*          msgItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuickSignComponent_BP_C::ReportQuickSign(struct FQuickSignMsg* msgItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReportQuickSign");

	UQuickSignComponent_BP_C_ReportQuickSign_Params params;
	params.msgItem = msgItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ExecuteUbergraph_QuickSignComponent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickSignComponent_BP_C::ExecuteUbergraph_QuickSignComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function QuickSignComponent_BP.QuickSignComponent_BP_C.ExecuteUbergraph_QuickSignComponent_BP");

	UQuickSignComponent_BP_C_ExecuteUbergraph_QuickSignComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

