#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Condition_KillNormal_Effect_A_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_KillNormal_Effect_A_2.Condition_KillNormal_Effect_A_1_C
// 0x0000 (0x0140 - 0x0140)
class UCondition_KillNormal_Effect_A_1_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Condition_KillNormal_Effect_A_2.Condition_KillNormal_Effect_A_1_C");
		return pStaticClass;
	}

};


}

