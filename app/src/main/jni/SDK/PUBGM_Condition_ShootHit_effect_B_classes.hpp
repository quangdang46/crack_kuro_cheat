#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Condition_ShootHit_effect_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_ShootHit_effect_B.Condition_ShootHit_effect_B_C
// 0x0000 (0x0140 - 0x0140)
class UCondition_ShootHit_effect_B_C : public USTBuff
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Condition_ShootHit_effect_B.Condition_ShootHit_effect_B_C");
		return pStaticClass;
	}

};


}

