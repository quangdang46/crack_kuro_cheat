#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CH_MainChar_Anim_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C
// 0x01F8 (0x04F8 - 0x0300)
class UCH_MainChar_Anim_BP_C : public UMainCharAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_29FBB5C84AA95043DE3725AA9FAB5D9B;      // 0x0308(0x0038)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_1E6668964E4BAA438CD5A3958631C7E0;// 0x0340(0x0090)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_C9C6D110426F05EEF79F0EA47F0A00F3;// 0x03D0(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042;// 0x0460(0x0098)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C");
		return pStaticClass;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042();
	void ExecuteUbergraph_CH_MainChar_Anim_BP(int EntryPoint);
};


}

