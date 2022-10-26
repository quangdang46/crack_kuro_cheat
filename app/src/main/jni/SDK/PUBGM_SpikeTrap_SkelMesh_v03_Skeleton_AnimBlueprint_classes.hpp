#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint.SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_C
// 0x0070 (0x0360 - 0x02F0)
class USpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_EC7E66EB49502EFF02A3D4A28AEA8F70;      // 0x02F8(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5EF35DB8462AAB81D62D8FB150FCAB34;// 0x0330(0x0030)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint.SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_C");
		return pStaticClass;
	}


	void ExecuteUbergraph_SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint(int EntryPoint);
};


}

