#include "global.h"
#include "event_data.h"
#include "constants/region_map_sections.h"

struct Landmark
{
    const u8 *name;
    u16 flag;
};

struct LandmarkList
{
    mapsec_u8_t mapSection;
    u8 id;
    const struct Landmark *const *landmarks;
};

static const u8 LandmarkName_MagmaHideout[] = _("MAGMA HIDEOUT"); //Unused

static const struct Landmark Landmark_FlowerShop = {COMPOUND_STRING("FLOWER SHOP"), FLAG_LANDMARK_FLOWER_SHOP};
static const struct Landmark Landmark_PetalburgWoods = {COMPOUND_STRING("PETALBURG WOODS"), -1};
static const struct Landmark Landmark_MrBrineysCottage = {COMPOUND_STRING("MR. BRINEY'S COTTAGE"), FLAG_LANDMARK_MR_BRINEY_HOUSE};
static const struct Landmark Landmark_AbandonedShip = {COMPOUND_STRING("ABANDONED SHIP"), FLAG_LANDMARK_ABANDONED_SHIP};
static const struct Landmark Landmark_SeashoreHouse = {COMPOUND_STRING("SEASHORE HOUSE"), FLAG_LANDMARK_SEASHORE_HOUSE};
static const struct Landmark Landmark_SlateportBeach = {COMPOUND_STRING("SLATEPORT BEACH"), -1};
static const struct Landmark Landmark_CyclingRoad = {COMPOUND_STRING("CYCLING ROAD"), -1};
static const struct Landmark Landmark_NewMauville = {COMPOUND_STRING("NEW MAUVILLE"), FLAG_LANDMARK_NEW_MAUVILLE};
static const struct Landmark Landmark_TrickHouse = {COMPOUND_STRING("TRICK HOUSE"), FLAG_LANDMARK_TRICK_HOUSE};
static const struct Landmark Landmark_OldLadysRestShop = {COMPOUND_STRING("OLD LADY'S REST STOP"), FLAG_LANDMARK_OLD_LADY_REST_SHOP};
static const struct Landmark Landmark_Desert = {COMPOUND_STRING("DESERT"), -1};
static const struct Landmark Landmark_WinstrateFamily = {COMPOUND_STRING("THE WINSTRATE FAMILY"), FLAG_LANDMARK_WINSTRATE_FAMILY};
static const struct Landmark Landmark_CableCar = {COMPOUND_STRING("CABLE CAR"), -1};
static const struct Landmark Landmark_GlassWorkshop = {COMPOUND_STRING("GLASS WORKSHOP"), FLAG_LANDMARK_GLASS_WORKSHOP};
static const struct Landmark Landmark_WeatherInstitute = {COMPOUND_STRING("WEATHER INSTITUTE"), -1};
static const struct Landmark Landmark_MeteorFalls = {COMPOUND_STRING("METEOR FALLS"), -1};
static const struct Landmark Landmark_TunnelersRestHouse = {COMPOUND_STRING("TUNNELER'S RESTHOUSE"), FLAG_LANDMARK_TUNNELERS_REST_HOUSE};
static const struct Landmark Landmark_RusturfTunnel = {COMPOUND_STRING("RUSTURF TUNNEL"), -1};
static const struct Landmark Landmark_PokemonDayCare = {COMPOUND_STRING("POKéMON DAY CARE"), FLAG_LANDMARK_POKEMON_DAYCARE};
static const struct Landmark Landmark_SafariZoneEntrance = {COMPOUND_STRING("SAFARI ZONE ENTRANCE"), -1};
static const struct Landmark Landmark_MtPyre = {COMPOUND_STRING("MT. PYRE"), -1};
static const struct Landmark Landmark_ShoalCave = {COMPOUND_STRING("SHOAL CAVE"), -1};
static const struct Landmark Landmark_SeafloorCavern = {COMPOUND_STRING("SEAFLOOR CAVERN"), FLAG_LANDMARK_SEAFLOOR_CAVERN};
static const struct Landmark Landmark_GraniteCave = {COMPOUND_STRING("GRANITE CAVE"), -1};
static const struct Landmark Landmark_OceanCurrent = {COMPOUND_STRING("OCEAN CURRENT"), -1};
#if IS_HNS
static const struct Landmark Landmark_BillsHouse = {COMPOUND_STRING("BILL'S HOUSE"), FLAG_LANDMARK_BILLS_HOUSE};
#else
static const struct Landmark Landmark_LanettesHouse = {COMPOUND_STRING("LANETTE'S HOUSE"), FLAG_LANDMARK_LANETTES_HOUSE};
#endif
static const struct Landmark Landmark_FieryPath = {COMPOUND_STRING("FIERY PATH"), FLAG_LANDMARK_FIERY_PATH};
static const struct Landmark Landmark_JaggedPass = {COMPOUND_STRING("JAGGED PASS"), -1};
static const struct Landmark Landmark_BerryMastersHouse = {COMPOUND_STRING("BERRY MASTER'S HOUSE"), FLAG_LANDMARK_BERRY_MASTERS_HOUSE};
static const struct Landmark Landmark_IslandCave = {COMPOUND_STRING("ISLAND CAVE"), FLAG_LANDMARK_ISLAND_CAVE};
static const struct Landmark Landmark_DesertRuins = {COMPOUND_STRING("DESERT RUINS"), FLAG_LANDMARK_DESERT_RUINS};
static const struct Landmark Landmark_ScorchedSlab = {COMPOUND_STRING("SCORCHED SLAB"), FLAG_LANDMARK_SCORCHED_SLAB};
static const struct Landmark Landmark_AncientTomb = {COMPOUND_STRING("ANCIENT TOMB"), FLAG_LANDMARK_ANCIENT_TOMB};
static const struct Landmark Landmark_SealedChamber = {COMPOUND_STRING("SEALED CHAMBER"), FLAG_LANDMARK_SEALED_CHAMBER};
static const struct Landmark Landmark_FossilManiacsHouse = {COMPOUND_STRING("FOSSIL MANIAC'S HOUSE"), FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE};
static const struct Landmark Landmark_HuntersHouse = {COMPOUND_STRING("HUNTER'S HOUSE"), FLAG_LANDMARK_HUNTERS_HOUSE};
static const struct Landmark Landmark_SkyPillar = {COMPOUND_STRING("SKY PILLAR"), FLAG_LANDMARK_SKY_PILLAR};
static const struct Landmark Landmark_MirageTower = {COMPOUND_STRING("MIRAGE TOWER"), FLAG_LANDMARK_MIRAGE_TOWER};
static const struct Landmark Landmark_AlteringCave = {COMPOUND_STRING("ALTERING CAVE"), FLAG_LANDMARK_ALTERING_CAVE};
static const struct Landmark Landmark_DesertUnderpass = {COMPOUND_STRING("DESERT UNDERPASS"), FLAG_LANDMARK_DESERT_UNDERPASS};
static const struct Landmark Landmark_TrainerHill = {COMPOUND_STRING("TRAINER HILL"), FLAG_LANDMARK_TRAINER_HILL};
static const struct Landmark Landmark_DracoChamber = {COMPOUND_STRING("DRACO CHAMBER"), FLAG_LANDMARK_DRACO_CHAMBER};
static const struct Landmark Landmark_CaveofShock = {COMPOUND_STRING("CAVE OF SHOCK"), FLAG_LANDMARK_CAVE_OF_SHOCK};

static const struct Landmark *const Landmarks_Route103_2[]  =
{
    &Landmark_AlteringCave,
    NULL,
};

static const struct Landmark *const Landmarks_Route104_0[]  =
{
    &Landmark_FlowerShop,
    NULL,
};

static const struct Landmark *const Landmarks_Route104_1[]  =
{
    &Landmark_PetalburgWoods,
    &Landmark_MrBrineysCottage,
    NULL,
};

static const struct Landmark *const Landmarks_Route105_0[]  =
{
    &Landmark_IslandCave,
    NULL,
};

static const struct Landmark *const Landmarks_Route106_1[]  =
{
    &Landmark_GraniteCave,
    NULL,
};

static const struct Landmark *const Landmarks_Route108_0[]  =
{
    &Landmark_AbandonedShip,
    NULL,
};

static const struct Landmark *const Landmarks_Route109_0[]  =
{
    &Landmark_SeashoreHouse,
    &Landmark_SlateportBeach,
    NULL,
};

static const struct Landmark *const Landmarks_Route110_0[]  =
{
    &Landmark_CyclingRoad,
    &Landmark_NewMauville,
    NULL,
};

static const struct Landmark *const Landmarks_Route110_1[]  =
{
    &Landmark_CyclingRoad,
    NULL,
};

static const struct Landmark *const Landmarks_Route110_2[]  =
{
    &Landmark_CyclingRoad,
    &Landmark_TrickHouse,
    NULL,
};

static const struct Landmark *const Landmarks_Route111_0[]  =
{
    &Landmark_OldLadysRestShop,
    NULL,
};

static const struct Landmark *const Landmarks_Route111_1[]  =
{
    &Landmark_Desert,
    NULL,
};

static const struct Landmark *const Landmarks_Route111_2[]  =
{
    &Landmark_MirageTower,
    &Landmark_Desert,
    NULL,
};

static const struct Landmark *const Landmarks_Route111_3[]  =
{
    &Landmark_DesertRuins,
    &Landmark_Desert,
    NULL,
};

static const struct Landmark *const Landmarks_Route111_4[]  =
{
    &Landmark_TrainerHill,
    &Landmark_WinstrateFamily,
    &Landmark_Desert,
    NULL,
};

static const struct Landmark *const Landmarks_Route112_0[]  =
{
    &Landmark_FieryPath,
    &Landmark_JaggedPass,
    NULL,
};

static const struct Landmark *const Landmarks_Route112_1[]  =
{
    &Landmark_CableCar,
    &Landmark_FieryPath,
    NULL,
};

static const struct Landmark *const Landmarks_Route113_1[]  =
{
    &Landmark_GlassWorkshop,
    NULL,
};

static const struct Landmark *const Landmarks_Route114_1[]  =
{
    &Landmark_DesertUnderpass,
    &Landmark_FossilManiacsHouse,
    NULL,
};

static const struct Landmark *const Landmarks_Route114_2[]  =
{
    &Landmark_BillsHouse,
    NULL,
};

static const struct Landmark *const Landmarks_MeteorFalls[]  =
{
    &Landmark_MeteorFalls,
    NULL,
};

static const struct Landmark *const Landmarks_Route116_1[]  =
{
    &Landmark_TunnelersRestHouse,
    &Landmark_RusturfTunnel,
    NULL,
};

static const struct Landmark *const Landmarks_Route116_2[]  =
{
    &Landmark_RusturfTunnel,
    NULL,
};

static const struct Landmark *const Landmarks_Route117_2[]  =
{
    &Landmark_PokemonDayCare,
    NULL,
};

static const struct Landmark *const Landmarks_Route119_1[]  =
{
    &Landmark_WeatherInstitute,
    NULL,
};

static const struct Landmark *const Landmarks_Route120_0[]  =
{
    &Landmark_ScorchedSlab,
    NULL,
};

static const struct Landmark *const Landmarks_Route120_2[]  =
{
    &Landmark_AncientTomb,
    NULL,
};

static const struct Landmark *const Landmarks_Route121_2[]  =
{
    &Landmark_SafariZoneEntrance,
    NULL,
};

static const struct Landmark *const Landmarks_Route122_0[]  =
{
    &Landmark_MtPyre,
    NULL,
};

static const struct Landmark *const Landmarks_Route123_0[]  =
{
    &Landmark_BerryMastersHouse,
    NULL,
};

static const struct Landmark *const Landmarks_Route124_7[]  =
{
    &Landmark_HuntersHouse,
    NULL,
};

static const struct Landmark *const Landmarks_Route125_2[]  =
{
    &Landmark_ShoalCave,
    NULL,
};

static const struct Landmark *const Landmarks_Route128_1[]  =
{
    &Landmark_SeafloorCavern,
    NULL,
};

static const struct Landmark *const Landmarks_Route131_1[]  =
{
    &Landmark_SkyPillar,
    NULL,
};

static const struct Landmark *const Landmarks_OceanCurrent[]  =
{
    &Landmark_OceanCurrent,
    NULL,
};

static const struct Landmark *const Landmarks_Route134_2[]  =
{
    &Landmark_SealedChamber,
    &Landmark_OceanCurrent,
    NULL,
};

static const struct Landmark *const Landmarks_MtChimney_2[]  =
{
    &Landmark_CableCar,
    &Landmark_JaggedPass,
    NULL,
};

static const struct Landmark *const Landmarks_CaveOfShock_0[]  =
{
    &Landmark_CaveofShock,
    NULL,
};

static const struct Landmark *const Landmarks_DracoChamber_0[]  =
{
    &Landmark_DracoChamber,
    NULL,
};

static const struct LandmarkList sLandmarkLists[] =
{
    {MAPSEC_ROUTE_28, 2, Landmarks_Route103_2},
    {MAPSEC_ROUTE_29, 0, Landmarks_Route104_0},
    {MAPSEC_ROUTE_29, 1, Landmarks_Route104_1},
    {MAPSEC_ROUTE_30, 0, Landmarks_Route105_0},
    {MAPSEC_ROUTE_31, 1, Landmarks_Route106_1},
    {MAPSEC_ROUTE_33, 0, Landmarks_Route108_0},
    {MAPSEC_ROUTE_34, 0, Landmarks_Route109_0},
    {MAPSEC_ROUTE_35, 0, Landmarks_Route110_0},
    {MAPSEC_ROUTE_35, 1, Landmarks_Route110_1},
    {MAPSEC_ROUTE_35, 2, Landmarks_Route110_2},
    {MAPSEC_ROUTE_36, 0, Landmarks_Route111_0},
    {MAPSEC_ROUTE_36, 1, Landmarks_Route111_1},
    {MAPSEC_ROUTE_36, 2, Landmarks_Route111_2},
    {MAPSEC_ROUTE_36, 3, Landmarks_Route111_3},
    {MAPSEC_ROUTE_36, 4, Landmarks_Route111_4},
    {MAPSEC_ROUTE_37, 0, Landmarks_Route112_0},
    {MAPSEC_ROUTE_37, 1, Landmarks_Route112_1},
    {MAPSEC_ROUTE_38, 1, Landmarks_Route113_1},
    {MAPSEC_ROUTE_39, 1, Landmarks_Route114_1},
    {MAPSEC_ROUTE_39, 2, Landmarks_Route114_2},
    {MAPSEC_ROUTE_39, 3, Landmarks_MeteorFalls},
    {MAPSEC_ROUTE_40, 0, Landmarks_MeteorFalls},
    {MAPSEC_ROUTE_40, 1, Landmarks_MeteorFalls},
    {MAPSEC_ROUTE_41, 1, Landmarks_Route116_1},
    {MAPSEC_ROUTE_41, 2, Landmarks_Route116_2},
    {MAPSEC_ROUTE_42, 2, Landmarks_Route117_2},
    {MAPSEC_ROUTE_44, 1, Landmarks_Route119_1},
    {MAPSEC_ROUTE_45, 0, Landmarks_Route120_0},
    {MAPSEC_ROUTE_45, 2, Landmarks_Route120_2},
    {MAPSEC_ROUTE_46, 2, Landmarks_Route121_2},
    {MAPSEC_ROUTE_47, 0, Landmarks_Route122_0},
    {MAPSEC_ROUTE_48, 0, Landmarks_Route123_0},
    {MAPSEC_ROUTE_47, 1, Landmarks_Route122_0},
    {MAPSEC_DARK_CAVE, 7, Landmarks_Route124_7},
    {MAPSEC_UNION_CAVE, 2, Landmarks_Route125_2},
    {MAPSEC_WHIRL_ISLANDS, 1, Landmarks_Route128_1},
    {MAPSEC_LAKE_OF_RAGE, 1, Landmarks_Route131_1},
    {MAPSEC_ICE_PATH, 0, Landmarks_OceanCurrent},
    {MAPSEC_ICE_PATH, 1, Landmarks_OceanCurrent},
    {MAPSEC_MT_SILVER, 0, Landmarks_OceanCurrent},
    {MAPSEC_MT_SILVER, 1, Landmarks_OceanCurrent},
    {MAPSEC_MT_SILVER, 2, Landmarks_OceanCurrent},
    {MAPSEC_TOHJO_FALLS, 0, Landmarks_OceanCurrent},
    {MAPSEC_TOHJO_FALLS, 1, Landmarks_OceanCurrent},
    {MAPSEC_TOHJO_FALLS, 2, Landmarks_Route134_2},
    // {MAPSEC_DRACO_CHAMBER, 0, Landmarks_DracoChamber_0},
    // {MAPSEC_CAVE_OF_SHOCK, 0, Landmarks_CaveOfShock_0},
    {MAPSEC_NONE, 0, NULL},
};

static const struct Landmark *const *GetLandmarks(mapsec_u8_t mapSection, u8 id);

const u8 *GetLandmarkName(mapsec_u8_t mapSection, u8 id, u8 count)
{
    const struct Landmark *const *landmarks = GetLandmarks(mapSection, id);

    if (!landmarks)
        return NULL;

    while (1)
    {
        const struct Landmark *landmark = *landmarks;

        if (landmark->flag == 0xFFFF || FlagGet(landmark->flag) == TRUE)
        {
            if (count == 0)
                break;
            else
                count--;
        }

        landmarks++;
        if (!*landmarks)
            return NULL;
    }

    return (*landmarks)->name;
}

static const struct Landmark *const *GetLandmarks(mapsec_u8_t mapSection, u8 id)
{
    u16 i = 0;

    for (; sLandmarkLists[i].mapSection != MAPSEC_NONE; i++)
    {
        if (sLandmarkLists[i].mapSection > mapSection)
            return NULL;
        if (sLandmarkLists[i].mapSection == mapSection)
            break;
    }

    if (sLandmarkLists[i].mapSection == MAPSEC_NONE)
        return NULL;

    for (; sLandmarkLists[i].mapSection == mapSection; i++)
    {
        if (sLandmarkLists[i].id == id)
            return sLandmarkLists[i].landmarks;
    }

    return NULL;
}
