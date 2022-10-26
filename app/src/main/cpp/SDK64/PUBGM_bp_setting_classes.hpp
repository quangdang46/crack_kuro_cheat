#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_setting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting.bp_setting_C
// 0x02A8 (0x06A8 - 0x0400)
class Abp_setting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_UrlStr3;                                               // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingShowWatchingFlag;                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOBS;                                       // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindChannel;                                           // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexInfoBinding;                               // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ProfiledScreenCurrentSelectValue;                      // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelpshiftRequestCD;                                       // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_IMSDKTipMsgBtnOKEvent;                         // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	struct FString                                     BP_Setting_Region_Name;                                   // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SettingPlayerUID;                                      // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsInLobby;                                             // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	int                                                BP_Setting_Unbind_Channel;                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingFresherType;                                    // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexEffect;                                    // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_Region_Set_Time;                               // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingLobbyBgmID;                                     // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FString                                     BP_Setting_UnbindPlatformName;                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_KRJPDelAccountSwitch;                                  // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexDownload;                                  // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexAimingMirrior;                             // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Season_FriendDataPrivacy;                              // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexMirrativ;                                  // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_JK;                                   // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsWatchingOpen;                                 // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	int                                                BP_BindExtType;                                           // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_IMSDKNotifyEvent;                              // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_Battle_Show;                        // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	struct FString                                     BP_UrlStr2;                                               // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Is_In_Debug_Mode;                                      // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FString                                     BP_SettingFirstLoginStrChannel;                           // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BindThirdRetCode;                                      // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowEscapeNotice;                            // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexOperate;                                   // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexAccount;                                   // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_Record_Show;                        // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	struct FBP_STRUCT_SettingSensitivity               BP_STRUCT_SettingSensitivity;                             // 0x04F4(0x00B8) (Edit, BlueprintVisible)
	int                                                BP_SettingMaxLoginTypeNum;                                // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexPickup;                                    // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingLobbySkinID;                                    // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingBattleWatchingDetailOpen;                       // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	int                                                BP_SettingBattleWatchingDetailFlag;                       // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanModify_QualityFPS;                           // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CanShowOtherTab;                                       // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x6];                                       // 0x05C2(0x0006) MISSED OFFSET
	struct FString                                     BP_Setting_Unbind_Days;                                   // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_DiyLimitLevel;                                         // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsSensitivitySavedInCloud;                             // 0x05DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	int                                                BP_MaxAlien;                                              // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BasicSettingForbidFollowJump;                          // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	int                                                BP_SHOW_XGPUSH_OFF_GLOBAL;                                // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexSensibility;                               // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_OPEN_SECOND_BIND_GLOBAL;                               // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Unbind_IsShow;                                 // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x05F5(0x0003) MISSED OFFSET
	int                                                BP_SHOW_XGPUSH_OFF_JK;                                    // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BindRetCode;                                           // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showRoleInSending;                                        // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_UploadType;                                    // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ProfiledScreenValue;                                   // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowRole;                                    // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Social_Friend_Switch;                          // 0x060D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x060E(0x0002) MISSED OFFSET
	struct FString                                     BP_GradeSeparation_UrlStr;                                // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_SettingLoginTypeOrderList;                       // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexBasic;                                     // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingLobbyIsShowChristmas;                           // 0x0634(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0635(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexVehicle;                                   // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginChannel;                                          // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingSelectedPage;                                   // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurSettingPage;                                        // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_krjp_del_account_left_time;                            // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_WonderfulReplaySwitchIsOpen;                           // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexLanguage;                                  // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowHistory;                                 // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexSound;                                     // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Unknow_Pass_Switch_UI;                                 // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x065D(0x0003) MISSED OFFSET
	int                                                BP_SettingPlayerLevel;                                    // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInGame;                                              // 0x0664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_New_SDK_Switch;                                // 0x0665(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x0666(0x0002) MISSED OFFSET
	int                                                HelpshiftLastRequestTime;                                 // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOther;                                     // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MidAlien;                                              // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_Social_Stranger_Switch;                        // 0x0674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	struct FString                                     BP_SettingSecondLoginStrChannel;                          // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexPicture;                                   // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_JP_Mirrativ_Show;                                      // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	int                                                BP_ShapedScreenCurrentSelectType;                         // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingCurrentOpenPage;                                // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShapedScreenType;                                      // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_XGPUSH_OFF_TIP_CODE;                                   // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting.bp_setting_C");
		return pStaticClass;
	}


	void EventResetShapedScreen_NoFetch();
	void EventResetShapedScreen();
	void EventSettingPanelUnRegistIMSDKEvents_NoFetch();
	void EventSettingPanelUnRegistIMSDKEvents();
	void EventSettingWarningLvSixFps_NoFetch();
	void EventSettingWarningLvSixFps();
	void EventShowBackToLobbyFromTrainingNotice_NoFetch();
	void EventShowBackToLobbyFromTrainingNotice();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventOnClickUnbind_NoFetch();
	void EventOnClickUnbind();
	void EventSettingPanelParentAllow_NoFetch();
	void EventSettingPanelParentAllow();
	void EventSettingSendCanShowHistory_NoFetch();
	void EventSettingSendCanShowHistory();
	void EventSettingSendSeasonFriendPrivacy_NoFetch();
	void EventSettingSendSeasonFriendPrivacy();
	void EventSettingPanelAskBindAccountMsgBox_NoFetch();
	void EventSettingPanelAskBindAccountMsgBox();
	void EventSettingCurPicSettingNotSupportThisFps_NoFetch();
	void EventSettingCurPicSettingNotSupportThisFps();
	void EventTryToCloseLBSPower_NoFetch();
	void EventTryToCloseLBSPower();
	void EventShowNoticeFromObserveToLobby_NoFetch();
	void EventShowNoticeFromObserveToLobby();
	void EventSettingPanelShowTipMsgBindSuccess_NoFetch();
	void EventSettingPanelShowTipMsgBindSuccess();
	void EventChatRequestPrivacyInSetting_NoFetch();
	void EventChatRequestPrivacyInSetting();
	void EventSettingConfirmModifyArtQuality_Push_NoFetch();
	void EventSettingConfirmModifyArtQuality_Push();
	void EventSettingCannotSetHigherQuality_Push_NoFetch();
	void EventSettingCannotSetHigherQuality_Push();
	void EventHelpshiftSetRedPoints_NoFetch();
	void EventHelpshiftSetRedPoints();
	void EventSettingCannotSetGyroscope_Push_NoFetch();
	void EventSettingCannotSetGyroscope_Push();
	void EventShowUserAgreement_NoFetch();
	void EventShowUserAgreement();
	void EventSettingSwitchToHighSoundEffect_NoFetch();
	void EventSettingSwitchToHighSoundEffect();
	void EventSettingSwitchToSuperHighSoundEffect_NoFetch();
	void EventSettingSwitchToSuperHighSoundEffect();
	void EventSettingNoticeHighestArtClosed_NoFetch();
	void EventSettingNoticeHighestArtClosed();
	void EventSettingNoticeAntiNotSupport_NoFetch();
	void EventSettingNoticeAntiNotSupport();
	void EventStartIMSDKBindTimer_NoFetch();
	void EventStartIMSDKBindTimer();
	void EventIsOpenLBSWarZone_NoFetch();
	void EventIsOpenLBSWarZone();
	void EventSettingPanelPrivicy_NoFetch();
	void EventSettingPanelPrivicy();
	void EventHelpshiftShowFAQsWithInfo_NoFetch();
	void EventHelpshiftShowFAQsWithInfo();
	void EventHideAllSettingPanel_NoFetch();
	void EventHideAllSettingPanel();
	void EventSettingSendCanShowRole_NoFetch();
	void EventSettingSendCanShowRole();
	void EventSettingNoticeGyroNotOpen_NoFetch();
	void EventSettingNoticeGyroNotOpen();
	void EventOpenKefuUrl_NoFetch();
	void EventOpenKefuUrl();
	void EventTurnonManualRecord_NoFetch();
	void EventTurnonManualRecord();
	void EventSettingShowUIElemUIVehicle_NoFetch();
	void EventSettingShowUIElemUIVehicle();
	void EventSettingPanelEUGDPR_NoFetch();
	void EventSettingPanelEUGDPR();
	void EventConfirmPickUpResetMsg_NoFetch();
	void EventConfirmPickUpResetMsg();
	void EventShowWaitingUI_NoFetch();
	void EventShowWaitingUI();
	void EventSendLanguageSettingToServer_NoFetch();
	void EventSendLanguageSettingToServer();
	void EventLogOutForSettingLanguage_NoFetch();
	void EventLogOutForSettingLanguage();
	void EventSettingNotSupportHDR_NoFetch();
	void EventSettingNotSupportHDR();
	void EventShowOBBackToLobbyNotice_NoFetch();
	void EventShowOBBackToLobbyNotice();
	void EventSaveShapedScreenToLoacl_NoFetch();
	void EventSaveShapedScreenToLoacl();
	void EventSettingSensibilityRedPointChanged_NoFetch();
	void EventSettingSensibilityRedPointChanged();
	void EventSettingSendUnknowPassSwitch_NoFetch();
	void EventSettingSendUnknowPassSwitch();
	void EventShowLogOutNoticce_NoFetch();
	void EventShowLogOutNoticce();
	void EventInformAutoPickUpClosed_NoFetch();
	void EventInformAutoPickUpClosed();
	void EventInformPickUpNumZero_NoFetch();
	void EventInformPickUpNumZero();
	void EventSendMsgNearsPower_NoFetch();
	void EventSendMsgNearsPower();
	void EventShowLogOutNoticceForSettingLanguage_NoFetch();
	void EventShowLogOutNoticceForSettingLanguage();
	void EventHelpshiftClearRedPoints_NoFetch();
	void EventHelpshiftClearRedPoints();
	void EventShowNoticeFromWatchingBackToLobby_NoFetch();
	void EventShowNoticeFromWatchingBackToLobby();
	void EventHideAllNoticeFromObserveToLobby_NoFetch();
	void EventHideAllNoticeFromObserveToLobby();
	void EventSettingShowConfirmModifyFps_NoFetch();
	void EventSettingShowConfirmModifyFps();
	void EventSettingPanelAskAlreadyBindFB_NoFetch();
	void EventSettingPanelAskAlreadyBindFB();
	void EventLBSChangeZone_NoFetch();
	void EventLBSChangeZone();
	void EventGCLoginTimeOut_NoFetch();
	void EventGCLoginTimeOut();
	void EventSettingShowConfirmModifyHDR_NoFetch();
	void EventSettingShowConfirmModifyHDR();
	void EventSettingShowUIElemUI_NoFetch();
	void EventSettingShowUIElemUI();
	void EventBasicSettingAutoFollowJumpSwitch_NoFetch();
	void EventBasicSettingAutoFollowJumpSwitch();
	void EventSettingGetLoginTypeList_NoFetch();
	void EventSettingGetLoginTypeList();
	void EventShowMyRecordVideos_NoFetch();
	void EventShowMyRecordVideos();
	void EventClickSocialFriendSwitch_NoFetch();
	void EventClickSocialFriendSwitch();
	void EventShowNotInstallVkMsg_NoFetch();
	void EventShowNotInstallVkMsg();
	void EventSettingShowCurrentTicket_NoFetch();
	void EventSettingShowCurrentTicket();
	void EventIsOpenLBSChat_NoFetch();
	void EventIsOpenLBSChat();
	void EventHideLastOpennedPage_NoFetch();
	void EventHideLastOpennedPage();
	void EventShowXGPushOpenTip_NoFetch();
	void EventShowXGPushOpenTip();
	void EventSettingSetLobbySkinIDToNotify_NoFetch();
	void EventSettingSetLobbySkinIDToNotify();
	void EventSettingSendCanShowBattleWatchingDetail_NoFetch();
	void EventSettingSendCanShowBattleWatchingDetail();
	void EventUploadSettingConfigToCloud_NoFetch();
	void EventUploadSettingConfigToCloud();
	void EventSettingPanelHideConnectingUI_NoFetch();
	void EventSettingPanelHideConnectingUI();
	void EventHideWaitingUI_NoFetch();
	void EventHideWaitingUI();
	void EventOpenVlinkSDK_NoFetch();
	void EventOpenVlinkSDK();
	void EventShow3dTouchNotSupportQuickThrow_NoFetch();
	void EventShow3dTouchNotSupportQuickThrow();
	void EventShowNotInstallWechatMsg_NoFetch();
	void EventShowNotInstallWechatMsg();
	void EventSettingCheckInputCloudName_NoFetch();
	void EventSettingCheckInputCloudName();
	void EventShowSetRegion_NoFetch();
	void EventShowSetRegion();
	void EventShowConfirmUsingCloud_NoFetch();
	void EventShowConfirmUsingCloud();
	void EventRequestSensitivitySetting_NoFetch();
	void EventRequestSensitivitySetting();
	void EventShowSelectedPage_NoFetch();
	void EventShowSelectedPage();
	void EventRequestSaveSensitivitySettingToCloud_Push_NoFetch();
	void EventRequestSaveSensitivitySettingToCloud_Push();
	void EventShowDiyLimitLevelNotice_Push_NoFetch();
	void EventShowDiyLimitLevelNotice_Push();
	void EventSettingNoticeShoulderShootNotOpen_NoFetch();
	void EventSettingNoticeShoulderShootNotOpen();
	void EventClickSocialStrangerSwitch_NoFetch();
	void EventClickSocialStrangerSwitch();
	void EventSetBindFB_Push_NoFetch();
	void EventSetBindFB_Push();
	void EventSettingSendCanShowWatching_NoFetch();
	void EventSettingSendCanShowWatching();
	void EventGetVLinkOpenStatus_NoFetch();
	void EventGetVLinkOpenStatus();
	void EventSettingShowUnbind_NoFetch();
	void EventSettingShowUnbind();
	void EventSettingBasicRedPointChanged_NoFetch();
	void EventSettingBasicRedPointChanged();
	void EventSettingSwitchToLowSoundEffect_NoFetch();
	void EventSettingSwitchToLowSoundEffect();
	void EventSettingPanelDelectAccount_NoFetch();
	void EventSettingPanelDelectAccount();
	void EventRefreshSettingRedPoint_NoFetch();
	void EventRefreshSettingRedPoint();
	void EventSettingVehicleRedPointChanged_NoFetch();
	void EventSettingVehicleRedPointChanged();
	void EventTurnonMomentRecord_NoFetch();
	void EventTurnonMomentRecord();
	void EventSettingPickUpRedPointChanged_NoFetch();
	void EventSettingPickUpRedPointChanged();
	void Event_SprHghQlty_NotInLobby_NoFetch();
	void Event_SprHghQlty_NotInLobby();
	void EventSettingPanelRegistIMSDKEvents_NoFetch();
	void EventSettingPanelRegistIMSDKEvents();
	void EventShowMobileShakeNoSupport_NoFetch();
	void EventShowMobileShakeNoSupport();
	void EventShowInturrptGameNotice_NoFetch();
	void EventShowInturrptGameNotice();
	void EventIsOpenLBSNear_NoFetch();
	void EventIsOpenLBSNear();
	void EventOnClickUnbindError_NoFetch();
	void EventOnClickUnbindError();
	void EventRefreshSettingParameter_Push_NoFetch();
	void EventRefreshSettingParameter_Push();
	void EventIsHideLBSPanel_NoFetch();
	void EventIsHideLBSPanel();
	void EventSendMsgWarZonePower_NoFetch();
	void EventSendMsgWarZonePower();
	void EventClickSwitchButton_NoFetch();
	void EventClickSwitchButton();
	void EventSendMsgChatsPower_NoFetch();
	void EventSendMsgChatsPower();
	void EventSettingPanelShowTipMsgBindFail_NoFetch();
	void EventSettingPanelShowTipMsgBindFail();
	void EventSettingCannotSetHigherFps_Push_NoFetch();
	void EventSettingCannotSetHigherFps_Push();
	void EventSettingPanelShowConnectingUI_NoFetch();
	void EventSettingPanelShowConnectingUI();
	void EventUpdateLayoutName_NoFetch();
	void EventUpdateLayoutName();
	void EventShowSettingAccount_NoFetch();
	void EventShowSettingAccount();
	void EventShowBackToLobbyNotice_NoFetch();
	void EventShowBackToLobbyNotice();
	void EventSettingNoticeLeftRightShootNotOpen_NoFetch();
	void EventSettingNoticeLeftRightShootNotOpen();
	void EventCannotSettingUnknowPassSubSwitch_NoFetch();
	void EventCannotSettingUnknowPassSubSwitch();
	void EventSetBPQualitySettingByLocal_NoFetch();
	void EventSetBPQualitySettingByLocal();
	void EventShowOrHideSettingAccountTips_NoFetch();
	void EventShowOrHideSettingAccountTips();
	void EventNotOpenLBSPower_NoFetch();
	void EventNotOpenLBSPower();
	void UserConstructionScript();
};


}

