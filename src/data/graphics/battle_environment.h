#include "config/battle.h"

#if B_NEW_BACKGROUND == TRUE

const u32 gBattleEnvironmentAnimTiles_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Sand[] = INCBIN_U32("graphics/battle_environment/sand_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Sand[] = INCBIN_U32("graphics/battle_environment/sand_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Water[] = INCBIN_U32("graphics/battle_environment/water_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Water[] = INCBIN_U32("graphics/battle_environment/water_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Rock[] = INCBIN_U32("graphics/battle_environment/rock_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Rock[] = INCBIN_U32("graphics/battle_environment/rock_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Cave[] = INCBIN_U32("graphics/battle_environment/cave_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Cave[] = INCBIN_U32("graphics/battle_environment/cave_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Building[] = INCBIN_U32("graphics/battle_environment/building_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Building[] = INCBIN_U32("graphics/battle_environment/building_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building_2/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky_2/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky_2/anim_map.bin.smolTM");

#else // B_NEW_BACKGROUND == FALSE

const u32 gBattleEnvironmentAnimTiles_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Sand[] = INCBIN_U32("graphics/battle_environment/sand/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Sand[] = INCBIN_U32("graphics/battle_environment/sand/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Water[] = INCBIN_U32("graphics/battle_environment/water/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Water[] = INCBIN_U32("graphics/battle_environment/water/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Rock[] = INCBIN_U32("graphics/battle_environment/rock/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Rock[] = INCBIN_U32("graphics/battle_environment/rock/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Cave[] = INCBIN_U32("graphics/battle_environment/cave/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Cave[] = INCBIN_U32("graphics/battle_environment/cave/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Building[] = INCBIN_U32("graphics/battle_environment/building/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Building[] = INCBIN_U32("graphics/battle_environment/building/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building/anim_map.bin.smolTM");

const u32 gBattleEnvironmentAnimTiles_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky/anim_tiles.4bpp.smol");
const u32 gBattleEnvironmentAnimTilemap_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky/anim_map.bin.smolTM");

#endif // B_NEW_BACKGROUND == TRUE
