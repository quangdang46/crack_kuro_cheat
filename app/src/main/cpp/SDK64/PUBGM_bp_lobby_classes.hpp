#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C
// 0x0200 (0x0600 - 0x0400)
class Abp_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_PlayerAliasTitle;                                      // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerGender;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerQQVip;                                           // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_UserHideLobbyAutoAdaptBox;                             // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Role_Avatar_Frame;                               // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_AvatarInfo                       BP_STRUCT_AvatarInfo;                                     // 0x0428(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_Lobby_ActivityNotOpenList;                       // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_PlayerMaxRankLevel;                              // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ActivityBtnDisplay               BP_STRUCT_ActivityBtnDisplay;                             // 0x0450(0x00A8) (Edit, BlueprintVisible)
	int                                                BP_PlayerTicket;                                          // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_BgIceThemeSwitch;                                // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_BgAnniversaryThemeSwitch;                        // 0x04FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	int                                                BP_Lobby_CurSkinId;                                       // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                G_Index_In_Login;                                         // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_MenuOpen;                                        // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	int                                                BP_LobbyTargetCameraIndex;                                // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SystemTargetCameraSysName;                             // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SystemTargetCameraIndex;                               // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyBubble_CurItemID;                                 // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyPlayerNum;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_RankChange;                                      // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	struct FString                                     BP_LOBBY_AdjustURL;                                       // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                G_Index_In_Collect;                                       // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerLevel;                                           // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SystemTargetCameraBlendTime;                           // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	struct FString                                     BP_PlayerUid;                                             // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Lobby_BgResidentEvilThemeSwitch;                       // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0561(0x0003) MISSED OFFSET
	int                                                BP_PlayerAliasID;                                         // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EmulatorCheck_FirstinLobby;                               // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_ActivityBtnDisplay>       BP_ARRAY_LobbyActivityBtnDisplayList;                     // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerAliasNation;                                     // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerIconUrl;                                         // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DataMgrInit;                                              // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	struct FString                                     BP_PlayerName;                                            // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LobbyBubble_CurCdn;                                    // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbyTargetCameraBlendTime;                            // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerFpToken;                                         // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_PlayerDiamondShow;                                     // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x05D1(0x0003) MISSED OFFSET
	struct FBP_STRUCT_TransformUseList                 BP_STRUCT_TransformUseList;                               // 0x05D4(0x0008) (Edit, BlueprintVisible)
	int                                                BP_PlayerExp;                                             // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList;                                      // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerDiamond;                                         // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGold;                                            // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C");
		return pStaticClass;
	}


	void EventLobbyAndroidBack_NoFetch();
	void EventLobbyAndroidBack();
	void EventSwitchLobbyCameraByIndex_NoFetch();
	void EventSwitchLobbyCameraByIndex();
	void UserConstructionScript();
};


}

