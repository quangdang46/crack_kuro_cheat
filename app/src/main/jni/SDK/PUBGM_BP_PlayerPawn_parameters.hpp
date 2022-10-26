#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PlayerPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeNameByGrenadeID
struct ABP_PlayerPawn_C_GetGrenadeNameByGrenadeID_Params
{
	int*                                               InGrenadeID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetTpCameraFov
struct ABP_PlayerPawn_C_SetTpCameraFov_Params
{
	float                                              FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnRep_Cache(ForceStill)
struct ABP_PlayerPawn_C_OnRep_Cache_ForceStill__Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetCapsuleParentBounds
struct ABP_PlayerPawn_C_SetCapsuleParentBounds_Params
{
	bool                                               UseParentBounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ClearDecalBakingRTCache
struct ABP_PlayerPawn_C_ClearDecalBakingRTCache_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeWeaponMap
struct ABP_PlayerPawn_C_GetGrenadeWeaponMap_Params
{
	TMap<struct FName, class UClass*>                  OutWeaponMap;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TriggerActivityByID
struct ABP_PlayerPawn_C_TriggerActivityByID_Params
{
	bool                                               GetNameOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UIName;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                ActivityID;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RegisterInitGrenadeMap
struct ABP_PlayerPawn_C_RegisterInitGrenadeMap_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InitGrenadeMapData
struct ABP_PlayerPawn_C_InitGrenadeMapData_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.IsAngledSightAvailable
struct ABP_PlayerPawn_C_IsAngledSightAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RefreshAngledSightUI
struct ABP_PlayerPawn_C_RefreshAngledSightUI_Params
{
	bool                                               HaveAngledSight;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAngledSight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowAngledSightState
struct ABP_PlayerPawn_C_ShowAngledSightState_Params
{
	bool                                               IsAngled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetAngledSightRotator
struct ABP_PlayerPawn_C_GetAngledSightRotator_Params
{
	class ASTExtraShootWeapon*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewParam1;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimLogic
struct ABP_PlayerPawn_C_AngledSightAnimLogic_Params
{
	TEnumAsByte<enum EAngledSightType>                 Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSightAnimUpdate
struct ABP_PlayerPawn_C_AngledSightAnimUpdate_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnlyTurn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_CreateEnemyFrameUI
struct ABP_PlayerPawn_C_Replay_CreateEnemyFrameUI_Params
{
	bool                                               isPlayingCompletePlayback;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_enemy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Replay_SetVisiableOfFrameUI
struct ABP_PlayerPawn_C_Replay_SetVisiableOfFrameUI_Params
{
	bool                                               is_Visiable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UpdateEmoteWeaponIdInfo
struct ABP_PlayerPawn_C_UpdateEmoteWeaponIdInfo_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AllowWater
struct ABP_PlayerPawn_C_AllowWater_Params
{
	bool                                               bCanEnter;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldRedBlood
struct ABP_PlayerPawn_C_ShouldRedBlood_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CheckHasVehicleAvatar
struct ABP_PlayerPawn_C_CheckHasVehicleAvatar_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InItemID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ChangeCurVehicleAvatar
struct ABP_PlayerPawn_C_ChangeCurVehicleAvatar_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnChangedVehicleSeat
struct ABP_PlayerPawn_C_HandleOnChangedVehicleSeat_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetMasterBoneComponent
struct ABP_PlayerPawn_C_GetMasterBoneComponent_Params
{
	class UMeshComponent*                              MasterBoneComponent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InitDefaultAvatarByResID
struct ABP_PlayerPawn_C_InitDefaultAvatarByResID_Params
{
	int                                                AGender;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetGrenadeCameraShakeByDir
struct ABP_PlayerPawn_C_GetGrenadeCameraShakeByDir_Params
{
	struct FVector                                     ImpulseDir;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UClass*                                      RetVar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetEmoteHandle
struct ABP_PlayerPawn_C_GetEmoteHandle_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackEmoteHandle*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetShootWeaponNameByWeapon
struct ABP_PlayerPawn_C_GetShootWeaponNameByWeapon_Params
{
	int*                                               ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonCamera
struct ABP_PlayerPawn_C_GetThirdPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetThirdPersonSpringArm
struct ABP_PlayerPawn_C_GetThirdPersonSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPCamera
struct ABP_PlayerPawn_C_GetFPPCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFPPSpringArm
struct ABP_PlayerPawn_C_GetFPPSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonCamera
struct ABP_PlayerPawn_C_GetFirstPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetFirstPersonSpringArm
struct ABP_PlayerPawn_C_GetFirstPersonSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeCamera
struct ABP_PlayerPawn_C_GetScopeCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetScopeSpringArm
struct ABP_PlayerPawn_C_GetScopeSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_OnFighting
struct ABP_PlayerPawn_C_GetNonSimulatedComponents_OnFighting_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShouldAutoScopeWhenPeek
struct ABP_PlayerPawn_C_ShouldAutoScopeWhenPeek_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents_NonTeammates
struct ABP_PlayerPawn_C_GetNonSimulatedComponents_NonTeammates_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetControllerViewCamera
struct ABP_PlayerPawn_C_GetControllerViewCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonSimulatedComponents
struct ABP_PlayerPawn_C_GetNonSimulatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetNonDedicatedComponents
struct ABP_PlayerPawn_C_GetNonDedicatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnDetachedVehicle
struct ABP_PlayerPawn_C_HandleOnDetachedVehicle_Params
{
	class ASTExtraVehicleBase*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.HandleOnAttachedVehicle
struct ABP_PlayerPawn_C_HandleOnAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetActiveSpringArm
struct ABP_PlayerPawn_C_GetActiveSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AimInterupted
struct ABP_PlayerPawn_C_AimInterupted_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.GetWeapon
struct ABP_PlayerPawn_C_GetWeapon_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewParam1;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               bHaveWeapon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ClientHandlePreOnPlane
struct ABP_PlayerPawn_C_ClientHandlePreOnPlane_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ResetBPCameraSetting
struct ABP_PlayerPawn_C_ResetBPCameraSetting_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ShowDebugArrow
struct ABP_PlayerPawn_C_ShowDebugArrow_Params
{
	class USceneComponent*                             self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.IsAutonomous
struct ABP_PlayerPawn_C_IsAutonomous_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PickUp
struct ABP_PlayerPawn_C_PickUp_Params
{
	class APickUpWrapperActor*                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoPickUpTarget
struct ABP_PlayerPawn_C_DoPickUpTarget_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RotateMesh
struct ABP_PlayerPawn_C_RotateMesh_Params
{
	struct FRotator                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SetAllCollisionEnabled
struct ABP_PlayerPawn_C_SetAllCollisionEnabled_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveOutScope
struct ABP_PlayerPawn_C_MoveOutScope_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.MoveInScope
struct ABP_PlayerPawn_C_MoveInScope_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.Reload
struct ABP_PlayerPawn_C_Reload_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCrouch
struct ABP_PlayerPawn_C_SwitchCrouch_Params
{
	TEnumAsByte<enum ESTEPoseState>                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESTEPoseState>                    PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UserConstructionScript
struct ABP_PlayerPawn_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__FinishedFunc
struct ABP_PlayerPawn_C_ParachuteCamBlend__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteCamBlend__UpdateFunc
struct ABP_PlayerPawn_C_ParachuteCamBlend__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__FinishedFunc
struct ABP_PlayerPawn_C_LerpAlpha__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.LerpAlpha__UpdateFunc
struct ABP_PlayerPawn_C_LerpAlpha__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__FinishedFunc
struct ABP_PlayerPawn_C_ScopeTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeTimeline__UpdateFunc
struct ABP_PlayerPawn_C_ScopeTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSigntTimeline__FinishedFunc
struct ABP_PlayerPawn_C_AngledSigntTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.AngledSigntTimeline__UpdateFunc
struct ABP_PlayerPawn_C_AngledSigntTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeline__FinishedFunc
struct ABP_PlayerPawn_C_RearSightTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.RearSightTimeline__UpdateFunc
struct ABP_PlayerPawn_C_RearSightTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__FinishedFunc
struct ABP_PlayerPawn_C_TurnLerpAlpha__FinishedFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnLerpAlpha__UpdateFunc
struct ABP_PlayerPawn_C_TurnLerpAlpha__UpdateFunc_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_T_K2Node_InputKeyEvent_32
struct ABP_PlayerPawn_C_InpActEvt_T_K2Node_InputKeyEvent_32_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_6
struct ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Fire_K2Node_InputActionEvent_5
struct ABP_PlayerPawn_C_InpActEvt_Fire_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Vault_K2Node_InputActionEvent_4
struct ABP_PlayerPawn_C_InpActEvt_Vault_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_31
struct ABP_PlayerPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_31_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_30
struct ABP_PlayerPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_30_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_E_K2Node_InputKeyEvent_29
struct ABP_PlayerPawn_C_InpActEvt_E_K2Node_InputKeyEvent_29_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_E_K2Node_InputKeyEvent_28
struct ABP_PlayerPawn_C_InpActEvt_E_K2Node_InputKeyEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Z_K2Node_InputKeyEvent_27
struct ABP_PlayerPawn_C_InpActEvt_Z_K2Node_InputKeyEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_V_K2Node_InputKeyEvent_26
struct ABP_PlayerPawn_C_InpActEvt_V_K2Node_InputKeyEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_C_K2Node_InputKeyEvent_25
struct ABP_PlayerPawn_C_InpActEvt_C_K2Node_InputKeyEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_24
struct ABP_PlayerPawn_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_23
struct ABP_PlayerPawn_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_22
struct ABP_PlayerPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_R_K2Node_InputKeyEvent_21
struct ABP_PlayerPawn_C_InpActEvt_R_K2Node_InputKeyEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_Z_K2Node_InputKeyEvent_20
struct ABP_PlayerPawn_C_InpActEvt_Z_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_19
struct ABP_PlayerPawn_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_18
struct ABP_PlayerPawn_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_17
struct ABP_PlayerPawn_C_InpActEvt_F10_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CE(ForceStill)
struct ABP_PlayerPawn_C_CE_ForceStill__Params
{
	bool                                               ForceStill;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CE(ForceStill(ServerOnly))
struct ABP_PlayerPawn_C_CE_ForceStill_ServerOnly___Params
{
	bool                                               ForceStill;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPetOwnerPossessed
struct ABP_PlayerPawn_C_OnPetOwnerPossessed_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraFromParachuteOpeningToTPPBeginPlay
struct ABP_PlayerPawn_C_SwitchCameraFromParachuteOpeningToTPPBeginPlay_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCameraFromParachuteOpeningToTPPStop
struct ABP_PlayerPawn_C_SwitchCameraFromParachuteOpeningToTPPStop_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveBeginPlay
struct ABP_PlayerPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPNotifyStartDying
struct ABP_PlayerPawn_C_BPNotifyStartDying_Params
{
	class AController**                                Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 KillingHitInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    KillingHitImpulseDir;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UClass**                                     KillingHitDamageType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReloadEvent
struct ABP_PlayerPawn_C_ReloadEvent_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEquipWeapon
struct ABP_PlayerPawn_C_OnEquipWeapon_Params
{
	TEnumAsByte<enum ESurviveWeaponPropSlot>*          Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchCamera
struct ABP_PlayerPawn_C_SwitchCamera_Params
{
	struct FSTR_CameraSetting                          CameraSetting;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnNotifyHurt
struct ABP_PlayerPawn_C_OnNotifyHurt_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyPickUp
struct ABP_PlayerPawn_C_NotifyPickUp_Params
{
	bool                                               bIsAvailable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLanded
struct ABP_PlayerPawn_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnPoseStateChange
struct ABP_PlayerPawn_C_OnPoseStateChange_Params
{
	TEnumAsByte<enum ESTEPoseState>*                   LastState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESTEPoseState>*                   CurState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_UpdateCustomMovement
struct ABP_PlayerPawn_C_K2_UpdateCustomMovement_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.K2_OnMovementModeChanged
struct ABP_PlayerPawn_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<enum EMovementMode>*                   PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EMovementMode>*                   NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveDamage
struct ABP_PlayerPawn_C_BPReceiveDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachuteOnWater
struct ABP_PlayerPawn_C_ParachuteOnWater_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.NotifyTombBox
struct ABP_PlayerPawn_C_NotifyTombBox_Params
{
	bool                                               bIsAvailable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAutoReloadCurrentWeapon
struct ABP_PlayerPawn_C_DoAutoReloadCurrentWeapon_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnUnEquipWeapon
struct ABP_PlayerPawn_C_OnUnEquipWeapon_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPResetCharacter
struct ABP_PlayerPawn_C_BPResetCharacter_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnInitGrenadeData
struct ABP_PlayerPawn_C_OnInitGrenadeData_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.VaultFailPawnBluePrint
struct ABP_PlayerPawn_C_VaultFailPawnBluePrint_Params
{
	struct FString*                                    Content;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerBluePrint
struct ABP_PlayerPawn_C_PawnVaultServerBluePrint_Params
{
	float*                                             dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    VaultKey;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     WindowActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultAllBluePrint
struct ABP_PlayerPawn_C_PawnVaultAllBluePrint_Params
{
	float*                                             dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    VaultKey;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ScopeInStop
struct ABP_PlayerPawn_C_ScopeInStop_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PlayScopeInTimeline
struct ABP_PlayerPawn_C_PlayScopeInTimeline_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BPReceiveRadialDamage
struct ABP_PlayerPawn_C_BPReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ImpulseDir;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceivePossessed
struct ABP_PlayerPawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ParachutePlaySound
struct ABP_PlayerPawn_C_ParachutePlaySound_Params
{
	class UAkAudioEvent**                              LocalAkEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              RemoteAkEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnWeaponEquipmentUpdate
struct ABP_PlayerPawn_C_OnWeaponEquipmentUpdate_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.BindAndExecStateChanged
struct ABP_PlayerPawn_C_BindAndExecStateChanged_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StateEnterHandler_Event_1
struct ABP_PlayerPawn_C_StateEnterHandler_Event_1_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnHitByCake
struct ABP_PlayerPawn_C_OnHitByCake_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.EnablePet
struct ABP_PlayerPawn_C_EnablePet_Params
{
	bool*                                              Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnEnterStateForBp
struct ABP_PlayerPawn_C_OnEnterStateForBp_Params
{
	EPawnState*                                        State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnLeaveStateForBp
struct ABP_PlayerPawn_C_OnLeaveStateForBp_Params
{
	EPawnState*                                        State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ReceiveDestroyed
struct ABP_PlayerPawn_C_ReceiveDestroyed_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultServerStopCheckBluePrint
struct ABP_PlayerPawn_C_PawnVaultServerStopCheckBluePrint_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.PawnVaultStopBluePrint
struct ABP_PlayerPawn_C_PawnVaultStopBluePrint_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnMiniTreeTriggerServerLogicCPP
struct ABP_PlayerPawn_C_OnMiniTreeTriggerServerLogicCPP_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchSightAngledLocal
struct ABP_PlayerPawn_C_SwitchSightAngledLocal_Params
{
	TEnumAsByte<enum EAngledSightType>*                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsOnlyTurn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoAngledSight
struct ABP_PlayerPawn_C_DoAngledSight_Params
{
	bool                                               IsPush;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DoNormalSight
struct ABP_PlayerPawn_C_DoNormalSight_Params
{
	bool                                               IsPush;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StopSwitchAngledSight
struct ABP_PlayerPawn_C_StopSwitchAngledSight_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_4
struct ABP_PlayerPawn_C_CustomEvent_4_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_1
struct ABP_PlayerPawn_C_CustomEvent_1_Params
{
	bool                                               bIsBegin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.CustomEvent_2
struct ABP_PlayerPawn_C_CustomEvent_2_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnBPStateCheckIn
struct ABP_PlayerPawn_C_OnBPStateCheckIn_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.DynamicHoldGun
struct ABP_PlayerPawn_C_DynamicHoldGun_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.LuaReceiveBeginPlay
struct ABP_PlayerPawn_C_LuaReceiveBeginPlay_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.SwitchRearSight
struct ABP_PlayerPawn_C_SwitchRearSight_Params
{
	int                                                PrevIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngleRotator;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.StopTurningInPlace
struct ABP_PlayerPawn_C_StopTurningInPlace_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.TurnInPlace
struct ABP_PlayerPawn_C_TurnInPlace_Params
{
	struct FRotator                                    TurnInPlaceStart;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    TurnInPlaceTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurnAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.ExecuteUbergraph_BP_PlayerPawn
struct ABP_PlayerPawn_C_ExecuteUbergraph_BP_PlayerPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.OnCakePlacement__DelegateSignature
struct ABP_PlayerPawn_C_OnCakePlacement__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.UnequipWeaponComplete__DelegateSignature
struct ABP_PlayerPawn_C_UnequipWeaponComplete__DelegateSignature_Params
{
};

// Function BP_PlayerPawn.BP_PlayerPawn_C.EquipWeaponComplete__DelegateSignature
struct ABP_PlayerPawn_C_EquipWeaponComplete__DelegateSignature_Params
{
};

}

