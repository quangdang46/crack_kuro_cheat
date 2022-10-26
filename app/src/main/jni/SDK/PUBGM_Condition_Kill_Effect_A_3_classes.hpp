#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Condition_Kill_Effect_A_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_Kill_Effect_A_3.Condition_Kill_Effect_A_2_C
// 0x0000 (0x0140 - 0x0140)
class UCondition_Kill_Effect_A_2_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Condition_Kill_Effect_A_3.Condition_Kill_Effect_A_2_C");
		return pStaticClass;
	}

};


}

