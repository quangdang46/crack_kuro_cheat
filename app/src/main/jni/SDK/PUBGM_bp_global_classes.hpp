#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_global_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x01A8 (0x04B8 - 0x0310)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_StartUpType;                                           // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Global_Url;                                            // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalHelpTips_StringID;                               // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalTips_ItemCount;                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalConfigOperateKey;                                // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalTips_TimeInfo              BP_STRUCT_GlobalTips_TimeInfo;                            // 0x0338(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_Global_AdvertiseUnitID;                                // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalTips_PatternID;                                  // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BP_Global_ShadowDistanceScale_f;                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsChristmasNeedShow;                            // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	int                                                BP_GlobalTips_ItemID;                                     // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalConfigTempIntValue;                              // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HadPlayAnimation;                                      // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShouldRequestChatPrivacy;                              // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	struct FBP_STRUCT_GlobalTips_Pos                   BP_STRUCT_GlobalTips_Pos;                                 // 0x036C(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_Global_IS_Show_10Animation;                            // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsAppleAudit;                                          // 0x0375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0376(0x0002) MISSED OFFSET
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_REASON;                                             // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_String2;                        // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalHelpTips_Pos               BP_STRUCT_GlobalHelpTips_Pos;                             // 0x038C(0x0008) (Edit, BlueprintVisible)
	struct FString                                     BP_Localize_StringWithNum_ReturnStr;                      // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AndroidKey_IsValid;                             // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NATION_SWITCH                    BP_STRUCT_NATION_SWITCH;                                  // 0x03A5(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              BP_GlobalConfigTempFloatValue_f;                          // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalConfigTempBooleanValue;                          // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                BP_GameGender;                                            // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatBan;                                               // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_AvatarPreviewTarget;                            // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalSwitchCameraIndex;                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Cur_Lobby_Skin_Id;                              // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_CorpsShopLevelForRedPiont;                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GEM_REPORT_SUBEVENT;                                   // 0x03CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Share_Platform;                                        // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalTips_ShowLimitIcon;                              // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	int                                                BP_Localize_StringWithNum_NumStringIndex;                 // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_PreviewItemId;                                  // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsAnniversaryNeedShow;                          // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	int                                                BP_GlobalTips_ColorID;                                    // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalSwitchLobbyMeshBgIndex;                          // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Setting_LobbySkinId;                            // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalConfigTempStringValue;                           // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Localize_StringWithNum_id;                             // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GEM_REPORT_PARA1;                                      // 0x0408(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Platform;                                              // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_Shop_Animation_Open;                            // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	int                                                BP_GlobalConfigOperateType;                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_String3;                        // 0x0420(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_RechargePayPos;                                 // 0x042C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Global_Last_Lobby_Skin_Id;                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Localize_StringWithNum_String4;                        // 0x043C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_TouchTitleString;                               // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_EUChatRestriction;                                     // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_HasPufferID;                                    // 0x0455(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0456(0x0002) MISSED OFFSET
	int                                                BP_CurSceneCameraIndex;                                   // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BP_Global_ShadowDistanceScale_Current_f;                  // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AdvertiseNeedShowtask;                          // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FString                                     BP_Localize_StringWithNum_String1;                        // 0x0464(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_SelfUID;                                        // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_TouchTipString;                                 // 0x047C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Global_BackpackAvatarPreviewID;                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalConfigOperateResult;                             // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	int                                                BP_played_cg;                                             // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Setting_LobbyBgmId;                             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsResidentEvilNeedShow;                         // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x049B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GLOBAL_USE_ITEM;                                       // 0x049C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA2;                                      // 0x04A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventCheckEUChatRestriction_NoFetch();
	void EventCheckEUChatRestriction();
	void EventChatCheckBan_NoFetch();
	void EventChatCheckBan();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventClickLobbyEventGemReport_NoFetch();
	void EventClickLobbyEventGemReport();
	void EventOnLobbyCoverCamera_NoFetch();
	void EventOnLobbyCoverCamera();
	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventShowLoadAdvertiseError_NoFetch();
	void EventShowLoadAdvertiseError();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventFetchNationSwitch_NoFetch();
	void EventFetchNationSwitch();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventSwitchLobbySkinCompleted_NoFetch();
	void EventSwitchLobbySkinCompleted();
	void EventGotoItemPreviewClick_NoFetch();
	void EventGotoItemPreviewClick();
	void EventGotoItemPreviewPress_NoFetch();
	void EventGotoItemPreviewPress();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void EventComMsgBoxSluaClickUrl_NoFetch();
	void EventComMsgBoxSluaClickUrl();
	void EventJumpUrl_NoFetch();
	void EventJumpUrl();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventOnLobbyRecoverCamera_NoFetch();
	void EventOnLobbyRecoverCamera();
	void EventSendClickGemReport_NoFetch();
	void EventSendClickGemReport();
	void EventSlapJumpUrl_NoFetch();
	void EventSlapJumpUrl();
	void EventGlobalShowItemTips_Push_NoFetch();
	void EventGlobalShowItemTips_Push();
	void EventChatBanInfo_NoFetch();
	void EventChatBanInfo();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventSetPlayedCG_NoFetch();
	void EventSetPlayedCG();
	void UserConstructionScript();
};


}

