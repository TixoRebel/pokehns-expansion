#include "config/battle.h"

#if B_NEW_BACKGROUND == TRUE

const u32 gBattleEnvironmentTiles_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_TallGrass_Morning[] = INCBIN_U16("graphics/battle_environment/tall_grass_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_TallGrass_Day[]     = INCBIN_U16("graphics/battle_environment/tall_grass_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_TallGrass_Evening[] = INCBIN_U16("graphics/battle_environment/tall_grass_2/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_TallGrass_Night[]   = INCBIN_U16("graphics/battle_environment/tall_grass_2/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_LongGrass_Morning[] = INCBIN_U16("graphics/battle_environment/long_grass_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_LongGrass_Day[]     = INCBIN_U16("graphics/battle_environment/long_grass_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_LongGrass_Evening[] = INCBIN_U16("graphics/battle_environment/long_grass_2/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_LongGrass_Night[]   = INCBIN_U16("graphics/battle_environment/long_grass_2/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Sand[] = INCBIN_U32("graphics/battle_environment/sand_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Sand_Morning[] = INCBIN_U16("graphics/battle_environment/sand_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Sand_Day[]     = INCBIN_U16("graphics/battle_environment/sand_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Sand_Evening[] = INCBIN_U16("graphics/battle_environment/sand_2/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Sand_Night[]   = INCBIN_U16("graphics/battle_environment/sand_2/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_Sand[] = INCBIN_U32("graphics/battle_environment/sand_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Underwater_Morning[] = INCBIN_U16("graphics/battle_environment/underwater_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Underwater_Day[]     = INCBIN_U16("graphics/battle_environment/underwater_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Underwater_Evening[] = INCBIN_U16("graphics/battle_environment/underwater_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Underwater_Night[]   = INCBIN_U16("graphics/battle_environment/underwater_2/palette.gbapal");

const u32 gBattleEnvironmentTilemap_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Water[] = INCBIN_U32("graphics/battle_environment/water_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Water_Morning[] = INCBIN_U16("graphics/battle_environment/water_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Water_Day[]     = INCBIN_U16("graphics/battle_environment/water_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Water_Evening[] = INCBIN_U16("graphics/battle_environment/water_2/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Water_Night[]   = INCBIN_U16("graphics/battle_environment/water_2/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_Water[] = INCBIN_U32("graphics/battle_environment/water_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_PondWater_Morning[] = INCBIN_U16("graphics/battle_environment/pond_water_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_PondWater_Day[]     = INCBIN_U16("graphics/battle_environment/pond_water_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_PondWater_Evening[] = INCBIN_U16("graphics/battle_environment/pond_water_2/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_PondWater_Night[]   = INCBIN_U16("graphics/battle_environment/pond_water_2/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Rock[] = INCBIN_U32("graphics/battle_environment/rock_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Rock_Morning[] = INCBIN_U16("graphics/battle_environment/rock_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rock_Day[]     = INCBIN_U16("graphics/battle_environment/rock_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rock_Evening[] = INCBIN_U16("graphics/battle_environment/rock_2/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Rock_Night[]   = INCBIN_U16("graphics/battle_environment/rock_2/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_Rock[] = INCBIN_U32("graphics/battle_environment/rock_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Cave[] = INCBIN_U32("graphics/battle_environment/cave_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Cave_Morning[] = INCBIN_U16("graphics/battle_environment/cave_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Cave_Day[]     = INCBIN_U16("graphics/battle_environment/cave_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Cave_Evening[] = INCBIN_U16("graphics/battle_environment/cave_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Cave_Night[]   = INCBIN_U16("graphics/battle_environment/cave_2/palette.gbapal");

const u32 gBattleEnvironmentTilemap_Cave[] = INCBIN_U32("graphics/battle_environment/cave_2/map.bin.smolTM");

const u16 gBattleEnvironmentPalette_Plain_Morning[] = INCBIN_U16("graphics/battle_environment/plain_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Plain_Day[]     = INCBIN_U16("graphics/battle_environment/plain_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Plain_Evening[] = INCBIN_U16("graphics/battle_environment/plain_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Plain_Night[]   = INCBIN_U16("graphics/battle_environment/plain_2/palette.gbapal");

const u32 gBattleEnvironmentTiles_Building[] = INCBIN_U32("graphics/battle_environment/building_2/tiles.4bpp.smol");
 // also used for link battles
const u16 gBattleEnvironmentPalette_Frontier_Morning[] = INCBIN_U16("graphics/battle_environment/stadium_2/battle_frontier.gbapal");
const u16 gBattleEnvironmentPalette_Frontier_Day[]     = INCBIN_U16("graphics/battle_environment/stadium_2/battle_frontier.gbapal");
const u16 gBattleEnvironmentPalette_Frontier_Evening[] = INCBIN_U16("graphics/battle_environment/stadium_2/battle_frontier.gbapal");
const u16 gBattleEnvironmentPalette_Frontier_Night[]   = INCBIN_U16("graphics/battle_environment/stadium_2/battle_frontier.gbapal");
const u32 gBattleEnvironmentTilemap_Building[] = INCBIN_U32("graphics/battle_environment/building_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building_2/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Blue_Building_Morning[] = INCBIN_U16("graphics/battle_environment/blue_building/palette.gbapal");
const u16 gBattleEnvironmentPalette_Blue_Building_Day[]     = INCBIN_U16("graphics/battle_environment/blue_building/palette.gbapal");
const u16 gBattleEnvironmentPalette_Blue_Building_Evening[] = INCBIN_U16("graphics/battle_environment/blue_building/palette.gbapal");
const u16 gBattleEnvironmentPalette_Blue_Building_Night[]   = INCBIN_U16("graphics/battle_environment/blue_building/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Stadium[] = INCBIN_U32("graphics/battle_environment/stadium_2/tiles.4bpp.smol");
const u32 gBattleEnvironmentTilemap_Stadium[] = INCBIN_U32("graphics/battle_environment/stadium_2/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky_2/tiles.4bpp.smol");
const u32 gBattleEnvironmentTilemap_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky_2/map.bin.smolTM");

const u16 gBattleEnvironmentPalette_Building_Morning[] = INCBIN_U16("graphics/battle_environment/building_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Building_Day[]     = INCBIN_U16("graphics/battle_environment/building_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Building_Evening[] = INCBIN_U16("graphics/battle_environment/building_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Building_Night[]   = INCBIN_U16("graphics/battle_environment/building_2/palette.gbapal");


const u16 gBattleEnvironmentPalette_Kyogre_Morning[] = INCBIN_U16("graphics/battle_environment/water_2/kyogre.gbapal");
const u16 gBattleEnvironmentPalette_Kyogre_Day[]     = INCBIN_U16("graphics/battle_environment/water_2/kyogre.gbapal");
const u16 gBattleEnvironmentPalette_Kyogre_Evening[] = INCBIN_U16("graphics/battle_environment/water_2/kyogre.gbapal");
const u16 gBattleEnvironmentPalette_Kyogre_Night[]   = INCBIN_U16("graphics/battle_environment/water_2/kyogre.gbapal");


const u16 gBattleEnvironmentPalette_Groudon_Morning[] = INCBIN_U16("graphics/battle_environment/cave_2/groudon.gbapal");
const u16 gBattleEnvironmentPalette_Groudon_Day[]     = INCBIN_U16("graphics/battle_environment/cave_2/groudon.gbapal");
const u16 gBattleEnvironmentPalette_Groudon_Evening[] = INCBIN_U16("graphics/battle_environment/cave_2/groudon.gbapal");
const u16 gBattleEnvironmentPalette_Groudon_Night[]   = INCBIN_U16("graphics/battle_environment/cave_2/groudon.gbapal");


const u16 gBattleEnvironmentPalette_BuildingGym_Morning[] = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");
const u16 gBattleEnvironmentPalette_BuildingGym_Day[]     = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");
const u16 gBattleEnvironmentPalette_BuildingGym_Evening[] = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");
const u16 gBattleEnvironmentPalette_BuildingGym_Night[]   = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");


const u16 gBattleEnvironmentPalette_BuildingLeader_Morning[] = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");
const u16 gBattleEnvironmentPalette_BuildingLeader_Day[]     = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");
const u16 gBattleEnvironmentPalette_BuildingLeader_Evening[] = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");
const u16 gBattleEnvironmentPalette_BuildingLeader_Night[]   = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");


const u16 gBattleEnvironmentPalette_StadiumAqua_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");
const u16 gBattleEnvironmentPalette_StadiumAqua_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");
const u16 gBattleEnvironmentPalette_StadiumAqua_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");
const u16 gBattleEnvironmentPalette_StadiumAqua_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");


const u16 gBattleEnvironmentPalette_StadiumMagma_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");
const u16 gBattleEnvironmentPalette_StadiumMagma_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");
const u16 gBattleEnvironmentPalette_StadiumMagma_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");
const u16 gBattleEnvironmentPalette_StadiumMagma_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");


const u16 gBattleEnvironmentPalette_StadiumSidney_Morning[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette3.gbapal");
const u16 gBattleEnvironmentPalette_StadiumSidney_Day[]     = INCBIN_U16("graphics/battle_environment/stadium_2/palette3.gbapal");
const u16 gBattleEnvironmentPalette_StadiumSidney_Evening[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette3.gbapal");
const u16 gBattleEnvironmentPalette_StadiumSidney_Night[]   = INCBIN_U16("graphics/battle_environment/stadium_2/palette3.gbapal");


const u16 gBattleEnvironmentPalette_StadiumPhoebe_Morning[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette4.gbapal");
const u16 gBattleEnvironmentPalette_StadiumPhoebe_Day[]     = INCBIN_U16("graphics/battle_environment/stadium_2/palette4.gbapal");
const u16 gBattleEnvironmentPalette_StadiumPhoebe_Evening[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette4.gbapal");
const u16 gBattleEnvironmentPalette_StadiumPhoebe_Night[]   = INCBIN_U16("graphics/battle_environment/stadium_2/palette4.gbapal");


const u16 gBattleEnvironmentPalette_StadiumGlacia_Morning[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette5.gbapal");
const u16 gBattleEnvironmentPalette_StadiumGlacia_Day[]     = INCBIN_U16("graphics/battle_environment/stadium_2/palette5.gbapal");
const u16 gBattleEnvironmentPalette_StadiumGlacia_Evening[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette5.gbapal");
const u16 gBattleEnvironmentPalette_StadiumGlacia_Night[]   = INCBIN_U16("graphics/battle_environment/stadium_2/palette5.gbapal");


const u16 gBattleEnvironmentPalette_StadiumDrake_Morning[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette6.gbapal");
const u16 gBattleEnvironmentPalette_StadiumDrake_Day[]     = INCBIN_U16("graphics/battle_environment/stadium_2/palette6.gbapal");
const u16 gBattleEnvironmentPalette_StadiumDrake_Evening[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette6.gbapal");
const u16 gBattleEnvironmentPalette_StadiumDrake_Night[]   = INCBIN_U16("graphics/battle_environment/stadium_2/palette6.gbapal");


const u16 gBattleEnvironmentPalette_StadiumWallace_Morning[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette7.gbapal");
const u16 gBattleEnvironmentPalette_StadiumWallace_Day[]     = INCBIN_U16("graphics/battle_environment/stadium_2/palette7.gbapal");
const u16 gBattleEnvironmentPalette_StadiumWallace_Evening[] = INCBIN_U16("graphics/battle_environment/stadium_2/palette7.gbapal");
const u16 gBattleEnvironmentPalette_StadiumWallace_Night[]   = INCBIN_U16("graphics/battle_environment/stadium_2/palette7.gbapal");


const u16 gBattleEnvironmentPalette_Rayquaza_Morning[] = INCBIN_U16("graphics/battle_environment/sky_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rayquaza_Day[]     = INCBIN_U16("graphics/battle_environment/sky_2/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rayquaza_Evening[] = INCBIN_U16("graphics/battle_environment/sky_2/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Rayquaza_Night[]   = INCBIN_U16("graphics/battle_environment/sky_2/palette_night.gbapal");

#else // B_NEW_BACKGROUND == FALSE

const u32 gBattleEnvironmentTiles_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_TallGrass_Morning[] = INCBIN_U16("graphics/battle_environment/tall_grass/palette.gbapal");
const u16 gBattleEnvironmentPalette_TallGrass_Day[]     = INCBIN_U16("graphics/battle_environment/tall_grass/palette.gbapal");
const u16 gBattleEnvironmentPalette_TallGrass_Evening[] = INCBIN_U16("graphics/battle_environment/tall_grass/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_TallGrass_Night[]   = INCBIN_U16("graphics/battle_environment/tall_grass/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_LongGrass_Morning[] = INCBIN_U16("graphics/battle_environment/long_grass/palette.gbapal");
const u16 gBattleEnvironmentPalette_LongGrass_Day[]     = INCBIN_U16("graphics/battle_environment/long_grass/palette.gbapal");
const u16 gBattleEnvironmentPalette_LongGrass_Evening[] = INCBIN_U16("graphics/battle_environment/long_grass/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_LongGrass_Night[]   = INCBIN_U16("graphics/battle_environment/long_grass/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Sand[] = INCBIN_U32("graphics/battle_environment/sand/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Sand_Morning[] = INCBIN_U16("graphics/battle_environment/sand/palette.gbapal");
const u16 gBattleEnvironmentPalette_Sand_Day[]     = INCBIN_U16("graphics/battle_environment/sand/palette.gbapal");
const u16 gBattleEnvironmentPalette_Sand_Evening[] = INCBIN_U16("graphics/battle_environment/sand/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Sand_Night[]   = INCBIN_U16("graphics/battle_environment/sand/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_Sand[] = INCBIN_U32("graphics/battle_environment/sand/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Underwater_Morning[] = INCBIN_U16("graphics/battle_environment/underwater/palette.gbapal");
const u16 gBattleEnvironmentPalette_Underwater_Day[]     = INCBIN_U16("graphics/battle_environment/underwater/palette.gbapal");
const u16 gBattleEnvironmentPalette_Underwater_Evening[] = INCBIN_U16("graphics/battle_environment/underwater/palette.gbapal");
const u16 gBattleEnvironmentPalette_Underwater_Night[]   = INCBIN_U16("graphics/battle_environment/underwater/palette.gbapal");

const u32 gBattleEnvironmentTilemap_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Water[] = INCBIN_U32("graphics/battle_environment/water/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Water_Morning[] = INCBIN_U16("graphics/battle_environment/water/palette.gbapal");
const u16 gBattleEnvironmentPalette_Water_Day[]     = INCBIN_U16("graphics/battle_environment/water/palette.gbapal");
const u16 gBattleEnvironmentPalette_Water_Evening[] = INCBIN_U16("graphics/battle_environment/water/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Water_Night[]   = INCBIN_U16("graphics/battle_environment/water/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_Water[] = INCBIN_U32("graphics/battle_environment/water/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_PondWater_Morning[] = INCBIN_U16("graphics/battle_environment/pond_water/palette.gbapal");
const u16 gBattleEnvironmentPalette_PondWater_Day[]     = INCBIN_U16("graphics/battle_environment/pond_water/palette.gbapal");
const u16 gBattleEnvironmentPalette_PondWater_Evening[] = INCBIN_U16("graphics/battle_environment/pond_water/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_PondWater_Night[]   = INCBIN_U16("graphics/battle_environment/pond_water/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Rock[] = INCBIN_U32("graphics/battle_environment/rock/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Rock_Morning[] = INCBIN_U16("graphics/battle_environment/rock/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rock_Day[]     = INCBIN_U16("graphics/battle_environment/rock/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rock_Evening[] = INCBIN_U16("graphics/battle_environment/rock/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Rock_Night[]   = INCBIN_U16("graphics/battle_environment/rock/palette_night.gbapal");

const u32 gBattleEnvironmentTilemap_Rock[] = INCBIN_U32("graphics/battle_environment/rock/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Cave[] = INCBIN_U32("graphics/battle_environment/cave/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Cave_Morning[] = INCBIN_U16("graphics/battle_environment/cave/palette.gbapal");
const u16 gBattleEnvironmentPalette_Cave_Day[]     = INCBIN_U16("graphics/battle_environment/cave/palette.gbapal");
const u16 gBattleEnvironmentPalette_Cave_Evening[] = INCBIN_U16("graphics/battle_environment/cave/palette.gbapal");
const u16 gBattleEnvironmentPalette_Cave_Night[]   = INCBIN_U16("graphics/battle_environment/cave/palette.gbapal");

const u32 gBattleEnvironmentTilemap_Cave[] = INCBIN_U32("graphics/battle_environment/cave/map.bin.smolTM");

const u16 gBattleEnvironmentPalette_Plain_Morning[] = INCBIN_U16("graphics/battle_environment/plain/palette.gbapal");
const u16 gBattleEnvironmentPalette_Plain_Day[]     = INCBIN_U16("graphics/battle_environment/plain/palette.gbapal");
const u16 gBattleEnvironmentPalette_Plain_Evening[] = INCBIN_U16("graphics/battle_environment/plain/palette.gbapal");
const u16 gBattleEnvironmentPalette_Plain_Night[]   = INCBIN_U16("graphics/battle_environment/plain/palette.gbapal");


const u32 gBattleEnvironmentTiles_Building[] = INCBIN_U32("graphics/battle_environment/building/tiles.4bpp.smol");
 // also used for link battles
const u16 gBattleEnvironmentPalette_Frontier_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/battle_frontier.gbapal");
const u16 gBattleEnvironmentPalette_Frontier_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/battle_frontier.gbapal");
const u16 gBattleEnvironmentPalette_Frontier_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/battle_frontier.gbapal");
const u16 gBattleEnvironmentPalette_Frontier_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/battle_frontier.gbapal");
const u32 gBattleEnvironmentTilemap_Building[] = INCBIN_U32("graphics/battle_environment/building/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building/tiles.4bpp.smol");
const u32 gBattleEnvironmentTilemap_Blue_Building[] = INCBIN_U32("graphics/battle_environment/blue_building/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Stadium[] = INCBIN_U32("graphics/battle_environment/stadium/tiles.4bpp.smol");
const u32 gBattleEnvironmentTilemap_Stadium[] = INCBIN_U32("graphics/battle_environment/stadium/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky/tiles.4bpp.smol");
const u32 gBattleEnvironmentTilemap_Rayquaza[] = INCBIN_U32("graphics/battle_environment/sky/map.bin.smolTM");

const u16 gBattleEnvironmentPalette_Building_Morning[] = INCBIN_U16("graphics/battle_environment/building/palette.gbapal");
const u16 gBattleEnvironmentPalette_Building_Day[]     = INCBIN_U16("graphics/battle_environment/building/palette.gbapal");
const u16 gBattleEnvironmentPalette_Building_Evening[] = INCBIN_U16("graphics/battle_environment/building/palette.gbapal");
const u16 gBattleEnvironmentPalette_Building_Night[]   = INCBIN_U16("graphics/battle_environment/building/palette.gbapal");


const u16 gBattleEnvironmentPalette_Kyogre_Morning[] = INCBIN_U16("graphics/battle_environment/water/kyogre.gbapal");
const u16 gBattleEnvironmentPalette_Kyogre_Day[]     = INCBIN_U16("graphics/battle_environment/water/kyogre.gbapal");
const u16 gBattleEnvironmentPalette_Kyogre_Evening[] = INCBIN_U16("graphics/battle_environment/water/kyogre.gbapal");
const u16 gBattleEnvironmentPalette_Kyogre_Night[]   = INCBIN_U16("graphics/battle_environment/water/kyogre.gbapal");


const u16 gBattleEnvironmentPalette_Groudon_Morning[] = INCBIN_U16("graphics/battle_environment/cave/groudon.gbapal");
const u16 gBattleEnvironmentPalette_Groudon_Day[]     = INCBIN_U16("graphics/battle_environment/cave/groudon.gbapal");
const u16 gBattleEnvironmentPalette_Groudon_Evening[] = INCBIN_U16("graphics/battle_environment/cave/groudon.gbapal");
const u16 gBattleEnvironmentPalette_Groudon_Night[]   = INCBIN_U16("graphics/battle_environment/cave/groudon.gbapal");


const u16 gBattleEnvironmentPalette_BuildingGym_Morning[] = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");
const u16 gBattleEnvironmentPalette_BuildingGym_Day[]     = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");
const u16 gBattleEnvironmentPalette_BuildingGym_Evening[] = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");
const u16 gBattleEnvironmentPalette_BuildingGym_Night[]   = INCBIN_U16("graphics/battle_environment/building/palette2.gbapal");


const u16 gBattleEnvironmentPalette_BuildingLeader_Morning[] = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");
const u16 gBattleEnvironmentPalette_BuildingLeader_Day[]     = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");
const u16 gBattleEnvironmentPalette_BuildingLeader_Evening[] = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");
const u16 gBattleEnvironmentPalette_BuildingLeader_Night[]   = INCBIN_U16("graphics/battle_environment/building/palette3.gbapal");


const u16 gBattleEnvironmentPalette_StadiumAqua_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");
const u16 gBattleEnvironmentPalette_StadiumAqua_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");
const u16 gBattleEnvironmentPalette_StadiumAqua_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");
const u16 gBattleEnvironmentPalette_StadiumAqua_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette1.gbapal");


const u16 gBattleEnvironmentPalette_StadiumMagma_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");
const u16 gBattleEnvironmentPalette_StadiumMagma_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");
const u16 gBattleEnvironmentPalette_StadiumMagma_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");
const u16 gBattleEnvironmentPalette_StadiumMagma_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette2.gbapal");


const u16 gBattleEnvironmentPalette_StadiumSidney_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette3.gbapal");
const u16 gBattleEnvironmentPalette_StadiumSidney_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette3.gbapal");
const u16 gBattleEnvironmentPalette_StadiumSidney_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette3.gbapal");
const u16 gBattleEnvironmentPalette_StadiumSidney_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette3.gbapal");


const u16 gBattleEnvironmentPalette_StadiumPhoebe_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette4.gbapal");
const u16 gBattleEnvironmentPalette_StadiumPhoebe_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette4.gbapal");
const u16 gBattleEnvironmentPalette_StadiumPhoebe_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette4.gbapal");
const u16 gBattleEnvironmentPalette_StadiumPhoebe_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette4.gbapal");


const u16 gBattleEnvironmentPalette_StadiumGlacia_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette5.gbapal");
const u16 gBattleEnvironmentPalette_StadiumGlacia_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette5.gbapal");
const u16 gBattleEnvironmentPalette_StadiumGlacia_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette5.gbapal");
const u16 gBattleEnvironmentPalette_StadiumGlacia_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette5.gbapal");


const u16 gBattleEnvironmentPalette_StadiumDrake_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette6.gbapal");
const u16 gBattleEnvironmentPalette_StadiumDrake_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette6.gbapal");
const u16 gBattleEnvironmentPalette_StadiumDrake_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette6.gbapal");
const u16 gBattleEnvironmentPalette_StadiumDrake_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette6.gbapal");


const u16 gBattleEnvironmentPalette_StadiumWallace_Morning[] = INCBIN_U16("graphics/battle_environment/stadium/palette7.gbapal");
const u16 gBattleEnvironmentPalette_StadiumWallace_Day[]     = INCBIN_U16("graphics/battle_environment/stadium/palette7.gbapal");
const u16 gBattleEnvironmentPalette_StadiumWallace_Evening[] = INCBIN_U16("graphics/battle_environment/stadium/palette7.gbapal");
const u16 gBattleEnvironmentPalette_StadiumWallace_Night[]   = INCBIN_U16("graphics/battle_environment/stadium/palette7.gbapal");


const u16 gBattleEnvironmentPalette_Rayquaza_Morning[] = INCBIN_U16("graphics/battle_environment/sky/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rayquaza_Day[]     = INCBIN_U16("graphics/battle_environment/sky/palette.gbapal");
const u16 gBattleEnvironmentPalette_Rayquaza_Evening[] = INCBIN_U16("graphics/battle_environment/sky/palette_night.gbapal");
const u16 gBattleEnvironmentPalette_Rayquaza_Night[]   = INCBIN_U16("graphics/battle_environment/sky/palette_night.gbapal");

#endif // B_NEW_BACKGROUND == TRUE

static const u8 *const gTimeOfDayStringsTable[TIMES_OF_DAY_COUNT] = {
    COMPOUND_STRING("Morning"),
    COMPOUND_STRING("Day"),
    COMPOUND_STRING("Evening"),
    COMPOUND_STRING("Night"),
};

/* Palette arrays indexed by time of day. These point to the per-time-of-day
 * palette symbols defined above (e.g. gBattleEnvironmentPalette_TallGrass_Morning).
 */
const void * const gBattleEnvironmentPalette_TallGrass[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_TallGrass_Morning,
    gBattleEnvironmentPalette_TallGrass_Day,
    gBattleEnvironmentPalette_TallGrass_Evening,
    gBattleEnvironmentPalette_TallGrass_Night,
};

const void * const gBattleEnvironmentPalette_LongGrass[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_LongGrass_Morning,
    gBattleEnvironmentPalette_LongGrass_Day,
    gBattleEnvironmentPalette_LongGrass_Evening,
    gBattleEnvironmentPalette_LongGrass_Night,
};

const void * const gBattleEnvironmentPalette_Sand[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Sand_Morning,
    gBattleEnvironmentPalette_Sand_Day,
    gBattleEnvironmentPalette_Sand_Evening,
    gBattleEnvironmentPalette_Sand_Night,
};

const void * const gBattleEnvironmentPalette_Underwater[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Underwater_Morning,
    gBattleEnvironmentPalette_Underwater_Day,
    gBattleEnvironmentPalette_Underwater_Evening,
    gBattleEnvironmentPalette_Underwater_Night,
};

const void * const gBattleEnvironmentPalette_Water[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Water_Morning,
    gBattleEnvironmentPalette_Water_Day,
    gBattleEnvironmentPalette_Water_Evening,
    gBattleEnvironmentPalette_Water_Night,
};

const void * const gBattleEnvironmentPalette_PondWater[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_PondWater_Morning,
    gBattleEnvironmentPalette_PondWater_Day,
    gBattleEnvironmentPalette_PondWater_Evening,
    gBattleEnvironmentPalette_PondWater_Night,
};

const void * const gBattleEnvironmentPalette_Rock[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Rock_Morning,
    gBattleEnvironmentPalette_Rock_Day,
    gBattleEnvironmentPalette_Rock_Evening,
    gBattleEnvironmentPalette_Rock_Night,
};

const void * const gBattleEnvironmentPalette_Cave[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Cave_Morning,
    gBattleEnvironmentPalette_Cave_Day,
    gBattleEnvironmentPalette_Cave_Evening,
    gBattleEnvironmentPalette_Cave_Night,
};

const void * const gBattleEnvironmentPalette_Plain[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Plain_Morning,
    gBattleEnvironmentPalette_Plain_Day,
    gBattleEnvironmentPalette_Plain_Evening,
    gBattleEnvironmentPalette_Plain_Night,
};

const void * const gBattleEnvironmentPalette_Frontier[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Frontier_Morning,
    gBattleEnvironmentPalette_Frontier_Day,
    gBattleEnvironmentPalette_Frontier_Evening,
    gBattleEnvironmentPalette_Frontier_Night,
};

const void * const gBattleEnvironmentPalette_Blue_Building[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Blue_Building_Morning,
    gBattleEnvironmentPalette_Blue_Building_Day,
    gBattleEnvironmentPalette_Blue_Building_Evening,
    gBattleEnvironmentPalette_Blue_Building_Night,
};

const void * const gBattleEnvironmentPalette_Building[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Building_Morning,
    gBattleEnvironmentPalette_Building_Day,
    gBattleEnvironmentPalette_Building_Evening,
    gBattleEnvironmentPalette_Building_Night,
};

const void * const gBattleEnvironmentPalette_BuildingGym[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_BuildingGym_Morning,
    gBattleEnvironmentPalette_BuildingGym_Day,
    gBattleEnvironmentPalette_BuildingGym_Evening,
    gBattleEnvironmentPalette_BuildingGym_Night,
};

const void * const gBattleEnvironmentPalette_BuildingLeader[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_BuildingLeader_Morning,
    gBattleEnvironmentPalette_BuildingLeader_Day,
    gBattleEnvironmentPalette_BuildingLeader_Evening,
    gBattleEnvironmentPalette_BuildingLeader_Night,
};

const void * const gBattleEnvironmentPalette_StadiumMagma[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_StadiumMagma_Morning,
    gBattleEnvironmentPalette_StadiumMagma_Day,
    gBattleEnvironmentPalette_StadiumMagma_Evening,
    gBattleEnvironmentPalette_StadiumMagma_Night,
};

const void * const gBattleEnvironmentPalette_StadiumAqua[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_StadiumAqua_Morning,
    gBattleEnvironmentPalette_StadiumAqua_Day,
    gBattleEnvironmentPalette_StadiumAqua_Evening,
    gBattleEnvironmentPalette_StadiumAqua_Night,
};

const void * const gBattleEnvironmentPalette_StadiumSidney[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_StadiumSidney_Morning,
    gBattleEnvironmentPalette_StadiumSidney_Day,
    gBattleEnvironmentPalette_StadiumSidney_Evening,
    gBattleEnvironmentPalette_StadiumSidney_Night,
};

const void * const gBattleEnvironmentPalette_StadiumPhoebe[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_StadiumPhoebe_Morning,
    gBattleEnvironmentPalette_StadiumPhoebe_Day,
    gBattleEnvironmentPalette_StadiumPhoebe_Evening,
    gBattleEnvironmentPalette_StadiumPhoebe_Night,
};

const void * const gBattleEnvironmentPalette_StadiumGlacia[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_StadiumGlacia_Morning,
    gBattleEnvironmentPalette_StadiumGlacia_Day,
    gBattleEnvironmentPalette_StadiumGlacia_Evening,
    gBattleEnvironmentPalette_StadiumGlacia_Night,
};

const void * const gBattleEnvironmentPalette_StadiumDrake[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_StadiumDrake_Morning,
    gBattleEnvironmentPalette_StadiumDrake_Day,
    gBattleEnvironmentPalette_StadiumDrake_Evening,
    gBattleEnvironmentPalette_StadiumDrake_Night,
};

const void * const gBattleEnvironmentPalette_StadiumWallace[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_StadiumWallace_Morning,
    gBattleEnvironmentPalette_StadiumWallace_Day,
    gBattleEnvironmentPalette_StadiumWallace_Evening,
    gBattleEnvironmentPalette_StadiumWallace_Night,
};

const void * const gBattleEnvironmentPalette_Groudon[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Groudon_Morning,
    gBattleEnvironmentPalette_Groudon_Day,
    gBattleEnvironmentPalette_Groudon_Evening,
    gBattleEnvironmentPalette_Groudon_Night,
};

const void * const gBattleEnvironmentPalette_Kyogre[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Kyogre_Morning,
    gBattleEnvironmentPalette_Kyogre_Day,
    gBattleEnvironmentPalette_Kyogre_Evening,
    gBattleEnvironmentPalette_Kyogre_Night,
};

const void * const gBattleEnvironmentPalette_Rayquaza[TIMES_OF_DAY_COUNT] = {
    gBattleEnvironmentPalette_Rayquaza_Morning,
    gBattleEnvironmentPalette_Rayquaza_Day,
    gBattleEnvironmentPalette_Rayquaza_Evening,
    gBattleEnvironmentPalette_Rayquaza_Night,
};

#define ENVIRONMENT_BACKGROUND(background)                      \
{                                                               \
    .tileset = gBattleEnvironmentTiles_##background,            \
    .tilemap = gBattleEnvironmentTilemap_##background,          \
    .entryTileset = gBattleEnvironmentAnimTiles_##background,   \
    .entryTilemap = gBattleEnvironmentAnimTilemap_##background, \
    .palette = gBattleEnvironmentPalette_##background,          \
}

const struct BattleEnvironment gBattleEnvironmentInfo[BATTLE_ENVIRONMENT_COUNT] =
{
    [BATTLE_ENVIRONMENT_GRASS] =
    {
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_ENERGY_BALL,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_SEED_BOMB,
    #else
        .naturePower = MOVE_STUN_SPORE,
    #endif
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_4 ? MOVE_EFFECT_SLEEP : MOVE_EFFECT_POISON,
        .camouflageType = TYPE_GRASS,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_LONG_GRASS] =
    {
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_ENERGY_BALL,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_SEED_BOMB,
    #else
        .naturePower = MOVE_RAZOR_LEAF,
    #endif
        .secretPowerEffect = MOVE_EFFECT_SLEEP,
        .camouflageType = TYPE_GRASS,
        .background = ENVIRONMENT_BACKGROUND(LongGrass),
    },

    [BATTLE_ENVIRONMENT_SAND] =
    {
        .naturePower = B_NATURE_POWER_MOVES >= GEN_6 ? MOVE_EARTH_POWER : MOVE_EARTHQUAKE,
        .secretPowerEffect = MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_GROUND,
        .background = ENVIRONMENT_BACKGROUND(Sand),
    },

    [BATTLE_ENVIRONMENT_UNDERWATER] =
    {
        .naturePower = MOVE_HYDRO_PUMP,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_6 ? MOVE_EFFECT_ATK_MINUS_1 : MOVE_EFFECT_DEF_MINUS_1,
        .camouflageType = TYPE_WATER,
        .background = ENVIRONMENT_BACKGROUND(Underwater),
    },

    [BATTLE_ENVIRONMENT_WATER] =
    {
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_HYDRO_PUMP : MOVE_SURF,
        .secretPowerEffect = MOVE_EFFECT_ATK_MINUS_1,
        .camouflageType = TYPE_WATER,
        .background = ENVIRONMENT_BACKGROUND(Water),
    },

    [BATTLE_ENVIRONMENT_POND] =
    {
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_HYDRO_PUMP : MOVE_BUBBLE_BEAM,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_4 ? MOVE_EFFECT_ATK_MINUS_1 : MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_WATER,
        .background = ENVIRONMENT_BACKGROUND(PondWater),
    },

    [BATTLE_ENVIRONMENT_MOUNTAIN] =
    {
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_EARTH_POWER,
    #elif B_NATURE_POWER_MOVES >= GEN_5
        .naturePower = MOVE_EARTHQUAKE,
    #else
        .naturePower = MOVE_ROCK_SLIDE,
    #endif
    #if B_SECRET_POWER_EFFECT >= GEN_5
        .secretPowerEffect = MOVE_EFFECT_ACC_MINUS_1,
    #elif B_SECRET_POWER_EFFECT >= GEN_4
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
    #else
        .secretPowerEffect = MOVE_EFFECT_CONFUSION,
    #endif
        .camouflageType = B_CAMOUFLAGE_TYPES >= GEN_5 ? TYPE_GROUND : TYPE_ROCK,
        .background = ENVIRONMENT_BACKGROUND(Rock),
    },

    [BATTLE_ENVIRONMENT_CAVE] =
    {
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_EARTH_POWER,
    #elif B_NATURE_POWER_MOVES >= GEN_5
        .naturePower = MOVE_EARTHQUAKE,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_ROCK_SLIDE,
    #else
        .naturePower = MOVE_SHADOW_BALL,
    #endif
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_ROCK,
        .background = ENVIRONMENT_BACKGROUND(Cave),
    },

    [BATTLE_ENVIRONMENT_BUILDING] =
    {
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_TRI_ATTACK : MOVE_SWIFT,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_NORMAL,
        .background = ENVIRONMENT_BACKGROUND(Building),
    },

    [BATTLE_ENVIRONMENT_BLUE_BUILDING] =
    {
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_TRI_ATTACK : MOVE_SWIFT,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_NORMAL,
        .background = ENVIRONMENT_BACKGROUND(Blue_Building),
    },

    [BATTLE_ENVIRONMENT_PLAIN] =
    {
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_TRI_ATTACK,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_EARTHQUAKE,
    #else
        .naturePower = MOVE_SWIFT,
    #endif
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = B_CAMOUFLAGE_TYPES >= GEN_4 ? TYPE_GROUND : TYPE_NORMAL,
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Building,
            .tilemap = gBattleEnvironmentTilemap_Building,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_Plain,
        },
    },

    [BATTLE_ENVIRONMENT_FRONTIER] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Building,
            .tilemap = gBattleEnvironmentTilemap_Building,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_Frontier,
        },
    },

    [BATTLE_ENVIRONMENT_GYM] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Building,
            .tilemap = gBattleEnvironmentTilemap_Building,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_BuildingGym,
        },
    },

    [BATTLE_ENVIRONMENT_LEADER] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Building,
            .tilemap = gBattleEnvironmentTilemap_Building,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_BuildingLeader,
        },
    },

    [BATTLE_ENVIRONMENT_MAGMA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumMagma,
        },
    },

    [BATTLE_ENVIRONMENT_AQUA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumAqua,
        },
    },

    [BATTLE_ENVIRONMENT_SIDNEY] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumSidney,
        },
    },

    [BATTLE_ENVIRONMENT_PHOEBE] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumPhoebe,
        },
    },

    [BATTLE_ENVIRONMENT_GLACIA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumGlacia,
        },
    },

    [BATTLE_ENVIRONMENT_DRAKE] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumDrake,
        },
    },

    [BATTLE_ENVIRONMENT_CHAMPION] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumWallace,
        },
    },

    [BATTLE_ENVIRONMENT_GROUDON] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Cave,
            .tilemap = gBattleEnvironmentTilemap_Cave,
            .entryTileset = gBattleEnvironmentAnimTiles_Cave,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Cave,
            .palette = gBattleEnvironmentPalette_Groudon,
        },
    },

    [BATTLE_ENVIRONMENT_KYOGRE] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Water,
            .tilemap = gBattleEnvironmentTilemap_Water,
            .entryTileset = gBattleEnvironmentAnimTiles_Underwater,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Underwater,
            .palette = gBattleEnvironmentPalette_Kyogre,
        },
    },

    [BATTLE_ENVIRONMENT_RAYQUAZA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Rayquaza,
            .tilemap = gBattleEnvironmentTilemap_Rayquaza,
            .entryTileset = gBattleEnvironmentAnimTiles_Rayquaza,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Rayquaza,
            .palette = gBattleEnvironmentPalette_Rayquaza,
        },
    },

    [BATTLE_ENVIRONMENT_SOARING] =
    {
        .naturePower = MOVE_AIR_SLASH,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_FLYING,
    },

    [BATTLE_ENVIRONMENT_SKY_PILLAR] =
    {
        .naturePower = MOVE_AIR_SLASH,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_FLYING,
    },

    [BATTLE_ENVIRONMENT_BURIAL_GROUND] =
    {
        .naturePower = MOVE_SHADOW_BALL,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_GHOST,
    },

    [BATTLE_ENVIRONMENT_PUDDLE] =
    {
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_5 ? MOVE_EFFECT_SPD_MINUS_1 : MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_GROUND,
    },

    [BATTLE_ENVIRONMENT_MARSH] =
    {
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_GROUND,
    },

    [BATTLE_ENVIRONMENT_SWAMP] =
    {
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_GROUND,
    },

    [BATTLE_ENVIRONMENT_SNOW] =
    {
    #if B_NATURE_POWER_MOVES >= GEN_7
        .naturePower = MOVE_ICE_BEAM,
    #elif B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_FROST_BREATH,
    #else
        .naturePower = MOVE_BLIZZARD,
    #endif
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
    },

    [BATTLE_ENVIRONMENT_ICE] =
    {
        .naturePower = MOVE_ICE_BEAM,
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
    },

    [BATTLE_ENVIRONMENT_VOLCANO] =
    {
        .naturePower = MOVE_LAVA_PLUME,
        .secretPowerEffect = MOVE_EFFECT_BURN,
        .camouflageType = TYPE_FIRE,
    },

    [BATTLE_ENVIRONMENT_DISTORTION_WORLD] =
    {
        .naturePower = MOVE_TRI_ATTACK,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_NORMAL,
    },

    [BATTLE_ENVIRONMENT_SPACE] =
    {
        .naturePower = MOVE_DRACO_METEOR,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_DRAGON,
    },

    [BATTLE_ENVIRONMENT_ULTRA_SPACE] =
    {
        .naturePower = MOVE_PSYSHOCK,
        .secretPowerEffect = MOVE_EFFECT_DEF_MINUS_1,
        .camouflageType = TYPE_PSYCHIC,
    },
};

static const struct {
    u8 mapScene;
    u8 battleEnvironment;
} sMapBattleSceneMapping[] = {
    {MAP_BATTLE_SCENE_GYM,      BATTLE_ENVIRONMENT_GYM},
    {MAP_BATTLE_SCENE_MAGMA,    BATTLE_ENVIRONMENT_MAGMA},
    {MAP_BATTLE_SCENE_AQUA,     BATTLE_ENVIRONMENT_AQUA},
    {MAP_BATTLE_SCENE_WILL,     BATTLE_ENVIRONMENT_SIDNEY},
    {MAP_BATTLE_SCENE_KOGA,     BATTLE_ENVIRONMENT_PHOEBE},
    {MAP_BATTLE_SCENE_BRUNO,    BATTLE_ENVIRONMENT_GLACIA},
    {MAP_BATTLE_SCENE_KAREN,    BATTLE_ENVIRONMENT_DRAKE},
    {MAP_BATTLE_SCENE_FRONTIER, BATTLE_ENVIRONMENT_FRONTIER}
};
