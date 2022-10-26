#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Scope_ADS_M16A4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Scope_ADS_M16A4.BP_Scope_ADS_M16A4_C
// 0x0000 (0x0330 - 0x0330)
class UBP_Scope_ADS_M16A4_C : public UBattleItemHandle_WeapAttachment_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Scope_ADS_M16A4.BP_Scope_ADS_M16A4_C");
		return pStaticClass;
	}

};


}

