#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_ShootWeaponBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShootWeaponBase.BP_ShootWeaponBase_C
// 0x00FD (0x116D - 0x1070)
class ABP_ShootWeaponBase_C : public ASTExtraShootWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1070(0x0008) (Transient, DuplicateTransient)
	class UMultiBulletComponent*                       MultiBullet;                                              // 0x1078(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponAvatarComp_BP_C*                      WeaponAvatarComp_BP;                                      // 0x1080(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCndComponent*                         CustomCnd;                                                // 0x1088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponSpecificHandler*                      WeaponSpecificHandler;                                    // 0x1090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBulletHitInfoUploadComponent*               BulletHitInfoUpload;                                      // 0x1098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrossHairComponent*                         Crosshair;                                                // 0x10A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponEntity*                          ShootWeaponEntity;                                        // 0x10A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateDefault*                         WeaponStateDefault;                                       // 0x10B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoBulletWeaponState*                        NoBulletWeaponState;                                      // 0x10B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFireWeaponState*                            FireWeaponState;                                          // 0x10C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReloadWeaponState*                          ReloadWeaponState;                                        // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIdleWeaponState*                            IdleWeaponState;                                          // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInactiveWeaponState*                        InactiveWeaponState;                                      // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponStateManager*                    ShootWeaponStateManager;                                  // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponEffectComponent*                 ShootWeaponEffect;                                        // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBulletTrackComponent*                       BulletTrack;                                              // 0x10F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTEShootWeaponProjectComponent*             STEShootWeaponProject;                                    // 0x10F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdleAnim;                                             // 0x1100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1101(0x0003) MISSED OFFSET
	float                                              FOV;                                                      // 0x1104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              normalShotVoiceDis;                                       // 0x1108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlienceShotVoiceDis;                                      // 0x110C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              MagComp;                                                  // 0x1110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MagCompAttachSocket;                                      // 0x1118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADropDownWeaponMag_C*                        DropDownMag;                                              // 0x1120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DropDownMagTimerHandle;                                   // 0x1128(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MagDropDownDelay;                                         // 0x1130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MagDropDownOffset;                                        // 0x1134(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               MagDropDownEnable;                                        // 0x1140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1141(0x0003) MISSED OFFSET
	float                                              MagDropDownHideDelay;                                     // 0x1144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagInShownDelay;                                          // 0x1148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShineIntensity;                                           // 0x114C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShootState;                                               // 0x1150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1151(0x0003) MISSED OFFSET
	float                                              totalDeltaSeconds;                                        // 0x1154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BlinkLightEffect;                                         // 0x1158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ShellDropRot;                                             // 0x1160(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttachMagToMoveablePlat;                                // 0x116C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ShootWeaponBase.BP_ShootWeaponBase_C");
		return pStaticClass;
	}


	void UpdateSupportAttachments();
	void GetCurWeaponShootLightEffect();
	void SetShineIntensity(float deltaSecond);
	void SetCurWeaponShine(float AutoLight, float LightIntensity, float LightFreq, bool* Success);
	void GetCurWeaponLightEffect();
	void GetCurWeaponMesh(class UMeshComponent** MeshComponent);
	struct FLinearColor GetColorByTeamID(int* TeamID);
	void OnMagDropDown();
	void OnHideDropDownMag();
	void OnWeaponMagIn();
	void OnWeaponMagOut();
	void BeginRegReloadEvent();
	void BP_PawnAttachMesh(class UMeshComponent** PlayerMesh);
	void BP_OnWeaponReloadStart();
	void BP_OnWeaponReloadEnd();
	void ResetCamera();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayLocalShellDropFX();
	void EventOnMagDropDown();
	void ReceiveEndPlay(TEnumAsByte<enum EEndPlayReason>* EndPlayReason);
	void OnClientShootPlayer();
	void StartFire();
	void BndEvt__FireWeaponState_K2Node_ComponentBoundEvent_0_EndStateDelegate__DelegateSignature();
	void OnFireHitServer(class ASTExtraWeapon* Weapon, const struct FVector& HitPoint);
	void UpdateWeaponAvatar(float* DeltaTime);
	void BndEvt__WeaponAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnWeaponAvatarLoaded__DelegateSignature(int SlotID, const struct FItemDefineID& NewItemID);
	void StopFire(TEnumAsByte<enum EFreshWeaponStateType>* ToState);
	void ExecuteUbergraph_BP_ShootWeaponBase(int EntryPoint);
};


}

