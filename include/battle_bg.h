#ifndef GUARD_BATTLE_BG_H
#define GUARD_BATTLE_BG_H

#include "constants/rtc.h"

struct BattleBackground
{
    const void *tileset;
    const void *tilemap;
    const void *entryTileset;
    const void *entryTilemap;
    const void * const *palette;
};

extern const void * const gBattleEnvironmentPalette_TallGrass[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_LongGrass[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Sand[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Underwater[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Water[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_PondWater[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Rock[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Cave[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Plain[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Building[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Frontier[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Stadium[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Rayquaza[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Kyogre[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_Groudon[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_BuildingGym[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_BuildingLeader[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_StadiumAqua[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_StadiumMagma[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_StadiumSidney[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_StadiumPhoebe[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_StadiumGlacia[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_StadiumDrake[TIMES_OF_DAY_COUNT];
extern const void * const gBattleEnvironmentPalette_StadiumWallace[TIMES_OF_DAY_COUNT];

void BattleInitBgsAndWindows(void);
void InitBattleBgsVideo(void);
void LoadBattleMenuWindowGfx(void);
void DrawMainBattleBackground(void);
void LoadBattleTextboxAndBackground(void);
void InitLinkBattleVsScreen(u8 taskId);
void DrawBattleEntryBackground(void);
bool8 LoadChosenBattleElement(u8 caseId);
void DrawTerrainTypeBattleBackground(void);

#endif // GUARD_BATTLE_BG_H
