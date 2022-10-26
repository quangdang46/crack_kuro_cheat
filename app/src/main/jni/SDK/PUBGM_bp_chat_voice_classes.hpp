#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_chat_voice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C
// 0x00A8 (0x03B8 - 0x0310)
class Abp_chat_voice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentRole;                            // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentPlayFile;                        // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceUploadMsgId;                            // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceMicOpened;                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceCurrentMode;                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalChatvoiceUploadTime;                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalChatvoiceTotalLimit;                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentStage;                           // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceToTextContent;                          // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceIsTeamup;                               // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceRecordSuccess;                          // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	struct FBP_STRUCT_GlobalChatvoiceDownloadData      BP_STRUCT_GlobalChatvoiceDownloadData;                    // 0x0364(0x0030) (Edit, BlueprintVisible)
	bool                                               BP_GlobalChatvoiceSpeakerOpened;                          // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_GlobalChatvoiceDownloadData> BP_ARRAY_GlobalChatvoiceDownloadList;                     // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentRoom;                            // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceDefaultOpenTeam;                        // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C");
		return pStaticClass;
	}


	void EventNotifyDownloadFailed_NoFetch();
	void EventNotifyDownloadFailed();
	void EventNotifySystemMicOpen_NoFetch();
	void EventNotifySystemMicOpen();
	void EventNotifySystemSpeakerOpen_NoFetch();
	void EventNotifySystemSpeakerOpen();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventChatRequestPrivacy_NoFetch();
	void EventChatRequestPrivacy();
	void EventChangeMicState_NoFetch();
	void EventChangeMicState();
	void EventNotifyRecordTooShort_NoFetch();
	void EventNotifyRecordTooShort();
	void EventStopPlayGVoiceRecord_NoFetch();
	void EventStopPlayGVoiceRecord();
	void EventStartGVoiceRecord_NoFetch();
	void EventStartGVoiceRecord();
	void EventChatRequestPrivacyPre_NoFetch();
	void EventChatRequestPrivacyPre();
	void EventOnTryOpenMic_NoFetch();
	void EventOnTryOpenMic();
	void EventMicClickCD_NoFetch();
	void EventMicClickCD();
	void EventStartPlayGVoiceRecord_NoFetch();
	void EventStartPlayGVoiceRecord();
	void EventStopGVoiceRecord_NoFetch();
	void EventStopGVoiceRecord();
	void EventCheckOpenMicSuc_NoFetch();
	void EventCheckOpenMicSuc();
	void EventNotifySystemVoiceOpen_NoFetch();
	void EventNotifySystemVoiceOpen();
	void EventChangeGVoiceMode_NoFetch();
	void EventChangeGVoiceMode();
	void EventClearGVoiceProcedure_NoFetch();
	void EventClearGVoiceProcedure();
	void EventUploadGVoiceRecord_NoFetch();
	void EventUploadGVoiceRecord();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventTickVoiceRoom_NoFetch();
	void EventTickVoiceRoom();
	void EventChatVoiceSetInfo_Push_NoFetch();
	void EventChatVoiceSetInfo_Push();
	void EventChatVoiceFetchInfo_NoFetch();
	void EventChatVoiceFetchInfo();
	void EventCheckOpenMicFail_NoFetch();
	void EventCheckOpenMicFail();
	void EventNotifyVoiceProcedureFailed_NoFetch();
	void EventNotifyVoiceProcedureFailed();
	void EventCancelGVoiceRecord_NoFetch();
	void EventCancelGVoiceRecord();
	void EventNotifyVoiceOpenSpeaker_NoFetch();
	void EventNotifyVoiceOpenSpeaker();
	void EventChangeSpeakerState_NoFetch();
	void EventChangeSpeakerState();
	void UserConstructionScript();
};


}

