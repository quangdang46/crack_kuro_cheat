#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_HoldComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HoldComponent.HoldComponent_C
// 0x001D (0x00E5 - 0x00C8)
class UHoldComponent_C : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HoldAndRelease;                                           // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              HoldTimeThreshold;                                        // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HoldFingerIndex;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EHoldMode>                        HoldMode;                                                 // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	float                                              PushTime;                                                 // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPush;                                                   // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass HoldComponent.HoldComponent_C");
		return pStaticClass;
	}


	void HoldTime(float* Time);
	void Release(TEnumAsByte<enum ETouchIndex> FingerIndex);
	void Push(int FingerIndex);
	void HoldAndRelease__DelegateSignature(int FingeerIndex);
};


}

