#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GlobalUIEventDispatcher_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C
// 0x0010 (0x0038 - 0x0028)
class UGlobalUIEventDispatcher_BP_C : public UObject
{
public:
	struct FScriptMulticastDelegate                    WardrobePutDownEvent;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C");
		return pStaticClass;
	}


	void WardrobePutDownEvent__DelegateSignature(int PutonID, int resID);
};


}

