#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_AvatarCustomColor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarCustomColor_BP.AvatarCustomColor_BP_C
// 0x0000 (0x0040 - 0x0040)
class UAvatarCustomColor_BP_C : public UAvatarCustomColor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarCustomColor_BP.AvatarCustomColor_BP_C");
		return pStaticClass;
	}

};


}

