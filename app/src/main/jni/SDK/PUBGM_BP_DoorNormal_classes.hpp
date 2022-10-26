#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_DoorNormal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DoorNormal.BP_DoorNormal_C
// 0x005C (0x04F4 - 0x0498)
class ABP_DoorNormal_C : public APUBGDoor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0004) (Transient, DuplicateTransient)
	class UBoxComponent*                               InterForce;                                               // 0x049C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Interaction;                                              // 0x04A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x04A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x04AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZeroToOne_DoorNormalCurve_E90A1C0246A80C0D1E9E33BE7ED870B3;// 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               ZeroToOne__Direction_E90A1C0246A80C0D1E9E33BE7ED870B3;    // 0x04B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ZeroToOne;                                                // 0x04BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 BrokenMesh;                                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HP;                                                       // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPTimer;                                                  // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              to;                                                       // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              from;                                                     // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPDummy;                                                  // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DummyTimerHandler;                                        // 0x04D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              GrenadeDamageRatio;                                       // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FromState;                                                // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ToState;                                                  // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               CloseDoorAudio;                                           // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OpenDoorAudio;                                            // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_DoorNormal.BP_DoorNormal_C");
		return pStaticClass;
	}


	void UserConstructionScript();
	void ZeroToOne__FinishedFunc();
	void ZeroToOne__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void EventTimer();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActionDoorOnClient(int* doorStateDst, bool* bExtraDoor);
	void BP_DoorBroken(bool* isBeginPlay, bool* bExtraDoor);
	void ActionDoorImmediatly(int* doorStateDst, bool* bExtraDoor);
	void OnBPRespawned();
	void ExecuteUbergraph_BP_DoorNormal(int EntryPoint);
};


}

