#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ServerSwitcher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ServerSwitcher.BP_ServerSwitcher_C
// 0x0004 (0x0124 - 0x0120)
class UBP_ServerSwitcher_C : public UServerSwitchComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ServerSwitcher.BP_ServerSwitcher_C");
		return pStaticClass;
	}


	void ReceiveBeginPlay();
	void CustomEvent_1(bool BoolValue);
	void ExecuteUbergraph_BP_ServerSwitcher(int EntryPoint);
};


}

