#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_chat_voice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C
// 0x00E8 (0x04E8 - 0x0400)
class Abp_chat_voice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentStage;                           // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceUploadMsgId;                            // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceDefaultOpenTeam;                        // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceCurrentMode;                            // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceMicOpened;                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceCurrentRole;                            // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceToTextContent;                          // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalChatvoiceTotalLimit;                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceSpeakerOpened;                          // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceIsTeamup;                               // 0x045D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x045E(0x0002) MISSED OFFSET
	int                                                BP_GlobalChatvoiceUploadTime;                             // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceCurrentPlayFile;                        // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_GlobalChatvoiceDownloadData> BP_ARRAY_GlobalChatvoiceDownloadList;                     // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalChatvoiceDownloadData      BP_STRUCT_GlobalChatvoiceDownloadData;                    // 0x0488(0x0040) (Edit, BlueprintVisible)
	struct FString                                     BP_GlobalChatvoiceCurrentRoom;                            // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceRecordSuccess;                          // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C");
		return pStaticClass;
	}


	void EventChangeMicState_NoFetch();
	void EventChangeMicState();
	void EventNotifySystemSpeakerOpen_NoFetch();
	void EventNotifySystemSpeakerOpen();
	void EventNotifyRecordTooShort_NoFetch();
	void EventNotifyRecordTooShort();
	void EventTickVoiceRoom_NoFetch();
	void EventTickVoiceRoom();
	void EventStartGVoiceRecord_NoFetch();
	void EventStartGVoiceRecord();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventClearGVoiceProcedure_NoFetch();
	void EventClearGVoiceProcedure();
	void EventNotifySystemMicOpen_NoFetch();
	void EventNotifySystemMicOpen();
	void EventChatRequestPrivacy_NoFetch();
	void EventChatRequestPrivacy();
	void EventCheckOpenMicSuc_NoFetch();
	void EventCheckOpenMicSuc();
	void EventUploadGVoiceRecord_NoFetch();
	void EventUploadGVoiceRecord();
	void EventStartPlayGVoiceRecord_NoFetch();
	void EventStartPlayGVoiceRecord();
	void EventChangeGVoiceMode_NoFetch();
	void EventChangeGVoiceMode();
	void EventCheckOpenMicFail_NoFetch();
	void EventCheckOpenMicFail();
	void EventChatVoiceSetInfo_Push_NoFetch();
	void EventChatVoiceSetInfo_Push();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventNotifyDownloadFailed_NoFetch();
	void EventNotifyDownloadFailed();
	void EventCancelGVoiceRecord_NoFetch();
	void EventCancelGVoiceRecord();
	void EventStopPlayGVoiceRecord_NoFetch();
	void EventStopPlayGVoiceRecord();
	void EventNotifySystemVoiceOpen_NoFetch();
	void EventNotifySystemVoiceOpen();
	void EventNotifyVoiceOpenSpeaker_NoFetch();
	void EventNotifyVoiceOpenSpeaker();
	void EventNotifyVoiceProcedureFailed_NoFetch();
	void EventNotifyVoiceProcedureFailed();
	void EventChangeSpeakerState_NoFetch();
	void EventChangeSpeakerState();
	void EventOnTryOpenMic_NoFetch();
	void EventOnTryOpenMic();
	void EventChatVoiceFetchInfo_NoFetch();
	void EventChatVoiceFetchInfo();
	void EventChatRequestPrivacyPre_NoFetch();
	void EventChatRequestPrivacyPre();
	void EventStopGVoiceRecord_NoFetch();
	void EventStopGVoiceRecord();
	void EventMicClickCD_NoFetch();
	void EventMicClickCD();
	void UserConstructionScript();
};


}

