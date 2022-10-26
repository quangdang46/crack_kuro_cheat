#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyModelShowActorBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyModelShowActorBP.LobbyModelShowActorBP_C
// 0x0294 (0x06F4 - 0x0460)
class ALobbyModelShowActorBP_C : public ALuaActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponMatTimeline_time_492B8511488AA34B66EFCEB09ACAE5EE;  // 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               WeaponMatTimeline__Direction_492B8511488AA34B66EFCEB09ACAE5EE;// 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          WeaponMatTimeline;                                        // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              WeaponActor;                                              // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UWeaponAvatarComponent*                      WeaponAvatarComponent;                                    // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               press;                                                    // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04AA(0x0002) MISSED OFFSET
	float                                              LocationX;                                                // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAutoRotateZ;                                           // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	float                                              zRotateSpeed;                                             // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationY;                                                // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canAutoRotateX;                                           // 0x04BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET
	float                                              backTime;                                                 // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              curBackTime;                                              // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              disinteractDis;                                           // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              yIntensity;                                               // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              yDisinteractRatio;                                        // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              originX;                                                  // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              originY;                                                  // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               alreadyRotate;                                            // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               alreadyRotateY;                                           // 0x04DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRotateBack;                                            // 0x04DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x04DF(0x0001) MISSED OFFSET
	int                                                ShowType;                                                 // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               needXRotation;                                            // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	class ACharacter*                                  PlaneCharacter;                                           // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              XRotateMin;                                               // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XRotateMax;                                               // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YRotateMin;                                               // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YRotateMax;                                               // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentItemID;                                            // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class ABP_Lobby_Grenade_C*                         grenadeActor;                                             // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               isTouching;                                               // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	TArray<struct FVector>                             projectilePredictArray;                                   // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                projectileTickIndex;                                      // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              xRotateSpeed;                                             // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachPointDefaultRotate;                                 // 0x0530(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class ALobbyModelCommonActorBP_C*                  bagWidgetActor;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0548(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0550(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_LobbyVehicle_C*                          VehicleActor;                                             // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               canRotate;                                                // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	int                                                curGrenadeIndex;                                          // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                spawnIndex;                                               // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	TMap<int, struct FShowActorData>                   ShowActorDataArray;                                       // 0x0598(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_LobbyVehicle_C*                          refitVehicleActor;                                        // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALobbyModelCommonActorBP_C*                  parachuteActor;                                           // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                curVehicleIndex;                                          // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	TArray<struct FString>                             ExtraData;                                                // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               EnableInput_2;                                            // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateBackZ;                                              // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x0612(0x0006) MISSED OFFSET
	class ALobbyModelShowActorBP_C*                    nextShowActor;                                            // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAsyncLoading;                                           // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               weaponDynMatChanged;                                      // 0x0621(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x0622(0x0006) MISSED OFFSET
	class ALobbyModelCommonActorBP_C*                  icon3DActor;                                              // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData15[0x50];                                      // 0x0630(0x0050) UNKNOWN PROPERTY: SetProperty LobbyModelShowActorBP.LobbyModelShowActorBP_C.HasShakeEffectItem
	class ALobbyModelCommonActorBP_C*                  bagActor;                                                 // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FBP_STRUCT_WeaponMatParamCfg_type           WeaponMatParam;                                           // 0x0688(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MatAlpha;                                                 // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyModelShowActorBP.LobbyModelShowActorBP_C");
		return pStaticClass;
	}


	void DetachSuperCarAttachToAttachPoint();
	void OnAsyncReadyLua();
	void DestroyContentsInLua();
	void GetLoadedClass(int ID, class UClass** AsBattle_Item_Handle_Base, bool* Success);
	void TryShowModel(int resID, int BPID, bool bIgnoreDownload);
	void PreChangeWeaponAvatar(int resID, int BPID);
	void TriggerDownloadRes(int ItemId, int BPID);
	void CreaetAndSetWeaponDynamicMat();
	void ShowBag(int commonActorResId);
	void SetHolderBack();
	void SetCastShadow(bool CastShadow);
	void MakeShowTypeCanRotateBack();
	void ProcessIcon3DAttachTexture();
	void OnIcon3dAsyncReady();
	void ShowIcon3D(int resID, bool isSync);
	void ShowIcon3dAsycOrSync(int resID);
	void DestroyAllContent();
	void UpdateWeaponMatParam(float Alpha);
	void GetRotateSpeed(float DeltaX, float DeltaY, float* Speed);
	void UpdateWeaponMat(float RotateSpeed);
	void OnParachuteAsyncReady();
	void OnBagWidgetAsyncReady();
	void OnWeaponAsyncReady();
	void OnPlaneAsyncReady();
	void ProcessNextActor();
	void OnDIYWeaponDecalFinish(int RequestID, class UTextureRenderTarget2D* RT);
	void SetDIYDecalNumPerFrame(bool isSync, int Num);
	void SetRotateBackZ(bool rotateZ);
	void SetWeaponCollision(const struct FString& Asset);
	void SetCanTouchRotate(bool canRotate);
	void SetWeaponPendantSocketType(EWeaponPendantSocketType Type);
	void GetSocketTransform(int ShowType, const struct FString& SocketName, struct FTransform* Transform);
	void ShowBagWidgetAsycOrSync(int resID);
	void ShowParachuteAsycOrSync(int resID);
	void GetComponentPosition(int SlotID, struct FVector* Location);
	void OnRefitVehicleAsyncReady();
	void UpdateCapsuleSize(float HalfHeight, float Radius);
	void DestroyForType(int exceptType);
	void OnVehicleAsyncReady();
	void OnGrenadeAsyncReady();
	void ShowModel(int resID, int BPID);
	void ShowParachute(int resID, bool isSync);
	void ShowRefitVehicle(int VehicleID);
	void SetShowActorLocationRotation(int resID);
	void OnAsyncReady();
	void ModelSimulatePhysics();
	void TryRotate(float* DeltaX, float* DeltaY);
	void MakeRotation(float newLocationX, float newLocationY, float* RotationX, float* RotationY, float* RotationZ);
	void AttachModelCenter(int CameraID);
	void GetShowTypeByItemType(int resID, int itemType, int ItemSubType, int* Type);
	void ShowVehicle(int VehicleID);
	void RecordTmpVar(int resID, float ZSpeed, float backTime, float disinteractDis, float YdisRatio, float yIntensity, bool needXRotation, bool CanAutoRotateZ, bool CanRotateBack, bool canRotate, const struct FString& ExtraData);
	void ShowWeapon(int resID, int BPID);
	void ShowPlane(int resID);
	struct FTransform MakeSpawnTransform(float ActorScale, const struct FString& ModelOffset);
	void ShowBagWidget(int resID, bool isSync);
	void ShowGrenade(int resID);
	void GetAttachPoint(class AActor** attachPoint);
	void ResetAttachPointRotate();
	void DetachFromAttachPoint();
	void AttachToAttachPoint();
	void OnParticleSystemfinish(class UParticleSystemComponent* NewParam);
	void XAutoRotate();
	void TickProjectileEffect();
	void PlayParticleEffect(const struct FVector& Location);
	void PlayProjectileEffect();
	void IsModelValid(bool* Valid);
	void GetBaseItemHBClass(bool* NewParam, class UClass** AsBattle_Item_Handle_Base);
	void StopAkEvent();
	void UpdateRotateLimit(const struct FString& XRotateLimit, const struct FString& YRotateLimit);
	void UpdateShowType(int resID, int itemType, int ItemSubType);
	void SetTouchStatus(bool Can);
	void SetRotateBackStatus(bool Can);
	void NeedRotateY(float X, float Y, bool* need);
	void NeedRotate(float X, float Y, bool* need);
	void RotateBack(float Delta);
	void ZAutoRotate();
	void DestroyWeaponActor();
	void GetItemSubType(int RowNum, int* SubType);
	void GetBPID(int RowName, int* BPID, int* itemType, int* ItemSubType);
	void PutOffEquipmentByResID(int resID);
	void PutOnEquipmentByResID(int resID, bool* Ret);
	void ShowModelByResid(int resID, float XOffset, const struct FRotator& Rotator, float ZSpeed, float backTime, float disinteractDis, float YdisRatio, float yIntensity, bool needResetAutoRotation, bool needXRotation, float ActorScale, const struct FString& XRotateLimit, const struct FString& YRotateLimit, const struct FString& ModelOffset, bool canAutoRotate, bool CanRotateBack, bool canRotate, const struct FRotator& InitRotate, const struct FString& ExtraData);
	void UserConstructionScript();
	void WeaponMatTimeline__FinishedFunc();
	void WeaponMatTimeline__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ReceiveDestroyed();
	void Projectile(float X, float Y, float Z);
	void TickWeaponMat(float fromShake, float toShake);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LobbyModelShowActorBP(int EntryPoint);
};


}

