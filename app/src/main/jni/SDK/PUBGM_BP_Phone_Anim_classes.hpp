#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Phone_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Phone_Anim.BP_Phone_Anim_C
// 0x0098 (0x0388 - 0x02F0)
class UBP_Phone_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_F915205347D80689471DF88D9872E184;      // 0x02F8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_806200C547ABA7C6C9334E8EAD357C8B;      // 0x0330(0x0058)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass BP_Phone_Anim.BP_Phone_Anim_C");
		return pStaticClass;
	}


	void AnimNotify_HidePhone();
	void ExecuteUbergraph_BP_Phone_Anim(int EntryPoint);
};


}

