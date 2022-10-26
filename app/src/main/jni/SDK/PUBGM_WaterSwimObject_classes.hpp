#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_WaterSwimObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterSwimObject.WaterSwimObject_C
// 0x05ED (0x0905 - 0x0318)
class AWaterSwimObject_C : public AWaterSwimActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0004) (Transient, DuplicateTransient)
	class UGameEventListener*                          GameEventListener;                                        // 0x031C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Water_down_01;                                          // 0x0320(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0328(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PostSceneBox;                                             // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        watermesh;                                                // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0334(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gamma;                                                    // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        NewVar_1;                                                 // 0x0340(0x0530) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ASTExtraBaseCharacter*>               playerList;                                               // 0x0870(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<enum ESTEPoseState>                    NewVar_2;                                                 // 0x087C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	float                                              FogDensity;                                               // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AExponentialHeightFog*                       HeightFog;                                                // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NoHDRWater;                                               // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HDROcean;                                                 // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HDRSwamp;                                                 // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HDROceanMaterial;                                         // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SUPHDROceanMaterial;                                      // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HDRSwampMaterial;                                         // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SUPHDRSwampMaterial;                                      // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NoHDRWaterMaterial;                                       // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMaterialIndex;                                     // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialList;                                             // 0x08AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSetSwamp;                                               // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08B9(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData03[0x3C];                                      // 0x08B9(0x003C) UNKNOWN PROPERTY: SetProperty WaterSwimObject.WaterSwimObject_C.newIOSDevice
	class UMaterialInterface*                          WaterMaterial_SUP_HDR;                                    // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WaterMaterial_HDR;                                        // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WaterMaterial_Normal;                                     // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsIphoneNewWater;                                         // 0x0904(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass WaterSwimObject.WaterSwimObject_C");
		return pStaticClass;
	}


	void SetWaterMaterial(int NewParam);
	void RefreshWaterMaterial();
	void DoTrySetWaterMaterial(int NewParam);
	void TrySetWaterMaterial(int NewParam);
	void IsSupportIndex(int NewParam, bool* NewParam1);
	void IsNewIphone(bool* IsNewIphone);
	void SetWateMaterial(bool bHDR);
	void HideUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog);
	void ShowUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog);
	bool IsCapsult(class UObject* PlayerPawn, class UActorComponent* Comp);
	void UserConstructionScript();
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void CustomEvent_1(TEnumAsByte<enum EGamePawnEvent> gamePawnEvent);
	void CustomEvent_2(int UserQualitySettingLevel);
	void ReceiveEndPlay(TEnumAsByte<enum EEndPlayReason>* EndPlayReason);
	void CustomEvent_3(bool UserMsaaSetting);
	void CustomEvent_4(bool bOpenWaterReflection);
	void ExecuteUbergraph_WaterSwimObject(int EntryPoint);
};


}

