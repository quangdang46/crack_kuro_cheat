#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_ShaderCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShaderCore.ShaderGroupSettings
// 0x0048 (0x0070 - 0x0028)
class UShaderGroupSettings : public UObject
{
public:
	TArray<struct FShaderGroupDesc>                    Groups;                                                   // 0x0028(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class ShaderCore.ShaderGroupSettings");
		return pStaticClass;
	}

};


}

