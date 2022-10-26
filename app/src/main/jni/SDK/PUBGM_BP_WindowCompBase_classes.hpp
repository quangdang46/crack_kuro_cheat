#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_WindowCompBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WindowCompBase.BP_WindowCompBase_C
// 0x000C (0x06EC - 0x06E0)
class UBP_WindowCompBase_C : public UUAEWindowComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0004) (Transient, DuplicateTransient)
	class UAkAudioEvent*                               BrokenSound;                                              // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceShowTime;                                            // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_WindowCompBase.BP_WindowCompBase_C");
		return pStaticClass;
	}


	void callvoicecheck();
	void NotifyServerBroken();
	void LocalHandleWindowBrokenBP(bool* bInitial, bool* bLocal);
	void ExecuteUbergraph_BP_WindowCompBase(int EntryPoint);
};


}

