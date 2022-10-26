#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CH_Vehicle_AnimBP_E_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CH_Vehicle_AnimBP_E.CH_Vehicle_AnimBP_E_C
// 0x48B8 (0x57B8 - 0x0F00)
class UCH_Vehicle_AnimBP_E_C : public USTExtraVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F00(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F04(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_374E517C471DC7F34BBB0D9EC4630D45;      // 0x0F08(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ADBF933E4E71A2497E7749B7544E314E;// 0x0F40(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ECB4734A4A836EF0378E338A289ED844;// 0x0F78(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4189E0045A8C1B58C10D5A34304621D;// 0x0FB0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30E93CCE4AAA02A617DF77AF3CD58C21;// 0x0FE8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B00BE0BC4B101070D823748ACF9893B4;// 0x1020(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6492483F4249F48BFF70E783ABFFEC41;// 0x1058(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F3ADA7B24612A792AA97CDB79EA21365;// 0x1090(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3350DF6E4C7F08BEADB2FA906998E8BF;// 0x10C8(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59A2DD4045E937D2658C77BD360FB4EE;// 0x1100(0x0098)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_D3A2B89A44938F6CC6B9B489C8BE1A8C;// 0x1198(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_09D113DB402F0A4348EB8B9B10B0CAB9;// 0x1288(0x0098)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_893C50E7440D4B7463AB2FADAA2FFC48;// 0x1320(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CB3E655647DDF3C1D3E906A0829D3D66;// 0x1380(0x0058)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_756F13AA4080CCACD875828A9C214D95;// 0x13D8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B6C158F4BF0678C853550B1BA3D8EE7;// 0x14C8(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D97FC57B40DA2C7B912B2F8FC1CA7A9D;// 0x1500(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7C6D5CE849A4B37EB6D9549D34DF9C33;// 0x15F0(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5CD8F6A04682ACD2766B359B482D80F4;// 0x1628(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02B84E6F4F0C3251B7978E92DE9B27FE;// 0x1680(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B8A4D72643563698667F76A2A8701C35;// 0x16E0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD25827041A9713A7CC433976CC8BB78;// 0x17D0(0x0038)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_16C3AF4147BC9759385E5FA7E1C845FD;// 0x1808(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7E678ABE4AF92FAB98CC218B65697559;// 0x1870(0x0098)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8F9970FA440CDA3BDD04B6ADEA36F53A;// 0x1908(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_837A7DFF47DE7595671764B3B7B45933;// 0x1970(0x0098)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_91FFE4154177F3AA6EABEC9D8B288B2E;// 0x1A08(0x0040)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_F02201CC451BCEAC99BE0693643433E6;// 0x1A48(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_71A8460D405B952A48D745B068C70F1D;// 0x1AF0(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CFBE87EC47DA102FA7B78B8D3B0AA6E0;// 0x1BE0(0x0098)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C3BBE5FF4C0C1EDDA8B4FF87F5AD31B5;// 0x1C78(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D918257A426C27D9DBF04C99D6C71A22;// 0x1D28(0x0098)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_56DEE34245BC0ACA7D4AA98B15E53F5E;// 0x1DC0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6FFBCBE6490460FC429159B70BAD40C8;// 0x1E18(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5F963DE847505C139CE8C5BCD9D8C30C;// 0x1E78(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD593504456036E5AF94559D9AA41452;// 0x1ED0(0x0098)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AEAB1D24488840F454DC1BA108D8350A;// 0x1F68(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B151F5BB4FFC3EBFEEE6B8BF02D22C1A;// 0x2058(0x00F0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A45181894760EFE4DDAC77B17A672073;// 0x2148(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AC22BFD6406D71B99F2C3F871F74A2B9;// 0x21A0(0x0098)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_118BFA7B43192EF7739D6DACEAC21FB4;// 0x2238(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF6DDEC347C1282723C25497047124CD;// 0x2290(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C3B18EE643C67F0974483EACC66C9A61;// 0x22F0(0x0068)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EDA44A7746F69455B39C199E5C39CA4C;// 0x2358(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A12CD19041BD2EC473C357A57B418520;// 0x2448(0x0098)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25C5537742B48368CC3715AD738A61F6;// 0x24E0(0x0098)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE9BDB624375B1C5A659559A67F18052;// 0x2578(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3D6903D74D6F7AEF07FD6598AB9ABF11;// 0x25D8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B36545C24079ED3CD23EC38A35469872;// 0x2630(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7CF2C3F54902DBDA2D8377B396181B61;// 0x2668(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9A98BC9840C6FAAFE85F1DB387B837E7;// 0x2710(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2D731FB44FB76F23F8073D8DDCA2B489;// 0x2748(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6D32D7FD4E37B001ECC58A8EAF5FBC9B;// 0x27E8(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ADE1694D464A3E0398131EB98D6FD695;// 0x2820(0x0098)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88F4C9B64DFD4D8220231E9F2CF8C9AD;// 0x28B8(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CD68E9FF4E266A589AEFA4B175069631;// 0x2938(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_937BC0AC4A11942AB69D4789881B6993;// 0x2978(0x0040)
	unsigned char                                      UnknownData01[0x8];                                       // 0x29B8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_8A9C552C42006E37F7169193CFE727B8;    // 0x29C0(0x0190)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F21B1B8A4F7EFF8C06E3A695D8A124FB;  // 0x2B50(0x0090)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_D3ABCE4547A6EBAEAD9BF798F10F2CA7;    // 0x2BE0(0x0190)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_68D02FDA4AEC5848EF1D9790517D8053;  // 0x2D70(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_51AFC959465C696BF259C0B58F6567A4;// 0x2E00(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1D7C9E864C700231F724658F64A08D4E;// 0x2E38(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00E46362490A51920CF2448BF6F8A168;// 0x2E70(0x0098)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7BA0956D46648A2308CBEBBA265521F0;// 0x2F08(0x00F0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_486A6CBC42A630DFE06238A7A67FAECA;// 0x2FF8(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B915CA444D01EC7615B4AF9FDA4A0A55;// 0x3078(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B37E0F140A4F062D1E04F8C3AC09FDB;// 0x30B8(0x0040)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1E87BEA8448BB9FE1DC2239272B6DB2E;// 0x30F8(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_80E8436B495F6F8CDC4FB4BAD956BE27;// 0x31A8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F8F176D449FD25447FEA7C83C3383EE9;// 0x31E0(0x0038)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D911E7294F08D118C40FEF850DA86733;  // 0x3218(0x0090)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_55B685E8416B3E757D39D8A185951F78;  // 0x32A8(0x0090)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6A4D7CED4141174FEED740A6192625DC;  // 0x3338(0x0090)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_60A5F181473F9BDAEA8333BA1D3FBA44;// 0x33C8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30B8A807449869606FA906BF2CE389AF;// 0x3400(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5800DCEF411B258876790496368D225F;// 0x3438(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C32D028047F793D820EB768E28E96EB2;// 0x3470(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DF12FC542D3230E90E137B47C5A261B;// 0x34A8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D768BD264CABEC1463F7D48B3F40A82A;// 0x34E0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50C91C8B434434EDCA852C97CB1DFEA5;// 0x3518(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D13F61E4F23F0BB4CEECFB97999F396;// 0x3550(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1396F5AA485DA384261D3B96DF7D4E8C;// 0x3588(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_554B93034718944AA16989A366A1C21B;// 0x35E8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF4009374AC1137DBA651AA79ED9863B;// 0x3620(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_47D9B66B4AC51ABDC5961F867411FDB5;// 0x3680(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3B2B17F3479C12804D55F7A13DBDB31B;// 0x36B8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D195800F4668B7BFAE4386BAA5884B65;// 0x37A8(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_66E265944DBC84B4047F45B3ABA8BD42;// 0x37E0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB8C3D4E416B81F99BC63FBF18833DC8;// 0x3838(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2A473102451D1C921F47399D274C71E0;// 0x3898(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_01DF504840E32310BFFD1FB237C9C8AC;// 0x3988(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_83F866D7435BB9785A523DAA78B05838;// 0x39C0(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B180A5964EC42D329C569BAF9AD191B6;// 0x3A68(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0D1E14C54E105631F631BFBB06390BA0;// 0x3AA0(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DACB7CF448715DF083CA31B2EBF13617;// 0x3B20(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15DC09524CEE02013F0E0B9ADD4F344D;// 0x3BA0(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76EC8EDE4D7FC370F1313CBF1F03CA15;// 0x3BE0(0x0098)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6583A533488C7F29473C7B8820FE675B;// 0x3C78(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5220FAD04115830DBC05EAA6079363D9;// 0x3CB8(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1BF4FCA749B7EB33C5E0FFBD3A172140;// 0x3D38(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AE9DF4434E8360290AFB08A27C5D0805;      // 0x3D78(0x0058)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A961610469366C097A7E5B28FD3051C;      // 0x3DD0(0x0058)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31AF9B814D09CA2AF7F97CA17D4A687D;// 0x3E28(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9981BBF24AF4FFDC2345EF95A5CAFE37;// 0x3EC8(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E33D7FA545ABF62AF2D9D391397997EA;// 0x3F48(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BC22C2134DACC1941B1EFFA5FFBBD5DA;// 0x3F80(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A6D91C884BFD4F03C9BE10AFDCDD53D8;// 0x4020(0x0040)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3F510ECA4D5713A5ADAB8EBF7A9508B1;// 0x4060(0x0058)
	unsigned char                                      UnknownData02[0x8];                                       // 0x40B8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C60FB74B476B43B2EB48E89655586E3B; // 0x40C0(0x01A0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_57229E704A8FEF3EF52BD1B75914751B; // 0x4260(0x01A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6B14B78342FD49514C1B9A82A11A3C55;// 0x4400(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A17333A14A416EABEE214B9CC0E48230;// 0x4440(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0F7879104EA65B4D65C6C7AFFE0CD41D;// 0x4478(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B017E280484263CD6392948BC6EB865F;// 0x4518(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DD7AF46045209E1F8A31AFBB1A571780;// 0x45B8(0x0098)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2FE8ADD7406E6FAE939ACC9524CC2404;// 0x4650(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D7DC11904B30716B721D42970ADA7ABA;// 0x4690(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1CB6DAA545A0881D9442CF9E7A546487;      // 0x4728(0x0058)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0A3D01748FB4F75D3BECC9B82152E49;// 0x4780(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB90695F432A514F89864FB3981D622C;// 0x47B8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2552BFBD4D12F51C4FEB74B81561E8D8;// 0x47F0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39D68FE149724E41A06CEB98E6A5AB3A;// 0x4850(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_677257CF43F68A06AB3E249CFCA84832;// 0x4888(0x0098)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_989E7B7647503EAF17525B8FC493242C;    // 0x4920(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_C04C8E5D4460D8927FB1D5B93715EC7D;    // 0x4AB0(0x0190)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6668397D4569396D9DF177A58F07840A;  // 0x4C40(0x0090)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5DB61C364D16BAC871BF29A5724FF7C2;  // 0x4CD0(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_733806F8418A1AB45C51C5944C40D707;// 0x4D60(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_855AFA274CD751A20E239B9C7982C6C2;// 0x4E00(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E9BF9DAC49CDE9E942B6D1867AD7338F;      // 0x4EA0(0x0058)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_82AF2EF14766D25F3F6D30B7B33FE1B3;// 0x4EF8(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_877CBFA94A43B5A1557EB4BF54B91313;// 0x4F30(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4F69E22B41B4A86D43F477A65F532874;// 0x4F68(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_541B2431434BD6287A93C79A0911F031;// 0x5058(0x0098)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4C44C69C40BE6402A550EB84DC5494C1;// 0x50F0(0x0110)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FA17233B42655A06C4F2E1A24543FEA2;// 0x5200(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_28E005694CB6B153C676A6AEA4C255DB;// 0x52F0(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F7F061AE4288F528287406A9A1E109B6;// 0x5328(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_511305F4409388AD1D3EBFB115C7C1C8;// 0x53D0(0x0080)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_5C23D3484D754CFF9B3201A985EBE4FB;  // 0x5450(0x0050)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_7C77ED2A49899F145E2750A2F9226A73;// 0x54A0(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD59609644DD41F1E7979A9494FC98BB;// 0x5590(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1FFF856E484A641F4A842D9DDC7551A0;// 0x55F0(0x0058)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3D6B3B694BEF8790C2B4358D37929BA3;// 0x5648(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4D1431A14D1028C6F2DA1685FA857F61;// 0x56C8(0x0098)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_685D662F488E342007424199031F0282;// 0x5760(0x0040)
	class USceneComponent*                             vehicleRoot;                                              // 0x57A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isVH_Motorcycle_AnimBP;                                   // 0x57A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x57A5(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      snowboardSkeletalMeshCom;                                 // 0x57A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USTVehicleAnimInstance*                      VehicleAnimInstance;                                      // 0x57AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              snowboardSlopeAdpatLen;                                   // 0x57B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              driver_ani_timer;                                         // 0x57B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass CH_Vehicle_AnimBP_E.CH_Vehicle_AnimBP_E_C");
		return pStaticClass;
	}


	void ComputerActorAnimateKeyTimer();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_B151F5BB4FFC3EBFEEE6B8BF02D22C1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_AEAB1D24488840F454DC1BA108D8350A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyAdditive_A45181894760EFE4DDAC77B17A672073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_AC22BFD6406D71B99F2C3F871F74A2B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_FD593504456036E5AF94559D9AA41452();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyAdditive_5F963DE847505C139CE8C5BCD9D8C30C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_6FFBCBE6490460FC429159B70BAD40C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ModifyBone_2D731FB44FB76F23F8073D8DDCA2B489();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_ADE1694D464A3E0398131EB98D6FD695();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_00E46362490A51920CF2448BF6F8A168();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_7BA0956D46648A2308CBEBBA265521F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_30B8A807449869606FA906BF2CE389AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_5800DCEF411B258876790496368D225F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyAdditive_56DEE34245BC0ACA7D4AA98B15E53F5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_C32D028047F793D820EB768E28E96EB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_8DF12FC542D3230E90E137B47C5A261B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_D918257A426C27D9DBF04C99D6C71A22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_D768BD264CABEC1463F7D48B3F40A82A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_50C91C8B434434EDCA852C97CB1DFEA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_CFBE87EC47DA102FA7B78B8D3B0AA6E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_3D13F61E4F23F0BB4CEECFB97999F396();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_1396F5AA485DA384261D3B96DF7D4E8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_71A8460D405B952A48D745B068C70F1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_FF4009374AC1137DBA651AA79ED9863B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByEnum_F02201CC451BCEAC99BE0693643433E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_3B2B17F3479C12804D55F7A13DBDB31B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_837A7DFF47DE7595671764B3B7B45933();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyAdditive_66E265944DBC84B4047F45B3ABA8BD42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_2A473102451D1C921F47399D274C71E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequenceEvaluator_8F9970FA440CDA3BDD04B6ADEA36F53A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyMeshSpaceAdditive_118BFA7B43192EF7739D6DACEAC21FB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_BF6DDEC347C1282723C25497047124CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_7E678ABE4AF92FAB98CC218B65697559();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_76EC8EDE4D7FC370F1313CBF1F03CA15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ModifyBone_31AF9B814D09CA2AF7F97CA17D4A687D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ModifyBone_BC22C2134DACC1941B1EFFA5FFBBD5DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TwoWayBlend_3F510ECA4D5713A5ADAB8EBF7A9508B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TwoBoneIK_C60FB74B476B43B2EB48E89655586E3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TwoBoneIK_57229E704A8FEF3EF52BD1B75914751B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ModifyBone_0F7879104EA65B4D65C6C7AFFE0CD41D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ModifyBone_B017E280484263CD6392948BC6EB865F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_DD7AF46045209E1F8A31AFBB1A571780();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_D7DC11904B30716B721D42970ADA7ABA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_E0A3D01748FB4F75D3BECC9B82152E49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_CB90695F432A514F89864FB3981D622C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequenceEvaluator_16C3AF4147BC9759385E5FA7E1C845FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_2552BFBD4D12F51C4FEB74B81561E8D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_677257CF43F68A06AB3E249CFCA84832();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ModifyBone_733806F8418A1AB45C51C5944C40D707();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ModifyBone_855AFA274CD751A20E239B9C7982C6C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_4F69E22B41B4A86D43F477A65F532874();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_541B2431434BD6287A93C79A0911F031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_RotationOffsetBlendSpace_4C44C69C40BE6402A550EB84DC5494C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_FA17233B42655A06C4F2E1A24543FEA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_B8A4D72643563698667F76A2A8701C35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_02B84E6F4F0C3251B7978E92DE9B27FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyAdditive_5CD8F6A04682ACD2766B359B482D80F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_D97FC57B40DA2C7B912B2F8FC1CA7A9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpaceEvaluator_7C77ED2A49899F145E2750A2F9226A73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_CD59609644DD41F1E7979A9494FC98BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_4D1431A14D1028C6F2DA1685FA857F61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequenceEvaluator_C3B18EE643C67F0974483EACC66C9A61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_756F13AA4080CCACD875828A9C214D95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyAdditive_CB3E655647DDF3C1D3E906A0829D3D66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_893C50E7440D4B7463AB2FADAA2FFC48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpacePlayer_EDA44A7746F69455B39C199E5C39CA4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_09D113DB402F0A4348EB8B9B10B0CAB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendSpaceEvaluator_D3A2B89A44938F6CC6B9B489C8BE1A8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_59A2DD4045E937D2658C77BD360FB4EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_3350DF6E4C7F08BEADB2FA906998E8BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_F3ADA7B24612A792AA97CDB79EA21365();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_6492483F4249F48BFF70E783ABFFEC41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_B00BE0BC4B101070D823748ACF9893B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_30E93CCE4AAA02A617DF77AF3CD58C21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_D4189E0045A8C1B58C10D5A34304621D();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_ECB4734A4A836EF0378E338A289ED844();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_A12CD19041BD2EC473C357A57B418520();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_BlendListByBool_25C5537742B48368CC3715AD738A61F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_TransitionResult_ADBF933E4E71A2497E7749B7544E314E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_ApplyAdditive_3D6903D74D6F7AEF07FD6598AB9ABF11();
	void AnimNotify_SkiPlayingJumpAnimEnd();
	void AnimNotify_SkiPlayingLandAnimEnd();
	void AnimNotify_SkiBeginFowardStart();
	void AnimNotify_SkiBeginForwardEnd();
	void AnimNotify_PlayerEnterSki();
	void AnimNotify_PlayerOffSki();
	void AnimNotify_SkiEndBrake();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_E_AnimGraphNode_SequencePlayer_AE9BDB624375B1C5A659559A67F18052();
	void ExecuteUbergraph_CH_Vehicle_AnimBP_E(int EntryPoint);
};


}

