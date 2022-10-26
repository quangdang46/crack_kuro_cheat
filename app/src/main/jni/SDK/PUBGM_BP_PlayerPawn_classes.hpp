#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PlayerPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerPawn.BP_PlayerPawn_C
// 0x03A1 (0x2BA1 - 0x2800)
class ABP_PlayerPawn_C : public ASTExtraPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2800(0x0004) (Transient, DuplicateTransient)
	class UInteractManagerComponent*                   InteractManager;                                          // 0x2804(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBuildSystemComp_BP_C*                       BuildSystemComp_BP;                                       // 0x2808(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHoldComponent_C*                            ShoulderHoldComp;                                         // 0x280C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SkillManagerComponent_C*                 BP_SkillManagerComponent;                                 // 0x2810(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraComponent*                      Camera;                                                   // 0x2814(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           ShareBounds;                                              // 0x2818(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_PaintDecalDetectLine1;                                 // 0x281C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x2820(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHoldComponent_C*                            AngledSightHoldComp;                                      // 0x2824(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAnimList_Skill_C*                  CharacterAnimList_Skill;                                  // 0x2828(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAnimList_Parachute_C*              CharacterAnimList_Parachute;                              // 0x282C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Scope;                                                    // 0x2830(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x2834(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         ShoulderCameraSpringArm;                                  // 0x2838(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ShoulderCameraOffset;                                     // 0x283C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAnimList_Base_C*                   CharacterAnimList_Base;                                   // 0x2840(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            PetParachuteSpline;                                       // 0x2844(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetComponent_BP_C*                          PetComponent_BP;                                          // 0x2848(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp2_BP_C*                  CharacterAvatarComp2_BP;                                  // 0x284C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ScopeStaticMesh;                                          // 0x2850(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHoldComponent_C*                            PeekHoldComp;                                             // 0x2854(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHoldComponent_C*                            AimHoldComp;                                              // 0x2858(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObserverCameraComponent*                    ObserverCameraFPPMode;                                    // 0x285C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFPPSpringArmComponent*                      FPPSpringArm;                                             // 0x2860(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFPPComponent_C*                             FPPComponent;                                             // 0x2864(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x2868(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ScopingCamera;                                            // 0x286C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         ScopingSpringArm;                                         // 0x2870(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           HitBox_Prone;                                             // 0x2874(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           HitBox_Stand;                                             // 0x2878(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVault_Controller_C*                         Vault_Controller;                                         // 0x287C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SwimController_C*                        BP_SwimController;                                        // 0x2880(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_AutoAimingComponent_C*                   BP_AutoAimingComponent;                                   // 0x2884(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterWeaponManagerComponent*            CharacterWeaponManager;                                   // 0x2888(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupManagerComponent*                     PickupManager;                                            // 0x288C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CameraRoot;                                               // 0x2890(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomSpringArmComponent*                   CustomSpringArm;                                          // 0x2894(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraSettingComponent_C*                   CameraSettingComponent;                                   // 0x2898(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RearSightTimeline_RearSightUpdate_B52340D847258BFCFCCDAC8659F0041C;// 0x289C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               RearSightTimeline__Direction_B52340D847258BFCFCCDAC8659F0041C;// 0x28A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x28A1(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RearSightTimeline;                                        // 0x28A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngledSigntTimeline_NewTrack_0_1A55FFB84346668215A22AA5D66EFECA;// 0x28A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               AngledSigntTimeline__Direction_1A55FFB84346668215A22AA5D66EFECA;// 0x28AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x28AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AngledSigntTimeline;                                      // 0x28B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopeTimeline_NewTrack_1_FBCE53A7433799FDD4E08AA77C9DCE27;// 0x28B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               ScopeTimeline__Direction_FBCE53A7433799FDD4E08AA77C9DCE27;// 0x28B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x28B9(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScopeTimeline;                                            // 0x28BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteCamBlend_Alpha_A00EF93A482E11D3825F6F8F58409606; // 0x28C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               ParachuteCamBlend__Direction_A00EF93A482E11D3825F6F8F58409606;// 0x28C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x28C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ParachuteCamBlend;                                        // 0x28C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpAlpha_LerpAlpha_BBB653CA48682C1A42A33C890A409F07;     // 0x28CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               LerpAlpha__Direction_BBB653CA48682C1A42A33C890A409F07;    // 0x28D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x28D1(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LerpAlpha;                                                // 0x28D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnLerpAlpha_Alpha_E6EF8561406981075B2088A2D4185EA5;     // 0x28D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               TurnLerpAlpha__Direction_E6EF8561406981075B2088A2D4185EA5;// 0x28DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x28DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TurnLerpAlpha;                                            // 0x28E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageSphereDMI;                                          // 0x28E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCrouch;                                                  // 0x28E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReloading;                                              // 0x28E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x28EA(0x0002) MISSED OFFSET
	float                                              ReloadingCDMax;                                           // 0x28EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastInAirVelocityVector;                                  // 0x28F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityVector;                                           // 0x28FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Moving;                                                   // 0x290C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x290D(0x0003) MISSED OFFSET
	struct FRotator                                    LastVelocityRotation;                                     // 0x2910(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceRotation;                                      // 0x291C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceStart;                                         // 0x2928(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceTarget;                                        // 0x2934(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurningInPlace;                                           // 0x2940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LocomotionState;                                          // 0x2941(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumped;                                                   // 0x2942(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x2943(0x0001) MISSED OFFSET
	float                                              ProneCameraHeight;                                        // 0x2944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMoveSpeed;                                          // 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFirstPersonPerspective;                                // 0x294C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x294D(0x0003) MISSED OFFSET
	float                                              MeleeAttackRange;                                         // 0x2950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Melee_Attack_Location;                                    // 0x2954(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeAttackDamage;                                        // 0x2960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EPlayerCameraMode>                CurCameraMode;                                            // 0x2964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2965(0x0003) MISSED OFFSET
	struct FSTR_CameraSetting                          StandCameraSetting;                                       // 0x2968(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    TerreneNormal;                                            // 0x297C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x2988(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class APickUpWrapperActor*                         PickUpTarget;                                             // 0x2994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPicking;                                               // 0x2998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2999(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    EquipWeaponComplete;                                      // 0x299C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnequipWeaponComplete;                                    // 0x29A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CrouchCameraHeight;                                       // 0x29B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupDelayTime;                                          // 0x29B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultCapsuleRadius;                                     // 0x29BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ParachuteComponent_1;                                     // 0x29C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimCameraHeight;                                         // 0x29C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimTargetRoll;                                           // 0x29C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimUpRateFix;                                            // 0x29CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimRotateSpeed;                                          // 0x29D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, struct FString>                          GrenadeToSlotIndexDict;                                   // 0x29D4(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               VaultEnter;                                               // 0x2A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2A11(0x0007) MISSED OFFSET
	struct FItemDefineID                               putoffItem;                                               // 0x2A18(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x2A30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               autoEquip;                                                // 0x2A3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2A3D(0x0003) MISSED OFFSET
	TArray<class USpringArmComponent*>                 SpringArms;                                               // 0x2A40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCameraComponent*>                    Cameras;                                                  // 0x2A4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USpringArmComponent*                         CurActiveSpringArm;                                       // 0x2A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTurniinPlace;                                          // 0x2A5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2A5D(0x0003) MISSED OFFSET
	TMap<int, struct FName>                            GrenadeIDToNameDict;                                      // 0x2A60(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        GrenadeIDsOrder;                                          // 0x2A9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ElapseTime;                                               // 0x2AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimRotateX;                                              // 0x2AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USpringArmComponent*                         NewVar_1;                                                 // 0x2AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ESTEPoseState>                    CurPoseState;                                             // 0x2AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2AB5(0x0003) MISSED OFFSET
	TMap<int, class UBackpackEmoteHandle*>             EmoteBPIDToAnimHandleMap;                                 // 0x2AB8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             DecentBloodSpot;                                          // 0x2AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BloodSpot_Red;                                            // 0x2AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BloodSpot_Green;                                          // 0x2AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_WateringArea_C*                          MiniTreeRef_1;                                            // 0x2B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<EPawnState>                                 DisallowedWateringStates;                                 // 0x2B04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnCakePlacement;                                          // 0x2B10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AActor*                                      PaintDecalDetector;                                       // 0x2B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UChildActorComponent*                        PaintDecalDetectComp;                                     // 0x2B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_2;                                                 // 0x2B24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2B25(0x0003) MISSED OFFSET
	class AActor*                                      CurEmoteActor;                                            // 0x2B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraWeapon*                              CurUseingEmoteWeapon;                                     // 0x2B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialBillboardComponent*                 FrameUIBillboard;                                         // 0x2B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAngledSightOnlyTurn_1;                                 // 0x2B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x2B35(0x0003) MISSED OFFSET
	class UMeshComponent*                              OriginAttachComponent;                                    // 0x2B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMeshComponent*                              TargetAttachComponent;                                    // 0x2B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OriginRotOffset;                                          // 0x2B40(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FDollyZoomParam                             OriginDollyZoomParam;                                     // 0x2B4C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDollyZoomParam                             TargetDollyZoomParam;                                     // 0x2B58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, class UClass*>                  GrenadeWeaponMaps;                                        // 0x2B64(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Cache_ForceStill_;                                        // 0x2BA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPawn.BP_PlayerPawn_C");
		return pStaticClass;
	}


	struct FString GetGrenadeNameByGrenadeID(int* InGrenadeID);
	void SetTpCameraFov(float FOV);
	void OnRep_Cache_ForceStill_();
	void SetCapsuleParentBounds(bool UseParentBounds);
	void ClearDecalBakingRTCache();
	void GetGrenadeWeaponMap(TMap<struct FName, class UClass*>* OutWeaponMap);
	void TriggerActivityByID(bool GetNameOnly, struct FString* UIName, int* ActivityID);
	void RegisterInitGrenadeMap();
	void InitGrenadeMapData();
	bool IsAngledSightAvailable();
	void RefreshAngledSightUI(bool HaveAngledSight, bool IsAngledSight);
	void ShowAngledSightState(bool IsAngled);
	void GetAngledSightRotator(class ASTExtraShootWeapon* NewParam, struct FRotator* NewParam1);
	void AngledSightAnimLogic(TEnumAsByte<enum EAngledSightType> Selection);
	void AngledSightAnimUpdate(float InputPin, bool bIsOnlyTurn);
	void Replay_CreateEnemyFrameUI(bool isPlayingCompletePlayback, bool is_enemy);
	void Replay_SetVisiableOfFrameUI(bool is_Visiable);
	void UpdateEmoteWeaponIdInfo(int ID, bool* Ret);
	void AllowWater(bool* bCanEnter);
	bool ShouldRedBlood();
	void CheckHasVehicleAvatar(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PlayerCharacter, int* InItemID);
	void ChangeCurVehicleAvatar(class ASTExtraVehicleBase* InVehicle);
	void HandleOnChangedVehicleSeat();
	void GetMasterBoneComponent(class UMeshComponent** MasterBoneComponent);
	void InitDefaultAvatarByResID(int AGender, int Head, int Hair);
	void GetGrenadeCameraShakeByDir(const struct FVector& ImpulseDir, class UClass** RetVar);
	class UBackpackEmoteHandle* GetEmoteHandle(int* ItemId);
	struct FString GetShootWeaponNameByWeapon(int* ItemDefineID);
	class UCameraComponent* GetThirdPersonCamera();
	class USpringArmComponent* GetThirdPersonSpringArm();
	class UCameraComponent* GetFPPCamera();
	class USpringArmComponent* GetFPPSpringArm();
	class UCameraComponent* GetFirstPersonCamera();
	class USpringArmComponent* GetFirstPersonSpringArm();
	class UCameraComponent* GetScopeCamera();
	class USpringArmComponent* GetScopeSpringArm();
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();
	bool ShouldAutoScopeWhenPeek();
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();
	void GetControllerViewCamera(class UCameraComponent** Camera);
	TArray<class UActorComponent*> GetNonSimulatedComponents();
	TArray<class UActorComponent*> GetNonDedicatedComponents();
	void HandleOnDetachedVehicle(class ASTExtraVehicleBase* NewParam);
	void HandleOnAttachedVehicle(class ASTExtraVehicleBase* InVehicle);
	class USpringArmComponent* GetActiveSpringArm();
	void AimInterupted();
	void GetWeapon(struct FVector* NewParam, struct FRotator* NewParam1, bool* bHaveWeapon);
	void ClientHandlePreOnPlane();
	void ResetBPCameraSetting();
	void ShowDebugArrow(class USceneComponent* self2, const struct FRotator& InRot, const struct FLinearColor& Color);
	void IsAutonomous(bool* NewParam);
	void PickUp(class APickUpWrapperActor* NewParam);
	void DoPickUpTarget();
	void RotateMesh(const struct FRotator& NewParam);
	void SetAllCollisionEnabled(bool bEnable);
	void MoveOutScope();
	void MoveInScope();
	void Reload();
	void SwitchCrouch(TEnumAsByte<enum ESTEPoseState> NewParam, TEnumAsByte<enum ESTEPoseState> PreState);
	void UserConstructionScript();
	void ParachuteCamBlend__FinishedFunc();
	void ParachuteCamBlend__UpdateFunc();
	void LerpAlpha__FinishedFunc();
	void LerpAlpha__UpdateFunc();
	void ScopeTimeline__FinishedFunc();
	void ScopeTimeline__UpdateFunc();
	void AngledSigntTimeline__FinishedFunc();
	void AngledSigntTimeline__UpdateFunc();
	void RearSightTimeline__FinishedFunc();
	void RearSightTimeline__UpdateFunc();
	void TurnLerpAlpha__FinishedFunc();
	void TurnLerpAlpha__UpdateFunc();
	void InpActEvt_T_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Vault_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void CE_ForceStill_(bool ForceStill);
	void CE_ForceStill_ServerOnly__(bool ForceStill);
	void OnPetOwnerPossessed();
	void SwitchCameraFromParachuteOpeningToTPPBeginPlay();
	void SwitchCameraFromParachuteOpeningToTPPStop();
	void ReceiveBeginPlay();
	void BPNotifyStartDying(class AController** Killer, class AActor** DamageCauser, struct FHitResult* KillingHitInfo, struct FVector* KillingHitImpulseDir, class UClass** KillingHitDamageType);
	void ReloadEvent();
	void OnEquipWeapon(TEnumAsByte<enum ESurviveWeaponPropSlot>* Slot);
	void SwitchCamera(const struct FSTR_CameraSetting& CameraSetting);
	void OnNotifyHurt();
	void NotifyPickUp(bool bIsAvailable);
	void OnLanded(struct FHitResult* Hit);
	void OnPoseStateChange(TEnumAsByte<enum ESTEPoseState>* LastState, TEnumAsByte<enum ESTEPoseState>* CurState);
	void K2_UpdateCustomMovement(float* DeltaTime);
	void K2_OnMovementModeChanged(TEnumAsByte<enum EMovementMode>* PrevMovementMode, TEnumAsByte<enum EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void BPReceiveDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ParachuteOnWater();
	void NotifyTombBox(bool bIsAvailable);
	void DoAutoReloadCurrentWeapon();
	void OnUnEquipWeapon();
	void BPResetCharacter();
	void OnInitGrenadeData();
	void VaultFailPawnBluePrint(struct FString* Content);
	void PawnVaultServerBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* StartPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* HitPoint, class AActor** WindowActor, struct FRotator* movedir);
	void PawnVaultAllBluePrint(float* dis, float* Height, float* Length, struct FString* VaultKey, struct FVector* StartPos, class AActor** checkActor, float* crossblockMaxFall, float* crossblockMaxDis, struct FVector* HitPoint, struct FRotator* movedir);
	void ScopeInStop();
	void PlayScopeInTimeline(float Rate);
	void BPReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, float* Radius, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FVector* ImpulseDir);
	void ReceivePossessed(class AController** NewController);
	void ParachutePlaySound(class UAkAudioEvent** LocalAkEvent, class UAkAudioEvent** RemoteAkEvent);
	void OnWeaponEquipmentUpdate();
	void BindAndExecStateChanged();
	void StateEnterHandler_Event_1(EPawnState State);
	void OnHitByCake();
	void EnablePet(bool* Enable);
	void OnEnterStateForBp(EPawnState* State);
	void OnLeaveStateForBp(EPawnState* State);
	void ReceiveDestroyed();
	void PawnVaultServerStopCheckBluePrint();
	void PawnVaultStopBluePrint();
	void OnMiniTreeTriggerServerLogicCPP();
	void SwitchSightAngledLocal(TEnumAsByte<enum EAngledSightType>* Type, bool* IsOnlyTurn);
	void DoAngledSight(bool IsPush);
	void DoNormalSight(bool IsPush);
	void StopSwitchAngledSight();
	void CustomEvent_4(class ASTExtraShootWeapon* Weapon, EWeaponAttachmentSocketType Type, bool bEquip);
	void CustomEvent_1(bool bIsBegin);
	void CustomEvent_2();
	void OnBPStateCheckIn();
	void DynamicHoldGun(bool BoolValue);
	void LuaReceiveBeginPlay();
	void SwitchRearSight(int PrevIndex, int NewIndex, const struct FRotator& AngleRotator);
	void StopTurningInPlace();
	void TurnInPlace(const struct FRotator& TurnInPlaceStart, const struct FRotator& TurnInPlaceTarget, class UCurveFloat* Curve, class UAnimMontage* TurnAnimation);
	void ExecuteUbergraph_BP_PlayerPawn(int EntryPoint);
	void OnCakePlacement__DelegateSignature(bool Success);
	void UnequipWeaponComplete__DelegateSignature();
	void EquipWeaponComplete__DelegateSignature();
};


}

