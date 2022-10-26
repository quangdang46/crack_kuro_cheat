#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlayerPrefs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPrefs.PlayerPrefs_C
// 0x0624 (0x064C - 0x0028)
class UPlayerPrefs_C : public USaveGame
{
public:
	int                                                LoginCount;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoginTime;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstInLobby;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GuestWarningAccepted;                                     // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                YXXYRedPoint;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             NearByNewTipsList;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty PlayerPrefs.PlayerPrefs_C.CloseLocationList
	bool                                               QuestionDone;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ServerListClicked;                                        // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	int                                                MysteryLastTime;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               notFirstEnterMall;                                        // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                CoprsShopLevelRedPoint;                                   // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        StoreBoxList;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, bool>                                    HasSeeShopItemDict;                                       // 0x00B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NewsIds;                                                  // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LobbyNoticeID;                                            // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UserAgreementAcceptedVersion;                             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrivacyPolicyAcceptedVersion;                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClickTimeNotBind;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClickTimeBind;                                            // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, int>                          UidClickTimeNotBind;                                      // 0x0120(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          UidClickTimeBind;                                         // 0x0170(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        StoreGiftBoxList;                                         // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AchievementInitialized;                                   // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	int                                                Mystery2LastTime;                                         // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FString>               ConfigStringMap;                                          // 0x01D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          ConfigIntMap;                                             // 0x0228(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, float>                        ConfigFloatMap;                                           // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, bool>                         ConfigBoolMap;                                            // 0x02C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          UidAirDropTime;                                           // 0x0318(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LoginFrequency;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDay;                                               // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             SecondLanguage;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDateTime                                   ShowSwitchSecondLanguageNextTime;                         // 0x0380(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FString, bool>                         HasClickUPassAct;                                         // 0x0388(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, bool>                         HasClickInviteTeamAct;                                    // 0x03D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CursorFaceInfoID;                                         // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               FaceInfoClickedIDAndTime;                                 // 0x0430(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LanguagePromptState;                                      // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasTipLeagueGameSign;                                     // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0482(0x0006) MISSED OFFSET
	TMap<struct FString, int>                          ClickTimeHalloweenVehicle;                                // 0x0488(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, bool>                         HasClickHalloweenExchange;                                // 0x04D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     primeClicktimestamp;                                      // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isVNGadult;                                               // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	TMap<struct FString, int>                          ClickTimeIceLucky;                                        // 0x0540(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsFirstTimeShowPrime;                                     // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	TMap<struct FString, bool>                         HasCliickVehicleAcitivtyGuide;                            // 0x0598(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          ClickTimeAnniversary;                                     // 0x05E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DecomposeTriggerTime;                                     // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               haveClickGuaranteeTips;                                   // 0x063C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	int                                                LastEnterExcitingTourTimeSec;                             // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IfHasShowExcitingTourTips;                                // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0645(0x0003) MISSED OFFSET
	int                                                PrivacyPolicyPopupVersion;                                // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerPrefs.PlayerPrefs_C");
		return pStaticClass;
	}


	void SetPopupPolicyVersion(int PolicyVersion);
	void SetGuaranteeFlag(bool clicked);
	void GetGuaranteeClickFlag(bool* clicked);
	void GetDecomposeIndexTriggerTime(int* DecomposeTriggerTim);
	void SetDecomposeIndexTriggerTime(int TimeStamp);
	void SetClickTimeAnniversary(const struct FString& UId, int Time);
	void GetClickTimeAnniversary(const struct FString& UId, int* Value);
	void GetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool* hasClick);
	void SetCliickVehicleAcitivtyGuideExchange(const struct FString& Key, bool isClick);
	void SetClickTimeIceLucky(int Time, const struct FString& UUID);
	void GetClickTimeIceLucky(const struct FString& UUID, int* Value);
	void SetIsVNGAdult();
	void GetIsFirstTimeShowPrime(bool* IsfirstTimeOpenPrime);
	void SetIsFirstTimeShowPrime();
	void SetHasClickHalloweenExchange(bool isClick, const struct FString& UUID);
	void GetHasClickHalloweenExchange(const struct FString& UUID, bool* hasClick);
	void SetClickTimeHalloweenVehicle(int Time, const struct FString& UUID);
	void GetClickTimeHalloweenVehicle(const struct FString& UUID, int* Value);
	void GetFaceInfoClickedIDAndTime(const struct FString& Faceid, struct FString* TimeStamp);
	void SetFaceInfoClickedIDAndTime(const struct FString& Faceid);
	void GetCursorFaceInfoID(int* CursorFaceInfoID);
	void SetCursorFaceInfoID(int LastFace);
	void SetHasClickInviteTeamAct(bool isClick, const struct FString& UUID);
	void GetHasClickInviteTeamAct(const struct FString& UUID, bool* hasClick);
	void GetHasClickUPassAct(const struct FString& UUID, bool* hasClick);
	void SetHasClickUPassAct(bool isClick, const struct FString& UUID);
	void SetShowSwitchSecondLanguageNextTime(const struct FDateTime& DateTime);
	void GetShowSwitchSecondLanguageNextTime(struct FDateTime* DateTime);
	void GetLoginFrequency(int* loginfreq);
	void SetLoginFrequency(int CurrentDay);
	void GetAirDropTime(const struct FString& UId, int* outAirDropTime);
	void SetAirDropTime(int InTime, const struct FString& UId);
	void SetMystery2LastTime(int Time);
	void SetStoreGiftBoxList(TArray<int>* BoxList);
	void GetClickTimeAboutBind(const struct FString& UId, int* TimeNotBind, int* TimeBind);
	void SetClickTimeAboutBind(int TimeNotBind, int TimeBind, const struct FString& UId);
	void IsEqualCurID(int ids, bool* Has);
	void SetNewsIds(int ids);
	void SetMallSeeDict(TMap<int, bool> Dict);
	void SetStoreBosList(TArray<int>* BoxList);
	void SetCorpsShopRedPoint(int coprsLevel);
	void SetFirstEnterMall();
	void SetMysteryLastTime(int Time);
	void RejectUserAgreement();
	void AcceptUserAgreement(int newVersion);
	void ServerListClick();
	void HasCloseLocation(bool UId, bool* Has);
	void SetCloseLocation(bool CloseLocation, const struct FString& UId);
	void HasNearByNewTips(const struct FString& UId, bool* Has);
	void SetNearByNewTipsRead(const struct FString& UId);
	void SetYXXYRedPoint(int isRed);
	void AcceptGuestWarning();
	void RejectPolicy();
	void AcceptPolicy(int newVersion);
	void SetFirstInLobby();
	void SetTime(int arg);
	void ClearCount();
	void SetCount(int Count);
	class USaveGame* LoadData();
	void SaveData(bool* SaveDataState);
};


}

