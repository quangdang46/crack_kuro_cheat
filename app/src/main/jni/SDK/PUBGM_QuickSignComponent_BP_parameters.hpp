#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_QuickSignComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.SetDistanceText
struct UQuickSignComponent_BP_C_SetDistanceText_Params
{
	struct FVector                                     HidPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	EQuickSignSubType                                  MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetAudioEventAndBank
struct UQuickSignComponent_BP_C_GetAudioEventAndBank_Params
{
	int                                                audioID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutBankName;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     OutEventName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetLocalizeActorID
struct UQuickSignComponent_BP_C_GetLocalizeActorID_Params
{
	int                                                AudioKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActorId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceAndText
struct UQuickSignComponent_BP_C_PlayVoiceAndText_Params
{
	struct FQuickSignMsg                               msgItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSelf;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetVoiceAudioID
struct UQuickSignComponent_BP_C_GetVoiceAudioID_Params
{
	EQuickSignSubType*                                 MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GetStrArgument
struct UQuickSignComponent_BP_C_GetStrArgument_Params
{
	struct FString                                     QuickSignID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     StringParam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     StrArgument;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.OrganizeMsg
struct UQuickSignComponent_BP_C_OrganizeMsg_Params
{
	int                                                TextId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsSelf;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StrParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     HitPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	EQuickSignSubType                                  MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PickupWrapperActorHandle
struct UQuickSignComponent_BP_C_PickupWrapperActorHandle_Params
{
	struct FString                                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FQuickSignMark                              MarkInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.GenerateMarkInfo
struct UQuickSignComponent_BP_C_GenerateMarkInfo_Params
{
	struct FQuickSignMsg                               msgItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQuickSignMark                              MarkInfo;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.LoadConfig
struct UQuickSignComponent_BP_C_LoadConfig_Params
{
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReceiveBeginPlay
struct UQuickSignComponent_BP_C_ReceiveBeginPlay_Params
{
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ShowMsgTipsVoice
struct UQuickSignComponent_BP_C_ShowMsgTipsVoice_Params
{
	struct FQuickSignMsg*                              msgItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              IsSelf;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.PlayVoiceCD
struct UQuickSignComponent_BP_C_PlayVoiceCD_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ReportQuickSign
struct UQuickSignComponent_BP_C_ReportQuickSign_Params
{
	struct FQuickSignMsg*                              msgItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuickSignComponent_BP.QuickSignComponent_BP_C.ExecuteUbergraph_QuickSignComponent_BP
struct UQuickSignComponent_BP_C_ExecuteUbergraph_QuickSignComponent_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

