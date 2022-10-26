#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PlaneAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C
// 0x0014 (0x03E4 - 0x03D0)
class UPlaneAvatarComponent_BP_C : public UPlaneAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	float                                              ChangeDissolveTime;                                       // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BOpenDissolve;                                            // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              DissolveValue;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C");
		return pStaticClass;
	}


	class UBattleItemHandleBase* CreateItemAvatarHandle(int InItemID);
	void BP_SetMatDissolve(float NewParam);
	void BP_OnPlaneAvatarChanged();
	class UBackpackPlaneAvatarHandle* GetPlaneAvatarHandle(int* ItemId);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void PlaneAvatarChanged();
	void ExecuteUbergraph_PlaneAvatarComponent_BP(int EntryPoint);
};


}

