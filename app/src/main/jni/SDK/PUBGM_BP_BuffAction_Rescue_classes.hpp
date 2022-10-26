#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_BuffAction_Rescue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuffAction_Rescue.BP_BuffAction_Rescue_C
// 0x0004 (0x0054 - 0x0050)
class UBP_BuffAction_Rescue_C : public USTBuffAction_BPCallEvent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_BuffAction_Rescue.BP_BuffAction_Rescue_C");
		return pStaticClass;
	}


	void BPInitialize();
	void OnExecuteEvent();
	void OnEndEvent();
	void ExecuteUbergraph_BP_BuffAction_Rescue(int EntryPoint);
};


}

