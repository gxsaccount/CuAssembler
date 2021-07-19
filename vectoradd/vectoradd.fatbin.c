#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000bb0,0x0000004001010002,0x0000000000000928\n"
".quad 0x0000000000000000,0x0000004b00010007,0x0000000000000000,0x0000000000000011\n"
".quad 0x0000000000000000,0x0000000000000000,0x33010102464c457f,0x0000000000000007\n"
".quad 0x0000006500be0002,0x0000000000000000,0x0000000000000880,0x0000000000000600\n"
".quad 0x00380040004b054b,0x0001000a00400003,0x7472747368732e00,0x747274732e006261\n"
".quad 0x746d79732e006261,0x746d79732e006261,0x78646e68735f6261,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x6441636576365a5f,0x695f535f53645064,0x666e692e766e2e00\n"
".quad 0x636576365a5f2e6f,0x535f536450646441,0x732e766e2e00695f,0x5a5f2e6465726168\n"
".quad 0x5064644163657636,0x2e00695f535f5364,0x74736e6f632e766e,0x365a5f2e30746e61\n"
".quad 0x6450646441636576,0x642e00695f535f53,0x6172665f67756265,0x2e6c65722e00656d\n"
".quad 0x72665f6775626564,0x68732e0000656d61,0x2e00626174727473,0x2e00626174727473\n"
".quad 0x2e006261746d7973,0x735f6261746d7973,0x766e2e0078646e68,0x5a5f006f666e692e\n"
".quad 0x5064644163657636,0x2e00695f535f5364,0x365a5f2e74786574,0x6450646441636576\n"
".quad 0x6e2e00695f535f53,0x5f2e6f666e692e76,0x646441636576365a,0x00695f535f536450\n"
".quad 0x726168732e766e2e,0x6576365a5f2e6465,0x5f53645064644163,0x2e766e2e00695f53\n"
".quad 0x746e6174736e6f63,0x636576365a5f2e30,0x535f536450646441,0x617261705f00695f\n"
".quad 0x67756265642e006d,0x2e00656d6172665f,0x756265642e6c6572,0x00656d6172665f67\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0009000300000043\n"
".quad 0x0000000000000000,0x0000000000000000,0x0008000300000090,0x0000000000000000\n"
".quad 0x0000000000000000,0x00040003000000b6,0x0000000000000000,0x0000000000000000\n"
".quad 0x0009101200000032,0x0000000000000000,0x0000000000000100,0x00000028ffffffff\n"
".quad 0xffffffff00000000,0x7c040003ffffffff,0x80810c0fffffffff,0x288081ff08002880\n"
".quad 0x0000002880808108,0xffffffff00000000,0x0000000000000030,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000100,0x0000040000000204,0x00288080810c0000\n"
".quad 0x0000000000003604,0x0000000400082f04,0x000823040000000c,0x0000000000000004\n"
".quad 0x0000000400081204,0x0008110400000000,0x0000000000000004,0x0000000200080a04\n"
".quad 0x001c1903001c0160,0x00000000000c1704,0x0011f00000180003,0x00000000000c1704\n"
".quad 0x0021f00000100002,0x00000000000c1704,0x0021f00000080001,0x00000000000c1704\n"
".quad 0x0021f00000000000,0x00081c0400ff1b03,0x000000e000000050,0x0000000000000048\n"
".quad 0x0000000400000002,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000a0000017a02,0x000fd00000000f00\n"
".quad 0x0000000000087919,0x000e280000002500,0x0000000000037919,0x000e240000002100\n"
".quad 0x0000000008087a24,0x001fca00078e0203,0x00005e0008007a0c,0x000fd80003f06270\n"
".quad 0x000000000000094d,0x000fea0003800000,0x0000000800097802,0x000fca0000000f00\n"
".quad 0x00005a0008047625,0x0c0fe400078e0209,0x0000580008027625,0x000fd000078e0209\n"
".quad 0x0000000004047381,0x000ea800001eeb00,0x0000000002027381,0x000ea200001eeb00\n"
".quad 0x00005c0008087625,0x000fe200078e0209,0x0000000004067229,0x004e120000000002\n"
".quad 0x0000000608007386,0x001fe2000010eb00,0x000000000000794d,0x000fea0003800000\n"
".quad 0xfffffff000007947,0x000fc0000383ffff,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300000001,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000040,0x00000000000000bc,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x000000030000000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000000fc,0x00000000000000d4,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x0000000200000013,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000001d0,0x0000000000000078,0x0000000300000002\n"
".quad 0x0000000000000008,0x0000000000000018,0x000000010000009e,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000248,0x0000000000000070,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x7000000000000029,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000002b8,0x0000000000000030,0x0000000000000003\n"
".quad 0x0000000000000004,0x0000000000000000,0x7000000000000049,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000002e8,0x0000000000000060,0x0000000900000003\n"
".quad 0x0000000000000004,0x0000000000000000,0x00000009000000ab,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000348,0x0000000000000010,0x0000000400000003\n"
".quad 0x0000000000000008,0x0000000000000010,0x000000010000007f,0x0000000000000002\n"
".quad 0x0000000000000000,0x0000000000000358,0x000000000000017c,0x0000000900000000\n"
".quad 0x0000000000000004,0x0000000000000000,0x0000000100000032,0x0000000000000006\n"
".quad 0x0000000000000000,0x0000000000000500,0x0000000000000100,0x0c00000400000003\n"
".quad 0x0000000000000080,0x0000000000000000,0x0000000500000006,0x0000000000000880\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000000a8,0x00000000000000a8\n"
".quad 0x0000000000000008,0x0000000500000001,0x0000000000000358,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000000000027c,0x000000000000027c,0x0000000000000008\n"
".quad 0x0000000600000001,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000008,0x0000004801010001\n"
".quad 0x0000000000000200,0x00000040000001f9,0x0000004b00060004,0x0000000000000000\n"
".quad 0x0000000000002011,0x0000000000000000,0x00000000000003cd,0x0000000000000000\n"
".quad 0x762e1cf200010a13,0x36206e6f69737265,0x677261742e0a342e,0x35375f6d73207465\n"
".quad 0x7365726464612e0a,0x3620657a69735f73,0x6973691cfd002f34,0x746e652e20656c62\n"
".quad 0x6576365a5f207972,0x5f53645064644163,0x61702e0a28695f53,0x3436752e206d6172\n"
".quad 0x5f3f001c5f11001e,0x26311f1100262c30,0x332f002632171200,0x0a3308f305002632\n"
".quad 0x6765722e0a7b0a29,0x2520646572702e20,0x8500123b3e323c70,0x363c722520323362\n"
".quad 0x2520343666960011,0x12000023343c6466,0x3e31313c6472c200,0x0075646c0a0a0a3b\n"
".quad 0x2c314f0018752e22,0x3b5d2d0500ed5b20,0x1f07002f321f002f,0x002f331f00002f31\n"
".quad 0x00c801002f321907,0x3b5d337308005d0f,0x33b80029766f6d0a,0x646961746325202c\n"
".quad 0x202c346c0017782e,0x2c35440016746e25,0x2e64617100152520,0x31230018732e6f6c\n"
".quad 0x72b0004f0100332c,0x2e707465730a3b35,0x7025095400206567,0x3b3213f400252c31\n"
".quad 0x726220317025400a,0x3b325f3042422061,0x742e617476630a0a,0x6c61626f6c672e6f\n"
".quad 0x3164c3004f0100f0,0x69772e6c756d0a3b,0x4d356423006c6564,0x6464610a3b388200\n"
".quad 0x352c3626002f732e,0x110400543b352f00,0x2600393219001f37,0x01483511001a2c38\n"
".quad 0xd600020003003403,0x001c5d1f00270001,0x5d3622001c321200,0x2c33230016030052\n"
".quad 0x008b0f003e00001c,0x8b33190071391105,0x00001b2c30313600,0x5b11007074180145\n"
".quad 0x334100575d110022,0x0a3ab0013f0a0a3b,0x0a0a7d0a3b746572,0x000000000000000a\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[376];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const __fatBinC_Wrapper_t __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 1, fatbinData, 0 };
#ifdef __cplusplus
}
#endif
