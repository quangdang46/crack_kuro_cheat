#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C
// 0x01A0 (0x04B0 - 0x0310)
class Abp_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_PlayerUid;                                             // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_PlayerMaxRankLevel;                              // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerExp;                                             // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TransformUseList                 BP_STRUCT_TransformUseList;                               // 0x0328(0x0008) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ActivityBtnDisplay               BP_STRUCT_ActivityBtnDisplay;                             // 0x0330(0x0084) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ActivityBtnDisplay>       BP_ARRAY_LobbyActivityBtnDisplayList;                     // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Lobby_BgAnniversaryThemeSwitch;                        // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                BP_PlayerFpToken;                                         // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_CurSkinId;                                       // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyBubble_CurItemID;                                 // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerAliasNation;                                     // 0x03D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_Lobby_ActivityNotOpenList;                       // 0x03DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SystemTargetCameraSysName;                             // 0x03E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SystemTargetCameraBlendTime;                           // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_MenuOpen;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	struct FString                                     BP_PlayerAliasTitle;                                      // 0x03FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerAliasID;                                         // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LobbyBubble_CurCdn;                                    // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LobbyLogic_ClassPath;                                  // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Lobby_RankChange;                                      // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	int                                                BP_LobbyPlayerNum;                                        // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EmulatorCheck_FirstinLobby;                               // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	int                                                BP_PlayerDiamond;                                         // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerIconUrl;                                         // 0x0434(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Lobby_BgIceThemeSwitch;                                // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                G_Index_In_Collect;                                       // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerTicket;                                          // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_UserHideLobbyAutoAdaptBox;                             // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_PlayerDiamondShow;                                     // 0x044D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x044E(0x0002) MISSED OFFSET
	struct FBP_STRUCT_AvatarInfo                       BP_STRUCT_AvatarInfo;                                     // 0x0450(0x000C) (Edit, BlueprintVisible)
	bool                                               DataMgrInit;                                              // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	int                                                G_Index_In_Login;                                         // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SystemTargetCameraIndex;                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerLevel;                                           // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGender;                                          // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraBlendTime;                            // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraIndex;                                // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerQQVip;                                           // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGold;                                            // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerName;                                            // 0x0480(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList;                                      // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Lobby_BgResidentEvilThemeSwitch;                       // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Role_Avatar_Frame;                               // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LOBBY_AdjustURL;                                       // 0x04A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C");
		return pStaticClass;
	}


	void EventEnterRoleInfo_NoFetch();
	void EventEnterRoleInfo();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLobbyAndroidBack_NoFetch();
	void EventLobbyAndroidBack();
	void EventSimulateTestReConnect_NoFetch();
	void EventSimulateTestReConnect();
	void EventShowLobbyGM_NoFetch();
	void EventShowLobbyGM();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventSwitchLobbyCameraByIndex_NoFetch();
	void EventSwitchLobbyCameraByIndex();
	void UserConstructionScript();
};


}

