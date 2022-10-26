#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PlayerLobbyPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponBySocketID
struct ABP_PlayerLobbyPawn_C_CharEquipWeaponBySocketID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Use;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeaponByResId
struct ABP_PlayerLobbyPawn_C_CharUnEquipWeaponByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAsyncLobbyWeaponAllAssetsLoadedEvent
struct ABP_PlayerLobbyPawn_C_OnAsyncLobbyWeaponAllAssetsLoadedEvent_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAsyncLobbyWeaponAnimLoadedEvent
struct ABP_PlayerLobbyPawn_C_OnAsyncLobbyWeaponAnimLoadedEvent_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipExtraWeapon
struct ABP_PlayerLobbyPawn_C_CharUnEquipExtraWeapon_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetWeaponSocketNameByResId
struct ABP_PlayerLobbyPawn_C_GetWeaponSocketNameByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarEquippedLua
struct ABP_PlayerLobbyPawn_C_OnAvatarEquippedLua_Params
{
	int                                                SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetForceUseDefaultIdle
struct ABP_PlayerLobbyPawn_C_SetForceUseDefaultIdle_Params
{
	bool                                               force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.checkCanEquipWeapon
struct ABP_PlayerLobbyPawn_C_checkCanEquipWeapon_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canEquip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.NeedLODOptimize
struct ABP_PlayerLobbyPawn_C_NeedLODOptimize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothInten
struct ABP_PlayerLobbyPawn_C_UpdateClothInten_Params
{
	float                                              leten;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateClothMatParam
struct ABP_PlayerLobbyPawn_C_UpdateClothMatParam_Params
{
	float                                              RotateSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopActionCamera
struct ABP_PlayerLobbyPawn_C_StopActionCamera_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTickInternal
struct ABP_PlayerLobbyPawn_C_RotateOnTickInternal_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.EnableClothAndHairAnimation
struct ABP_PlayerLobbyPawn_C_EnableClothAndHairAnimation_Params
{
	bool                                               IsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetCurrentActionID
struct ABP_PlayerLobbyPawn_C_GetCurrentActionID_Params
{
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarLevel
struct ABP_PlayerLobbyPawn_C_SetAvatarLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarAllMeshLoaded
struct ABP_PlayerLobbyPawn_C_OnAvatarAllMeshLoaded_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetLobbyWeaponClass
struct ABP_PlayerLobbyPawn_C_GetLobbyWeaponClass_Params
{
	int                                                InWeaponAvatarID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObjectClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TryRotateAvatar
struct ABP_PlayerLobbyPawn_C_TryRotateAvatar_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CheckAndShowWeaponPendant
struct ABP_PlayerLobbyPawn_C_CheckAndShowWeaponPendant_Params
{
	int                                                WeaponAvatarID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.testLoadHandle
struct ABP_PlayerLobbyPawn_C_testLoadHandle_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetAvatarVisibleForEmote
struct ABP_PlayerLobbyPawn_C_SetAvatarVisibleForEmote_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RequestWeaponDIYData
struct ABP_PlayerLobbyPawn_C_RequestWeaponDIYData_Params
{
	struct FString                                     InPlayerUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                WeaponAvatarID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InDIYPlanID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetEquipingWeaponScale
struct ABP_PlayerLobbyPawn_C_SetEquipingWeaponScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetWeaponPendantSocketType
struct ABP_PlayerLobbyPawn_C_SetWeaponPendantSocketType_Params
{
	EWeaponPendantSocketType                           Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetIsMVPMotion
struct ABP_PlayerLobbyPawn_C_SetIsMVPMotion_Params
{
	bool                                               isMVPMotion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SyncWeaponMontage
struct ABP_PlayerLobbyPawn_C_SyncWeaponMontage_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.InitDefaultAvatarByResID
struct ABP_PlayerLobbyPawn_C_InitDefaultAvatarByResID_Params
{
	int                                                AGender;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SwitchMeshUpdateFlag
struct ABP_PlayerLobbyPawn_C_SwitchMeshUpdateFlag_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaInst
struct ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaInst_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlphaGrad
struct ABP_PlayerLobbyPawn_C_SetClothAnimDyAlphaGrad_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetClothAnimDyAlpha
struct ABP_PlayerLobbyPawn_C_SetClothAnimDyAlpha_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.StopEmotionSound
struct ABP_PlayerLobbyPawn_C_StopEmotionSound_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RotateOnTick
struct ABP_PlayerLobbyPawn_C_RotateOnTick_Params
{
	float                                              RotateTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SwitchSexAndHeadAndHair
struct ABP_PlayerLobbyPawn_C_SwitchSexAndHeadAndHair_Params
{
	int                                                sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                headid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEndActionHandle
struct ABP_PlayerLobbyPawn_C_OnEndActionHandle_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayActionHandle
struct ABP_PlayerLobbyPawn_C_OnPlayActionHandle_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId_ForceClientMode
struct ABP_PlayerLobbyPawn_C_CharEquipWeaponByResId_ForceClientMode_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentListLobby
struct ABP_PlayerLobbyPawn_C_GetAllEquipmentListLobby_Params
{
	TArray<struct FString>                             Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetConflictRuleEnable
struct ABP_PlayerLobbyPawn_C_SetConflictRuleEnable_Params
{
	bool                                               bEnableConflictRule;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEquipmentInfoBySlot
struct ABP_PlayerLobbyPawn_C_GetEquipmentInfoBySlot_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsSlotHasEquipped
struct ABP_PlayerLobbyPawn_C_IsSlotHasEquipped_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsItemHasEquipped
struct ABP_PlayerLobbyPawn_C_IsItemHasEquipped_Params
{
	int                                                InItemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentBySlot
struct ABP_PlayerLobbyPawn_C_PutOffEquipmentBySlot_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayEmoteLoop
struct ABP_PlayerLobbyPawn_C_PlayEmoteLoop_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShouldCurEmoteShowWeapon
struct ABP_PlayerLobbyPawn_C_ShouldCurEmoteShowWeapon_Params
{
	bool                                               ShouldShow;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HandleWeaponDisplayWhenPlayEmote
struct ABP_PlayerLobbyPawn_C_HandleWeaponDisplayWhenPlayEmote_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetAllEquipmentList
struct ABP_PlayerLobbyPawn_C_GetAllEquipmentList_Params
{
	TArray<int>                                        Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.IsAnimShowMan
struct ABP_PlayerLobbyPawn_C_IsAnimShowMan_Params
{
	bool                                               bMan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PlayAnimHit
struct ABP_PlayerLobbyPawn_C_PlayAnimHit_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetCanRotate
struct ABP_PlayerLobbyPawn_C_SetCanRotate_Params
{
	bool                                               canRotate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetPawnAndClothVisibility
struct ABP_PlayerLobbyPawn_C_SetPawnAndClothVisibility_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.RemoveAvatarBySlot
struct ABP_PlayerLobbyPawn_C_RemoveAvatarBySlot_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOffEquipmentByResID
struct ABP_PlayerLobbyPawn_C_PutOffEquipmentByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.PutOnEquipmentByResID
struct ABP_PlayerLobbyPawn_C_PutOnEquipmentByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharStopEmoteByResId
struct ABP_PlayerLobbyPawn_C_CharStopEmoteByResId_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.AvatarDisplaySceneEquipWeapon
struct ABP_PlayerLobbyPawn_C_AvatarDisplaySceneEquipWeapon_Params
{
	bool                                               ForceClientMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideWeapon
struct ABP_PlayerLobbyPawn_C_HideWeapon_Params
{
	bool                                               isHide;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharPlayEmoteByResId
struct ABP_PlayerLobbyPawn_C_CharPlayEmoteByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharUnEquipWeapon
struct ABP_PlayerLobbyPawn_C_CharUnEquipWeapon_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CharEquipWeaponByResId
struct ABP_PlayerLobbyPawn_C_CharEquipWeaponByResId_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetEmoteHandle
struct ABP_PlayerLobbyPawn_C_GetEmoteHandle_Params
{
	int*                                               ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackEmoteHandle*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetExtraWeaponByResID
struct ABP_PlayerLobbyPawn_C_GetExtraWeaponByResID_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              extraWeaponObj;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       WeaponHandle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayIdleAnim;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBattleItemFromResID
struct ABP_PlayerLobbyPawn_C_GetBattleItemFromResID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarHandle*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID
struct ABP_PlayerLobbyPawn_C_GetBPID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetHiddenFlags
struct ABP_PlayerLobbyPawn_C_GetHiddenFlags_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EAvatarSlotType>                            hiddenFlags;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript
struct ABP_PlayerLobbyPawn_C_UserConstructionScript_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__FinishedFunc
struct ABP_PlayerLobbyPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Timeline_0__UpdateFunc
struct ABP_PlayerLobbyPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveTick
struct ABP_PlayerLobbyPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature
struct ABP_PlayerLobbyPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
struct ABP_PlayerLobbyPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveDestroyed
struct ABP_PlayerLobbyPawn_C_ReceiveDestroyed_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEmoteFinish
struct ABP_PlayerLobbyPawn_C_OnEmoteFinish_Params
{
	int                                                EmoteIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEmoteBegin
struct ABP_PlayerLobbyPawn_C_OnEmoteBegin_Params
{
	int                                                EmoteIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.EventPlayHurtAnim
struct ABP_PlayerLobbyPawn_C_EventPlayHurtAnim_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetMaleAnimClass
struct ABP_PlayerLobbyPawn_C_SetMaleAnimClass_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetFemaleAnimClass
struct ABP_PlayerLobbyPawn_C_SetFemaleAnimClass_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPutOnEquipByIdFaild
struct ABP_PlayerLobbyPawn_C_OnPutOnEquipByIdFaild_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnAvatarEquipped
struct ABP_PlayerLobbyPawn_C_OnAvatarEquipped_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.TickClothLeten
struct ABP_PlayerLobbyPawn_C_TickClothLeten_Params
{
	float                                              from;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.CustomBeginPlay
struct ABP_PlayerLobbyPawn_C_CustomBeginPlay_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn
struct ABP_PlayerLobbyPawn_C_ExecuteUbergraph_BP_PlayerLobbyPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnSetForceUseDefaultIdle__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnSetForceUseDefaultIdle__DelegateSignature_Params
{
	bool                                               force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnEquipClothStateChange__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnEquipClothStateChange__DelegateSignature_Params
{
	class UBackpackAvatarHandle*                       AvatarHandle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEuqiped;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeWeapon__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnChangeWeapon__DelegateSignature_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnchangeGender__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnchangeGender__DelegateSignature_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnChangeEquipment__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnChangeEquipment__DelegateSignature_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnStopAction__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnStopAction__DelegateSignature_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnPlayAction__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnPlayAction__DelegateSignature_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.OnLogicPuton__DelegateSignature
struct ABP_PlayerLobbyPawn_C_OnLogicPuton__DelegateSignature_Params
{
	EAvatarSlotType                                    SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               NewItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               OldParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                LuaID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

