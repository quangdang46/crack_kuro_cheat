#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_WateringArea_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WateringArea.BP_WateringArea_C
// 0x0098 (0x0378 - 0x02E0)
class ABP_WateringArea_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0004) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ReplaceMesh;                                              // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FormerMesh;                                               // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LoopParticlePoint;                                        // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ParticleSpawnPoint;                                       // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x02FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemRef;                                        // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APlayerController*>                   WaterDoneList;                                            // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        DropPlanIDList;                                           // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShowLoopParticle;                                        // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	struct FString                                     ShowButtonTextID;                                         // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UPaperSprite*                                ShowButtonPic;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleTrigger;                                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleTriggerPos;                                       // 0x0344(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleLoop;                                             // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleLoopPos;                                          // 0x0354(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ParticleLoopWait;                                         // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AudioTrigger;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AudioParticleLoop;                                        // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AudioLoop;                                                // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCandle;                                                 // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	int                                                ActivityButtonId;                                         // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_WateringArea.BP_WateringArea_C");
		return pStaticClass;
	}


	void OnAreaOverlapEnd(class UObject* Object);
	void OnAreaOverlapBegin(class UObject* Object);
	void StartDrop();
	void UserConstructionScript();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ShowAnimationButton(class ABP_PlayerPawn_C* PlayerPawn, bool IsShow);
	void ServerDoWaterLogic(class APlayerController* PlayerController);
	void OnWateringUIChanged(bool Show);
	void DelayResetParticleCD();
	void ReceiveBeginPlay();
	void SpawnTreeParticle();
	void CustomEvent_1();
	void ExecuteUbergraph_BP_WateringArea(int EntryPoint);
};


}

