#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PlayerLobbyPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C
// 0x0268 (0x09D8 - 0x0770)
class ABP_PlayerLobbyPawn_C : public ASTExtraLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0004) (Transient, DuplicateTransient)
	class UBP_LobbyWeaponManager_C*                    BP_LobbyWeaponManager;                                    // 0x0774(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyPlayEmoteComponent_BP_C*               LobbyPlayEmoteComponent_BP;                               // 0x0778(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULobbyWeaponAnimationComponent_C*            LobbyWeaponAnimationComponent;                            // 0x077C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSkeletalMesh;                                       // 0x0780(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp2_BP_C*                  CharacterAvatarComp2_BP;                                  // 0x0784(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAELobbyCharAnimListComp*                    AELobbyCharAnimListComp;                                  // 0x0788(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Time_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;         // 0x078C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_0__Direction_DFD4E0A94A64AF2CC7AD9DB7F31CA12E;   // 0x0790(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0791(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0794(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                headid;                                                   // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               press;                                                    // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07A1(0x0003) MISSED OFFSET
	float                                              LocationX;                                                // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastRotator;                                              // 0x07A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // 0x07B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	int                                                LobbyPosition;                                            // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHoldingWeapon;                                          // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	class ASTExtraWeapon*                              curEquipingWeapon;                                        // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class UBackpackEmoteHandle*>             EmoteItemIDToHandleMap;                                   // 0x07C4(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayerKey;                                                // 0x0800(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HeadIsVisible;                                            // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canRotate;                                                // 0x080D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMan;                                                     // 0x080E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x080F(0x0001) MISSED OFFSET
	int                                                LuaID;                                                    // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLogicPuton;                                             // 0x0814(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bHasBeginPlayed;                                          // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0821(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayAction;                                             // 0x0824(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopAction;                                             // 0x0830(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeEquipment;                                        // 0x083C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBackpackEmoteHandle*                        CurEmoteHandle;                                           // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEmoteLooping;                                          // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	int                                                CurShowingWeaponSkinID;                                   // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentActionID;                                          // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChangingHead;                                           // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0859(0x0003) MISSED OFFSET
	int                                                HeadTypeID;                                               // 0x085C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayOnChangingHeadAcionID;                                // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurPlayEmoteId;                                           // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingAction;                                          // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	float                                              RotateTime;                                               // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetRotation;                                           // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartRotateFlag;                                          // 0x0874(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0875(0x0003) MISSED OFFSET
	int                                                SubType;                                                  // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ColorID;                                                  // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PatternID;                                                // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClothAnimDyAlpha;                                         // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurClothAnimDyAlpha;                                      // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClothAnimDyAlphaDiff;                                     // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EMeshComponentUpdateFlag>         UpdateFlag;                                               // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManInited;                                               // 0x0891(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMVPMotion;                                              // 0x0892(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0893(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnchangeGender;                                           // 0x0894(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeWeapon;                                           // 0x08A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bPlayIdleAnim;                                            // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoTest;                                               // 0x08AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x08AE(0x0002) MISSED OFFSET
	int                                                ExactDeviceLevel;                                         // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocationBeforeEmote;                                      // 0x08B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3C];                                      // 0x08C0(0x003C) UNKNOWN PROPERTY: SetProperty BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.NoneLODModeWeapons
	int                                                AvatarLevel;                                              // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3C];                                      // 0x0900(0x003C) UNKNOWN PROPERTY: SetProperty BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.DynamicMatClothSet
	bool                                               ClothDyMatChanged;                                        // 0x093C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	float                                              Inten;                                                    // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEquipClothStateChange;                                  // 0x0944(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ForceUseDefaultIdle;                                      // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetForceUseDefaultIdle;                                 // 0x0954(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<int, int>                                     DynamicMatClothMap;                                       // 0x0960(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class ASTExtraWeapon*>          NewVar_1;                                                 // 0x099C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C");
		return pStaticClass;
	}


	void CharEquipWeaponBySocketID(int resID, bool Use, const struct FName& SocketID);
	void CharUnEquipWeaponByResId(int resID);
	void OnAsyncLobbyWeaponAllAssetsLoadedEvent(class ASTExtraWeapon* Weapon);
	void OnAsyncLobbyWeaponAnimLoadedEvent(class ASTExtraWeapon* Weapon);
	void CharUnEquipExtraWeapon();
	void GetWeaponSocketNameByResId(int resID, struct FName* SocketName);
	void OnAvatarEquippedLua(int SlotType, bool IsEquipped, int ItemId);
	void SetForceUseDefaultIdle(bool force);
	void checkCanEquipWeapon(int WeaponId, bool* canEquip);
	bool NeedLODOptimize();
	void UpdateClothInten(float leten);
	void UpdateClothMatParam(float RotateSpeed);
	void StopActionCamera();
	void RotateOnTickInternal();
	void EnableClothAndHairAnimation(bool IsEnable);
	void GetCurrentActionID(int* ActionID);
	void SetAvatarLevel(int Level);
	void OnAvatarAllMeshLoaded();
	void GetLobbyWeaponClass(int InWeaponAvatarID, class UClass** ObjectClass);
	void TryRotateAvatar();
	void CheckAndShowWeaponPendant(int WeaponAvatarID);
	void testLoadHandle();
	void SetAvatarVisibleForEmote(bool Visible);
	void RequestWeaponDIYData(const struct FString& InPlayerUID, int WeaponAvatarID, int InDIYPlanID);
	void SetEquipingWeaponScale(float Scale);
	void SetWeaponPendantSocketType(EWeaponPendantSocketType Type);
	void SetIsMVPMotion(bool isMVPMotion);
	void SyncWeaponMontage();
	void InitDefaultAvatarByResID(int AGender, int Head, int Hair);
	void SwitchMeshUpdateFlag();
	void SetClothAnimDyAlphaInst(float Alpha);
	void SetClothAnimDyAlphaGrad(float Alpha);
	void SetClothAnimDyAlpha(float Alpha);
	void StopEmotionSound();
	void RotateOnTick(float RotateTime, float TargetRotation);
	void SwitchSexAndHeadAndHair(int sex, int headid, int Hair);
	void OnEndActionHandle(int ActionID);
	void OnPlayActionHandle(int ActionID);
	void CharEquipWeaponByResId_ForceClientMode(int resID);
	void GetAllEquipmentListLobby(TArray<struct FString>* Result);
	void SetConflictRuleEnable(bool bEnableConflictRule);
	void GetEquipmentInfoBySlot(EAvatarSlotType SlotType, int* ItemId, int* ColorID, int* PatternID);
	void IsSlotHasEquipped(EAvatarSlotType SlotType, bool* Result);
	void IsItemHasEquipped(int InItemID, int ColorID, int PatternID, bool* Result);
	void PutOffEquipmentBySlot(EAvatarSlotType SlotType, bool* Result);
	void PlayEmoteLoop();
	void ShouldCurEmoteShowWeapon(bool* ShouldShow);
	void HandleWeaponDisplayWhenPlayEmote();
	void GetAllEquipmentList(TArray<int>* Result);
	void IsAnimShowMan(bool* bMan);
	void PlayAnimHit();
	void SetCanRotate(bool canRotate);
	void SetPawnAndClothVisibility(bool Show);
	void RemoveAvatarBySlot();
	void PutOffEquipmentByResID(int resID, bool* Result);
	void PutOnEquipmentByResID(int resID, int ColorID, int PatternID, bool* Result);
	void CharStopEmoteByResId();
	void AvatarDisplaySceneEquipWeapon(bool ForceClientMode, int resID);
	void HideWeapon(bool isHide);
	void CharPlayEmoteByResId(int resID, const struct FString& ExtraInfo);
	void CharUnEquipWeapon();
	void CharEquipWeaponByResId(int resID, bool bUse);
	class UBackpackEmoteHandle* GetEmoteHandle(int* ItemId);
	void GetExtraWeaponByResID(int WeaponId, class ASTExtraWeapon** extraWeaponObj, class UBattleItemHandleBase** WeaponHandle, bool* PlayIdleAnim);
	class UBackpackAvatarHandle* GetBattleItemFromResID(int RowName);
	void GetBPID(int RowName, int* BPID);
	void GetHiddenFlags(int resID, TArray<EAvatarSlotType>* hiddenFlags);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ReceiveDestroyed();
	void OnEmoteFinish(int EmoteIndex);
	void OnEmoteBegin(int EmoteIndex);
	void EventPlayHurtAnim();
	void SetMaleAnimClass();
	void SetFemaleAnimClass();
	void OnPutOnEquipByIdFaild(int SlotID, const struct FItemDefineID& NewItemID);
	void OnAvatarEquipped(EAvatarSlotType SlotType, bool IsEquipped, int ItemId);
	void TickClothLeten(float from);
	void CustomBeginPlay();
	void ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint);
	void OnSetForceUseDefaultIdle__DelegateSignature(bool force);
	void OnEquipClothStateChange__DelegateSignature(class UBackpackAvatarHandle* AvatarHandle, bool IsEuqiped, int ItemId);
	void OnChangeWeapon__DelegateSignature();
	void OnchangeGender__DelegateSignature();
	void OnChangeEquipment__DelegateSignature();
	void OnStopAction__DelegateSignature(int ActionID);
	void OnPlayAction__DelegateSignature(int ActionID);
	void OnLogicPuton__DelegateSignature(EAvatarSlotType SlotType, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldParam, int LuaID);
};


}

