#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_FPPComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPPComponent.FPPComponent_C
// 0x0014 (0x0244 - 0x0230)
class UFPPComponent_C : public UBaseFPPComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0004) (Transient, DuplicateTransient)
	class ABP_PlayerPawn_C*                            PawnBP;                                                   // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      NewVar_1;                                                 // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SightLens;                                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass FPPComponent.FPPComponent_C");
		return pStaticClass;
	}


	void ResetScreenPercentage();
	void DownScreenPercentage();
	void ChangeScopeTPPGlassMat(class UMeshComponent* ScopeMeshComp, int ScopeID);
	void GetScopeMatTableKey(class ASTExtraPlayerController* PlayerController, class ASTExtraShootWeapon* Weapon, EWeaponAttachmentSocketType ScopeType, struct FString* Key);
	void IsScopeSpecialMatExist(class ASTExtraWeapon* Weapon, EWeaponAttachmentSocketType ScopeType, bool* exist, int* MatTableKey);
	float SwitchAngledSightConfigMaterial(bool* forceSwitch);
	float ShowAngledSightTPPMaterial(bool* forceADSState);
	float SwitchSightConfigMaterial();
	float ShowReflectorSightTPPMaterial(bool* forceADSState);
	float GetScopeFov(class ASTExtraWeapon** Weapon, bool* bIsAngled);
	void SetTagCullingBP(bool IsUse);
	void requestResourceGuarantee(int InOrOut, TEnumAsByte<enum ELoadMode> loadMode, TEnumAsByte<enum EApplyStatus> applyStatus);
	void ReloadEvent();
	void SetTagCulling(bool* IsUse);
	void PlayScopeInTimeline();
	void ScopeInEnd();
	void ScopeOutEnd();
	void StopScopeIn();
	void AttachToSight();
	void AttachTo(class USceneComponent* NewParam);
	void Detach(class USceneComponent* NewParam);
	void ReceiveTick(float* DeltaSeconds);
	void AutoReloadEvent(class ASTExtraShootWeapon* ShootWeapon);
	void AttachToSightKeepTransform();
	void ExecuteUbergraph_FPPComponent(int EntryPoint);
};


}

