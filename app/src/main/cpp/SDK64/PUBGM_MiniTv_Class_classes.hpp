#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_MiniTv_Class_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MiniTv_Class.MiniTv_Class_C
// 0x0028 (0x0488 - 0x0460)
class AMiniTv_Class_C : public ALuaActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class UMinitvAvatarComponent_BP_C*                 MinitvAvatarComponent_BP;                                 // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      PhoneMesh;                                                // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass MiniTv_Class.MiniTv_Class_C");
		return pStaticClass;
	}


	void DestoryPhoneMesh();
	void PlayPhoneAnim();
	void TouchEnd(TEnumAsByte<enum ETouchIndex> finger);
	void TouchStart(TEnumAsByte<enum ETouchIndex> finger);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ExecuteUbergraph_MiniTv_Class(int EntryPoint);
};


}

