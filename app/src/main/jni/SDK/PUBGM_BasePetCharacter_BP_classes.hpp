#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BasePetCharacter_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BasePetCharacter_BP.BasePetCharacter_BP_C
// 0x00B1 (0x0CC1 - 0x0C10)
class ABasePetCharacter_BP_C : public ASTExtraFightPetCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C10(0x0004) (Transient, DuplicateTransient)
	class UPetAvatarComponent_BP_C*                    PetAvatarComponent_BP;                                    // 0x0C14(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTBuffSystemComponent*                      STBuffSystem;                                             // 0x0C18(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetEntityComponent_BP_C*                    PetEntity;                                                // 0x0C1C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetEventManagerComponent*                   PetEventManager;                                          // 0x0C20(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Track_CE2094E94B1D206C7858FC99724BAEFA;        // 0x0C24(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               Timeline_0__Direction_CE2094E94B1D206C7858FC99724BAEFA;   // 0x0C28(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C29(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0C2C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    OwnerCharacterController;                                 // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PetOwnerStateChangeDispatcher;                            // 0x0C34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<int>                                        UnlockAnimIds;                                            // 0x0C40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AttachToOwner;                                            // 0x0C4C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C4D(0x0003) MISSED OFFSET
	class USplineComponent*                            PetParachuteSpline;                                       // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplineMeshComponent*                        ParachuteSpline;                                          // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VisibilityToSet;                                          // 0x0C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0C59(0x0007) MISSED OFFSET
	struct FTimerHandle                                CheckAirAttackTimer;                                      // 0x0C60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CurAttackArea;                                            // 0x0C68(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAttackArea;                                           // 0x0C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0C75(0x0003) MISSED OFFSET
	struct FTimerHandle                                DebugLineTimer;                                           // 0x0C78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsPlayingAppearAnim;                                      // 0x0C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0C81(0x0003) MISSED OFFSET
	float                                              PetAppearTime;                                            // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PetDelayLeaveDisappearTime;                               // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0C8C(0x0004) MISSED OFFSET
	struct FTimerHandle                                PetDelayLeaveDisappearTimer;                              // 0x0C90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasResetAttachByAnim;                                     // 0x0C98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPawnState                                         TPlayerState;                                             // 0x0C99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EPawnStateChangeType>             TChangeType;                                              // 0x0C9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0C9B(0x0001) MISSED OFFSET
	float                                              TeleportMinAngle;                                         // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportMaxAngle;                                         // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHideOnFirstPersonView;                              // 0x0CA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0CA5(0x0003) MISSED OFFSET
	struct FVector                                     SwimOffset;                                               // 0x0CA8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                CountToPlayWinAnim;                                       // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCountToPlayWinAnim;                                    // 0x0CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalToPlayWinAnim;                                    // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPetHidden;                                               // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BasePetCharacter_BP.BasePetCharacter_BP_C");
		return pStaticClass;
	}


	void SetPetHidden(bool bHidden);
	void OnPetSwimmingStateChange(bool bEnter);
	void GetGameModeType(EGameModeType* GameModeType);
	void HandleOnOwnerWin();
	void OnPetOwnerFallingModeChange(bool IsFalling);
	void StopCurMontage();
	void ChangeToDefaultAttachInfo();
	void OnDelayLeaveDisappear();
	void OnPetLeaveState(TEnumAsByte<enum EPetState> LeaveState);
	void OnPetEnterState(TEnumAsByte<enum EPetState> EnterState);
	void OnPetAppearAnimEnd();
	void OnPetDisappearStateChange(bool IsEnter);
	void GetPetParachuteEquipments(TArray<int>* Out);
	void HandlePetStopParachute();
	void HandlePetStartParachute();
	void DetachFromOwnerPlayer();
	void InitPetAvatar();
	void SetPetFollowType(TEnumAsByte<enum EPetFollowOwnerType> Type);
	void PetHasDisappearState(bool* Out);
	void OnPetFlyAroundStateChange(bool IsEnter);
	void OnPetFollowStateChange(bool IsEnter);
	void UpdateAttachInfoByOwnerDefaultAvatar();
	void ResetAttachInfo();
	void GetPetInfo(struct FGameModePlayerPetInfo* PetInfo);
	void GetPetEntity(class UPetEntityComponent_BP_C** PetEntity);
	void DisableUnuseComponent();
	void CalcInAirAttackArea();
	void OnAirAttackOver();
	void OnAirAttackWarning();
	void SelfPetVisibleSettingChanged(bool In);
	void OtherPetVisibleSettingChanged(bool In);
	void PetOtherVisibleSetting(bool* Out);
	void PetSelfVisibleSetting(bool* Out);
	void GetPetDefaultFollowType(TEnumAsByte<enum EPetFollowOwnerType>* FollowType);
	void DrawPetDebugInfo();
	void OnRep_AttachToOwner();
	void AttachToOwnerPlayer();
	void PetOwnerStopEmote(int EmoteId, int StopReason);
	void PetOwnerPlayEmote(int EmoteId);
	void AnimIdIsValid(int AnimId, bool* IsValid);
	void GetPetRspInfoWithPlayerEmoteId(int PlayerEmoteId, struct FBP_STRUCT_PetPlayerEmoteTable_type* Out_Row, bool* found);
	struct FString GetPetAnimLimitePlayerState(int* AnimId);
	TArray<int> GetPetUnlockAnimIds();
	class ASTExtraBaseCharacter* GetPetOwnerCharacter();
	void GetPetAttachInfo(struct FPetAttachInfo* AttachInfo);
	void GetPetEventManager(class UPetEventManagerComponent** PetEventManager);
	void SetOwnerCharacterPC();
	void GetOwnerCharacter(class ABP_PlayerPawn_C** OwnerCharacter);
	void SetOwnerCharacter(class ABP_PlayerPawn_C* Owner);
	void GetFollowPos(float MinRadius, float MaxRadius, struct FTransform* Out);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PlayerStateChange(EPawnState State, TEnumAsByte<enum EPawnStateChangeType> changeType);
	void ReceiveBeginPlay();
	void PetOwnerCharacterBecomeValid();
	void UpdateSplineInfo();
	void PetStopParchute();
	void PetStartParachute();
	void BndEvt__PetEventManager_K2Node_ComponentBoundEvent_0_PetEventDelegate__DelegateSignature(class UPetWaitEventInfo* EventInfo);
	void OnPetStateChangeEvent(TEnumAsByte<enum EPetState> State, bool IsEnter);
	void BindEvent();
	void OnPetMontageEvent(const struct FPetMontageData& MontageData);
	void OnAsyncLoadPetAnimRes(class UObject* LoadObject);
	void SetPetVisibility(bool* Visible);
	void OnOwnerWinEvent();
	void OnOwnerKillSomeone();
	void OnOwnerAssistKill();
	void OnMoveVoiceAround(class ASTExtraBaseCharacter* nowCharacter, const struct FVector& posVector, float showTime);
	void OnShotVoiceAround(class ASTExtraShootWeapon* nowWeapon, const struct FVector& posVector, float showTime, bool isslience, bool isExplosion);
	void TriggerPetEvent(class UPetWaitEventInfo** Event);
	void OnAirAttackEvent(TEnumAsByte<enum EAirAttackInfo> airattacktype, int waveindex);
	void NotifyBpDrawDebugLineChange(bool* Draw);
	void DebugLineTimerEvent();
	void OnPetOwnerStateInterruptEvent(EPawnState State, EPawnState InterruptedBy);
	void OnOwnerAvatarEquipped(EAvatarSlotType* SlotType, bool* IsEquipped, int* InItemID);
	void PetEnterPlane();
	void OnPetOwnerFallingModeChangeEvent(bool IsFalling);
	void OnOwnerPerspectiveChanged(bool IsFPP);
	void OnOwnerHoldGrenadeStateChange();
	void OnPetOwnerShoot(EPawnState State);
	void OnPetVisibility_EnterHide();
	void OnPetVisibility_EnterVisible();
	void OnPlayerEnterParachute();
	void OnPlayerExitParachute();
	void OnPlayerEnterJumping_Event_1();
	void ExecuteUbergraph_BasePetCharacter_BP(int EntryPoint);
	void PetOwnerStateChangeDispatcher__DelegateSignature(EPawnState State, TEnumAsByte<enum EPawnStateChangeType> changeType);
};


}

