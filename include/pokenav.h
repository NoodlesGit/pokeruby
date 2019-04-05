#ifndef GUARD_POKENAV_H
#define GUARD_POKENAV_H

#include "main.h"
#include "region_map.h"
#include "mon_markings.h"

struct TrainersEyeStruct {
    /*0x0*/ u16 opponentId;
    /*0x2*/ u16 regionMapSectionId;
    /*0x4*/ u8 rematchTableIdx;
    /*0x5*/ u8 rematchNo;
};

struct UnkPokenavStruct_Sub1 {
    /*0x00*/ void (*unk0)(void);
    /*0x04*/ MainCallback callback;
    /*0x08*/ struct Pokeblock *pokeblock;
    /*0x0C*/ struct Pokemon *pokemon;
    /*0x10*/ u8 stringBuffer[0x40];
    /*0x50*/ u8 unk50;
    /*0x51*/ u8 unk51;
    /*0x52*/ u8 unk52;
    /*0x53*/ u8 unk53;
    /*0x54*/ u8 unk54;
    /*0x55*/ u8 unk55;
    /*0x56*/ u8 unk56;
    /*0x57*/ u8 unk57[5];
    /*0x5c*/ u8 unk5c[5];
    /*0x61*/ u8 unk61[5];
    /*0x66*/ s16 unk66[5];
};

struct UnkPokenavStruct_Sub3 {
    /*0x00*/s16 unk0;
};

struct UnkUsePokeblockSub {
    /*0x0*/ u8 unk0;
    /*0x1*/ u8 unk1;
    /*0x2*/ u8 partyIdx:5;
    /*0x2*/ u16 unk2:9;
    /*0x3*/ u8 unk4:1;
};

struct UnkPokenav11 {
    u16 unk0;
    u16 unk2;
};

struct UnkPokenavStruct {
    /*0x0000*/ u16 unk0[6][0x40];
    /*0x0300*/ u8 filler0300[0x6];
    /*0x0306*/ u16 unk306;
    /*0x0306*/ int unk308;
    /*0x030C*/ s16 unk030C;
    /*0x030E*/ s8 unk30E;
    /*0x030F*/ u8 unk30F;
    /*0x0310*/ u8 filler0310[0x1];
    /*0x0311*/ u8 unk311;
    /*0x0312*/ u16 unk312;
    /*0x0314*/ u16 unk314[6];
    /*0x0320*/ struct Sprite *unk320[6][4];
    /*0x0380*/ struct SpriteSheet unk380;
    /*0x0388*/ u8 unk388[0x1400];
    /*0x1788*/ u8 unk1788[0xC00];
    /*0x2388*/ u8 unk2388[0x1800];
    /*0x3B88*/ struct Sprite *unk3B88[2];
    /*0x3B90*/ struct Sprite *unk3B90[2];
    /*0x3B98*/ u8 unk3B98[0x600];
    /*0x4198*/ u8 unk4198[0x600];
    /*0x4798*/ u8 unk4798[0x600];
    /*0x4D98*/ u8 unk4D98[0x600];
    /*0x5398*/ u8 unk5398[0xC00];
    /*0x5F98*/ u8 unk5F98[0x200];
    /*0x6198*/ u8 unk6198[0x200];
    /*0x6398*/ u8 unk6398[0x200];
    /*0x6598*/ u8 unk6598[0x200];
    /*0x6798*/ u8 unk6798[0x200];
    /*0x6998*/ u8 unk6998[0x200];
    /*0x6B98*/ u8 unk6B98[0x200];
    /*0x6D98*/ struct Sprite *unk6D98;
    /*0x6D9C*/ struct Sprite *unk6D9C;
    /*0x6DA0*/ u16 unk6DA0;
    /*0x6DA2*/ u16 unk6DA2;
    /*0x6DA4*/ u16 taskId6DA4;
    /*0x6DA6*/ u8 filler6DA6[0x6];
    /*0x6DAC*/ u8 unk6DAC;
    /*0x6DAD*/ s8 unk6DAD;
    /*0x6DAE*/ s8 unk6DAE;
    /*0x6DAF*/ u8 filler6DAF[0x3];
    /*0x6DB2*/ u8 unk6DB2[0x66];
    /*0x6E18*/ struct RegionMap regionMap;
    /*0x7698*/ u16 unk7698;
    /*0x769A*/ u16 unk769A;
    /*0x769C*/ u8 unk769C;
    /*0x769D*/ u8 unk769D;
    /*0x769E*/ u8 unk769E;
    /*0x769F*/ u8 filler769F[0xB];
    /*0x76AA*/ u8 unk76AA;
    /*0x76AC*/ struct Sprite *unk76AC;
    /*0x76B0*/ struct PokemonMarkMenu unk76B0;
    /*0x8764*/ u16 unk8764;
    /*0x8766*/ s16 unk8766;
    /*0x8768*/ struct Sprite *unk8768;
    /*0x876C*/ s16 unk876C;
    /*0x876E*/ s16 unk876E;
    /*0x8770*/ s16 unk8770;
    /*0x8772*/ s16 unk8772;
    /*0x8774*/ s16 unk8774;
    /*0x8776*/ s16 unk8776;
    /*0x8778*/ u16 unk8778;
    /*0x877A*/ s16 unk877A;
    /*0x877C*/ s16 unk877C;
    /*0x877E*/ u16 unk877E;
    /*0x8780*/ u16 unk8780;
    /*0x8782*/ u16 unk8782;
    /*0x8784*/ u16 unk8784;
    /*0x8786*/ u16 unk8786;
    /*0x8788*/ u8 unk8788[0x40];
    /*0x87C8*/ u8 unk87C8;
    /*0x87C9*/ u8 unk87C9;
    /*0x87CA*/ u8 unk87CA;
    /*0x87CB*/ u8 unk87CB;
    /*0x87CC*/ struct Sprite *unk87CC;
    /*0x87D0*/ struct Sprite *unk87D0[2];
    /*0x87D8*/ u8 unk87D8;
    /*0x87DA*/ s16 unk87DA;
    /*0x87DC*/ s16 unk87DC;
    /*0x87DE*/ u8 unk87DE;
    /*0x87E0*/ bool8 (*unk87E0)(void);
    /*0x87E4*/ struct Sprite *unk87E4[7];
    /*0x8800*/ struct Sprite *unk8800[10];
    /*0x8828*/ u8 unk8828;
    /*0x8829*/ u8 unk8829[3][64];
    /*0x88E9*/ u8 unk88E9[3][24];
    /*0x8931*/ u8 unk8931[3];
    /*0x8934*/ u8 unk8934[3];
    /*0x8937*/ u8 unk8937[5];
    /*0x893C*/ struct UnkUsePokeblockSub unk893c[0x1AA];
    /*0x8FE4*/ u16 unk8FE4;
    /*0x8FE6*/ u8 unk8FE6;
    /*0x8FE7*/ u8 unk8FE7;
    /*0x8FE8*/ u8 unk8FE8;
    /*0x8fe9*/ s8 unk8fe9;
    /*0x8fea*/ s8 unk8FEA;
    /*0x8feb*/ s8 unk8FEB;
    /*0x8fec*/ s8 unk8FEC;
    /*0x8fee*/ u16 unk8FEE;
    /*0x8ff0*/ u8 unk8ff0[4][5];
    /*0x9004*/ struct UnkPokenav11 unk9004[3][5];
    /*0x9040*/ struct UnkPokenav11 unk9040[5];
    /*0x9054*/ struct UnkPokenav11 unk9054[9][5];
    /*0x9108*/ u8 unk9108[0x14];
    /*0x911C*/ struct UnkPokenav11 unk911C[5];
    /*0x9130*/ u8 filler9130[0x212];
    /*0x9342*/ u16 unk9342;
    /*0x9344*/ u8 unk9344;
    /*0x9345*/ u8 filler9345[3];
    /*0x9348*/ struct Sprite *unk9348;
    /*0x934C*/ u16 unk934C[0x280];
    /*0x984C*/ u8 unk984C[0xC][0x100];
    /*0xA44C*/ u8 unkA44C[0xC][0x200];
    /*0xBC4C*/ u8 unkBC4C[0x42];
    /*0xBC8E*/ u8 unkBC8E;
    /*0xBC8F*/ u8 unkBC8F;
    /*0xBC90*/ u8 unkBC90;
    /*0xBC91*/ u8 unkBC91;
    /*0xBC92*/ u8 unkBC92;
    /*0xBC93*/ u8 unkBC93;
    /*0xBC94*/ u8 fillerBC94[0x6];
    /*0xBC9A*/ u8 unkBC9A;
    /*0xBC9B*/ u8 unkBC9B;
    /*0xBC9C*/ u8 unkBC9C[22][200];
    /*0xCDCC*/ const u8 *unkCDCC[16][2];
    /*0xCE4C*/ u16 unkCE4C;
    /*0xCE4E*/ u16 unkCE4E;
    /*0xCE50*/ u16 unkCE50;
    /*0xCE52*/ u16 palettesCE52[30];
    /*0xCE8E*/ u16 palettesCE8E[0x21];
    /*0xCED0*/ struct Sprite *unkCED0;
    /*0xCED4*/ struct Sprite *unkCED4[5];
    /*0xCEE8*/ struct TrainersEyeStruct trainersEye[69];
    /*0xD110*/ const u8 *trainerEyeDescriptionLines[4];
    /*0xD120*/ u8 fillerD114[0x18];
    /*0xD138*/ u8 unkD138[0x20];
    /*0xD158*/ u16 unkD158;
    /*0xD15A*/ u16 unkD15A;
    /*0xD15C*/ u16 unkD15C;
    /*0xD15E*/ u8 fillerD15E[2];
    /*0xD160*/ u16 unkD160;
    /*0xD162*/ u8 unkD162;
    /*0xD164*/ struct UnkPokenavStruct_Sub1 unkD164;
    /*0xD1D4*/ u8 fillerD1D6[0x2];
    /*0xD1D6*/ u16 unkD1D6[3];
    /*0xD1DC*/ u16 unkD1DC;
    /*0xD1DE*/ u16 unkD1DE;
    /*0xD1E0*/ u8 *unkD1E0;
    /*0xD1E4*/ u8 unkD1E4[3][0x2000];
    /*0x131E4*/ u8 unk131E4[0x1000];
};

extern struct UnkPokenavStruct *const gPokenavStructPtr;

bool8 sub_80F170C(void);
bool8 sub_80F1778(void);
void sub_80F1934(void);
void sub_80F2C80(u8);
void sub_80F2688(void);
bool8 sub_80F26BC(void);
bool8 sub_80F2CBC(u8);
void sub_80F2E18(u8);
void sub_80F33A8(void);
void sub_80F3C94(void);
void sub_80F3D00(void);
void sub_80F4BD0(void);
void sub_80F556C(struct UnkPokenav11*);
void sub_80F55AC(u8 *a0, struct UnkPokenav11 a1[]);
void sub_80F567C(u8 *, struct UnkPokenav11 *);
void sub_80F5B38(void);
bool8 sub_80F5B50(void);
void sub_80F5CDC(u8);
void sub_80EBA5C(void);
void sub_80F5060(bool8);
void move_anim_execute(void);
bool8 gpu_sync_bg_show(void);
void sub_80F5550(struct UnkPokenav11*, struct UnkPokenav11*);
bool8 sub_80F555C(void);
void sub_80F7224(u8);
void sub_80F5BDC(void);
void sub_80F2F7C(u8 arg0);

#endif // GUARD_POKENAV_H
