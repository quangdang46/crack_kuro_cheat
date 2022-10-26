#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_AvatarColor_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AvatarColor_Base.BP_AvatarColor_Base_C
// 0x0018 (0x0058 - 0x0040)
class UBP_AvatarColor_Base_C : public UBackpackAvatarItemColor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	TArray<struct FName>                               MaskColorNames;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AvatarColor_Base.BP_AvatarColor_Base_C");
		return pStaticClass;
	}


	void SetCustomColorDeffered(class UMaterialInterface** InMaterial, struct FSlotToMatColor* InMatColor);
	void ExecuteUbergraph_BP_AvatarColor_Base(int EntryPoint);
};


}

