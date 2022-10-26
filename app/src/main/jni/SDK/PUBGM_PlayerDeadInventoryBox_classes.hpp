#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PlayerDeadInventoryBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerDeadInventoryBox.PlayerDeadInventoryBox_C
// 0x0066 (0x0486 - 0x0420)
class APlayerDeadInventoryBox_C : public APlayerTombBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0004) (Transient, DuplicateTransient)
	class UAkComponent*                                AkComponent;                                              // 0x0424(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTScreenAppearanceComponent*                STScreenAppearance;                                       // 0x0428(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_plane_01;                                              // 0x042C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0430(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Survive_FMC_Chest1;                                       // 0x0438(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchTimeline_NewTrack_2_205B9CD1420D3E41B68BD2972C581F3D;// 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               PitchTimeline__Direction_205B9CD1420D3E41B68BD2972C581F3D;// 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PitchTimeline;                                            // 0x0444(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MatParamTimeline_NewTrack_1_C8C041AE4B3988DE01E45DAE7F4B004E;// 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               MatParamTimeline__Direction_C8C041AE4B3988DE01E45DAE7F4B004E;// 0x044C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MatParamTimeline;                                         // 0x0450(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraMove_NewTrack_0_02104D1147E475B0CAB09B933E483A5B;   // 0x0454(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ETimelineDirection>               CameraMove__Direction_02104D1147E475B0CAB09B933E483A5B;   // 0x0458(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraMove;                                               // 0x045C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMat;                                               // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeammateParticleLoc;                                      // 0x0464(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UParticleSystem*                             TeammateParticle;                                         // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DeadParticle;                                             // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeadParticleLoc;                                          // 0x0478(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIsPlayingAudio;                                          // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasOpenAnim;                                             // 0x0485(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerDeadInventoryBox.PlayerDeadInventoryBox_C");
		return pStaticClass;
	}


	void LuaCheckCanPlayAudio(bool* bCanPlayAudio);
	struct FVector GetGroundLocation();
	void GetVector4(const struct FVector& Dest, float Ratio);
	void UserConstructionScript();
	void MatParamTimeline__FinishedFunc();
	void MatParamTimeline__UpdateFunc();
	void PitchTimeline__FinishedFunc();
	void PitchTimeline__UpdateFunc();
	void CameraMove__FinishedFunc();
	void CameraMove__UpdateFunc();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void SwitchToDeadTombBox();
	void ReceiveTick(float* DeltaSeconds);
	void ShowNormal();
	void HideDeadTombApparence();
	void ShowShine();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_PlayerDeadInventoryBox(int EntryPoint);
};


}

