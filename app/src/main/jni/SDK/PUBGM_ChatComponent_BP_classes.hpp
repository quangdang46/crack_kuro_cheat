#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_ChatComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChatComponent_BP.ChatComponent_BP_C
// 0x01F8 (0x04B8 - 0x02C0)
class UChatComponent_BP_C : public UChatComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0004) (Transient, DuplicateTransient)
	struct FString                                     addToUIText;                                              // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             UITextArray;                                              // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FirstIndex;                                               // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     currContentMsg;                                           // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInitSetting;                                             // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FString                                     FriendChatStrGid;                                         // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendChatSenderName;                                     // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendChatContent;                                        // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendChatSelfMsg;                                        // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FString                                     FriendInviteStrGid;                                       // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendInviteSenderName;                                   // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendInviteBattleTextValue;                              // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendReplyStrGid;                                        // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FriendReplySenderName;                                    // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendReplyReply;                                         // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMe;                                                     // 0x0355(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0356(0x0002) MISSED OFFSET
	int                                                UI_MsgID;                                                 // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     UI_ItemName;                                              // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UI_AlternateMsgID;                                        // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USettingConfig_C*                            SettingConfig;                                            // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        ChatFlagTypeList;                                         // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        TmpChatIDList;                                            // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsInfectMode;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	TArray<int>                                        ChatQuikcTextIDList_HumanMenu;                            // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ChatQuikcTextIDList_HumanTurnplate;                       // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ChatQuikcTextIDList_ZombieMenu;                           // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ChatQuikcTextIDList_ZombieTurnplate;                      // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        InfectModePlayerType;                                     // 0x03BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ECharacterMainType                                 CurInfectModePlayerType;                                  // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	struct FQuickChatIDAndAudio                        QuickChat;                                                // 0x03CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x3C];                                      // 0x03D8(0x003C) UNKNOWN PROPERTY: SetProperty ChatComponent_BP.ChatComponent_BP_C.GlobalActorIDList
	bool                                               bIsVehicleWarMode;                                        // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	TArray<int>                                        ChatQuikcTextIDList_VWMenu;                               // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ChatQuikcTextIDList_VWTurnplate;                          // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TraceItemID;                                              // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3C];                                      // 0x0434(0x003C) UNKNOWN PROPERTY: SetProperty ChatComponent_BP.ChatComponent_BP_C.MuteOnGlobal
	unsigned char                                      UnknownData08[0x3C];                                      // 0x0470(0x003C) UNKNOWN PROPERTY: SetProperty ChatComponent_BP.ChatComponent_BP_C.MuteMsgOnBluehole
	TArray<int>                                        SpecialShowDistanceMsgID;                                 // 0x04AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass ChatComponent_BP.ChatComponent_BP_C");
		return pStaticClass;
	}


	void GetSpecialDistanceString(const struct FString& SendPlayerName, struct FText* DistanceText);
	void DistanceToString(int Distance, int MsgID, const struct FString& PlayerName, struct FText* DistanceText);
	void GetActorNameByID(int ActorId, struct FString* actorName);
	void GetLocalText(int MsgID, int ItemId, const struct FString& PlayerKeyString, int Distance, const struct FString& PlayerName, struct FString* ContentMsg);
	void LoadVehicleModeQuickMsg();
	void IsVehicleWarMode(bool* IsVehicleWarMode);
	void InitActorIDList();
	void UpdateInfectModeMsgByPlayerType(ECharacterSubType PlayerType);
	void LoadInfectModeQuickMsg();
	void IsInfectMode(bool* IsInfectMode);
	void InitChatFlagList();
	void SetTurnplateQuickChatList();
	void GetActorBankByID(int ActorId, struct FString* BankName);
	void SwitchActorAudio(int ActorId);
	void LoadSingleAudio(int chatTextID);
	void LoadAllAudio();
	void CreateAudio(class UObject* audio, int resID);
	void SetQuickChatList();
	void InitFromSetting();
	void AddOneMsgToUIInner(bool isMe);
	void PlaySound(int MsgID, int ActorId);
	void AddToArray();
	void AddOneMsgToUI1(struct FString* Name, struct FString* Content, int* MsgID, int* audioID, int* ItemId, struct FString* PlayerKeyString, bool* isMe, bool* PlaySound, bool* ShowChat, float* Distance);
	void NotifyFriendChat(struct FString* str_gid, struct FString* sender_name, struct FString* chat_content, bool* self_msg);
	void NotifyFriendInvite(struct FString* str_gid, struct FString* sender_name);
	void NotifyFriendReplyInvite(struct FString* str_gid, struct FString* sender_name, bool* bReply);
	void SendDirtyFilter(struct FString* Name, struct FString* Content, bool* isMe);
	void OnFilterFinish(struct FString* filterText);
	void CloseChatHistoryList();
	void UpdateQuickItemText(int* MsgID, int* resID, int* alternateMsgID);
	void ReportBattleChat(int* MsgID, struct FString* Msg, int* msgExtraParam);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ChatComponent_BP(int EntryPoint);
};


}

