#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Vault_Controller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Vault_Controller.Vault_Controller_C
// 0x0258 (0x03B0 - 0x0158)
class UVault_Controller_C : public UPlayerVaultComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0158(0x0004) (Transient, DuplicateTransient)
	class ASTExtraPlayerCharacter*                     PlayerPawn;                                               // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowBlockDis;                                              // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowBlockHeight;                                           // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowAfterBlockMaxFallingHeight;                            // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowCrossBlockMaxDis;                                      // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowBlockLength;                                           // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCheckDis;                                              // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCheckOppSiteDis;                                       // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnActiveMaxAngle;                                         // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCheckHeight;                                           // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      checkActor;                                               // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerStartPostion;                                       // 0x018C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PlayerRotation;                                           // 0x0198(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // 0x01A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     blockDir;                                                 // 0x01BC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVaultData                                  NowVaultData;                                             // 0x01C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxJumpLength;                                            // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isjump;                                                   // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	float                                              CountTime;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVaulting;                                               // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EDrawDebugTrace>                  NowDrawDebugType;                                         // 0x0225(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0226(0x0002) MISSED OFFSET
	float                                              realStartTime;                                            // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DataStartpos;                                             // 0x022C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     nowVaultKey;                                              // 0x0238(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FVaultData>            vaultDataallMap;                                          // 0x0244(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsEnd;                                                    // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              nowMaxX;                                                  // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nowMinFallingY;                                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              realStartZ;                                               // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              offsetSpeed;                                              // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ESurviveWeaponPropSlot>           gunSlot;                                                  // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	struct FVector                                     oppsiteHitPoint;                                          // 0x0298(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     uphitPoint;                                               // 0x02A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPreUseMedicine;                                         // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	float                                              heightoffsetcheck;                                        // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightFowardCheck;                                        // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minVaultHeight;                                           // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nowAnimSpeed;                                             // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              animSpeedChangeTime;                                      // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              animChangegSpeedRate;                                     // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ischangeMontageSpeed;                                     // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	TArray<struct FvaultCheckRule>                     checkRuleList;                                            // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              laststandDis;                                             // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastwalkDis;                                              // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastsprintDis;                                            // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UBP_WindowCompBase_C*>                VaultWindows;                                             // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               iswondowbroken;                                           // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02F5(0x0003) MISSED OFFSET
	float                                              windowsbrokenoffsetdis;                                   // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInStopVaulting;                                         // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	struct FVector                                     PlayerStartDir;                                           // 0x0300(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               waitStopvaulting;                                         // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	float                                              stopVaultOppDis;                                          // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterBlockMaxFallingHeightoffset;                         // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FpsVaultSpeed;                                            // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FpsVaultStartPosition;                                    // 0x031C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FpsvVaultTopoffsetPostion;                                // 0x0328(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FpsVaultTopPosition;                                      // 0x0334(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FpsVaultEndPosition;                                      // 0x0340(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               FpsVaultIsJump;                                           // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	float                                              FpsVaultMontangeTotalTime;                                // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     FpsVaultMontageName;                                      // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FpsVaultMontageTopTime;                                   // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FpsVaultCheckDis;                                         // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FpsVaultCheckHeight;                                      // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FpsVaultCheckThick;                                       // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NowIsUseFpsVault;                                         // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              FpsCheatingVaule;                                         // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FpsMinHtight;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFpsVaultData>                       FpsVaultAnimationList;                                    // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               fpsisplayedcamerashake;                                   // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              fpsvaultshakeoffsetheight;                                // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShouldAdjustHeight;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpValueMinDisToland;                                    // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              blockledgeZ;                                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSeconds;                                              // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartOffsetToBase;                                        // 0x03A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              StartZToBase;                                             // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Vault_Controller.Vault_Controller_C");
		return pStaticClass;
	}


	void SetPlayerStartPositionInternal(const struct FVector& InStartPosition, bool UseInputStart);
	void GetPlayerStartPositionInternal(bool bRelationLoc, struct FVector* StartPos);
	void PrintStartPosition(const struct FString& Prefix, const struct FVector& Position);
	void IsVaultOnBase(bool* ShouldVault);
	void PrintHeight(float shouldheight, float NowHeight);
	void GetRealStartZHeight(float* ResStartZ);
	void GetDataStartPosition(struct FVector* StartPos);
	void PrintDebugString(float shoulddis, float nowdis, float ZOffset);
	void EnsurePawnClientLeaveVault();
	void JumpVaultCheck(bool* Result);
	void SetShouldAdjustHeight();
	void SetNowUseFpsVault();
	void ServerCrossingBlockCheck(const struct FVector& StartPos, float distoblock, float blockheight, const struct FRotator& movedir, bool* Result);
	void UpdateMoveMode();
	struct FString GetVaultKeyByBlockHeight(float* Height);
	void fpsVaultGetRotaion(struct FRotator* rotion);
	void SetFpsVaultSpeed();
	void FpsVaultGetTppAnimationInfo(struct FString* AnimationName, float* animationTime, float* PlayRate);
	void FpsGetTotalTime(float* TotalTime);
	void FpsTestLimitPostion(const struct FVector& nowpostion, bool* Result);
	void FpsVaultTrigger();
	void FpsVaultServerCheating(const struct FVector& playerpos, const struct FVector& topPos, bool* Result);
	void FpsVaultStart(const struct FVector& StartPos, const struct FVector& topPos, float offsetMaxX, float offsetMaxY, bool isjump, const struct FRotator& palyerRtion, float blocklength);
	void FpsVaultGetNowPostion(float nowPastTime, struct FVector* nowpostion, bool* IsGet);
	void FpsVualtUpdate();
	void SetStopForwardDis(float shoulddis, float* Result);
	void DealBrokenWindows();
	bool VaultFromCPP();
	void CheckVaultWindows(const struct FVector& CheckStart, const struct FVector& CheckEnd);
	void EnableCulling(bool bEnable);
	void GetCliblastCheckDis(float* Result);
	void NowStateCheck(bool sprint, bool Walk, bool stand, bool* Result);
	void CheckNowisJumpAnimation(float Height, float thcikLength, bool* Result, bool* ishasAnimation);
	void CheckIsValidByHeightCheckDis(float NowHeight, float checkDis, bool* isVaild);
	void IsValidVault(bool* IsValid);
	void GetTestObjectChannels(TArray<TEnumAsByte<enum EObjectTypeQuery>>* Channels);
	void UpdateMontageSpeed();
	void ServerCheckBlockDis(const struct FVector& HitPoint, const struct FString& Key, const struct FVector& StartPos, float blockdis, float blockheight, float blocklength, class AActor* checkActor, bool* Result);
	void GetNowOppSideDis(float* Result);
	void CheckUpLengthBlock(bool* Result);
	void GetCrossMaxBlockDisOffsset(bool* Result);
	void SetLimitPostion(float XValue, float ZVaule);
	void CheckForward(bool* IsActive);
	void CheckHeight(float Height, bool* IsActive, struct FVector* Point);
	void GetJumpLengthByHeight(float Height, float* Length);
	void printReason(const struct FString& Result);
	void PrintEnable();
	void CacultLimitData();
	void GetCrossMaxBlockDisForward(bool* Result);
	void GetPlayerStartZ(float* Result);
	void GetCrossBlockMaxFallingHeight();
	void ForwardTestObjectType(class AActor* Actor, bool* Result);
	void SetEnd();
	void SetVaultData(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& HitPoint, const struct FRotator& movedir);
	void UpdatePostion2();
	void GetNowData(bool IsInFalling, bool* IsGet);
	void CheckCanVault(bool* IsActive);
	void StartVault();
	void ReceiveBeginPlay();
	void JumpVault();
	void VaultServer(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, const struct FVector& HitPoint, class AActor* WindowActor, const struct FRotator& movedir);
	void vaultAll(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& StartPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& HitPoint, const struct FRotator& movedir);
	void jumpfromUI();
	void VaultFail(const struct FString& Reason);
	void UpdateVault_BluePrint();
	void interrupted(EPawnState State, EPawnState InterruptedBy);
	void vaultLeave(EPawnState State);
	void DsCheckStopVault();
	void StopVault();
	void FpsVaultToAll(struct FVector* StartPos, struct FVector* topPos, float* crossblockMaxFall, float* crossblockMaxDis, bool* isjump, struct FRotator* movedir, float* blobkthick);
	void FpsVaultServer(struct FVector* StartPos, struct FVector* topPos, float* crossblockMaxFall, float* crossblockMaxDis, bool* isjump, struct FRotator* movedir, float* blobkthick);
	void ExecuteUbergraph_Vault_Controller(int EntryPoint);
};


}

