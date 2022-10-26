#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_STExtraPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_STExtraPlayerController.BP_STExtraPlayerController_C
// 0x03D0 (0x35A0 - 0x31D0)
class ABP_STExtraPlayerController_C : public ASTExtraPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x31D0(0x0004) (Transient, DuplicateTransient)
	class UQuickSignComponent_BP_C*                    QuickSignComponent_BP;                                    // 0x31D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_MapUIMarkManager_C*                      BP_MapUIMarkManager;                                      // 0x31D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ChangeWearingComp_C*                     BP_ChangeWearingComp;                                     // 0x31DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GameEventListener_C*                     BP_GameEventListener;                                     // 0x31E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGuideComponent_BP_C*                        GuideComponent_BP;                                        // 0x31E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ServerSwitcher_C*                        BP_ServerSwitcher;                                        // 0x31E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTExtraUnderWaterEffectComp*                STExtraUnderWaterEffectComp;                              // 0x31EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChatComponent_BP_C*                         ChatComponent_BP;                                         // 0x31F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CommonBtn_C*                             BP_CommonBtn;                                             // 0x31F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_VehicleUser_C*                           BP_VehicleUser;                                           // 0x31F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrayToOne_Alpha_7DE4452444DF4112B2469DBCAE9CD7B1;         // 0x31FC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               GrayToOne__Direction_7DE4452444DF4112B2469DBCAE9CD7B1;    // 0x3200(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x3201(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrayToOne;                                                // 0x3204(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrayToZero_Alpha_AEAD84AB4721658A84A855B8F2969A97;        // 0x3208(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               GrayToZero__Direction_AEAD84AB4721658A84A855B8F2969A97;   // 0x320C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x320D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrayToZero;                                               // 0x3210(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          MainPostProcessVolume;                                    // 0x3214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EPlayerCameraMode>                LastCameraMode;                                           // 0x3218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x3219(0x0003) MISSED OFFSET
	class APawn*                                       PrePlayerPawn;                                            // 0x321C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInItemGenerator;                                         // 0x3220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x3221(0x0003) MISSED OFFSET
	float                                              InItemGeneratorUIRefreshTime;                             // 0x3224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurInItemGeneratorUIRefreshTime;                          // 0x3228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     WaitingUI;                                                // 0x322C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     SimulatePlane;                                            // 0x3230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaneStartYaw;                                            // 0x3234(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReloadingCDStart;                                         // 0x3238(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadingCDEnd;                                           // 0x3244(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AlreadyAimed;                                             // 0x3250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x3251(0x0003) MISSED OFFSET
	class ASTExtraBaseCharacter*                       closedAimTarget_1;                                        // 0x3254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               CurAimTargets;                                            // 0x3258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CloseDistance;                                            // 0x3264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EDrawDebugTrace>                  AutoAimDrawType;                                          // 0x3268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x3269(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    AirborneLanded;                                           // 0x326C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MotionRate_Yaw;                                           // 0x3278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionRate_Pitch;                                         // 0x327C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionAimRate_Pitch;                                      // 0x3280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionAimRate_Yaw;                                        // 0x3284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionRate_Pitch_Threshold;                               // 0x3288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionRate_Yaw_Threshold;                                 // 0x328C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchAimRate_Pitch;                                 // 0x3290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchAimRate_Yaw;                                   // 0x3294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchRate_Yaw;                                      // 0x3298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionTouchRate_Pitch;                                    // 0x329C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultIsAutoAimEnabled;                                 // 0x32A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DriveWithForwardAxis;                                     // 0x32A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DriveWithRightAxis;                                       // 0x32A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInTombBoxGenerator;                                      // 0x32A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerEnterWater;                                         // 0x32A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerLeaveWater;                                         // 0x32B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bindWeapon;                                               // 0x32BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLandScapeOrientation;                                    // 0x32BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x32BE(0x0002) MISSED OFFSET
	float                                              PitchReverce;                                             // 0x32C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Left;                                                     // 0x32C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right;                                                    // 0x32C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTime;                                                 // 0x32CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             MotionDataStack;                                          // 0x32D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CurMotionData;                                            // 0x32DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    BindEventToBackpackComponent;                             // 0x32E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VaultFailDS;                                              // 0x32F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FString, struct FUIAdaptationStructure> AdaptationDict;                                           // 0x3300(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FUIAdaptationStructure                      CurDeviceAdaptationOffset;                                // 0x333C(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUIAdaptationStructure                      CurDeviceAdaptationData;                                  // 0x3358(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsJoyStickShow;                                          // 0x3374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInitSensibility;                                       // 0x3375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _3DTouchSwitcher;                                         // 0x3376(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x3377(0x0001) MISSED OFFSET
	struct FString                                     ActiveDevicProfileName;                                   // 0x3378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               adaption;                                                 // 0x3384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               initAdaptation;                                           // 0x3385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJoystickTriggerSprint;                                  // 0x3386(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x3387(0x0001) MISSED OFFSET
	float                                              UITouchMoveX;                                             // 0x3388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UITouchMoveY;                                             // 0x338C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PressFireFingerIndex;                                     // 0x3390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowFireBtn;                                            // 0x3394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrowGrenade;                                           // 0x3395(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x3396(0x0002) MISSED OFFSET
	int                                                VoiceMemberID;                                            // 0x3398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoiceMemberStatus;                                        // 0x339C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ESurviveWeaponPropSlot>           AttachmentAttachSlot;                                     // 0x33A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x33A1(0x0007) MISSED OFFSET
	struct FItemDefineID                               AttachmentDefineID;                                       // 0x33A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   AutoSprintBtnTouchPos;                                    // 0x33C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAutoSprintBtnVisible;                                   // 0x33C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFingerInsideAutoSprintBtn;                              // 0x33C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBindJoystickSprint;                                     // 0x33CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ESurviveWeaponPropSlot>           UnequipWeaponType;                                        // 0x33CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowInputControl;                                       // 0x33CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x33CD(0x0003) MISSED OFFSET
	struct FVector2D                                   AutoNavigateTranslation;                                  // 0x33D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                InputTeamID;                                              // 0x33D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EmoteItemType;                                            // 0x33DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FItemRecordData>                     EmoteDataRow;                                             // 0x33E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bLongPressSideSwitch;                                     // 0x33EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLongPressSniperSwitch;                                   // 0x33ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x33EE(0x0002) MISSED OFFSET
	struct FVector2D                                   AimBtnPos;                                                // 0x33F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AimBtnSize;                                               // 0x33F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                PeekMode;                                                 // 0x3400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AimMode;                                                  // 0x3404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, int>                                     EmoteItemIDToBPIDMap;                                     // 0x3408(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FString>                          EmoteBPIDToHandlePath;                                    // 0x3444(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FString>                          EmoteItemIDToImagePathMap;                                // 0x3480(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FString>                          EmoteItemIDToImageBattlePathMap;                          // 0x34BC(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAlwaysHideTouchInterface;                                // 0x34F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x34F9(0x0003) MISSED OFFSET
	TMap<int, class UAkAudioEvent*>                    BattleSoundMap;                                           // 0x34FC(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FString>                          BattleBankMap;                                            // 0x3538(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InWateringRange_1;                                        // 0x3574(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x3575(0x0003) MISSED OFFSET
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameUIElemLayout;                                     // 0x3578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GameMode;                                                 // 0x357C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                currentColorBlindnessType;                                // 0x3580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentHitEffectIndex;                                    // 0x3584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHurtEffectIndex;                                   // 0x3588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurControllerRotation;                                    // 0x358C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurExitJump;                                            // 0x3598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopDownloadAvatar;                                      // 0x3599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x359A(0x0002) MISSED OFFSET
	int                                                ShoulderMode;                                             // 0x359C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_STExtraPlayerController.BP_STExtraPlayerController_C");
		return pStaticClass;
	}


	void RPC_Client_WonderfulPeriod(int IntProperty_1, float FloatProperty_1, float FloatProperty_2, TArray<float> ArrayProperty_1, int IntProperty_2);
	void ReadClientReplayConfig();
	void InitLocalHelmetDisplay();
	void MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void ReceiveLuaTick();
	void ReceiveLuaBeginPlay();
	void StopAvatarDownload();
	void SetMultiVersionRedSwitchConfig();
	void MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void MapFromCBToES();
	void ReadConfigEffectSettingColorSingleLayer(int NewParam);
	void ReadConfigEffectSettingColorMultiLayer(int NewParam);
	void InitNewbieCounts();
	void AddIgnoreCameraMoveIndex(TEnumAsByte<enum ETouchIndex> _Index);
	void ReadConfigColorBlindnessTypeBoolDelegate(bool NewParam);
	void ReadConfigColorBlindnessTypeIntDelegate(int NewParam);
	void CheckGlobalReadRed(const struct FString& StrID, bool* bIsRed);
	void CheckIsBood(const struct FString& StrID, bool* bIsBlood);
	void CheckJapnReadRed(const struct FString& StrID, bool* bIsRed);
	void GetJKCBColor(const struct FString& ID, bool* bFind, struct FLinearColor* Color);
	void GetVNCBColor(const struct FString& ID, bool* bFind, struct FLinearColor* Color);
	void GetCBColor(const struct FBP_STRUCT_ColorBlindnessConfig_type& tempCBData, struct FLinearColor* Color);
	void ReadConfigColorBlindnessType();
	void CurGameMode(int* GameMode);
	void IsFPP(bool* IsFPP);
	void OnRep_InWateringRange();
	void LoadAllBattleSound();
	void AsyncLoadBattleSound(class UObject* Object, int SoundID);
	void LoadBattleSound(const struct FString& BankName, const struct FString& EventName, int SoundID);
	void SetAlwaysHideTouchInterface(bool Hide);
	void PlayBattleSoundInBP(int SoundID);
	bool IsReleasePosInAimBtnRange(struct FVector* Loc);
	void ReadEmoteDataRowPC();
	void IsAtaptation(bool* adaptation);
	void ReadAdaptationTable();
	void InitWeather();
	void SetMotionParam();
	void GetStickLeftSize(struct FVector2D* Size);
	void ShowFightingUI();
	void ShowAutoSprintBtn(bool Visible, const struct FVector2D& showPos_, bool inside);
	void ReadConfigCrossHairColor(int NewParam);
	void ReadConfigMotionControl(int NewParam);
	void ReadConfigAutoAim(bool NewParam);
	void ReadConfigFromHUD();
	void MakeFireModeEffect();
	void DebugNotDrawGuideLine();
	void ShowBackpackTombBox(bool Show);
	void BindOrUnBindJoyStickSprint(bool IsBind);
	void CreateRank(int Kills, int Rank);
	void DisableAimIfUnEquipWeapon(TEnumAsByte<enum ESurviveWeaponPropSlot> WeaponType);
	void SwitchAimMode();
	void DoInitUI();
	void HandleJumpBtnPressEvent();
	void OnRep_bInCar();
	void RefreshUI(float DeltaTime);
	void UpdateInputPanel();
	void ShowBackpackIconSplash(bool bShow);
	void RefreshWeaponPanel();
	void SetTouchInputEnabled(bool bEnabled);
	void ShowMainInputControl(bool bShow);
	void ShowTouchInterface(bool bShow);
	void EnableDeathGray(float BlendWeight);
	void SetDeathGrayLerpValue(float Lerp);
	void SetPostProcessVolume();
	void UserConstructionScript();
	void GrayToOne__FinishedFunc();
	void GrayToOne__UpdateFunc();
	void GrayToZero__FinishedFunc();
	void GrayToZero__UpdateFunc();
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void OnCharacterCurrentActivityIDRep(int* CurrentActivityID);
	void ReceiveBeginPlay();
	void OnSpectatorCameraChange(bool* bDie);
	void OnStopFireEventHandle();
	void OnSwitchCameraSatrtHandle(TEnumAsByte<enum EPlayerCameraMode> CameraMode);
	void OnPlayerPutDownActorHandle(class ASTExtraBaseCharacter* TargetPlayer, class AActor* TargetActor);
	void OnSwitchWeaponHandle();
	void ReceiveTick(float* DeltaSeconds);
	void OnUseInventoryitemHandle();
	void ServerStartBattle();
	void ServerAfterLand();
	void ClientAfterLand();
	void RefreshTopMostUIPanel(TEnumAsByte<enum ETopMostUIPanelType>* Type);
	void GameStart();
	void RemoveWeaponAim(TEnumAsByte<enum ESurviveWeaponPropSlot> Slot);
	void SetMoveableAirborne(bool NewParam);
	void OnLandOnGroundAfterJumpPlaneEnd();
	void JoystickTriggerSprint(bool* bIsSprint);
	void OnPlane();
	void SetPanels(TArray<class UUAEUserWidget*>* panels);
	void InitOprate();
	void OnFiremodeChange(int IntValue);
	void ChangeToMale();
	void ChangeToFemale();
	void DoUITouchMove(struct FVector* Loc);
	void PressFire(int* FingerIndex);
	void ShowFireBtn(bool* bShow);
	void PressGrenade(bool* isThrow);
	void InitJoyStickAfterActivation();
	void MemberVoice(int* member, int* Status);
	void ReceiveClientRestart();
	void OnShowAnimationButton(bool* IsShow, int* NewUIType);
	void OnWeaponEquipAttachment(TEnumAsByte<enum ESurviveWeaponPropSlot>* WeaponPropSlot, struct FItemDefineID* DefineID, bool* bEquip);
	void ResetMissingUIUpdate();
	void MotionControliOS(const struct FVector& AxisValue);
	void InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(const struct FVector& AxisValue);
	void MotionControlAndroidTick();
	void MotionControlAndroid(const struct FVector& AxisValue);
	void ReceiveBackpackComponent();
	void InitWallFeedBack();
	void InitNewbieComponent(TArray<int>* FinishedGuide, TArray<int>* FinishedCounts, int* PlayerLevel, int* PlayerExperienceType);
	void DebugOpenGuide();
	void BP_OceanSideDetected(struct FVector* OceansideLocation, bool* bDetectedRiver);
	void CallShowTouchInterface(bool* InShow);
	void OnGameModeStateChanged();
	void ReleaseFire();
	void OnFireModeChangeTD(int IntValue);
	void OnRep_InWateringRangeBP();
	void PlayerExitJumpEvent();
	void EnterFightingStateDelegate();
	void GameStartCountDownDelegate(float CountdownTime);
	void LuaReceiveBeginPlay();
	void AddPubgmAutoComp();
	void ExecuteUbergraph_BP_STExtraPlayerController(int EntryPoint);
	void VaultFailDS__DelegateSignature();
	void BindEventToBackpackComponent__DelegateSignature();
	void PlayerLeaveWater__DelegateSignature(bool HideLung);
	void PlayerEnterWater__DelegateSignature();
	void AirborneLanded__DelegateSignature();
	void ReloadingCDEnd__DelegateSignature();
	void ReloadingCDStart__DelegateSignature(float CD);
};


}

