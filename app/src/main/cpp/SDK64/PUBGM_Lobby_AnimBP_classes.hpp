#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Lobby_AnimBP.Lobby_AnimBP_C
// 0x4250 (0x46D0 - 0x0480)
class ULobby_AnimBP_C : public USTPawnAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AFF52F6C457272B774D5C286273B97F4;      // 0x0488(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B;// 0x04D8(0x02C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9A8BCB494C60C4E6B163B69FBF189C85;// 0x0798(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9E8CA6A84B12F57225A6DB8E983D5123;// 0x07E8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_473AC4274B4CEED81B20C9A9ACC2EB17;// 0x0838(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_47BBD58E47BA952B4BC65BB1577F4EF6;// 0x08A8(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_32F8A3014A4B2F525C7DD4B2D614EA15;      // 0x0928(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7A0422648E25AB4352F9A96EDFC9CC3;// 0x0998(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4BF41F204D641F3C8FA2F1AC89979187;// 0x0A08(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_736936E84C48BB5C4165BA8DD7CEB90D;// 0x0A78(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3A66873B4D49DFF418B19B8623248317;// 0x0AF8(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D1F9C59643EF5AB6506D33B1FAF9BEAE;// 0x0B48(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F7536174C45371D788EBA946ED43248;// 0x0BC8(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F8943D434E6AAE1B07C0F1B3ABB0DA78;// 0x0C38(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D25BB41445101287DBCE3EB4CAB67171;// 0x0C88(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17F5FAB949FCF7C783F62AAB483AC447;// 0x0D48(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A5A477CB4316043DAC6FF4A95217783D;// 0x0D98(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C2D2D97E414325A1E172869DEE2DE416;// 0x0DE8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B65895564C080E77F70DF7AA5C4C1300;      // 0x0EA8(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_4A815C384984B5A2B5386299F2DEED85;// 0x0F18(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_986285904B872DCB94CF8CBAB9A90888;// 0x0FE8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E0C64FC43AAF3BD99CE0D84DCFD52A2;// 0x1058(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D49905424D9E64B1DC1DB58770E63F03;// 0x10C8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A1BA28C41B59FDC94DD439E6E4AA51F;// 0x1138(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE27731C4EE1344DDB785FBD062BE8C6;// 0x11A8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07AFE46040E954CBDBB3088F734467E2;// 0x1218(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9A8F47724807B36A5929E3A6B1860F7F;// 0x1288(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0E60BE884F4F2D4D549762803828DD05;// 0x1370(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DDCBB29A4A3C78BA06EDE9BE0F603F0F;// 0x1440(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDCBB4A3451F17C986B87E830382CD73;// 0x1510(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3608C9064898C777D090B8A2B9FD3A3F;// 0x1580(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B9AEDA847AFF35B2E42148070E80DB9;// 0x15F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35658A8340547480AEB0B78E19C1027F;// 0x1660(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF4F569A4918899597E2E89D3D11B3E5;// 0x16D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_222D007B405FDA5EFDB3568AEF39D531;// 0x1740(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_561B31A044E65E1E340CFB9B6FFB51F4;// 0x17B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B079C8B4A4419E004261EA1DA8759A6;// 0x1820(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_191DC67A40173F2F0C4DA0BFA2CB665E;// 0x1890(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92153E9547C3807F57A62BB6447C559F;// 0x1900(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A513AE2D43A39ABB4CF95CBA42F46E4F;// 0x1970(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2FC4424843DAD0EDAC532EA346B5B3D5;// 0x1A58(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_626A8657450B700E04EA978275350404;// 0x1B40(0x00E8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBA75E85412A18376FC1B782D7D7E62C;// 0x1C28(0x0050)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7C66CC2046E30C0FE71EDAA15CA235DE;// 0x1C78(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_522010E9411D43F7B58CC1AF78D43D8A;// 0x1D50(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3B9C9E74B16C14BA3BA058316F50B1E;// 0x1DC0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE62A7724E25812FD8462382C57B45E9;// 0x1E30(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D9907374142A88F15EE6B90BB047A33;// 0x1EA0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_154F5C224665119F224224BFB88AB20B;// 0x1F10(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DCE8DF8407A1A155A85C9A64A110AB3;// 0x1F80(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A993A8E41FF247B76D393AE30694D7A;// 0x1FF0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6832A2A44278A823895A78B13D0407AE;// 0x2060(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB8EC6B14686D6CA087EF683B30E4775;// 0x20D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25A38C25417C4448092CE6B9B98EFA0B;// 0x2140(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C898A5D7416E49C0B875F381E8BFDFD3;// 0x21B0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C095363F4AC15D76C347A2BFF205FCE4;// 0x2298(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_696616664DC8F8B31B7072B548CDF566;// 0x2380(0x00E8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CE1AF3FA4F5795623E54058D50259456;// 0x2468(0x0050)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ECEB81AF4DF2907A26DEEDB8C9420083;// 0x24B8(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C324BED34DCE43458C6D94B3C571BD2B;// 0x2590(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF7DAE5C4CDEC269AD6AA192CF1FD6E3;// 0x2600(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08930DDA4CE34DAC3601EA9E39D422B7;// 0x2670(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8307FC74803EA2024D30A983FE9ACB8;// 0x26E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A33B190241873044F5EBE3B405869D1E;// 0x2750(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_894802A74CD4DA76D55CC2821BC7E8B8;// 0x27C0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0F3F91644D9E68047C8B29D4E54742B;// 0x2830(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00960CA54A347CA1F2B7D0A0D94B4130;// 0x28A0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14188E96493882B251D35C9BA78D0203;// 0x2910(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0300AC2D4493E991FCFCB9898896AB33;// 0x2980(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96B8F204402ECDB76F7B92ACC8A0BE2E;// 0x29F0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8EBE0B9340BA1548E3FEF392CAAB88A2;// 0x2A60(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A347A3ED47331AAA671B7A9F8D626390;// 0x2B48(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_59BB895B4FABFB558D844FBD547DA6DF;// 0x2C30(0x00E8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_384935F8419BF996A60784881AF1D3B3;// 0x2D18(0x0050)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_809461744C84751F661513B46DECC19B;// 0x2D68(0x00D8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_19A367B64AA6A6E557F95895FD546B0C;// 0x2E40(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_99BEBB72474B296808E67BA89EF360C4;// 0x2F28(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_321CC3564AC8D96DE5675E932E6FEF7D;// 0x2FF8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7C925F734DBE08D09FE001810C0F531B;// 0x3048(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5053D59846A79D34177D06809EAC19A4;// 0x3098(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02C27FD84D09FAB2A76F7B819BE4E02E;// 0x3118(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B1B765D4DFCF3ED170D2CA6BA912335;// 0x3188(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC74B3834291C85A1C11BB907AA1CC44;// 0x31F8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1CD7157D4AA33BBC8A249794003DA92D;// 0x3268(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26E2FBDA45BCCD35C178208267A47E3C;// 0x32D8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19EA61F347E92E523233C0973F710EDD;// 0x3348(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D7A166DD41A3E24756434FA7A0BABDE8;// 0x33B8(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74C05CBE44C7AF6CB793908D2C8B0F08;// 0x34A0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7AA3FDDC4DB88E4C3BF7D381DD41B451;// 0x3570(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF58387E48A88C32CE645889704BEDAD;// 0x3640(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4783BF5640FA982A7AA637AA42C69C70;// 0x36B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_04BD4ED24183152C50D642A1D4388436;// 0x3720(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DC95E0E4A9B2D7D1EBCB89DE4EF31C1;// 0x3790(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29E59FC34629BD25792B509EFC764F4A;// 0x3800(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48692B984CAAD645C93D54810082B97C;// 0x3870(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DAFCF9AD457485E2574BE0BEC62DD94E;// 0x38E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C98737A4088A65309A42492B704105D;// 0x3950(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D91B8B374C9F3B0AD4F3A3B6D5BD2362;// 0x39C0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1390D01F41C22BB4411FF9A65A7635C2;// 0x3A30(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_30941A2F402EFF78369C75A196BA5486;// 0x3AA0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8C3B06B446591B5653A365BDE61AB753;// 0x3B88(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8C14C676414683DF8D852A8698630DF8;// 0x3C70(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5638270D44D89786C59D70AC2704C84B;// 0x3D58(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_710EE3A34294511D18494BB9EE5DAA05;// 0x3DC8(0x0050)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_21B5B7CA42AEE0A65B4BD5B8D92EB13C;// 0x3E18(0x00D8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7D50B3640A5D47DAC35FD98719D344C;// 0x3EF0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95D7A7E54AE984099D67D6B88CE47F33;// 0x3F38(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5F4DD97047315E04527D889B2EE19674;// 0x3F80(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5B4CA56049D0126526D84C8EBB0D0BCF;      // 0x3FD0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E4910DA347A6CAE2BAEDCA8E3EC3E099;// 0x4040(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_711DBF22482E4DCE165EC48219E6DB47;// 0x40B0(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3B27ED6946C48D85D587D7AA42674511;// 0x4100(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72BFA2E744054C507D47D9B05A061E35;// 0x41C0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_463FA7834E6D9D089FD601BF2B3FF7D9;// 0x4210(0x0050)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3EBEABE248532586A00036A71F2AA1CB;// 0x4260(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_279239D64DB636652BBE09A92658848B;// 0x4338(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FBBDCD0F49F1D2BD9D457BBBF2FC29DA;// 0x4408(0x00D0)
	bool                                               Man;                                                      // 0x44D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFront;                                                  // 0x44D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChange;                                                 // 0x44DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHairAnimDynamics;                                     // 0x44DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnimParamList                              CharacterAnimParam;                                       // 0x44DC(0x0134) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsWeaponGrip;                                             // 0x4610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Positon;                                                  // 0x4611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x4612(0x0006) MISSED OFFSET
	class ASTExtraLobbyCharacter*                      LobbyCharacter;                                           // 0x4618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           WeaponAnimSeqBase;                                        // 0x4620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           WeaponAnimSeqBaseAdd;                                     // 0x4628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ELobbyCharacterAnimType>          LobbyGenderType;                                          // 0x4630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ECharacterShowSceneType>          charSceneType;                                            // 0x4631(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LobbyCharPosIdx;                                          // 0x4632(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x4633(0x0001) MISSED OFFSET
	struct FVector                                     C_HurtDir;                                                // 0x4634(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                PoseStateIndex;                                           // 0x4640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x4644(0x0004) MISSED OFFSET
	class UPoseWithFriendComponent*                    PoseWithFriendComp;                                       // 0x4648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           PoseWithFriendAnimSeq;                                    // 0x4650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPoseWithFriend;                                          // 0x4658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x4659(0x0003) MISSED OFFSET
	float                                              LastRotationYaw;                                          // 0x465C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x4660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x4664(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_PlayerLobbyPawn_C*                       BP_LobbyPawn;                                             // 0x4670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBPLobbyPawnValid;                                       // 0x4678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x4679(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           WeaponPlayAnimSeqBase;                                    // 0x4680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWeaponPlaying;                                           // 0x4688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x4689(0x0003) MISSED OFFSET
	float                                              WeaponIdleTimer;                                          // 0x468C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemHasIdleAnim;                                          // 0x4690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x4694(0x0004) MISSED OFFSET
	class UAnimSequence*                               SpecialIdle;                                              // 0x4698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSpecialIdle;                                           // 0x46A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceUseIdle;                                             // 0x46A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x46A2(0x0006) MISSED OFFSET
	class UAnimMontage*                                GoSkateAnim;                                              // 0x46A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAircast;                                                // 0x46B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x46B1(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           IdleSkateAnim;                                            // 0x46B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weaponAnimCountDownTime;                                  // 0x46C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lobbyIdleP1StartPosition;                                 // 0x46C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTPosActive;                                              // 0x46C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x46C9(0x0003) MISSED OFFSET
	float                                              skateAnimTime;                                            // 0x46CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass Lobby_AnimBP.Lobby_AnimBP_C");
		return pStaticClass;
	}


	void SetTposActive(bool bTPosActive);
	void HandleSkatePose(class UBackpackAvatarHandle* AvatarHandle, bool IsEquiped, int ItemId, int SlotID);
	void UseSkatePose(int SlotID, const struct FItemDefineID& newID, const struct FItemDefineID& OldID);
	void CancleSkatePose(int SlotID, const struct FItemDefineID& OldItemID);
	void SetSkatePose(class UAnimMontage* start_SkateAnim, class UAnimSequenceBase* idle_SKateAnim);
	void SetIsUsingSpecialIdle();
	void ProcessAvatarEquipmentChange(class UBackpackAvatarHandle* AvatarHandle, bool IsEquiped, int ItemId, int SlotID);
	void WeaponPlayAnimEnd();
	void StartWeaponPlayAnim();
	void CountDownForWeaponPlay(float Delta);
	void ProcessSceneTypeChange();
	void ProcessPosChange();
	void ProcessGenderChange();
	void GetWeaponUseGenderType(unsigned char PosIdx, TEnumAsByte<enum ELobbyCharacterAnimType> gender, TEnumAsByte<enum ELobbyCharacterAnimType>* gender_type);
	void SetWeaponAnimation();
	void UpdatePoseStateIndex();
	void SetWeaponGrip(bool WeaponGrip);
	void OnCancelPoseWithFriend();
	void OnPoseWithFriend(class UAnimSequence* AnimSeq);
	void PlayWeaponAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8EBE0B9340BA1548E3FEF392CAAB88A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_A347A3ED47331AAA671B7A9F8D626390();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_59BB895B4FABFB558D844FBD547DA6DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_19A367B64AA6A6E557F95895FD546B0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_99BEBB72474B296808E67BA89EF360C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_02C27FD84D09FAB2A76F7B819BE4E02E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_6B1B765D4DFCF3ED170D2CA6BA912335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_DC74B3834291C85A1C11BB907AA1CC44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_1CD7157D4AA33BBC8A249794003DA92D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_26E2FBDA45BCCD35C178208267A47E3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_19EA61F347E92E523233C0973F710EDD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D7A166DD41A3E24756434FA7A0BABDE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_74C05CBE44C7AF6CB793908D2C8B0F08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_7AA3FDDC4DB88E4C3BF7D381DD41B451();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_30941A2F402EFF78369C75A196BA5486();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8C3B06B446591B5653A365BDE61AB753();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8C14C676414683DF8D852A8698630DF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_5638270D44D89786C59D70AC2704C84B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_696616664DC8F8B31B7072B548CDF566();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_626A8657450B700E04EA978275350404();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_2FC4424843DAD0EDAC532EA346B5B3D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_D7D50B3640A5D47DAC35FD98719D344C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_95D7A7E54AE984099D67D6B88CE47F33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_A513AE2D43A39ABB4CF95CBA42F46E4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequenceEvaluator_E4910DA347A6CAE2BAEDCA8E3EC3E099();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_8B9AEDA847AFF35B2E42148070E80DB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_3608C9064898C777D090B8A2B9FD3A3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_EDCBB4A3451F17C986B87E830382CD73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_DDCBB29A4A3C78BA06EDE9BE0F603F0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_279239D64DB636652BBE09A92658848B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_FBBDCD0F49F1D2BD9D457BBBF2FC29DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_0E60BE884F4F2D4D549762803828DD05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_9A8F47724807B36A5929E3A6B1860F7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_07AFE46040E954CBDBB3088F734467E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_EE27731C4EE1344DDB785FBD062BE8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_2A1BA28C41B59FDC94DD439E6E4AA51F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_D49905424D9E64B1DC1DB58770E63F03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_5E0C64FC43AAF3BD99CE0D84DCFD52A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_986285904B872DCB94CF8CBAB9A90888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_C095363F4AC15D76C347A2BFF205FCE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByInt_4A815C384984B5A2B5386299F2DEED85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_ModifyBone_C2D2D97E414325A1E172869DEE2DE416();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_C898A5D7416E49C0B875F381E8BFDFD3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_ModifyBone_D25BB41445101287DBCE3EB4CAB67171();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_4BF41F204D641F3C8FA2F1AC89979187();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_F7A0422648E25AB4352F9A96EDFC9CC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void OnLobbyGenderAnimChange();
	void OnLobbyCharSceneTypeChange();
	void OnLobbyCharWeaponChange();
	void OnLobbyCharPosChange();
	void SetForceuseIdle(bool force);
	void BindSkate();
	void UnEquip(int SlotID, const struct FItemDefineID& OldItemID);
	void ExecuteUbergraph_Lobby_AnimBP(int EntryPoint);
};


}

