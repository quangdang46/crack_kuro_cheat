#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Vault_Controller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Vault_Controller.Vault_Controller_C.SetPlayerStartPositionInternal
struct UVault_Controller_C_SetPlayerStartPositionInternal_Params
{
	struct FVector                                     InStartPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               UseInputStart;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetPlayerStartPositionInternal
struct UVault_Controller_C_GetPlayerStartPositionInternal_Params
{
	bool                                               bRelationLoc;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.PrintStartPosition
struct UVault_Controller_C_PrintStartPosition_Params
{
	struct FString                                     Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.IsVaultOnBase
struct UVault_Controller_C_IsVaultOnBase_Params
{
	bool                                               ShouldVault;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.PrintHeight
struct UVault_Controller_C_PrintHeight_Params
{
	float                                              shouldheight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NowHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetRealStartZHeight
struct UVault_Controller_C_GetRealStartZHeight_Params
{
	float                                              ResStartZ;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetDataStartPosition
struct UVault_Controller_C_GetDataStartPosition_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.PrintDebugString
struct UVault_Controller_C_PrintDebugString_Params
{
	float                                              shoulddis;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              nowdis;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.EnsurePawnClientLeaveVault
struct UVault_Controller_C_EnsurePawnClientLeaveVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.JumpVaultCheck
struct UVault_Controller_C_JumpVaultCheck_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.SetShouldAdjustHeight
struct UVault_Controller_C_SetShouldAdjustHeight_Params
{
};

// Function Vault_Controller.Vault_Controller_C.SetNowUseFpsVault
struct UVault_Controller_C_SetNowUseFpsVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ServerCrossingBlockCheck
struct UVault_Controller_C_ServerCrossingBlockCheck_Params
{
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              distoblock;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blockheight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.UpdateMoveMode
struct UVault_Controller_C_UpdateMoveMode_Params
{
};

// Function Vault_Controller.Vault_Controller_C.GetVaultKeyByBlockHeight
struct UVault_Controller_C_GetVaultKeyByBlockHeight_Params
{
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Vault_Controller.Vault_Controller_C.fpsVaultGetRotaion
struct UVault_Controller_C_fpsVaultGetRotaion_Params
{
	struct FRotator                                    rotion;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.SetFpsVaultSpeed
struct UVault_Controller_C_SetFpsVaultSpeed_Params
{
};

// Function Vault_Controller.Vault_Controller_C.FpsVaultGetTppAnimationInfo
struct UVault_Controller_C_FpsVaultGetTppAnimationInfo_Params
{
	struct FString                                     AnimationName;                                            // (Parm, OutParm, ZeroConstructor)
	float                                              animationTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.FpsGetTotalTime
struct UVault_Controller_C_FpsGetTotalTime_Params
{
	float                                              TotalTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.FpsTestLimitPostion
struct UVault_Controller_C_FpsTestLimitPostion_Params
{
	struct FVector                                     nowpostion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.FpsVaultTrigger
struct UVault_Controller_C_FpsVaultTrigger_Params
{
};

// Function Vault_Controller.Vault_Controller_C.FpsVaultServerCheating
struct UVault_Controller_C_FpsVaultServerCheating_Params
{
	struct FVector                                     playerpos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     topPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.FpsVaultStart
struct UVault_Controller_C_FpsVaultStart_Params
{
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     topPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              offsetMaxX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              offsetMaxY;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isjump;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    palyerRtion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              blocklength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.FpsVaultGetNowPostion
struct UVault_Controller_C_FpsVaultGetNowPostion_Params
{
	float                                              nowPastTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     nowpostion;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               IsGet;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.FpsVualtUpdate
struct UVault_Controller_C_FpsVualtUpdate_Params
{
};

// Function Vault_Controller.Vault_Controller_C.SetStopForwardDis
struct UVault_Controller_C_SetStopForwardDis_Params
{
	float                                              shoulddis;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.DealBrokenWindows
struct UVault_Controller_C_DealBrokenWindows_Params
{
};

// Function Vault_Controller.Vault_Controller_C.VaultFromCPP
struct UVault_Controller_C_VaultFromCPP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckVaultWindows
struct UVault_Controller_C_CheckVaultWindows_Params
{
	struct FVector                                     CheckStart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CheckEnd;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.EnableCulling
struct UVault_Controller_C_EnableCulling_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetCliblastCheckDis
struct UVault_Controller_C_GetCliblastCheckDis_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.NowStateCheck
struct UVault_Controller_C_NowStateCheck_Params
{
	bool                                               sprint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Walk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               stand;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckNowisJumpAnimation
struct UVault_Controller_C_CheckNowisJumpAnimation_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              thcikLength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ishasAnimation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckIsValidByHeightCheckDis
struct UVault_Controller_C_CheckIsValidByHeightCheckDis_Params
{
	float                                              NowHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkDis;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isVaild;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.IsValidVault
struct UVault_Controller_C_IsValidVault_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetTestObjectChannels
struct UVault_Controller_C_GetTestObjectChannels_Params
{
	TArray<TEnumAsByte<enum EObjectTypeQuery>>         Channels;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Vault_Controller.Vault_Controller_C.UpdateMontageSpeed
struct UVault_Controller_C_UpdateMontageSpeed_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ServerCheckBlockDis
struct UVault_Controller_C_ServerCheckBlockDis_Params
{
	struct FVector                                     HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              blockdis;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blockheight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blocklength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetNowOppSideDis
struct UVault_Controller_C_GetNowOppSideDis_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckUpLengthBlock
struct UVault_Controller_C_CheckUpLengthBlock_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisOffsset
struct UVault_Controller_C_GetCrossMaxBlockDisOffsset_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.SetLimitPostion
struct UVault_Controller_C_SetLimitPostion_Params
{
	float                                              XValue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZVaule;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckForward
struct UVault_Controller_C_CheckForward_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckHeight
struct UVault_Controller_C_CheckHeight_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetJumpLengthByHeight
struct UVault_Controller_C_GetJumpLengthByHeight_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.printReason
struct UVault_Controller_C_printReason_Params
{
	struct FString                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Vault_Controller.Vault_Controller_C.PrintEnable
struct UVault_Controller_C_PrintEnable_Params
{
};

// Function Vault_Controller.Vault_Controller_C.CacultLimitData
struct UVault_Controller_C_CacultLimitData_Params
{
};

// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisForward
struct UVault_Controller_C_GetCrossMaxBlockDisForward_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetPlayerStartZ
struct UVault_Controller_C_GetPlayerStartZ_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.GetCrossBlockMaxFallingHeight
struct UVault_Controller_C_GetCrossBlockMaxFallingHeight_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ForwardTestObjectType
struct UVault_Controller_C_ForwardTestObjectType_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.SetEnd
struct UVault_Controller_C_SetEnd_Params
{
};

// Function Vault_Controller.Vault_Controller_C.SetVaultData
struct UVault_Controller_C_SetVaultData_Params
{
	float                                              dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VaultKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxFalling;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxDis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.UpdatePostion2
struct UVault_Controller_C_UpdatePostion2_Params
{
};

// Function Vault_Controller.Vault_Controller_C.GetNowData
struct UVault_Controller_C_GetNowData_Params
{
	bool                                               IsInFalling;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGet;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.CheckCanVault
struct UVault_Controller_C_CheckCanVault_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.StartVault
struct UVault_Controller_C_StartVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.ReceiveBeginPlay
struct UVault_Controller_C_ReceiveBeginPlay_Params
{
};

// Function Vault_Controller.Vault_Controller_C.JumpVault
struct UVault_Controller_C_JumpVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.VaultServer
struct UVault_Controller_C_VaultServer_Params
{
	float                                              dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VaultKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      WindowActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.vaultAll
struct UVault_Controller_C_vaultAll_Params
{
	float                                              dis;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VaultKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      checkActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxFalling;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              crossmaxDis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.jumpfromUI
struct UVault_Controller_C_jumpfromUI_Params
{
};

// Function Vault_Controller.Vault_Controller_C.VaultFail
struct UVault_Controller_C_VaultFail_Params
{
	struct FString                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Vault_Controller.Vault_Controller_C.UpdateVault_BluePrint
struct UVault_Controller_C_UpdateVault_BluePrint_Params
{
};

// Function Vault_Controller.Vault_Controller_C.interrupted
struct UVault_Controller_C_interrupted_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPawnState                                         InterruptedBy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.vaultLeave
struct UVault_Controller_C_vaultLeave_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.DsCheckStopVault
struct UVault_Controller_C_DsCheckStopVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.StopVault
struct UVault_Controller_C_StopVault_Params
{
};

// Function Vault_Controller.Vault_Controller_C.FpsVaultToAll
struct UVault_Controller_C_FpsVaultToAll_Params
{
	struct FVector*                                    StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    topPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isjump;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             blobkthick;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.FpsVaultServer
struct UVault_Controller_C_FpsVaultServer_Params
{
	struct FVector*                                    StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    topPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             crossblockMaxFall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             crossblockMaxDis;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isjump;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   movedir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             blobkthick;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller
struct UVault_Controller_C_ExecuteUbergraph_Vault_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

