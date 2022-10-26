#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BuffAction_AddForceEquip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BuffAction_AddForceEquip.BuffAction_AddForceEquip_C
// 0x0004 (0x003C - 0x0038)
class UBuffAction_AddForceEquip_C : public USTBuffAction_Blueprint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BuffAction_AddForceEquip.BuffAction_AddForceEquip_C");
		return pStaticClass;
	}


	void OnBPExecute();
	void OnBPEnd();
	void ExecuteUbergraph_BuffAction_AddForceEquip(int EntryPoint);
};


}

