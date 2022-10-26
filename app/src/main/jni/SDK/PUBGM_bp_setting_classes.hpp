#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_setting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting.bp_setting_C
// 0x0248 (0x0558 - 0x0310)
class Abp_setting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SettingIndexVehicle;                                   // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Region_Set_Time;                               // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_krjp_del_account_left_time;                            // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingLobbyBgmID;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingFresherType;                                    // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SettingSecondLoginStrChannel;                          // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexPickup;                                    // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowEscapeNotice;                            // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsWatchingOpen;                                 // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0342(0x0002) MISSED OFFSET
	int                                                BP_SettingIndexDownload;                                  // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanModify_QualityFPS;                           // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexMirrativ;                                  // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOther;                                     // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInGame;                                              // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_SettingLoginTypeOrderList;                       // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingSelectedPage;                                   // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOW_XGPUSH_OFF_JK;                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_WonderfulReplaySwitchIsOpen;                           // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingBattleWatchingDetailOpen;                       // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingLobbyIsShowChristmas;                           // 0x036E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x036F(0x0001) MISSED OFFSET
	int                                                HelpshiftRequestCD;                                       // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowRole;                                    // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_Record_Show;                        // 0x0375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0376(0x0002) MISSED OFFSET
	int                                                BP_SettingIndexLanguage;                                  // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_JK;                                   // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Social_Stranger_Switch;                        // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	int                                                BP_XGPUSH_OFF_TIP_CODE;                                   // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindThirdRetCode;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsSensitivitySavedInCloud;                             // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	int                                                BP_SettingLobbySkinID;                                    // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_GLOBAL;                               // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingMaxLoginTypeNum;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexSensibility;                               // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindChannel;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelpshiftLastRequestTime;                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_New_SDK_Switch;                                // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	int                                                BP_ShapedScreenType;                                      // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Unbind_Days;                                   // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ProfiledScreenValue;                                   // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShapedScreenCurrentSelectType;                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BasicSettingForbidFollowJump;                          // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Unbind_IsShow;                                 // 0x03C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x03C6(0x0002) MISSED OFFSET
	int                                                BP_Setting_IMSDKTipMsgBtnOKEvent;                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingBattleWatchingDetailFlag;                       // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SettingSensitivity               BP_STRUCT_SettingSensitivity;                             // 0x03D0(0x00B8) (Edit, BlueprintVisible)
	struct FString                                     BP_GradeSeparation_UrlStr;                                // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Unknow_Pass_Switch_UI;                                 // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	int                                                BP_LoginChannel;                                          // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Region_Name;                                   // 0x049C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SHOW_XGPUSH_OFF_GLOBAL;                                // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_IMSDKNotifyEvent;                              // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexEffect;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInLobby;                                             // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Is_In_Debug_Mode;                                      // 0x04B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x04B6(0x0002) MISSED OFFSET
	int                                                BP_SettingPlayerLevel;                                    // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexBasic;                                     // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexPicture;                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Social_Friend_Switch;                          // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexAimingMirrior;                             // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_UploadType;                                    // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showRoleInSending;                                        // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SettingFirstLoginStrChannel;                           // 0x04D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexOBS;                                       // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurSettingPage;                                        // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingCurrentOpenPage;                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MaxAlien;                                              // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SettingPlayerUID;                                      // 0x04F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MidAlien;                                              // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_JP_Mirrativ_Show;                                      // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_KRJPDelAccountSwitch;                                  // 0x0501(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_Battle_Show;                        // 0x0502(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x0503(0x0001) MISSED OFFSET
	int                                                BP_SettingIndexSound;                                     // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexInfoBinding;                               // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindRetCode;                                           // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_Unbind_Channel;                                // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Season_FriendDataPrivacy;                              // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	struct FString                                     BP_UrlStr3;                                               // 0x0518(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ProfiledScreenCurrentSelectValue;                      // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOperate;                                   // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_UrlStr2;                                               // 0x052C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_DiyLimitLevel;                                         // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowHistory;                                 // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CanShowOtherTab;                                       // 0x053D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x053E(0x0002) MISSED OFFSET
	int                                                BP_BindExtType;                                           // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingShowWatchingFlag;                               // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_UnbindPlatformName;                            // 0x0548(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0554(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting.bp_setting_C");
		return pStaticClass;
	}


	void EventInformAutoPickUpClosed_NoFetch();
	void EventInformAutoPickUpClosed();
	void EventSettingPanelRegistIMSDKEvents_NoFetch();
	void EventSettingPanelRegistIMSDKEvents();
	void EventSettingCurPicSettingNotSupportThisFps_NoFetch();
	void EventSettingCurPicSettingNotSupportThisFps();
	void EventClickSocialFriendSwitch_NoFetch();
	void EventClickSocialFriendSwitch();
	void EventShowUserAgreement_NoFetch();
	void EventShowUserAgreement();
	void EventSettingGetLoginTypeList_NoFetch();
	void EventSettingGetLoginTypeList();
	void EventSettingPanelAskAlreadyBindFB_NoFetch();
	void EventSettingPanelAskAlreadyBindFB();
	void EventHideLastOpennedPage_NoFetch();
	void EventHideLastOpennedPage();
	void EventSaveShapedScreenToLoacl_NoFetch();
	void EventSaveShapedScreenToLoacl();
	void EventShowXGPushOpenTip_NoFetch();
	void EventShowXGPushOpenTip();
	void EventShowNoticeFromWatchingBackToLobby_NoFetch();
	void EventShowNoticeFromWatchingBackToLobby();
	void EventSettingWarningLvSixFps_NoFetch();
	void EventSettingWarningLvSixFps();
	void EventSendLanguageSettingToServer_NoFetch();
	void EventSendLanguageSettingToServer();
	void EventCannotSettingUnknowPassSubSwitch_NoFetch();
	void EventCannotSettingUnknowPassSubSwitch();
	void EventChangeQualityAndFpsConfirm_NoFetch();
	void EventChangeQualityAndFpsConfirm();
	void EventShowWaitingUI_NoFetch();
	void EventShowWaitingUI();
	void EventShowBackToLobbyFromTrainingNotice_NoFetch();
	void EventShowBackToLobbyFromTrainingNotice();
	void EventHideAllSettingPanel_NoFetch();
	void EventHideAllSettingPanel();
	void EventShowDiyLimitLevelNotice_Push_NoFetch();
	void EventShowDiyLimitLevelNotice_Push();
	void EventResetShapedScreen_NoFetch();
	void EventResetShapedScreen();
	void EventSettingNoticeAntiNotSupport_NoFetch();
	void EventSettingNoticeAntiNotSupport();
	void EventSettingMirrorRedPointChanged_NoFetch();
	void EventSettingMirrorRedPointChanged();
	void EventNotOpenLBSPower_NoFetch();
	void EventNotOpenLBSPower();
	void EventTryToCloseLBSPower_NoFetch();
	void EventTryToCloseLBSPower();
	void Event_SprHghQlty_NotInLobby_NoFetch();
	void Event_SprHghQlty_NotInLobby();
	void EventSettingShowUIElemUI_NoFetch();
	void EventSettingShowUIElemUI();
	void EventHelpshiftShowConversation_NoFetch();
	void EventHelpshiftShowConversation();
	void EventSettingPanelParentAllow_NoFetch();
	void EventSettingPanelParentAllow();
	void EventUploadSettingConfigToCloud_NoFetch();
	void EventUploadSettingConfigToCloud();
	void EventSendMsgNearsPower_NoFetch();
	void EventSendMsgNearsPower();
	void EventTurnonManualRecord_NoFetch();
	void EventTurnonManualRecord();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShowSettingAccount_NoFetch();
	void EventShowSettingAccount();
	void EventRequestSaveSensitivitySettingToCloud_Push_NoFetch();
	void EventRequestSaveSensitivitySettingToCloud_Push();
	void EventBasicSettingAutoFollowJumpSwitch_NoFetch();
	void EventBasicSettingAutoFollowJumpSwitch();
	void EventSettingConfirmModifyArtQuality_Push_NoFetch();
	void EventSettingConfirmModifyArtQuality_Push();
	void EventOpenVlinkSDK_NoFetch();
	void EventOpenVlinkSDK();
	void EventSettingShowUIElemUIVehicle_NoFetch();
	void EventSettingShowUIElemUIVehicle();
	void EventGetVLinkOpenStatus_NoFetch();
	void EventGetVLinkOpenStatus();
	void EventSettingNoticeHighestArtClosed_NoFetch();
	void EventSettingNoticeHighestArtClosed();
	void EventSendMsgWarZonePower_NoFetch();
	void EventSendMsgWarZonePower();
	void EventSettingShowUnbind_NoFetch();
	void EventSettingShowUnbind();
	void EventIsHideLBSPanel_NoFetch();
	void EventIsHideLBSPanel();
	void EventSettingPanelEUGDPR_NoFetch();
	void EventSettingPanelEUGDPR();
	void EventSettingShowConfirmModifyFps_NoFetch();
	void EventSettingShowConfirmModifyFps();
	void EventSettingPanelShowTipMsgBindFail_NoFetch();
	void EventSettingPanelShowTipMsgBindFail();
	void EventShowSetRegion_NoFetch();
	void EventShowSetRegion();
	void EventShowMyRecordVideos_NoFetch();
	void EventShowMyRecordVideos();
	void EventSettingSendCanShowHistory_NoFetch();
	void EventSettingSendCanShowHistory();
	void EventSettingPanelShowTipMsgBindSuccess_NoFetch();
	void EventSettingPanelShowTipMsgBindSuccess();
	void EventSettingPanelShowConnectingUI_NoFetch();
	void EventSettingPanelShowConnectingUI();
	void EventSettingCannotSetGyroscope_Push_NoFetch();
	void EventSettingCannotSetGyroscope_Push();
	void EventLogOutForSettingLanguage_NoFetch();
	void EventLogOutForSettingLanguage();
	void EventSettingPanelUnRegistIMSDKEvents_NoFetch();
	void EventSettingPanelUnRegistIMSDKEvents();
	void EventSettingSwitchToSuperHighSoundEffect_NoFetch();
	void EventSettingSwitchToSuperHighSoundEffect();
	void EventSettingCheckInputCloudName_NoFetch();
	void EventSettingCheckInputCloudName();
	void EventShowOBBackToLobbyNotice_NoFetch();
	void EventShowOBBackToLobbyNotice();
	void EventSettingNoticeGyroNotOpen_NoFetch();
	void EventSettingNoticeGyroNotOpen();
	void EventInformPickUpNumZero_NoFetch();
	void EventInformPickUpNumZero();
	void EventHelpshiftSetRedPoints_NoFetch();
	void EventHelpshiftSetRedPoints();
	void EventSettingSendCanShowRole_NoFetch();
	void EventSettingSendCanShowRole();
	void EventSettingSendUnknowPassSwitch_NoFetch();
	void EventSettingSendUnknowPassSwitch();
	void EventShowBackToLobbyNotice_NoFetch();
	void EventShowBackToLobbyNotice();
	void EventShowNotInstallVkMsg_NoFetch();
	void EventShowNotInstallVkMsg();
	void EventGCLoginTimeOut_NoFetch();
	void EventGCLoginTimeOut();
	void EventSettingSwitchToLowSoundEffect_NoFetch();
	void EventSettingSwitchToLowSoundEffect();
	void EventShowNoticeFromObserveToLobby_NoFetch();
	void EventShowNoticeFromObserveToLobby();
	void EventSettingSendCanShowWatching_NoFetch();
	void EventSettingSendCanShowWatching();
	void EventShowOrHideSettingAccountTips_NoFetch();
	void EventShowOrHideSettingAccountTips();
	void EventShowSelectedPage_NoFetch();
	void EventShowSelectedPage();
	void EventSettingSensibilityRedPointChanged_NoFetch();
	void EventSettingSensibilityRedPointChanged();
	void EventSettingPanelPrivicy_NoFetch();
	void EventSettingPanelPrivicy();
	void EventChatRequestPrivacyInSetting_NoFetch();
	void EventChatRequestPrivacyInSetting();
	void EventShow3dTouchNotSupportQuickThrow_NoFetch();
	void EventShow3dTouchNotSupportQuickThrow();
	void EventHideWaitingUI_NoFetch();
	void EventHideWaitingUI();
	void EventHelpshiftClearRedPoints_NoFetch();
	void EventHelpshiftClearRedPoints();
	void EventShowNotInstallWechatMsg_NoFetch();
	void EventShowNotInstallWechatMsg();
	void EventSettingAimingMirrorUIShowTips_NoFetch();
	void EventSettingAimingMirrorUIShowTips();
	void EventSettingNoticeLeftRightShootNotOpen_NoFetch();
	void EventSettingNoticeLeftRightShootNotOpen();
	void EventTurnonMomentRecord_NoFetch();
	void EventTurnonMomentRecord();
	void EventOpenKefuUrl_NoFetch();
	void EventOpenKefuUrl();
	void EventIsOpenLBSWarZone_NoFetch();
	void EventIsOpenLBSWarZone();
	void EventLBSChangeZone_NoFetch();
	void EventLBSChangeZone();
	void EventSettingVehicleRedPointChanged_NoFetch();
	void EventSettingVehicleRedPointChanged();
	void EventOnClickUnbindError_NoFetch();
	void EventOnClickUnbindError();
	void EventUpdateLayoutName_NoFetch();
	void EventUpdateLayoutName();
	void EventSettingShowCurrentTicket_NoFetch();
	void EventSettingShowCurrentTicket();
	void EventSetBindFB_Push_NoFetch();
	void EventSetBindFB_Push();
	void EventSettingPanelHideConnectingUI_NoFetch();
	void EventSettingPanelHideConnectingUI();
	void EventSendMsgChatsPower_NoFetch();
	void EventSendMsgChatsPower();
	void EventConfirmPickUpResetMsg_NoFetch();
	void EventConfirmPickUpResetMsg();
	void EventChangeShapedScreenConfirm_NoFetch();
	void EventChangeShapedScreenConfirm();
	void EventSettingCannotSetHigherQuality_Push_NoFetch();
	void EventSettingCannotSetHigherQuality_Push();
	void EventShowInturrptGameNotice_NoFetch();
	void EventShowInturrptGameNotice();
	void EventSettingSendCanShowBattleWatchingDetail_NoFetch();
	void EventSettingSendCanShowBattleWatchingDetail();
	void EventClickSwitchButton_NoFetch();
	void EventClickSwitchButton();
	void EventSettingCannotSetHigherFps_Push_NoFetch();
	void EventSettingCannotSetHigherFps_Push();
	void EventSettingSendSeasonFriendPrivacy_NoFetch();
	void EventSettingSendSeasonFriendPrivacy();
	void EventStartIMSDKBindTimer_NoFetch();
	void EventStartIMSDKBindTimer();
	void EventRefreshSettingParameter_Push_NoFetch();
	void EventRefreshSettingParameter_Push();
	void EventSettingSwitchToHighSoundEffect_NoFetch();
	void EventSettingSwitchToHighSoundEffect();
	void EventSettingBasicRedPointChanged_NoFetch();
	void EventSettingBasicRedPointChanged();
	void EventShowConfirmUsingCloud_NoFetch();
	void EventShowConfirmUsingCloud();
	void EventIsOpenLBSNear_NoFetch();
	void EventIsOpenLBSNear();
	void EventShowMobileShakeNoSupport_NoFetch();
	void EventShowMobileShakeNoSupport();
	void EventSettingShowConfirmModifyHDR_NoFetch();
	void EventSettingShowConfirmModifyHDR();
	void EventSettingSetLobbySkinIDToNotify_NoFetch();
	void EventSettingSetLobbySkinIDToNotify();
	void EventSettingPickUpRedPointChanged_NoFetch();
	void EventSettingPickUpRedPointChanged();
	void EventClickSocialStrangerSwitch_NoFetch();
	void EventClickSocialStrangerSwitch();
	void EventHideAllNoticeFromObserveToLobby_NoFetch();
	void EventHideAllNoticeFromObserveToLobby();
	void EventSettingPanelDelectAccount_NoFetch();
	void EventSettingPanelDelectAccount();
	void EventRequestSensitivitySetting_NoFetch();
	void EventRequestSensitivitySetting();
	void EventShowLogOutNoticceForSettingLanguage_NoFetch();
	void EventShowLogOutNoticceForSettingLanguage();
	void EventOnClickUnbind_NoFetch();
	void EventOnClickUnbind();
	void EventSettingNoticeShoulderShootNotOpen_NoFetch();
	void EventSettingNoticeShoulderShootNotOpen();
	void EventSetBPQualitySettingByLocal_NoFetch();
	void EventSetBPQualitySettingByLocal();
	void EventSettingPanelAskBindAccountMsgBox_NoFetch();
	void EventSettingPanelAskBindAccountMsgBox();
	void EventSettingNotSupportHDR_NoFetch();
	void EventSettingNotSupportHDR();
	void EventRefreshSettingRedPoint_NoFetch();
	void EventRefreshSettingRedPoint();
	void EventIsOpenLBSChat_NoFetch();
	void EventIsOpenLBSChat();
	void EventShowLogOutNoticce_NoFetch();
	void EventShowLogOutNoticce();
	void UserConstructionScript();
};


}

