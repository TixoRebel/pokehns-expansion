@ #include "config.h"
#include "config/general.h"
#include "config/battle.h"
#include "config/item.h"
#include "constants/global.h"
#include "constants/apprentice.h"
#include "constants/battle.h"
#include "constants/battle_arena.h"
#include "constants/battle_dome.h"
#include "constants/battle_factory.h"
#include "constants/battle_frontier.h"
#include "constants/battle_palace.h"
#include "constants/battle_pike.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_setup.h"
#include "constants/battle_tent.h"
#include "constants/battle_tower.h"
#include "constants/berry.h"
#include "constants/cable_club.h"
#include "constants/coins.h"
#include "constants/contest.h"
#include "constants/daycare.h"
#include "constants/decorations.h"
#include "constants/difficulty.h"
#include "constants/easy_chat.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_poison.h"
#include "constants/field_specials.h"
#include "constants/field_tasks.h"
#include "constants/field_weather.h"
#include "constants/flags.h"
#include "constants/follower_npc.h"
#include "constants/frontier_util.h"
#include "constants/game_stat.h"
#include "constants/item.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/layouts.h"
#include "constants/lilycove_lady.h"
#include "constants/map_scripts.h"
#include "constants/maps.h"
#include "constants/mauville_old_man.h"
#include "constants/metatile_labels.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/pokedex.h"
#include "constants/pokemon.h"
#include "constants/rtc.h"
#include "constants/sliding_puzzles.h"			@ HnS - for the Ruins of Alph tile puzzle ?
@ #include "constants/pokemon_size_record.h"	@ HnS/Modern - for pokemon size sidequests
#include "constants/roulette.h"
#include "constants/script_menu.h"
#include "constants/secret_bases.h"
#include "constants/siirtc.h"
#include "constants/songs.h"
#include "constants/sound.h"
#include "constants/species.h"
#include "constants/trade.h"
#include "constants/trainer_hill.h"
#include "constants/trainers.h"
#include "constants/tv.h"
#include "constants/union_room.h"
#include "constants/vars.h"
#include "constants/weather.h"
	.include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "constants/constants.inc"

	.section script_data, "aw", %progbits

	.set ALLOCATE_SCRIPT_CMD_TABLE, 1
	.include "data/script_cmd_table.inc"

gSpecialVars::
	.4byte gSpecialVar_0x8000
	.4byte gSpecialVar_0x8001
	.4byte gSpecialVar_0x8002
	.4byte gSpecialVar_0x8003
	.4byte gSpecialVar_0x8004
	.4byte gSpecialVar_0x8005
	.4byte gSpecialVar_0x8006
	.4byte gSpecialVar_0x8007
	.4byte gSpecialVar_0x8008
	.4byte gSpecialVar_0x8009
	.4byte gSpecialVar_0x800A
	.4byte gSpecialVar_0x800B
	.4byte gSpecialVar_Facing
	.4byte gSpecialVar_Result
	.4byte gSpecialVar_ItemId
	.4byte gSpecialVar_LastTalked
	.4byte gSpecialVar_ContestRank
	.4byte gSpecialVar_ContestCategory
	.4byte gSpecialVar_MonBoxId
	.4byte gSpecialVar_MonBoxPos
	.4byte gSpecialVar_Unused_0x8014
	.4byte gTrainerBattleParameter + 2 // gTrainerBattleParameter.params.opponentA
	@ .4byte gTrainerBattleOpponent_A  @ HnS PORT - expansion has changed the approach to this

	.include "data/specials.inc"

gStdScripts::
	.4byte Std_ObtainItem              @ STD_OBTAIN_ITEM
	.4byte Std_FindItem                @ STD_FIND_ITEM
	.4byte Std_MsgboxNPC               @ MSGBOX_NPC
	.4byte Std_MsgboxSign              @ MSGBOX_SIGN
	.4byte Std_MsgboxDefault           @ MSGBOX_DEFAULT
	.4byte Std_MsgboxYesNo             @ MSGBOX_YESNO
	.4byte Std_MsgboxAutoclose         @ MSGBOX_AUTOCLOSE
	.4byte Std_ObtainDecoration        @ STD_OBTAIN_DECORATION
	.4byte Std_RegisteredInMatchCall   @ STD_REGISTER_MATCH_CALL
	.4byte Std_MsgboxGetPoints         @ MSGBOX_GETPOINTS
	.4byte Std_MsgboxPokenav           @ MSGBOX_POKENAV
gStdScripts_End::

#if IS_HNS	
	.include "data/maps/ArtisanCave_B1F_hns/scripts.inc"
	.include "data/maps/ArtisanCave_1F_hns/scripts.inc"
	.include "data/maps/BattleColosseum_2P_hns/scripts.inc"
	.include "data/maps/TradeCenter_hns/scripts.inc"
	.include "data/maps/RecordCorner_hns/scripts.inc"
	.include "data/maps/BattleColosseum_4P_hns/scripts.inc"
	.include "data/maps/BattlePyramidSquare01_hns/scripts.inc"
	.include "data/maps/UnionRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideWest_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerLobby_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerElevator_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom_hns/scripts.inc"
	.include "data/maps/SouthernIsland_Exterior_hns/scripts.inc"
	.include "data/maps/SouthernIsland_Interior_hns/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideEast_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiCorridor_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiBattleRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeLobby_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeCorridor_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomePreBattleRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeBattleRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceLobby_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceCorridor_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceBattleRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidLobby_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidFloor_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidTop_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaLobby_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaCorridor_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaBattleRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryLobby_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryPreBattleRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryBattleRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeLobby_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeCorridor_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeThreePathRoom_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomNormal_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomFinal_hns/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomWildMons_hns/scripts.inc"
	.include "data/maps/BattleFrontier_RankingHall_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge1_hns/scripts.inc"
	.include "data/maps/BattleFrontier_ExchangeServiceCorner_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge2_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge3_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge4_hns/scripts.inc"
	.include "data/maps/BattleFrontier_ScottsHouse_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge5_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge6_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge7_hns/scripts.inc"
	.include "data/maps/BattleFrontier_ReceptionGate_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge8_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge9_hns/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_1F_hns/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_2F_hns/scripts.inc"
	.include "data/maps/BattleFrontier_Mart_hns/scripts.inc"
	.include "data/maps/FarawayIsland_Entrance_hns/scripts.inc"
	.include "data/maps/FarawayIsland_Interior_hns/scripts.inc"
	.include "data/maps/BirthIsland_Exterior_hns/scripts.inc"
	.include "data/maps/BirthIsland_Harbor_hns/scripts.inc"
	.include "data/maps/NavelRock_Exterior_hns/scripts.inc"
	.include "data/maps/NavelRock_Harbor_hns/scripts.inc"
	.include "data/maps/NavelRock_Entrance_hns/scripts.inc"
	.include "data/maps/NavelRock_B1F_hns/scripts.inc"
	.include "data/maps/NavelRock_Fork_hns/scripts.inc"
	.include "data/maps/NavelRock_Up1_hns/scripts.inc"
	.include "data/maps/NavelRock_Up2_hns/scripts.inc"
	.include "data/maps/NavelRock_Up3_hns/scripts.inc"
	.include "data/maps/NavelRock_Up4_hns/scripts.inc"
	.include "data/maps/NavelRock_Top_hns/scripts.inc"
	.include "data/maps/NavelRock_Down01_hns/scripts.inc"
	.include "data/maps/NavelRock_Down02_hns/scripts.inc"
	.include "data/maps/NavelRock_Down03_hns/scripts.inc"
	.include "data/maps/NavelRock_Down04_hns/scripts.inc"
	.include "data/maps/NavelRock_Down05_hns/scripts.inc"
	.include "data/maps/NavelRock_Down06_hns/scripts.inc"
	.include "data/maps/NavelRock_Down07_hns/scripts.inc"
	.include "data/maps/NavelRock_Down08_hns/scripts.inc"
	.include "data/maps/NavelRock_Down09_hns/scripts.inc"
	.include "data/maps/NavelRock_Down10_hns/scripts.inc"
	.include "data/maps/NavelRock_Down11_hns/scripts.inc"
	.include "data/maps/NavelRock_Bottom_hns/scripts.inc"
	.include "data/maps/Route29_hns/scripts.inc"
	.include "data/maps/WorldHub_hns/scripts.inc"
	.include "data/maps/CherrygroveCity_hns/scripts.inc"
	.include "data/maps/NewBarkTown_hns/scripts.inc"
	.include "data/maps/Route1_hns/scripts.inc"
	.include "data/maps/Route2_hns/scripts.inc"
	.include "data/maps/Route3_hns/scripts.inc"
	.include "data/maps/Route4_hns/scripts.inc"
	.include "data/maps/Route5_hns/scripts.inc"
	.include "data/maps/Route6_hns/scripts.inc"
	.include "data/maps/Route7_hns/scripts.inc"
	.include "data/maps/Route8_hns/scripts.inc"
	.include "data/maps/Route9_hns/scripts.inc"
	.include "data/maps/Route10_hns/scripts.inc"
	.include "data/maps/Route11_hns/scripts.inc"
	.include "data/maps/Route12_hns/scripts.inc"
	.include "data/maps/Route13_hns/scripts.inc"
	.include "data/maps/Route14_hns/scripts.inc"
	.include "data/maps/Route15_hns/scripts.inc"
	.include "data/maps/Route16_hns/scripts.inc"
	.include "data/maps/Route17_hns/scripts.inc"
	.include "data/maps/Route18_hns/scripts.inc"
	.include "data/maps/Route19_hns/scripts.inc"
	.include "data/maps/Route20_hns/scripts.inc"
	.include "data/maps/Route21_hns/scripts.inc"
	.include "data/maps/Route22_hns/scripts.inc"
	.include "data/maps/Route23_hns/scripts.inc"
	.include "data/maps/Route24_hns/scripts.inc"
	.include "data/maps/Route25_hns/scripts.inc"
	.include "data/maps/Route26_hns/scripts.inc"
	.include "data/maps/Route27_hns/scripts.inc"
	.include "data/maps/Route28_hns/scripts.inc"
	.include "data/maps/Route30_hns/scripts.inc"
	.include "data/maps/Route31_hns/scripts.inc"
	.include "data/maps/Route32_hns/scripts.inc"
	.include "data/maps/Route33_hns/scripts.inc"
	.include "data/maps/Route34_hns/scripts.inc"
	.include "data/maps/Route35_hns/scripts.inc"
	.include "data/maps/Route36_hns/scripts.inc"
	.include "data/maps/Route37_hns/scripts.inc"
	.include "data/maps/Route38_hns/scripts.inc"
	.include "data/maps/Route39_hns/scripts.inc"
	.include "data/maps/Route40_hns/scripts.inc"
	.include "data/maps/Route41_hns/scripts.inc"
	.include "data/maps/Route42_hns/scripts.inc"
	.include "data/maps/Route43_hns/scripts.inc"
	.include "data/maps/Route44_hns/scripts.inc"
	.include "data/maps/Route45_hns/scripts.inc"
	.include "data/maps/Route46_hns/scripts.inc"
	.include "data/maps/VioletCity_hns/scripts.inc"
	.include "data/maps/AzaleaTown_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_hns/scripts.inc"
	.include "data/maps/EcruteakCity_hns/scripts.inc"
	.include "data/maps/OlivineCity_hns/scripts.inc"
	.include "data/maps/CianwoodCity_hns/scripts.inc"
	.include "data/maps/Mahoganytown_hns/scripts.inc"
	.include "data/maps/BlackthornCity_hns/scripts.inc"
	.include "data/maps/PalletTown_hns/scripts.inc"
	.include "data/maps/ViridianCity_hns/scripts.inc"
	.include "data/maps/PewterCity_hns/scripts.inc"
	.include "data/maps/CeruleanCity_hns/scripts.inc"
	.include "data/maps/VermilionCity_hns/scripts.inc"
	.include "data/maps/LavenderTown_hns/scripts.inc"
	.include "data/maps/CeladonCity_hns/scripts.inc"
	.include "data/maps/SaffronCity_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_hns/scripts.inc"
	.include "data/maps/CinnabarIsland_hns/scripts.inc"
	.include "data/maps/DarkCave_SouthSide_hns/scripts.inc"
	.include "data/maps/DarkCave_NorthSide_hns/scripts.inc"
	.include "data/maps/CeruleanCave_1F_hns/scripts.inc"
	.include "data/maps/CeruleanCave_B1F_hns/scripts.inc"
	.include "data/maps/CeruleanCave_B2F_hns/scripts.inc"
	.include "data/maps/DiglettsCave_EntranceNorth_hns/scripts.inc"
	.include "data/maps/DiglettsCave_EntranceSouth_hns/scripts.inc"
	.include "data/maps/DiglettsCave_Tunnel_hns/scripts.inc"
	.include "data/maps/IcePath_1F_hns/scripts.inc"
	.include "data/maps/IcePath_B1F_hns/scripts.inc"
	.include "data/maps/IcePath_B2F_hns/scripts.inc"
	.include "data/maps/IcePath_B3F_hns/scripts.inc"
	.include "data/maps/IcePath_B4F_hns/scripts.inc"
	.include "data/maps/IlexForest_hns/scripts.inc"
	.include "data/maps/MtMoon_Cave_hns/scripts.inc"
	.include "data/maps/UnionCave_1F_hns/scripts.inc"
	.include "data/maps/UnionCave_B1F_hns/scripts.inc"
	.include "data/maps/UnionCave_B2F_hns/scripts.inc"
	.include "data/maps/SlowpokeWell_B1F_hns/scripts.inc"
	.include "data/maps/SlowpokeWell_B2F_hns/scripts.inc"
	.include "data/maps/VictoryRoadKanto_B2F_hns/scripts.inc"
	.include "data/maps/VictoryRoadKanto_B1F_hns/scripts.inc"
	.include "data/maps/VictoryRoadKanto_1F_hns/scripts.inc"
	.include "data/maps/WhirlIslands_1F_hns/scripts.inc"
	.include "data/maps/WhirlIslands_B1F_hns/scripts.inc"
	.include "data/maps/WhirlIslands_B2F_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_B1F_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_PuzzleAndRewardChambers_hns/scripts.inc"
	.include "data/maps/RockTunnel_B1F_hns/scripts.inc"
	.include "data/maps/RockTunnel_1F_hns/scripts.inc"
	.include "data/maps/MtMortar_1F_South_hns/scripts.inc"
	.include "data/maps/MtMortar_1F_North_hns/scripts.inc"
	.include "data/maps/MtMortar_2F_hns/scripts.inc"
	.include "data/maps/MtMortar_B1F_hns/scripts.inc"
	.include "data/maps/MtSilver_1F_ItemRoom_hns/scripts.inc"
	.include "data/maps/MtSilver_1F_WaterfallRoom_hns/scripts.inc"
	.include "data/maps/MtSilver_Outside_hns/scripts.inc"
	.include "data/maps/Route10_PowerPlantEntrance_hns/scripts.inc"
	.include "data/maps/Route10_PowerPlantBackRoom_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_Outside_hns/scripts.inc"
	.include "data/maps/TohjoFalls_Cavern_hns/scripts.inc"
	.include "data/maps/DragonsDen_Entrance_hns/scripts.inc"
	.include "data/maps/DragonsDen_Cavern_hns/scripts.inc"
	.include "data/maps/DragonsDen_Shrine_hns/scripts.inc"
	.include "data/maps/ViridianForest_hns/scripts.inc"
	.include "data/maps/LakeOfRage_hns/scripts.inc"
	.include "data/maps/IndigoPlateau_hns/scripts.inc"
	.include "data/maps/BurnedTower_1F_hns/scripts.inc"
	.include "data/maps/BurnedTower_B1F_hns/scripts.inc"
	.include "data/maps/TinTower_1F_hns/scripts.inc"
	.include "data/maps/TinTower_2F_hns/scripts.inc"
	.include "data/maps/TinTower_3F_hns/scripts.inc"
	.include "data/maps/TinTower_4F_hns/scripts.inc"
	.include "data/maps/TinTower_5F_hns/scripts.inc"
	.include "data/maps/TinTower_6F_hns/scripts.inc"
	.include "data/maps/TinTower_7F_hns/scripts.inc"
	.include "data/maps/TinTower_8F_hns/scripts.inc"
	.include "data/maps/TinTower_9F_hns/scripts.inc"
	.include "data/maps/TinTower_RoofDay_hns/scripts.inc"
	.include "data/maps/SproutTower_1F_hns/scripts.inc"
	.include "data/maps/SproutTower_2F_hns/scripts.inc"
	.include "data/maps/SproutTower_3F_hns/scripts.inc"
	.include "data/maps/IndigoPlateau_PokemonCenter_hns/scripts.inc"
	.include "data/maps/CherrygroveCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/VioletCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/AzaleaTown_PokemonCenter_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/EcruteakCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/OlivineCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/CianwoodPokecenter_hns/scripts.inc"
	.include "data/maps/MahoganyTown_PokemonCenter_hns/scripts.inc"
	.include "data/maps/BlackthornCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/MtSilver_PokemonCenter_hns/scripts.inc"
	.include "data/maps/ViridianCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/PewterCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/CeruleanCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/VermilionCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/LavenderTown_PokemonCenter_hns/scripts.inc"
	.include "data/maps/CeladonCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/SaffronCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_PokemonCenter_hns/scripts.inc"
	.include "data/maps/CinnabarIsland_PokemonCenter_hns/scripts.inc"
	.include "data/maps/SeafoamIslands_1F_hns/scripts.inc"
	.include "data/maps/SeafoamIslands_Gym_hns/scripts.inc"
	.include "data/maps/SeafoamIslands_B1F_hns/scripts.inc"
	.include "data/maps/Route47_hns/scripts.inc"
	.include "data/maps/Route48_hns/scripts.inc"
	.include "data/maps/SafariZoneGate_hns/scripts.inc"
	.include "data/maps/CliffEdgeGate_hns/scripts.inc"
	.include "data/maps/Gate_Route29_Route46_hns/scripts.inc"
	.include "data/maps/Gate_Route31_VioletCity_hns/scripts.inc"
	.include "data/maps/Gate_RuinsOfAlph_Route32_hns/scripts.inc"
	.include "data/maps/Gate_RuinsOfAlph_Route36_hns/scripts.inc"
	.include "data/maps/Gate_AzaleaTown_IlexForest_hns/scripts.inc"
	.include "data/maps/Gate_IlexForest_Route34_hns/scripts.inc"
	.include "data/maps/Gate_GoldenrodCity_Route35_hns/scripts.inc"
	.include "data/maps/Gate_NationalPark_hns/scripts.inc"
	.include "data/maps/NationalPark_Normal_hns/scripts.inc"
	.include "data/maps/Gate_EcruteakCity_Route38_hns/scripts.inc"
	.include "data/maps/Gate_EcruteakCity_Route42_hns/scripts.inc"
	.include "data/maps/Gate_MahoganyTown_Route43_hns/scripts.inc"
	.include "data/maps/Gate_Route43_hns/scripts.inc"
	.include "data/maps/ReceptionGate_hns/scripts.inc"
	.include "data/maps/EcruteakCity_SageOffice2_hns/scripts.inc"
	.include "data/maps/EcruteakCity_SageOffice1_hns/scripts.inc"
	.include "data/maps/EcruteakCity_Theater_hns/scripts.inc"
	.include "data/maps/OlivineCity_PortInside_hns/scripts.inc"
	.include "data/maps/OlivineCity_Lighthouse_hns/scripts.inc"
	.include "data/maps/OlivineCity_Gym_hns/scripts.inc"
	.include "data/maps/OlivineCity_Cafe_hns/scripts.inc"
	.include "data/maps/OlivineCity_Mart_hns/scripts.inc"
	.include "data/maps/OlivineCity_House1_hns/scripts.inc"
	.include "data/maps/OlivineCity_House2_hns/scripts.inc"
	.include "data/maps/OlivineCity_House3_hns/scripts.inc"
	.include "data/maps/Route39_FarmHouse_hns/scripts.inc"
	.include "data/maps/AzaleaTown_KurtsHouse_hns/scripts.inc"
	.include "data/maps/AzaleaTown_Mart_hns/scripts.inc"
	.include "data/maps/VioletCity_Mart_hns/scripts.inc"
	.include "data/maps/CherrygroveCity_Mart_hns/scripts.inc"
	.include "data/maps/EcruteakCity_Mart_hns/scripts.inc"
	.include "data/maps/BlackthornCity_Mart_hns/scripts.inc"
	.include "data/maps/ViridianCity_Mart_hns/scripts.inc"
	.include "data/maps/PewterCity_Mart_hns/scripts.inc"
	.include "data/maps/CeruleanCity_Mart_hns/scripts.inc"
	.include "data/maps/VermilionCity_Mart_hns/scripts.inc"
	.include "data/maps/LavenderTown_Mart_hns/scripts.inc"
	.include "data/maps/SaffronCity_Mart_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_Mart_hns/scripts.inc"
	.include "data/maps/NewBarkTown_Lab_hns/scripts.inc"
	.include "data/maps/NewBarkTown_House2_hns/scripts.inc"
	.include "data/maps/NewBarkTown_House1_hns/scripts.inc"
	.include "data/maps/NewBarkTown_PlayersHouse_1F_hns/scripts.inc"
	.include "data/maps/NewBarkTown_PlayersHouse_2F_hns/scripts.inc"
	.include "data/maps/CherrygroveCity_House1_hns/scripts.inc"
	.include "data/maps/CherrygroveCity_House2_hns/scripts.inc"
	.include "data/maps/CherrygroveCity_House3_hns/scripts.inc"
	.include "data/maps/EcruteakCity_House1_hns/scripts.inc"
	.include "data/maps/EcruteakCity_House2_hns/scripts.inc"
	.include "data/maps/EcruteakCity_Gym_hns/scripts.inc"
	.include "data/maps/Trees_hns/scripts.inc"
	.include "data/maps/Route39_Barn_hns/scripts.inc"
	.include "data/maps/Route30_House_hns/scripts.inc"
	.include "data/maps/Route30_MrPokemonsHouse_hns/scripts.inc"
	.include "data/maps/VioletCity_TrainerSchool_hns/scripts.inc"
	.include "data/maps/VioletCity_House1_hns/scripts.inc"
	.include "data/maps/VioletCity_House2_hns/scripts.inc"
	.include "data/maps/VioletCity_Gym_hns/scripts.inc"
	.include "data/maps/Route32_PokemonCenter_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_Lab_hns/scripts.inc"
	.include "data/maps/AzaleaTown_House1_hns/scripts.inc"
	.include "data/maps/AzaleaTown_Gym_hns/scripts.inc"
	.include "data/maps/Route34_DayCare_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_UndergroundEntrance_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_UndergroundTunnel_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_UndergroundSwitches_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_UndergroundStorage_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStoreBasement_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_Gym_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_FlowerShop_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_House1_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_House2_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_House3_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_BillsHouse_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_BikeShop_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_GameCorner_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_TrainStation_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_RadioTower_1F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_RadioTower_2F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_RadioTower_3F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_RadioTower_4F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_RadioTower_5F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_1F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_2F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_3F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_4F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_5F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_6F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_7F_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStoreElevator_hns/scripts.inc"
	.include "data/maps/CianwoodHouse1_hns/scripts.inc"
	.include "data/maps/CianwoodHouse2_hns/scripts.inc"
	.include "data/maps/CianwoodHouse3_hns/scripts.inc"
	.include "data/maps/CianwoodShop_hns/scripts.inc"
	.include "data/maps/CianwoodGym_hns/scripts.inc"
	.include "data/maps/BellchimeTrail_hns/scripts.inc"
	.include "data/maps/MahoganyTown_Gym_hns/scripts.inc"
	.include "data/maps/MahoganyTown_Shop_hns/scripts.inc"
	.include "data/maps/MahoganyTown_House1_hns/scripts.inc"
	.include "data/maps/LakeOfRage_House1_hns/scripts.inc"
	.include "data/maps/LakeOfRage_House2_hns/scripts.inc"
	.include "data/maps/BlackthornCity_Gym_hns/scripts.inc"
	.include "data/maps/BlackthornCity_House1_hns/scripts.inc"
	.include "data/maps/BlackthornCity_House2_hns/scripts.inc"
	.include "data/maps/BlackthornCity_House3_hns/scripts.inc"
	.include "data/maps/Route28_House_hns/scripts.inc"
	.include "data/maps/Route26_House1_hns/scripts.inc"
	.include "data/maps/Route26_House2_hns/scripts.inc"
	.include "data/maps/NewMap1_hns/scripts.inc"
	.include "data/maps/PalletTown_RedsHouse_1F_hns/scripts.inc"
	.include "data/maps/PalletTown_House2_hns/scripts.inc"
	.include "data/maps/PalletTown_House3_hns/scripts.inc"
	.include "data/maps/PalletTown_Lab_hns/scripts.inc"
	.include "data/maps/ViridianCity_House1_hns/scripts.inc"
	.include "data/maps/PalletTown_RedsHouse_2F_hns/scripts.inc"
	.include "data/maps/ViridianCity_House2_hns/scripts.inc"
	.include "data/maps/ViridianCity_Gym_hns/scripts.inc"
	.include "data/maps/Gate_Route2_ViridianForest_hns/scripts.inc"
	.include "data/maps/Gate_ViridianForest_Route2_hns/scripts.inc"
	.include "data/maps/Gate_Route2_hns/scripts.inc"
	.include "data/maps/Route2_House_hns/scripts.inc"
	.include "data/maps/PewterCity_House1_hns/scripts.inc"
	.include "data/maps/PewterCity_House2_hns/scripts.inc"
	.include "data/maps/PewterCity_Gym_hns/scripts.inc"
	.include "data/maps/PewterCity_Museum_1F_hns/scripts.inc"
	.include "data/maps/PewterCity_Museum_2F_hns/scripts.inc"
	.include "data/maps/MtMoon_Shop_hns/scripts.inc"
	.include "data/maps/CeruleanCity_House1_hns/scripts.inc"
	.include "data/maps/CeruleanCity_House2_hns/scripts.inc"
	.include "data/maps/CeruleanCity_House3_hns/scripts.inc"
	.include "data/maps/CeruleanCity_BikeShop_hns/scripts.inc"
	.include "data/maps/CeruleanCity_Gym_hns/scripts.inc"
	.include "data/maps/Route5_House_hns/scripts.inc"
	.include "data/maps/Route5_TunnelEntrance_hns/scripts.inc"
	.include "data/maps/Gate_SaffronCity_Route5_hns/scripts.inc"
	.include "data/maps/SaffronCity_Tunnel_NS_hns/scripts.inc"
	.include "data/maps/Route6_TunnelEntrance_hns/scripts.inc"
	.include "data/maps/Gate_SaffronCity_Route6_hns/scripts.inc"
	.include "data/maps/Gate_SaffronCity_Route7_hns/scripts.inc"
	.include "data/maps/Route7_TunnelEntrance_hns/scripts.inc"
	.include "data/maps/SaffronCity_Tunnel_SW_hns/scripts.inc"
	.include "data/maps/Route8_TunnelEntrance_hns/scripts.inc"
	.include "data/maps/Gate_SaffronCity_Route8_hns/scripts.inc"
	.include "data/maps/Route9_PokemonCenter_hns/scripts.inc"
	.include "data/maps/LavenderTown_House1_hns/scripts.inc"
	.include "data/maps/LavenderTown_House2_hns/scripts.inc"
	.include "data/maps/LavenderTown_House3_hns/scripts.inc"
	.include "data/maps/LavenderTown_RadioStation_hns/scripts.inc"
	.include "data/maps/LavenderTown_SoulHouse_hns/scripts.inc"
	.include "data/maps/SaffronCity_TrainStation_hns/scripts.inc"
	.include "data/maps/SaffronCity_FightingDojo_hns/scripts.inc"
	.include "data/maps/SaffronCity_Gym_hns/scripts.inc"
	.include "data/maps/SaffronCity_SilphCo_hns/scripts.inc"
	.include "data/maps/SaffronCity_CopyCatsHouse_1F_hns/scripts.inc"
	.include "data/maps/SaffronCity_House1_hns/scripts.inc"
	.include "data/maps/CeladonCity_House1_hns/scripts.inc"
	.include "data/maps/CeladonCity_House2_hns/scripts.inc"
	.include "data/maps/CeladonCity_Apartments_1F_hns/scripts.inc"
	.include "data/maps/CeladonCity_Apartments_2F_hns/scripts.inc"
	.include "data/maps/CeladonCity_Apartments_3F_hns/scripts.inc"
	.include "data/maps/CeladonCity_Apartments_RoofDay_hns/scripts.inc"
	.include "data/maps/CeladonCity_GameCorner_hns/scripts.inc"
	.include "data/maps/CeladonCity_DepartmentStore_1F_hns/scripts.inc"
	.include "data/maps/CeladonCity_DepartmentStore_2F_hns/scripts.inc"
	.include "data/maps/CeladonCity_DepartmentStore_3F_hns/scripts.inc"
	.include "data/maps/CeladonCity_DepartmentStore_4F_hns/scripts.inc"
	.include "data/maps/CeladonCity_DepartmentStore_5F_hns/scripts.inc"
	.include "data/maps/CeladonCity_DepartmentStore_RoofDay_hns/scripts.inc"
	.include "data/maps/CeladonCity_Gym_hns/scripts.inc"
	.include "data/maps/Route16_House_hns/scripts.inc"
	.include "data/maps/Gate_CeladonCity_Route16_hns/scripts.inc"
	.include "data/maps/Gate_FuchsiaCity_Route18_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_House1_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_House2_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_Gym_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_Route19_Gate_hns/scripts.inc"
	.include "data/maps/VermilionCity_FanClub_hns/scripts.inc"
	.include "data/maps/VermilionCity_House1_hns/scripts.inc"
	.include "data/maps/VermilionCity_House2_hns/scripts.inc"
	.include "data/maps/VermilionCity_House3_hns/scripts.inc"
	.include "data/maps/VermilionCity_PortOutside_hns/scripts.inc"
	.include "data/maps/VermilionCity_PortInside_hns/scripts.inc"
	.include "data/maps/OlivineCity_PortOutside_hns/scripts.inc"
	.include "data/maps/VermilionCity_Gym_hns/scripts.inc"
	.include "data/maps/SeafoamIslands_SecretCave_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_Route15_Gate_hns/scripts.inc"
	.include "data/maps/Route12_House_hns/scripts.inc"
	.include "data/maps/SafariZone1_hns/scripts.inc"
	.include "data/maps/SafariZone2_hns/scripts.inc"
	.include "data/maps/SafariZone3_hns/scripts.inc"
	.include "data/maps/SafariZoneIndoor_hns/scripts.inc"
	.include "data/maps/SafariZoneGate_SafariZoneEntrance_hns/scripts.inc"
	.include "data/maps/SafariZoneGate_PokemonCenter_hns/scripts.inc"
	.include "data/maps/CliffEdgeCave_hns/scripts.inc"
	.include "data/maps/EmbeddedTower_hns/scripts.inc"
	.include "data/maps/Saffron_Temp_hns/scripts.inc"
	.include "data/maps/RocketHideout_B1F_hns/scripts.inc"
	.include "data/maps/RocketHideout_B2F_hns/scripts.inc"
	.include "data/maps/RocketHideout_B3F_hns/scripts.inc"
	.include "data/maps/Route27_House_hns/scripts.inc"
	.include "data/maps/SSAqua_1F_hns/scripts.inc"
	.include "data/maps/SSAqua_B1F_hns/scripts.inc"
	.include "data/maps/SSAqua_CaptainsRoom_hns/scripts.inc"
	.include "data/maps/SSAqua_PlayersRoom_hns/scripts.inc"
	.include "data/maps/SSAqua_RoomNW_hns/scripts.inc"
	.include "data/maps/SSAqua_RoomNE_hns/scripts.inc"
	.include "data/maps/SSAqua_RoomNNE_hns/scripts.inc"
	.include "data/maps/SSAqua_RoomSSW_hns/scripts.inc"
	.include "data/maps/SSAqua_RoomSSE_hns/scripts.inc"
	.include "data/maps/SSAqua_RoomSE_hns/scripts.inc"
	.include "data/maps/SSAqua_RoomSW_hns/scripts.inc"
	.include "data/maps/WorldHub2_hns/scripts.inc"
	.include "data/maps/PokemonLeague_WillsRoom_hns/scripts.inc"
	.include "data/maps/PokemonLeague_KogasRoom_hns/scripts.inc"
	.include "data/maps/PokemonLeague_BrunosRoom_hns/scripts.inc"
	.include "data/maps/PokemonLeague_KarensRoom_hns/scripts.inc"
	.include "data/maps/PokemonLeague_ChampionsRoom_hns/scripts.inc"
	.include "data/maps/PokemonLeague_HallOfFame_hns/scripts.inc"
	.include "data/maps/SaffronCity_FightingDojoVIP_hns/scripts.inc"
	.include "data/maps/SafariZone_Top_Left_hns/scripts.inc"
	.include "data/maps/CeladonCity_Apartments_RoofHouse_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_SafariZoneEntrance_hns/scripts.inc"
	.include "data/maps/MtSilver_1F_MoltresRoom_hns/scripts.inc"
	.include "data/maps/MtSilver_MountainSide_hns/scripts.inc"
	.include "data/maps/SafariZone_Low_Mid_hns/scripts.inc"
	.include "data/maps/SafariZone_Enterance_hns/scripts.inc"
	.include "data/maps/SafariZone_Low_Left_hns/scripts.inc"
	.include "data/maps/SafariZone_Low_Right_hns/scripts.inc"
	.include "data/maps/SafariZone_Top_Mid_hns/scripts.inc"
	.include "data/maps/SafariZone_Top_Right_hns/scripts.inc"
	.include "data/maps/MtSilver_2F_hns/scripts.inc"
	.include "data/maps/MtSilver_3F_hns/scripts.inc"
	.include "data/maps/MtMoon_Outside_hns/scripts.inc"
	.include "data/maps/MtSilver_Snow_hns/scripts.inc"
	.include "data/maps/MtSilver_SummitDay_hns/scripts.inc"
	.include "data/maps/GoldenrodCity_DepartmentStore_7FNight_hns/scripts.inc"
	.include "data/maps/NationalPark_BugContest_hns/scripts.inc"
	.include "data/maps/TinTower_RoofNight_hns/scripts.inc"
	.include "data/maps/BattleTower_Outside_hns/scripts.inc"
	.include "data/maps/Gate_Route40_BattleTowerOutside_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_WordsRoom1_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_WordsRoom2_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_WordsRoom3_hns/scripts.inc"
	.include "data/maps/RuinsOfAlph_WordsRoom4_hns/scripts.inc"
	.include "data/maps/LakeOfRageLowTide_hns/scripts.inc"
	.include "data/maps/TohjoFalls_GiovanniRoom_hns/scripts.inc"
	.include "data/maps/Route26North_hns/scripts.inc"
	.include "data/maps/Route4_PokemonCenter_hns/scripts.inc"
	.include "data/maps/SaffronCity_CopyCatsHouse_2F_hns/scripts.inc"
	.include "data/maps/Route25_BillsHouse_hns/scripts.inc"
	.include "data/maps/CeladonCity_Apartments_RoofNight_hns/scripts.inc"
	.include "data/maps/CeladonCity_DepartmentStore_RoofNight_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_SafariZoneBeach_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_SafariZoneBrush_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_SafariZoneMountain_hns/scripts.inc"
	.include "data/maps/FuchsiaCity_SafariZoneCave_hns/scripts.inc"
	.include "data/maps/MtSilver_SummitNight_hns/scripts.inc"
	.include "data/maps/Route19_Cave_hns/scripts.inc"
#else	
	.include "data/maps/PetalburgCity/scripts.inc"
	.include "data/maps/SlateportCity/scripts.inc"
	.include "data/maps/MauvilleCity/scripts.inc"
	.include "data/maps/RustboroCity/scripts.inc"
	.include "data/maps/FortreeCity/scripts.inc"
	.include "data/maps/LilycoveCity/scripts.inc"
	.include "data/maps/MossdeepCity/scripts.inc"
	.include "data/maps/SootopolisCity/scripts.inc"
	.include "data/maps/EverGrandeCity/scripts.inc"
	.include "data/maps/LittlerootTown/scripts.inc"
	.include "data/maps/OldaleTown/scripts.inc"
	.include "data/maps/DewfordTown/scripts.inc"
	.include "data/maps/LavaridgeTown/scripts.inc"
	.include "data/maps/FallarborTown/scripts.inc"
	.include "data/maps/VerdanturfTown/scripts.inc"
	.include "data/maps/PacifidlogTown/scripts.inc"
	.include "data/maps/Route101/scripts.inc"
	.include "data/maps/Route102/scripts.inc"
	.include "data/maps/Route103/scripts.inc"
	.include "data/maps/Route104/scripts.inc"
	.include "data/maps/Route105/scripts.inc"
	.include "data/maps/Route106/scripts.inc"
	.include "data/maps/Route107/scripts.inc"
	.include "data/maps/Route108/scripts.inc"
	.include "data/maps/Route109/scripts.inc"
	.include "data/maps/Route110/scripts.inc"
	.include "data/maps/Route111/scripts.inc"
	.include "data/maps/Route112/scripts.inc"
	.include "data/maps/Route113/scripts.inc"
	.include "data/maps/Route114/scripts.inc"
	.include "data/maps/Route115/scripts.inc"
	.include "data/maps/Route116/scripts.inc"
	.include "data/maps/Route117/scripts.inc"
	.include "data/maps/Route118/scripts.inc"
	.include "data/maps/Route119/scripts.inc"
	.include "data/maps/Route120/scripts.inc"
	.include "data/maps/Route121/scripts.inc"
	.include "data/maps/Route122/scripts.inc"
	.include "data/maps/Route123/scripts.inc"
	.include "data/maps/Route124/scripts.inc"
	.include "data/maps/Route125/scripts.inc"
	.include "data/maps/Route126/scripts.inc"
	.include "data/maps/Route127/scripts.inc"
	.include "data/maps/Route128/scripts.inc"
	.include "data/maps/Route129/scripts.inc"
	.include "data/maps/Route130/scripts.inc"
	.include "data/maps/Route131/scripts.inc"
	.include "data/maps/Route132/scripts.inc"
	.include "data/maps/Route133/scripts.inc"
	.include "data/maps/Route134/scripts.inc"
	.include "data/maps/Underwater_Route124/scripts.inc"
	.include "data/maps/Underwater_Route126/scripts.inc"
	.include "data/maps/Underwater_Route127/scripts.inc"
	.include "data/maps/Underwater_Route128/scripts.inc"
	.include "data/maps/Underwater_Route129/scripts.inc"
	.include "data/maps/Underwater_Route105/scripts.inc"
	.include "data/maps/Underwater_Route125/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.inc"
	.include "data/maps/OldaleTown_House1/scripts.inc"
	.include "data/maps/OldaleTown_House2/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/OldaleTown_Mart/scripts.inc"
	.include "data/maps/DewfordTown_House1/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/DewfordTown_Gym/scripts.inc"
	.include "data/maps/DewfordTown_Hall/scripts.inc"
	.include "data/maps/DewfordTown_House2/scripts.inc"
	.include "data/maps/LavaridgeTown_HerbShop/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_B1F/scripts.inc"
	.include "data/maps/LavaridgeTown_House/scripts.inc"
	.include "data/maps/LavaridgeTown_Mart/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_Mart/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentLobby/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_CozmosHouse/scripts.inc"
	.include "data/maps/FallarborTown_MoveRelearnersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentLobby/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/VerdanturfTown_Mart/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/VerdanturfTown_WandasHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_House/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PacifidlogTown_House1/scripts.inc"
	.include "data/maps/PacifidlogTown_House2/scripts.inc"
	.include "data/maps/PacifidlogTown_House3/scripts.inc"
	.include "data/maps/PacifidlogTown_House4/scripts.inc"
	.include "data/maps/PacifidlogTown_House5/scripts.inc"
	.include "data/maps/PetalburgCity_WallysHouse/scripts.inc"
	.include "data/maps/PetalburgCity_Gym/scripts.inc"
	.include "data/maps/PetalburgCity_House1/scripts.inc"
	.include "data/maps/PetalburgCity_House2/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PetalburgCity_Mart/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_1F/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_2F/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentLobby/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentCorridor/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/SlateportCity_NameRatersHouse/scripts.inc"
	.include "data/maps/SlateportCity_PokemonFanClub/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_1F/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_2F/scripts.inc"
	.include "data/maps/SlateportCity_Harbor/scripts.inc"
	.include "data/maps/SlateportCity_House/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SlateportCity_Mart/scripts.inc"
	.include "data/maps/MauvilleCity_Gym/scripts.inc"
	.include "data/maps/MauvilleCity_BikeShop/scripts.inc"
	.include "data/maps/MauvilleCity_House1/scripts.inc"
	.include "data/maps/MauvilleCity_House2/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MauvilleCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_1F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_2F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_3F/scripts.inc"
	.include "data/maps/RustboroCity_Gym/scripts.inc"
	.include "data/maps/RustboroCity_PokemonSchool/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/RustboroCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_2F/scripts.inc"
	.include "data/maps/RustboroCity_House1/scripts.inc"
	.include "data/maps/RustboroCity_CuttersHouse/scripts.inc"
	.include "data/maps/RustboroCity_House2/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_2F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_3F/scripts.inc"
	.include "data/maps/RustboroCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House1/scripts.inc"
	.include "data/maps/FortreeCity_Gym/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FortreeCity_Mart/scripts.inc"
	.include "data/maps/FortreeCity_House2/scripts.inc"
	.include "data/maps/FortreeCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House4/scripts.inc"
	.include "data/maps/FortreeCity_House5/scripts.inc"
	.include "data/maps/FortreeCity_DecorationShop/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc"
	.include "data/maps/LilycoveCity_ContestLobby/scripts.inc"
	.include "data/maps/LilycoveCity_ContestHall/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/LilycoveCity_UnusedMart/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc"
	.include "data/maps/LilycoveCity_Harbor/scripts.inc"
	.include "data/maps/LilycoveCity_MoveDeletersHouse/scripts.inc"
	.include "data/maps/LilycoveCity_House1/scripts.inc"
	.include "data/maps/LilycoveCity_House2/scripts.inc"
	.include "data/maps/LilycoveCity_House3/scripts.inc"
	.include "data/maps/LilycoveCity_House4/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.inc"
	.include "data/maps/MossdeepCity_Gym/scripts.inc"
	.include "data/maps/MossdeepCity_House1/scripts.inc"
	.include "data/maps/MossdeepCity_House2/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_Mart/scripts.inc"
	.include "data/maps/MossdeepCity_House3/scripts.inc"
	.include "data/maps/MossdeepCity_StevensHouse/scripts.inc"
	.include "data/maps/MossdeepCity_House4/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_1F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SootopolisCity_Mart/scripts.inc"
	.include "data/maps/SootopolisCity_House1/scripts.inc"
	.include "data/maps/SootopolisCity_House2/scripts.inc"
	.include "data/maps/SootopolisCity_House3/scripts.inc"
	.include "data/maps/SootopolisCity_House4/scripts.inc"
	.include "data/maps/SootopolisCity_House5/scripts.inc"
	.include "data/maps/SootopolisCity_House6/scripts.inc"
	.include "data/maps/SootopolisCity_House7/scripts.inc"
	.include "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.inc"
	.include "data/maps/EverGrandeCity_SidneysRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_PhoebesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_GlaciasRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_DrakesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_ChampionsRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall1/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall2/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall3/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall4/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall5/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_HallOfFame/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_2F/scripts.inc"
	.include "data/maps/Route104_MrBrineysHouse/scripts.inc"
	.include "data/maps/Route104_PrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route111_WinstrateFamilysHouse/scripts.inc"
	.include "data/maps/Route111_OldLadysRestStop/scripts.inc"
	.include "data/maps/Route112_CableCarStation/scripts.inc"
	.include "data/maps/MtChimney_CableCarStation/scripts.inc"
	.include "data/maps/Route114_FossilManiacsHouse/scripts.inc"
	.include "data/maps/Route114_FossilManiacsTunnel/scripts.inc"
	.include "data/maps/Route114_LanettesHouse/scripts.inc"
	.include "data/maps/Route116_TunnelersRestHouse/scripts.inc"
	.include "data/maps/Route117_PokemonDayCare/scripts.inc"
	.include "data/maps/Route121_SafariZoneEntrance/scripts.inc"
	.include "data/maps/MeteorFalls_1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_1F_2R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_2R/scripts.inc"
	.include "data/maps/RusturfTunnel/scripts.inc"
	.include "data/maps/Underwater_SootopolisCity/scripts.inc"
	.include "data/maps/DesertRuins/scripts.inc"
	.include "data/maps/GraniteCave_1F/scripts.inc"
	.include "data/maps/GraniteCave_B1F/scripts.inc"
	.include "data/maps/GraniteCave_B2F/scripts.inc"
	.include "data/maps/GraniteCave_StevensRoom/scripts.inc"
	.include "data/maps/PetalburgWoods/scripts.inc"
	.include "data/maps/MtChimney/scripts.inc"
	.include "data/maps/JaggedPass/scripts.inc"
	.include "data/maps/FieryPath/scripts.inc"
	.include "data/maps/MtPyre_1F/scripts.inc"
	.include "data/maps/MtPyre_2F/scripts.inc"
	.include "data/maps/MtPyre_3F/scripts.inc"
	.include "data/maps/MtPyre_4F/scripts.inc"
	.include "data/maps/MtPyre_5F/scripts.inc"
	.include "data/maps/MtPyre_6F/scripts.inc"
	.include "data/maps/MtPyre_Exterior/scripts.inc"
	.include "data/maps/MtPyre_Summit/scripts.inc"
	.include "data/maps/AquaHideout_1F/scripts.inc"
	.include "data/maps/AquaHideout_B1F/scripts.inc"
	.include "data/maps/AquaHideout_B2F/scripts.inc"
	.include "data/maps/Underwater_SeafloorCavern/scripts.inc"
	.include "data/maps/SeafloorCavern_Entrance/scripts.inc"
	.include "data/maps/SeafloorCavern_Room1/scripts.inc"
	.include "data/maps/SeafloorCavern_Room2/scripts.inc"
	.include "data/maps/SeafloorCavern_Room3/scripts.inc"
	.include "data/maps/SeafloorCavern_Room4/scripts.inc"
	.include "data/maps/SeafloorCavern_Room5/scripts.inc"
	.include "data/maps/SeafloorCavern_Room6/scripts.inc"
	.include "data/maps/SeafloorCavern_Room7/scripts.inc"
	.include "data/maps/SeafloorCavern_Room8/scripts.inc"
	.include "data/maps/SeafloorCavern_Room9/scripts.inc"
	.include "data/maps/CaveOfOrigin_Entrance/scripts.inc"
	.include "data/maps/CaveOfOrigin_1F/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap1/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap2/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.inc"
	.include "data/maps/CaveOfOrigin_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_1F/scripts.inc"
	.include "data/maps/VictoryRoad_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_B2F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideInnerRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideStairsRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideLowerRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideInnerRoom/scripts.inc"
	.include "data/maps/NewMauville_Entrance/scripts.inc"
	.include "data/maps/NewMauville_Inside/scripts.inc"
	.include "data/maps/AbandonedShip_Deck/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater1/scripts.inc"
	.include "data/maps/AbandonedShip_Room_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_1F/scripts.inc"
	.include "data/maps/AbandonedShip_CaptainsOffice/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater2/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorRooms/scripts.inc"
	.include "data/maps/IslandCave/scripts.inc"
	.include "data/maps/AncientTomb/scripts.inc"
	.include "data/maps/Underwater_Route134/scripts.inc"
	.include "data/maps/Underwater_SealedChamber/scripts.inc"
	.include "data/maps/SealedChamber_OuterRoom/scripts.inc"
	.include "data/maps/SealedChamber_InnerRoom/scripts.inc"
	.include "data/maps/ScorchedSlab/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap1/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap2/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap3/scripts.inc"
	.include "data/maps/SkyPillar_Entrance/scripts.inc"
	.include "data/maps/SkyPillar_Outside/scripts.inc"
	.include "data/maps/SkyPillar_1F/scripts.inc"
	.include "data/maps/SkyPillar_2F/scripts.inc"
	.include "data/maps/SkyPillar_3F/scripts.inc"
	.include "data/maps/SkyPillar_4F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom/scripts.inc"
	.include "data/maps/SkyPillar_5F/scripts.inc"
	.include "data/maps/SkyPillar_Top/scripts.inc"
	.include "data/maps/MagmaHideout_1F/scripts.inc"
	.include "data/maps/MagmaHideout_2F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_4F/scripts.inc"
	.include "data/maps/MagmaHideout_3F_3R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_3R/scripts.inc"
	.include "data/maps/MirageTower_1F/scripts.inc"
	.include "data/maps/MirageTower_2F/scripts.inc"
	.include "data/maps/MirageTower_3F/scripts.inc"
	.include "data/maps/MirageTower_4F/scripts.inc"
	.include "data/maps/DesertUnderpass/scripts.inc"
	.include "data/maps/ArtisanCave_B1F/scripts.inc"
	.include "data/maps/ArtisanCave_1F/scripts.inc"
	.include "data/maps/Underwater_MarineCave/scripts.inc"
	.include "data/maps/MarineCave_Entrance/scripts.inc"
	.include "data/maps/MarineCave_End/scripts.inc"
	.include "data/maps/TerraCave_Entrance/scripts.inc"
	.include "data/maps/TerraCave_End/scripts.inc"
	.include "data/maps/AlteringCave/scripts.inc"
	.include "data/maps/MeteorFalls_StevensCave/scripts.inc"
	.include "data/maps/BattleColosseum_2P/scripts.inc"
	.include "data/maps/TradeCenter/scripts.inc"
	.include "data/maps/RecordCorner/scripts.inc"
	.include "data/maps/BattleColosseum_4P/scripts.inc"
	.include "data/maps/ContestHall/scripts.inc"
	.include "data/maps/InsideOfTruck/scripts.inc"
	.include "data/maps/SSTidalCorridor/scripts.inc"
	.include "data/maps/SSTidalLowerDeck/scripts.inc"
	.include "data/maps/SSTidalRooms/scripts.inc"
	.include "data/maps/BattlePyramidSquare01/scripts.inc"
	.include "data/maps/UnionRoom/scripts.inc"
	.include "data/maps/SafariZone_Northwest/scripts.inc"
	.include "data/maps/SafariZone_North/scripts.inc"
	.include "data/maps/SafariZone_Southwest/scripts.inc"
	.include "data/maps/SafariZone_South/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideWest/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerElevator/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc"
	.include "data/maps/SouthernIsland_Exterior/scripts.inc"
	.include "data/maps/SouthernIsland_Interior/scripts.inc"
	.include "data/maps/SafariZone_RestHouse/scripts.inc"
	.include "data/maps/SafariZone_Northeast/scripts.inc"
	.include "data/maps/SafariZone_Southeast/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideEast/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidTop/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.inc"
	.include "data/maps/BattleFrontier_RankingHall/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge1/scripts.inc"
	.include "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge2/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge3/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge4/scripts.inc"
	.include "data/maps/BattleFrontier_ScottsHouse/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge5/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge6/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge7/scripts.inc"
	.include "data/maps/BattleFrontier_ReceptionGate/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge8/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge9/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_2F/scripts.inc"
	.include "data/maps/BattleFrontier_Mart/scripts.inc"
	.include "data/maps/FarawayIsland_Entrance/scripts.inc"
	.include "data/maps/FarawayIsland_Interior/scripts.inc"
	.include "data/maps/BirthIsland_Exterior/scripts.inc"
	.include "data/maps/BirthIsland_Harbor/scripts.inc"
	.include "data/maps/TrainerHill_Entrance/scripts.inc"
	.include "data/maps/TrainerHill_1F/scripts.inc"
	.include "data/maps/TrainerHill_2F/scripts.inc"
	.include "data/maps/TrainerHill_3F/scripts.inc"
	.include "data/maps/TrainerHill_4F/scripts.inc"
	.include "data/maps/TrainerHill_Roof/scripts.inc"
	.include "data/maps/NavelRock_Exterior/scripts.inc"
	.include "data/maps/NavelRock_Harbor/scripts.inc"
	.include "data/maps/NavelRock_Entrance/scripts.inc"
	.include "data/maps/NavelRock_B1F/scripts.inc"
	.include "data/maps/NavelRock_Fork/scripts.inc"
	.include "data/maps/NavelRock_Up1/scripts.inc"
	.include "data/maps/NavelRock_Up2/scripts.inc"
	.include "data/maps/NavelRock_Up3/scripts.inc"
	.include "data/maps/NavelRock_Up4/scripts.inc"
	.include "data/maps/NavelRock_Top/scripts.inc"
	.include "data/maps/NavelRock_Down01/scripts.inc"
	.include "data/maps/NavelRock_Down02/scripts.inc"
	.include "data/maps/NavelRock_Down03/scripts.inc"
	.include "data/maps/NavelRock_Down04/scripts.inc"
	.include "data/maps/NavelRock_Down05/scripts.inc"
	.include "data/maps/NavelRock_Down06/scripts.inc"
	.include "data/maps/NavelRock_Down07/scripts.inc"
	.include "data/maps/NavelRock_Down08/scripts.inc"
	.include "data/maps/NavelRock_Down09/scripts.inc"
	.include "data/maps/NavelRock_Down10/scripts.inc"
	.include "data/maps/NavelRock_Down11/scripts.inc"
	.include "data/maps/NavelRock_Bottom/scripts.inc"
	.include "data/maps/TrainerHill_Elevator/scripts.inc"
	.include "data/maps/Route104_Prototype/scripts.inc"
	.include "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route109_SeashoreHouse/scripts.inc"
	.include "data/maps/Route110_TrickHouseEntrance/scripts.inc"
	.include "data/maps/Route110_TrickHouseEnd/scripts.inc"
	.include "data/maps/Route110_TrickHouseCorridor/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle1/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle2/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle3/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle4/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle5/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle6/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle7/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle8/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.inc"
	.include "data/maps/Route113_GlassWorkshop/scripts.inc"
	.include "data/maps/Route123_BerryMastersHouse/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_1F/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_2F/scripts.inc"
	.include "data/maps/Route119_House/scripts.inc"
	.include "data/scripts/abnormal_weather.inc"
	.include "data/scripts/contest_hall.inc"
	.include "data/scripts/tv.inc"
	.include "data/scripts/interview.inc"
	.include "data/scripts/gabby_and_ty.inc"
	.include "data/scripts/players_house.inc"
	.include "data/scripts/roulette.inc"
	.include "data/text/shoal_cave.inc"
	.include "data/scripts/lilycove_lady.inc"
	.include "data/scripts/trainer_hill.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom_Suicune/scripts.inc"
	.include "data/maps/NewMauville_Inside_Raikou/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R_Entei/scripts.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom_Modern/scripts.inc"
	.include "data/maps/NewMauville_Inside_Modern/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R_Modern/scripts.inc"
	.include "data/maps/PetalburgWoods_Old/scripts.inc"
	.include "data/maps/CeruleanCave1/scripts.inc"
	.include "data/maps/CeruleanCave2/scripts.inc"
	.include "data/maps/CeruleanCave3/scripts.inc"
	.include "data/maps/AlteringCave_Mewtwo/scripts.inc"
	.include "data/maps/VictoryRoad_Moltres/scripts.inc"
	.include "data/maps/VictoryRoad_Moltres2/scripts.inc"
	.include "data/maps/VictoryRoad_B2F_Modern/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_2R_Modern/scripts.inc"
	.include "data/maps/MeteorFalls_Articuno/scripts.inc"
	.include "data/maps/ScorchedSlab_Zapdos/scripts.inc"
	.include "data/maps/ScorchedSlab_Modern/scripts.inc"
	.include "data/scripts/cave_of_origin.inc"
	.include "data/scripts/kecleon.inc"
#endif	
	.include "data/maps/MauvilleCity_GameCorner/scripts.inc"
	.include "data/scripts/shared_secret_base.inc"
	.include "data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc"
	.include "data/scripts/std_msgbox.inc"
	.include "data/scripts/trainer_battle.inc"
	.include "data/scripts/new_game.inc"
	.include "data/scripts/hall_of_fame.inc"
	.include "data/scripts/config.inc"
	.include "data/scripts/debug.inc"
	.include "data/scripts/pc_transfer.inc"
	.include "data/scripts/questionnaire.inc"
	.include "data/scripts/trainer_script.inc"
	.include "data/scripts/berry_tree.inc"
	.include "data/scripts/secret_base.inc"
	.include "data/scripts/cable_club.inc"
	.include "data/text/cable_club.inc"
	.include "data/text/contest_strings.inc"
	.include "data/text/contest_link.inc"
	.include "data/text/contest_painting.inc"
	.include "data/text/trick_house_mechadolls.inc"
	.include "data/text/tv.inc"
	.include "data/text/pokemon_news.inc"
	.include "data/scripts/mauville_man.inc"
	.include "data/scripts/field_move_scripts.inc"
	.include "data/scripts/item_ball_scripts.inc"
	.include "data/scripts/profile_man.inc"
	.include "data/scripts/day_care.inc"
	.include "data/scripts/flash.inc"
	.include "data/scripts/berry_blender.inc"
	.include "data/text/mauville_man.inc"
	.include "data/text/trainers.inc"
	.include "data/scripts/repel.inc"
	.include "data/scripts/safari_zone.inc"
	.include "data/scripts/bug_contest.inc"
	.include "data/text/pokedex_rating.inc"
	.include "data/text/lottery_corner.inc"
	.include "data/text/event_ticket_1.inc"
	.include "data/text/braille.inc"
	.include "data/text/berries.inc"
	.include "data/text/check_furniture.inc"
	.include "data/scripts/cave_hole.inc"
	.include "data/text/match_call.inc"
	.include "data/scripts/apprentice.inc"
	.include "data/text/apprentice.inc"
	.include "data/text/battle_dome.inc"
	.include "data/scripts/battle_pike.inc"
	.include "data/text/blend_master.inc"
	.include "data/text/battle_tent.inc"
	.include "data/text/event_ticket_2.inc"
	.include "data/text/move_tutors.inc"
	.include "data/scripts/move_tutors.inc"
	.include "data/scripts/test_signpost.inc"
	.include "data/scripts/follower.inc"
	.include "data/text/frontier_brain.inc"
	.include "data/text/save.inc"
	.include "data/text/birch_speech.inc"
	.include "data/scripts/dexnav.inc"
	.include "data/scripts/change_deoxys_form.inc"

@ HnS PORT TODO - Disabled Briney Scripts for port, re-add them alongside functional maps
EventScript_WhiteOut::
	call HallOfFame_EventScript_ResetEliteFour
	@ goto EventScript_ResetMrBriney
	end

@ HnS PORT TODO - Disabled different Pre-Roxanne whiteout message
@ However, could easily switch to Pre-Falkner
EventScript_AfterWhiteOutHeal::
	lockall
	msgbox gText_FirstShouldRestoreMonsHealth
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	@ call_if_unset FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsgPreRoxanne
	@ call_if_set FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsg
	call EventScript_AfterWhiteOutHealMsg
	applymovement VAR_LAST_TALKED, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

EventScript_AfterWhiteOutHealMsgPreRoxanne::
	msgbox gText_MonsHealedShouldBuyPotions
	return

EventScript_AfterWhiteOutHealMsg::
	msgbox gText_MonsHealed
	return

EventScript_AfterWhiteOutMomHeal::
	lockall
#if (IS_HNS != TRUE)
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterDown
#endif
	waitmovement 0
	msgbox gText_HadQuiteAnExperienceTakeRest
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox gText_MomExplainHPGetPotions
	fadedefaultbgm
	releaseall
	end

@ HnS PORT TODO - Disabled Briney Scripts
EventScript_ResetMrBriney::
	goto_if_eq VAR_GARBAGEVAR, 1, EventScript_MoveMrBrineyToHouse
	goto_if_eq VAR_GARBAGEVAR, 2, EventScript_MoveMrBrineyToDewford
	goto_if_eq VAR_GARBAGEVAR, 3, EventScript_MoveMrBrineyToRoute109
	end

EventScript_MoveMrBrineyToHouse::
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	end

EventScript_MoveMrBrineyToDewford::
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	end

EventScript_MoveMrBrineyToRoute109::
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	end

@ HnS NOTE - made generic for use in multiple versions
HallOfFame_EventScript_ResetEliteFour::
	clearflag FLAG_DEFEATED_JOHTO_ELITE_4_WILL	@ SIDNEY
	clearflag FLAG_DEFEATED_JOHTO_ELITE_4_KOGA	@ PHOEBE
	clearflag FLAG_DEFEATED_JOHTO_ELITE_4_BRUNO	@ GLACIA
	clearflag FLAG_DEFEATED_JOHTO_ELITE_4_KAREN	@ DRAKE
	setvar VAR_GARBAGEVAR, 0
	return

Common_EventScript_InfoAttendant::
	lock
	faceplayer
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
	release
	end

Common_EventScript_Nurse::
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_Enter_Pokeball
	@setvar VAR_0x800B, LOCALID_OLDALE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Common_EventScript_UpdateBrineyLocation::
	@goto_if_unset FLAG_RECEIVED_POKENAV, Common_EventScript_NopReturn
	@goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, Common_EventScript_NopReturn
	@goto_if_unset FLAG_GARBAGEFLAG, EventScript_SetBrineyLocation_House
	@goto_if_unset FLAG_GARBAGEFLAG, EventScript_SetBrineyLocation_Dewford
	@goto_if_unset FLAG_GARBAGEFLAG, EventScript_SetBrineyLocation_Route109
	return

EventScript_SetBrineyLocation_House::
	setvar VAR_GARBAGEVAR, 1
	return

EventScript_SetBrineyLocation_Dewford::
	setvar VAR_GARBAGEVAR, 2
	return

EventScript_SetBrineyLocation_Route109::
	setvar VAR_GARBAGEVAR, 3
	return

	.include "data/scripts/pkmn_center_nurse.inc"
	.include "data/scripts/obtain_item.inc"
	.include "data/scripts/record_mix.inc"
	.include "data/scripts/pc.inc"

@ scripts/notices.inc? signs.inc? See comment about text/notices.inc
Common_EventScript_ShowPokemartSign::
	msgbox gText_PokemartSign, MSGBOX_SIGN
	end

Common_EventScript_ShowPokemonCenterSign::
	msgbox gText_PokemonCenterSign, MSGBOX_SIGN
	end

Common_ShowEasyChatScreen::
	fadescreen FADE_TO_BLACK
	special ShowEasyChatScreen
	fadescreen FADE_FROM_BLACK
	return

Common_EventScript_ReadyPetalburgGymForBattle::
	clearflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	return

Common_EventScript_BufferTrendyPhrase::
	dotimebasedevents
	setvar VAR_0x8004, 0
	special BufferTrendyPhraseString
	return

EventScript_BackupMrBrineyLocation::
	copyvar VAR_0x8008, VAR_GARBAGEVAR
	setvar VAR_GARBAGEVAR, 0
	return

	.include "data/scripts/surf.inc"
	.include "data/scripts/rival_graphics.inc"
	.include "data/scripts/set_gym_trainers.inc"

@ HnS PORT NOTE - seems to be used in Expansion to disengage with signs?
EventScript_CancelMessageBox::
	special UseBlankMessageToCancelPokemonPic
	release
	end

Common_EventScript_ShowBagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Common_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	return

Common_EventScript_ShowNoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	release
	end

Common_EventScript_NoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	return

Common_EventScript_SetAbnormalWeather::
	setweather WEATHER_ABNORMAL
	return

Common_EventScript_PlayGymBadgeFanfare::
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	return

Common_EventScript_OutOfCenterPartyHeal::
	fadescreenswapbuffers FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	fadescreenswapbuffers FADE_FROM_BLACK
	return

EventScript_RegionMap::
	lockall
	msgbox Common_Text_LookCloserAtMap, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special FieldShowRegionMap
	waitstate
	releaseall
	end

Common_EventScript_PlayBrineysBoatMusic::
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	return

Common_EventScript_StopBrineysBoatMusic::
	clearflag FLAG_DONT_TRANSITION_MUSIC
	fadedefaultbgm
	return

	.include "data/scripts/prof_birch.inc"

@ Below could be split as ferry.inc aside from the Rusturf tunnel script
Common_EventScript_FerryDepart::
	delay 60
	applymovement VAR_0x8004, Movement_FerryDepart
	waitmovement 0
	return

Movement_FerryDepart:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

EventScript_HideMrBriney::
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setflag FLAG_GARBAGEFLAG
	setvar VAR_GARBAGEVAR, 0
	return

RusturfTunnel_EventScript_SetRusturfTunnelOpen::
	@ removeobject LOCALID_RUSTURF_TUNNEL_WANDAS_BF
	@ removeobject LOCALID_RUSTURF_TUNNEL_WANDA
	clearflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
	setvar VAR_GARBAGEVAR, 6
	setflag FLAG_GARBAGEFLAG
	return

EventScript_UnusedBoardFerry::
	delay 30
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	showobjectat LOCALID_PLAYER, 0
	delay 30
	applymovement LOCALID_PLAYER, Movement_UnusedBoardFerry
	waitmovement 0
	delay 30
	return

Movement_UnusedBoardFerry:
	walk_up
	step_end

Common_EventScript_FerryDepartIsland::
	call_if_eq VAR_FACING, DIR_SOUTH, Ferry_EventScript_DepartIslandSouth
	call_if_eq VAR_FACING, DIR_WEST, Ferry_EventScript_DepartIslandWest
	delay 30
	hideobjectat LOCALID_PLAYER, 0
	call Common_EventScript_FerryDepart
	return

Common_EventScript_PlayerHandedOverTheItem::
	bufferitemname STR_VAR_1, VAR_0x8004
	playfanfare MUS_OBTAIN_TMHM
	message gText_PlayerHandedOverTheItem
	waitmessage
	waitfanfare
	removeitem VAR_0x8004
	return

	.include "data/scripts/elite_four.inc"
	.include "data/scripts/movement.inc"
	.include "data/scripts/check_furniture.inc"
	.include "data/text/record_mix.inc"
	.include "data/text/pc.inc"
	.include "data/text/pkmn_center_nurse.inc"
	.include "data/text/mart_clerk.inc"
	.include "data/text/obtain_item.inc"

@ HnS TODO - move text constants out of event_scripts.s, what?
@ The below and surf.inc could be split into some text/notices.inc
gText_PokemartSign::
	.string "“Selected items for your convenience!”\n"
	.string "POKéMON MART$"

gText_PokemonCenterSign::
	.string "“Rejuvenate your tired partners!”\n"
	.string "POKéMON CENTER$"

gText_MomOrDadMightLikeThisProgram::
	.string "{STR_VAR_1} might like this program.\n"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Better get going!$"

gText_WhichFloorWouldYouLike::
	.string "Welcome to LILYCOVE DEPARTMENT STORE.\p"
	.string "Which floor would you like?$"

gText_SandstormIsVicious::
	.string "The sandstorm is vicious.\n"
	.string "It's impossible to keep going.$"

gText_SelectWithoutRegisteredItem::
	.string "An item in the BAG can be\n"
	.string "registered to SELECT for easy use.$"

gText_SelectWithoutRegisteredLongItem::
	.string "A second item in the BAG can be\n"
	.string "registered to holding SELECT.$"

gText_PokemonTrainerSchoolEmail::
	.string "There's an e-mail from POKéMON TRAINER\n"
	.string "SCHOOL.\p"
	.string "… … … … … …\p"
	.string "A POKéMON may learn up to four moves.\p"
	.string "A TRAINER's expertise is tested on the\n"
	.string "move sets chosen for POKéMON.\p"
	.string "… … … … … …$"

gText_PlayerHouseBootPC::
	.string "{PLAYER} booted up the PC.$"

gText_PokeblockLinkCanceled::
	.string "The link was canceled.$"

gText_UnusedNicknameReceivedPokemon::
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_2} you received?$"

gText_PlayerWhitedOut::
	.string "{PLAYER} is out of usable\n"
	.string "POKéMON!\p{PLAYER} whited out!$"

@ Hns/Modern
gText_FirstShouldRestoreMonsHealth::
	.string "First, you should restore your\n"
	.string "POKéMON to full health.$"

@ Hns/Modern
gText_MonsHealedShouldBuyPotions::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "If your POKéMON's energy, HP,\n"
	.string "is down, please come see us.\p"
	.string "If you're planning to go far in the\n"
	.string "field, you should buy some POTIONS\l"
	.string "at the POKéMON MART.\p"
	.string "We hope you excel!$"

@ Hns/Modern
gText_MonsHealed::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "We hope you excel!$"

@ Hns/Modern
gText_HadQuiteAnExperienceTakeRest::
	.string "MOM: {PLAYER}!\n"
	.string "Welcome home.\p"
	.string "It sounds like you had quite\n"
	.string "an experience.\p"
	.string "Maybe you should take a quick\n"
	.string "rest.$"

@ Hns/Modern
gText_MomExplainHPGetPotions::
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\p"
	.string "I just heard from PROF. BIRCH.\p"
	.string "He said that POKéMON's energy is\n"
	.string "measured in HP.\p"
	.string "If your POKéMON lose their HP,\n"
	.string "you can restore them at any\l"
	.string "POKéMON CENTER.\p"
	.string "If you're going to travel far away,\n"
	.string "the smart TRAINER stocks up on\l"
	.string "POTIONS at the POKéMON MART.\p"
	.string "Make me proud, honey!\p"
	.string "Take care!$"

gText_RegisteredTrainerinPokeNav::
	.string "Registered {STR_VAR_1} {STR_VAR_2}\n"
	.string "in the POKéNAV.$"

gText_ComeBackWithSecretPower::
	.string "Do you know the TM SECRET POWER?\p"
	.string "Our group, we love the TM SECRET\n"
	.string "POWER.\p"
	.string "One of our members will give it to you.\n"
	.string "Come back and show me if you get it.\p"
	.string "We'll accept you as a member and sell\n"
	.string "you good stuff in secrecy.$"

gText_PokerusExplanation::
	.string "Your POKéMON may be infected with\n"
	.string "POKéRUS.\p"
	.string "Little is known about the POKéRUS\n"
	.string "except that they are microscopic life-\l"
	.string "forms that attach to POKéMON.\p"
	.string "While infected, POKéMON are said to\n"
	.string "grow exceptionally well.$"

	.include "data/text/surf.inc"

gText_DoorOpenedFarAway::
	.string "It sounded as if a door opened\n"
	.string "somewhere far away.$"

gText_BigHoleInTheWall::
	.string "There is a big hole in the wall.$"

gText_SorryWirelessClubAdjustments::
	.string "I'm terribly sorry.\n"
	.string "The POKéMON WIRELESS CLUB is\l"
	.string "undergoing adjustments now.$"

gText_UndergoingAdjustments::
	.string "It appears to be undergoing\n"
	.string "adjustments…$"

@ Unused
gText_SorryTradeCenterInspections::
	.string "I'm terribly sorry. The TRADE CENTER\n"
	.string "is undergoing inspections.$"

@ Unused
gText_SorryRecordCornerPreparation::
	.string "I'm terribly sorry. The RECORD CORNER\n"
	.string "is under preparation.$"

gText_PlayerHandedOverTheItem::
	.string "{PLAYER} handed over the\n"
	.string "{STR_VAR_1}.$"

gText_ThankYouForAccessingMysteryGift::
	.string "Thank you for accessing the\n"
	.string "MYSTERY GIFT System.$"

gText_PlayerFoundOneTMHM::
	.string "{PLAYER} found one {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_PlayerFoundTMHMs::
	.string "{PLAYER} found {STR_VAR_3} {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_Sudowoodo_Attacked::
	.string "The weird tree doesn't like the\n"
	.string "WAILMER PAIL!\p"
	.string "The weird tree attacked!$"

gText_LegendaryFlewAway::
	.string "The {STR_VAR_1} flew away!$"

	.include "data/text/pc_transfer.inc"
	.include "data/text/questionnaire.inc"
	.include "data/text/abnormal_weather.inc"

EventScript_SelectWithoutRegisteredItem::
	msgbox gText_SelectWithoutRegisteredItem, MSGBOX_SIGN
	end

EventScript_SelectWithoutRegisteredLongItem::
	msgbox gText_SelectWithoutRegisteredLongItem, MSGBOX_SIGN
	end

	.include "data/scripts/field_poison.inc"

Common_EventScript_NopReturn::
	return

@ HnS PORT - copied over some scripts 
Common_EventScript_GiftMon::
	call_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Common_EventScript_RecieveMonParty
	call_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Common_EventScript_ReceiveMonPC
	return

Common_EventScript_RecieveMonParty::
	playfanfare MUS_OBTAIN_ITEM
	message Common_Text_ReceivedMon
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, TRUE, Common_EventScript_NameReceivedPartyMonFull
	@ setvar VAR_RESULT, 0 @ HnS PORT - ?
	return

Common_EventScript_ReceiveMonPC::
	playfanfare MUS_OBTAIN_ITEM
	message Common_Text_ReceivedMon
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, TRUE, Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	return
	
Common_EventScript_NameReceivedPartyMonFull::
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return

Common_EventScript_NameReceivedPartyMon::
	fadescreen FADE_TO_BLACK
	special ChangePokemonNickname
	waitstate
	return

Common_EventScript_GiftMonNamed::
	call_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Common_EventScript_RecieveMonPartyNamed
	call_if_eq VAR_RESULT, MON_CANT_GIVE, Common_EventScript_PartyIsFull
	return

Common_EventScript_RecieveMonPartyNamed::
	playfanfare MUS_OBTAIN_ITEM
	message Common_Text_ReceivedMon
	waitmessage
	waitfanfare
	return

Common_EventScript_PartyIsFull::
	msgbox Common_Text_PartyIsFull, MSGBOX_DEFAULT
	closemessage
	end
	
@ Unused
EventScript_CableClub_SetVarResult1::
	setvar VAR_RESULT, 1
	return

EventScript_CableClub_SetVarResult0::
	setvar VAR_RESULT, 0
	return

Common_EventScript_UnionRoomAttendant::
	call CableClub_EventScript_UnionRoomAttendant
	end

Common_EventScript_WirelessClubAttendant::
	call CableClub_EventScript_WirelessClubAttendant
	end

Common_EventScript_DirectCornerAttendant::
	call CableClub_EventScript_DirectCornerAttendant
	end

Common_EventScript_RemoveStaticPokemon::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Common_EventScript_LegendaryFlewAway::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

EventScript_VsSeekerChargingDone::
	special VsSeekerFreezeObjectsAfterChargeComplete
	waitstate
	special VsSeekerResetObjectMovementAfterChargeComplete
	releaseall
	end
