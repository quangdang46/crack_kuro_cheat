#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_PlayerLobbyPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C
// 0x020C (0x0BCC - 0x09C0)
class ABP_PlayerLobbyPawn_C : public ASTExtraLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C0(0x0008) (Transient, DuplicateTransient)
	class UBP_LobbyWeaponManager_C*                    BP_LobbyWeaponManager;                                    // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyPlayEmoteComponent_BP_C*               LobbyPlayEmoteComponent_BP;                               // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyWeaponAnimationComponent_C*            LobbyWeaponAnimationComponent;                            // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSkeletalMesh;                                       // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp2_BP_C*                  CharacterAvatarComp2_BP;                                  // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAELobbyCharAnimListComp*                    AELobbyCharAnimListComp;                                  // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Time_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;         // 0x09F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_0__Direction_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;   // 0x09FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                headid;                                                   // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               press;                                                    // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A11(0x0003) MISSED OFFSET
	float                                              LocationX;                                                // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A19(0x0003) MISSED OFFSET
	int                                                LobbyPosition;                                            // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              curEquipingWeapon;                                        // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class UBackpackEmoteHandle*>             EmoteItemIDToHandleMap;                                   // 0x0A28(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerKey;                                                // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HeadIsVisible;                                            // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canRotate;                                                // 0x0A89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A8A(0x0002) MISSED OFFSET
	int                                                LuaID;                                                    // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayAction;                                             // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopAction;                                             // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeEquipment;                                        // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBackpackEmoteHandle*                        CurEmoteHandle;                                           // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEmoteLooping;                                          // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AC9(0x0003) MISSED OFFSET
	int                                                CurrentActionID;                                          // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChangingHead;                                           // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0AD1(0x0003) MISSED OFFSET
	int                                                PlayOnChangingHeadAcionID;                                // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurPlayEmoteId;                                           // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingAction;                                          // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0ADD(0x0003) MISSED OFFSET
	float                                              RotateTime;                                               // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetRotation;                                           // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartRotateFlag;                                          // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0AE9(0x0003) MISSED OFFSET
	float                                              ClothAnimDyAlpha;                                         // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurClothAnimDyAlpha;                                      // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClothAnimDyAlphaDiff;                                     // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMVPMotion;                                              // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnchangeGender;                                           // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeWeapon;                                           // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               isAutoTest;                                               // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B21(0x0003) MISSED OFFSET
	struct FVector                                     LocationBeforeEmote;                                      // 0x0B24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                AvatarLevel;                                              // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Inten;                                                    // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEquipClothStateChange;                                  // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ForceUseDefaultIdle;                                      // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0B49(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetForceUseDefaultIdle;                                 // 0x0B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<int, int>                                     DynamicMatClothMap;                                       // 0x0B60(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              WindSpeed_Editor;                                         // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength_Editor;                                      // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindRadius_Editor;                                        // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0BBC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WindSpeed;                                                // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumelateWindTime;                                       // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C");
		return pStaticClass;
	}


	void SetAddCharacterWeaponAnimListHandle(TArray<struct FLobbyCharacterWeaponAnimData>* addAnimData, bool* Suc);
	void OnAvatarEquipFinish(EAvatarSlotType SlotType, bool IsEquipped, int ItemId);
	void CharEquipWeaponPendant(int WeaponId, EWeaponPendantSocketType PendantSocketType);
	void WeaponAllAssetLoadFinish();
	void CharUnEquipWeaponByResId(int resID, const struct FName& SocketName);
	void CharUnEquipExtraWeapon();
	void SetForceUseDefaultIdle(bool force);
	void UpdateClothInten(float leten);
	void UpdateClothMatParam(float RotateSpeed);
	void StopActionCamera();
	void RotateOnTickInternal();
	void EnableClothAndHairAnimation(bool IsEnable);
	void GetCurrentActionID(int* ActionID);
	void SetAvatarLevel(int Level);
	void OnAvatarAllMeshLoaded();
	void TryRotateAvatar();
	void SetAvatarVisibleForEmote(bool Visible);
	void RequestWeaponDIYData(const struct FString& InPlayerUID, int WeaponAvatarID, int InDIYPlanID);
	void SetIsMVPMotion(bool isMVPMotion);
	void SyncWeaponMontage();
	void InitDefaultAvatarByResID(int AGender, int Head, int Hair);
	void SetClothAnimDyAlphaInst(float Alpha);
	void SetClothAnimDyAlphaGrad(float Alpha);
	void SetClothAnimDyAlpha(float Alpha);
	void RotateOnTick(float RotateTime, float TargetRotation);
	void SwitchSexAndHeadAndHair(int sex, int headid, int Hair);
	void OnEndActionHandle(int ActionID);
	void OnPlayActionHandle(int ActionID);
	void GetAllEquipmentListMoreInfo(TArray<int>* Result);
	void SetConflictRuleEnable(bool bEnableConflictRule);
	void GetEquipmentInfoBySlot(EAvatarSlotType SlotType, int* ItemId, int* ColorID, int* PatternID);
	void IsItemHasEquipped(int InItemID, int ColorID, int PatternID, bool* Result);
	void PutOffEquipmentBySlot(EAvatarSlotType SlotType, bool* Result);
	void PlayEmoteLoop();
	void ShouldCurEmoteShowWeapon(bool* Result);
	void HandleWeaponDisplayWhenPlayEmote();
	void GetAllEquipmentList(TArray<int>* Result);
	void SetCanRotate(bool canRotate);
	void PutOffEquipmentByResID(int resID, bool* Result);
	void PutOnEquipmentByResID(int resID, int ColorID, int PatternID, bool* Result);
	void CharStopEmoteByResId();
	void HideWeapon(bool isHide);
	void CharPlayEmoteByResId(int EmoteId, const struct FString& ExtraInfo);
	void CharUnEquipWeapon();
	void CharEquipWeaponByResId(int resID, bool bUse, bool bAsync, const struct FName& SocketName, class ASTExtraWeapon** Weapon);
	class UBackpackEmoteHandle* GetEmoteHandle(int* ItemId);
	void GetBPID(int RowName, int* BPID);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void TickClothLeten(float from);
	void ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint);
	void OnSetForceUseDefaultIdle__DelegateSignature(bool force);
	void OnEquipClothStateChange__DelegateSignature(class UBackpackAvatarHandle* AvatarHandle, bool IsEuqiped, int ItemId, int SlotType);
	void OnChangeWeapon__DelegateSignature();
	void OnchangeGender__DelegateSignature();
	void OnChangeEquipment__DelegateSignature();
	void OnStopAction__DelegateSignature(int ActionID);
	void OnPlayAction__DelegateSignature(int ActionID);
};


}

