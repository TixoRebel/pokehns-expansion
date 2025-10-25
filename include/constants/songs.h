#ifndef GUARD_CONSTANTS_SONGS_H
#define GUARD_CONSTANTS_SONGS_H

// Original JP names listed on right, along with any additional notes

#define SOUND_EFFECTS_START                 0x00

#define MUS_DUMMY                        SOUND_EFFECTS_START + 0x00  // MUS_DUMMY
#define SE_USE_ITEM                      SOUND_EFFECTS_START + 0x01  // SE_KAIFUKU
#define SE_PC_LOGIN                      SOUND_EFFECTS_START + 0x02  // SE_PC_LOGIN
#define SE_PC_OFF                        SOUND_EFFECTS_START + 0x03  // SE_PC_OFF
#define SE_PC_ON                         SOUND_EFFECTS_START + 0x04  // SE_PC_ON
#define SE_SELECT                        SOUND_EFFECTS_START + 0x05  // SE_SELECT
#define SE_WIN_OPEN                      SOUND_EFFECTS_START + 0x06  // SE_WIN_OPEN
#define SE_WALL_HIT                      SOUND_EFFECTS_START + 0x07  // SE_WALL_HIT
#define SE_DOOR                          SOUND_EFFECTS_START + 0x08  // SE_DOOR
#define SE_EXIT                          SOUND_EFFECTS_START + 0x09  // SE_KAIDAN
#define SE_LEDGE                         SOUND_EFFECTS_START + 0x0A  // SE_DANSA
#define SE_BIKE_BELL                     SOUND_EFFECTS_START + 0x0B  // SE_JITENSYA
#define SE_NOT_EFFECTIVE                 SOUND_EFFECTS_START + 0x0C  // SE_KOUKA_L
#define SE_EFFECTIVE                     SOUND_EFFECTS_START + 0x0D  // SE_KOUKA_M
#define SE_SUPER_EFFECTIVE               SOUND_EFFECTS_START + 0x0E  // SE_KOUKA_H
#define SE_BALL_OPEN                     SOUND_EFFECTS_START + 0x0F  // SE_BOWA2
#define SE_FAINT                         SOUND_EFFECTS_START + 0x10  // SE_POKE_DEAD
#define SE_FLEE                          SOUND_EFFECTS_START + 0x11  // SE_NIGERU
#define SE_SLIDING_DOOR                  SOUND_EFFECTS_START + 0x12  // SE_JIDO_DOA
#define SE_SHIP                          SOUND_EFFECTS_START + 0x13  // SE_NAMINORI
#define SE_BANG                          SOUND_EFFECTS_START + 0x14  // SE_BAN
#define SE_PIN                           SOUND_EFFECTS_START + 0x15  // SE_PIN (General "good", commonly for 
#define SE_BOO                           SOUND_EFFECTS_START + 0x16  // SE_BOO (General "bad")
#define SE_BALL                          SOUND_EFFECTS_START + 0x17  // SE_BOWA (Giving Poké Ball to nurse, P
#define SE_CONTEST_PLACE                 SOUND_EFFECTS_START + 0x18  // SE_JYUNI
#define SE_A                             SOUND_EFFECTS_START + 0x19  // SE_A (Bard sounds)
#define SE_I                             SOUND_EFFECTS_START + 0x1A  // SE_I
#define SE_U                             SOUND_EFFECTS_START + 0x1B  // SE_U
#define SE_E                             SOUND_EFFECTS_START + 0x1C  // SE_E
#define SE_O                             SOUND_EFFECTS_START + 0x1D  // SE_O
#define SE_N                             SOUND_EFFECTS_START + 0x1E  // SE_N
#define SE_SUCCESS                       SOUND_EFFECTS_START + 0x1F  // SE_SEIKAI
#define SE_FAILURE                       SOUND_EFFECTS_START + 0x20  // SE_HAZURE
#define SE_EXP                           SOUND_EFFECTS_START + 0x21  // SE_EXP
#define SE_BIKE_HOP                      SOUND_EFFECTS_START + 0x22  // SE_JITE_PYOKO
#define SE_SWITCH                        SOUND_EFFECTS_START + 0x23  // SE_MU_PACHI
#define SE_CLICK                         SOUND_EFFECTS_START + 0x24  // SE_TK_KASYA
#define SE_FU_ZAKU                       SOUND_EFFECTS_START + 0x25  // SE_FU_ZAKU (Unknown purpose, unused)
#define SE_CONTEST_CONDITION_LOSE        SOUND_EFFECTS_START + 0x26  // SE_FU_ZAKU2
#define SE_LAVARIDGE_FALL_WARP           SOUND_EFFECTS_START + 0x27  // SE_FU_ZUZUZU
#define SE_ICE_STAIRS                    SOUND_EFFECTS_START + 0x28  // SE_RU_GASHIN
#define SE_ICE_BREAK                     SOUND_EFFECTS_START + 0x29  // SE_RU_GASYAN
#define SE_ICE_CRACK                     SOUND_EFFECTS_START + 0x2A  // SE_RU_BARI
#define SE_FALL                          SOUND_EFFECTS_START + 0x2B  // SE_RU_HYUU
#define SE_UNLOCK                        SOUND_EFFECTS_START + 0x2C  // SE_KI_GASYAN
#define SE_WARP_IN                       SOUND_EFFECTS_START + 0x2D  // SE_TK_WARPIN
#define SE_WARP_OUT                      SOUND_EFFECTS_START + 0x2E  // SE_TK_WARPOUT
#define SE_REPEL                         SOUND_EFFECTS_START + 0x2F  // SE_TU_SAA
#define SE_ROTATING_GATE                 SOUND_EFFECTS_START + 0x30  // SE_HI_TURUN
#define SE_TRUCK_MOVE                    SOUND_EFFECTS_START + 0x31  // SE_TRACK_MOVE
#define SE_TRUCK_STOP                    SOUND_EFFECTS_START + 0x32  // SE_TRACK_STOP
#define SE_TRUCK_UNLOAD                  SOUND_EFFECTS_START + 0x33  // SE_TRACK_HAIKI
#define SE_TRUCK_DOOR                    SOUND_EFFECTS_START + 0x34  // SE_TRACK_DOOR
#define SE_BERRY_BLENDER                 SOUND_EFFECTS_START + 0x35  // SE_MOTER
#define SE_CARD                          SOUND_EFFECTS_START + 0x36  // SE_CARD (Unused, different from the R
#define SE_SAVE                          SOUND_EFFECTS_START + 0x37  // SE_SAVE
#define SE_BALL_BOUNCE_1                 SOUND_EFFECTS_START + 0x38  // SE_KON
#define SE_BALL_BOUNCE_2                 SOUND_EFFECTS_START + 0x39  // SE_KON2
#define SE_BALL_BOUNCE_3                 SOUND_EFFECTS_START + 0x3A  // SE_KON3
#define SE_BALL_BOUNCE_4                 SOUND_EFFECTS_START + 0x3B  // SE_KON4
#define SE_BALL_TRADE                    SOUND_EFFECTS_START + 0x3C  // SE_SUIKOMU
#define SE_BALL_THROW                    SOUND_EFFECTS_START + 0x3D  // SE_NAGERU
#define SE_NOTE_C                        SOUND_EFFECTS_START + 0x3E  // SE_TOY_C
#define SE_NOTE_D                        SOUND_EFFECTS_START + 0x3F  // SE_TOY_D
#define SE_NOTE_E                        SOUND_EFFECTS_START + 0x40  // SE_TOY_E
#define SE_NOTE_F                        SOUND_EFFECTS_START + 0x41  // SE_TOY_F
#define SE_NOTE_G                        SOUND_EFFECTS_START + 0x42  // SE_TOY_G
#define SE_NOTE_A                        SOUND_EFFECTS_START + 0x43  // SE_TOY_A
#define SE_NOTE_B                        SOUND_EFFECTS_START + 0x44  // SE_TOY_B
#define SE_NOTE_C_HIGH                   SOUND_EFFECTS_START + 0x45  // SE_TOY_C1
#define SE_PUDDLE                        SOUND_EFFECTS_START + 0x46  // SE_MIZU
#define SE_BRIDGE_WALK                   SOUND_EFFECTS_START + 0x47  // SE_HASHI
#define SE_ITEMFINDER                    SOUND_EFFECTS_START + 0x48  // SE_DAUGI
#define SE_DING_DONG                     SOUND_EFFECTS_START + 0x49  // SE_PINPON
#define SE_BALLOON_RED                   SOUND_EFFECTS_START + 0x4A  // SE_FUUSEN1
#define SE_BALLOON_BLUE                  SOUND_EFFECTS_START + 0x4B  // SE_FUUSEN2
#define SE_BALLOON_YELLOW                SOUND_EFFECTS_START + 0x4C  // SE_FUUSEN3
#define SE_BREAKABLE_DOOR                SOUND_EFFECTS_START + 0x4D  // SE_TOY_KABE
#define SE_MUD_BALL                      SOUND_EFFECTS_START + 0x4E  // SE_TOY_DANGO
#define SE_FIELD_POISON                  SOUND_EFFECTS_START + 0x4F  // SE_DOKU
#define SE_ESCALATOR                     SOUND_EFFECTS_START + 0x50  // SE_ESUKA
#define SE_THUNDERSTORM                  SOUND_EFFECTS_START + 0x51  // SE_T_AME
#define SE_THUNDERSTORM_STOP             SOUND_EFFECTS_START + 0x52  // SE_T_AME_E
#define SE_DOWNPOUR                      SOUND_EFFECTS_START + 0x53  // SE_T_OOAME
#define SE_DOWNPOUR_STOP                 SOUND_EFFECTS_START + 0x54  // SE_T_OOAME_E
#define SE_RAIN                          SOUND_EFFECTS_START + 0x55  // SE_T_KOAME
#define SE_RAIN_STOP                     SOUND_EFFECTS_START + 0x56  // SE_T_KOAME_E
#define SE_THUNDER                       SOUND_EFFECTS_START + 0x57  // SE_T_KAMI
#define SE_THUNDER2                      SOUND_EFFECTS_START + 0x58  // SE_T_KAMI2
#define SE_ELEVATOR                      SOUND_EFFECTS_START + 0x59  // SE_ELEBETA
#define SE_LOW_HEALTH                    SOUND_EFFECTS_START + 0x5A  // SE_HINSI
#define SE_EXP_MAX                       SOUND_EFFECTS_START + 0x5B  // SE_EXPMAX
#define SE_ROULETTE_BALL                 SOUND_EFFECTS_START + 0x5C  // SE_TAMAKORO
#define SE_ROULETTE_BALL2                SOUND_EFFECTS_START + 0x5D  // SE_TAMAKORO_E
#define SE_TAILLOW_WING_FLAP             SOUND_EFFECTS_START + 0x5E  // SE_BASABASA
#define SE_SHOP                          SOUND_EFFECTS_START + 0x5F  // SE_REGI
#define SE_CONTEST_HEART                 SOUND_EFFECTS_START + 0x60  // SE_C_GAJI
#define SE_CONTEST_CURTAIN_RISE          SOUND_EFFECTS_START + 0x61  // SE_C_MAKU_U
#define SE_CONTEST_CURTAIN_FALL          SOUND_EFFECTS_START + 0x62  // SE_C_MAKU_D
#define SE_CONTEST_ICON_CHANGE           SOUND_EFFECTS_START + 0x63  // SE_C_PASI
#define SE_CONTEST_ICON_CLEAR            SOUND_EFFECTS_START + 0x64  // SE_C_SYU
#define SE_CONTEST_MONS_TURN             SOUND_EFFECTS_START + 0x65  // SE_C_PIKON
#define SE_SHINY                         SOUND_EFFECTS_START + 0x66  // SE_REAPOKE
#define SE_INTRO_BLAST                   SOUND_EFFECTS_START + 0x67  // SE_OP_BASYU
#define SE_MUGSHOT                       SOUND_EFFECTS_START + 0x68  // SE_BT_START
#define SE_APPLAUSE                      SOUND_EFFECTS_START + 0x69  // SE_DENDOU
#define SE_VEND                          SOUND_EFFECTS_START + 0x6A  // SE_JIHANKI
#define SE_ORB                           SOUND_EFFECTS_START + 0x6B  // SE_TAMA
#define SE_DEX_SCROLL                    SOUND_EFFECTS_START + 0x6C  // SE_Z_SCROLL
#define SE_DEX_PAGE                      SOUND_EFFECTS_START + 0x6D  // SE_Z_PAGE
#define SE_POKENAV_ON                    SOUND_EFFECTS_START + 0x6E  // SE_PN_ON
#define SE_POKENAV_OFF                   SOUND_EFFECTS_START + 0x6F  // SE_PN_OFF
#define SE_DEX_SEARCH                    SOUND_EFFECTS_START + 0x70  // SE_Z_SEARCH
#define SE_EGG_HATCH                     SOUND_EFFECTS_START + 0x71  // SE_TAMAGO
#define SE_BALL_TRAY_ENTER               SOUND_EFFECTS_START + 0x72  // SE_TB_START
#define SE_BALL_TRAY_BALL                SOUND_EFFECTS_START + 0x73  // SE_TB_KON
#define SE_BALL_TRAY_EXIT                SOUND_EFFECTS_START + 0x74  // SE_TB_KARA
#define SE_GLASS_FLUTE                   SOUND_EFFECTS_START + 0x75  // SE_BIDORO
// Move SFX 
#define SE_MOVES_START                   SE_GLASS_FLUTE + 0x01

#define SE_M_THUNDERBOLT                 SE_MOVES_START + 0x00  // SE_W085
#define SE_M_THUNDERBOLT2                SE_MOVES_START + 0x01  // SE_W085B
#define SE_M_HARDEN                      SE_MOVES_START + 0x02  // SE_W231
#define SE_M_NIGHTMARE                   SE_MOVES_START + 0x03  // SE_W171
#define SE_M_VITAL_THROW                 SE_MOVES_START + 0x04  // SE_W233
#define SE_M_VITAL_THROW2                SE_MOVES_START + 0x05  // SE_W233B
#define SE_M_BUBBLE                      SE_MOVES_START + 0x06  // SE_W145
#define SE_M_BUBBLE2                     SE_MOVES_START + 0x07  // SE_W145B
#define SE_M_BUBBLE3                     SE_MOVES_START + 0x08  // SE_W145C
#define SE_M_RAIN_DANCE                  SE_MOVES_START + 0x09  // SE_W240
#define SE_M_CUT                         SE_MOVES_START + 0x0A  // SE_W015
#define SE_M_STRING_SHOT                 SE_MOVES_START + 0x0B  // SE_W081
#define SE_M_STRING_SHOT2                SE_MOVES_START + 0x0C  // SE_W081B
#define SE_M_ROCK_THROW                  SE_MOVES_START + 0x0D  // SE_W088
#define SE_M_GUST                        SE_MOVES_START + 0x0E  // SE_W016
#define SE_M_GUST2                       SE_MOVES_START + 0x0F  // SE_W016B
#define SE_M_DOUBLE_SLAP                 SE_MOVES_START + 0x10  // SE_W003
#define SE_M_DOUBLE_TEAM                 SE_MOVES_START + 0x11  // SE_W104
#define SE_M_RAZOR_WIND                  SE_MOVES_START + 0x12  // SE_W013
#define SE_M_ICY_WIND                    SE_MOVES_START + 0x13  // SE_W196
#define SE_M_THUNDER_WAVE                SE_MOVES_START + 0x14  // SE_W086
#define SE_M_COMET_PUNCH                 SE_MOVES_START + 0x15  // SE_W004
#define SE_M_MEGA_KICK                   SE_MOVES_START + 0x16  // SE_W025
#define SE_M_MEGA_KICK2                  SE_MOVES_START + 0x17  // SE_W025B
#define SE_M_CRABHAMMER                  SE_MOVES_START + 0x18  // SE_W152
#define SE_M_JUMP_KICK                   SE_MOVES_START + 0x19  // SE_W026
#define SE_M_FLAME_WHEEL                 SE_MOVES_START + 0x1A  // SE_W172
#define SE_M_FLAME_WHEEL2                SE_MOVES_START + 0x1B  // SE_W172B
#define SE_M_FLAMETHROWER                SE_MOVES_START + 0x1C  // SE_W053
#define SE_M_FIRE_PUNCH                  SE_MOVES_START + 0x1D  // SE_W007
#define SE_M_TOXIC                       SE_MOVES_START + 0x1E  // SE_W092
#define SE_M_SACRED_FIRE                 SE_MOVES_START + 0x1F  // SE_W221
#define SE_M_SACRED_FIRE2                SE_MOVES_START + 0x20  // SE_W221B
#define SE_M_EMBER                       SE_MOVES_START + 0x21  // SE_W052
#define SE_M_TAKE_DOWN                   SE_MOVES_START + 0x22  // SE_W036
#define SE_M_BLIZZARD                    SE_MOVES_START + 0x23  // SE_W059
#define SE_M_BLIZZARD2                   SE_MOVES_START + 0x24  // SE_W059B
#define SE_M_SCRATCH                     SE_MOVES_START + 0x25  // SE_W010
#define SE_M_VICEGRIP                    SE_MOVES_START + 0x26  // SE_W011
#define SE_M_WING_ATTACK                 SE_MOVES_START + 0x27  // SE_W017
#define SE_M_FLY                         SE_MOVES_START + 0x28  // SE_W019
#define SE_M_SAND_ATTACK                 SE_MOVES_START + 0x29  // SE_W028
#define SE_M_RAZOR_WIND2                 SE_MOVES_START + 0x2A  // SE_W013B
#define SE_M_BITE                        SE_MOVES_START + 0x2B  // SE_W044
#define SE_M_HEADBUTT                    SE_MOVES_START + 0x2C  // SE_W029
#define SE_M_SURF                        SE_MOVES_START + 0x2D  // SE_W057
#define SE_M_HYDRO_PUMP                  SE_MOVES_START + 0x2E  // SE_W056
#define SE_M_WHIRLPOOL                   SE_MOVES_START + 0x2F  // SE_W250
#define SE_M_HORN_ATTACK                 SE_MOVES_START + 0x30  // SE_W030
#define SE_M_TAIL_WHIP                   SE_MOVES_START + 0x31  // SE_W039
#define SE_M_MIST                        SE_MOVES_START + 0x32  // SE_W054
#define SE_M_POISON_POWDER               SE_MOVES_START + 0x33  // SE_W077
#define SE_M_BIND                        SE_MOVES_START + 0x34  // SE_W020
#define SE_M_DRAGON_RAGE                 SE_MOVES_START + 0x35  // SE_W082
#define SE_M_SING                        SE_MOVES_START + 0x36  // SE_W047
#define SE_M_PERISH_SONG                 SE_MOVES_START + 0x37  // SE_W195
#define SE_M_PAY_DAY                     SE_MOVES_START + 0x38  // SE_W006
#define SE_M_DIG                         SE_MOVES_START + 0x39  // SE_W091
#define SE_M_DIZZY_PUNCH                 SE_MOVES_START + 0x3A  // SE_W146
#define SE_M_SELF_DESTRUCT               SE_MOVES_START + 0x3B  // SE_W120
#define SE_M_EXPLOSION                   SE_MOVES_START + 0x3C  // SE_W153
#define SE_M_ABSORB_2                    SE_MOVES_START + 0x3D  // SE_W071B
#define SE_M_ABSORB                      SE_MOVES_START + 0x3E  // SE_W071
#define SE_M_SCREECH                     SE_MOVES_START + 0x3F  // SE_W103
#define SE_M_BUBBLE_BEAM                 SE_MOVES_START + 0x40  // SE_W062
#define SE_M_BUBBLE_BEAM2                SE_MOVES_START + 0x41  // SE_W062B
#define SE_M_SUPERSONIC                  SE_MOVES_START + 0x42  // SE_W048
#define SE_M_BELLY_DRUM                  SE_MOVES_START + 0x43  // SE_W187
#define SE_M_METRONOME                   SE_MOVES_START + 0x44  // SE_W118
#define SE_M_BONEMERANG                  SE_MOVES_START + 0x45  // SE_W155
#define SE_M_LICK                        SE_MOVES_START + 0x46  // SE_W122
#define SE_M_PSYBEAM                     SE_MOVES_START + 0x47  // SE_W060
#define SE_M_FAINT_ATTACK                SE_MOVES_START + 0x48  // SE_W185
#define SE_M_SWORDS_DANCE                SE_MOVES_START + 0x49  // SE_W014
#define SE_M_LEER                        SE_MOVES_START + 0x4A  // SE_W043
#define SE_M_SWAGGER                     SE_MOVES_START + 0x4B  // SE_W207
#define SE_M_SWAGGER2                    SE_MOVES_START + 0x4C  // SE_W207B
#define SE_M_HEAL_BELL                   SE_MOVES_START + 0x4D  // SE_W215
#define SE_M_CONFUSE_RAY                 SE_MOVES_START + 0x4E  // SE_W109
#define SE_M_SNORE                       SE_MOVES_START + 0x4F  // SE_W173
#define SE_M_BRICK_BREAK                 SE_MOVES_START + 0x50  // SE_W280
#define SE_M_GIGA_DRAIN                  SE_MOVES_START + 0x51  // SE_W202
#define SE_M_PSYBEAM2                    SE_MOVES_START + 0x52  // SE_W060B
#define SE_M_SOLAR_BEAM                  SE_MOVES_START + 0x53  // SE_W076
#define SE_M_PETAL_DANCE                 SE_MOVES_START + 0x54  // SE_W080
#define SE_M_TELEPORT                    SE_MOVES_START + 0x55  // SE_W100
#define SE_M_MINIMIZE                    SE_MOVES_START + 0x56  // SE_W107
#define SE_M_SKETCH                      SE_MOVES_START + 0x57  // SE_W166
#define SE_M_SWIFT                       SE_MOVES_START + 0x58  // SE_W129
#define SE_M_REFLECT                     SE_MOVES_START + 0x59  // SE_W115
#define SE_M_BARRIER                     SE_MOVES_START + 0x5A  // SE_W112
#define SE_M_DETECT                      SE_MOVES_START + 0x5B  // SE_W197
#define SE_M_LOCK_ON                     SE_MOVES_START + 0x5C  // SE_W199
#define SE_M_MOONLIGHT                   SE_MOVES_START + 0x5D  // SE_W236
#define SE_M_CHARM                       SE_MOVES_START + 0x5E  // SE_W204
#define SE_M_CHARGE                      SE_MOVES_START + 0x5F  // SE_W268
#define SE_M_STRENGTH                    SE_MOVES_START + 0x60  // SE_W070
#define SE_M_HYPER_BEAM                  SE_MOVES_START + 0x61  // SE_W063
#define SE_M_WATERFALL                   SE_MOVES_START + 0x62  // SE_W127
#define SE_M_REVERSAL                    SE_MOVES_START + 0x63  // SE_W179
#define SE_M_ACID_ARMOR                  SE_MOVES_START + 0x64  // SE_W151
#define SE_M_SANDSTORM                   SE_MOVES_START + 0x65  // SE_W201
#define SE_M_TRI_ATTACK                  SE_MOVES_START + 0x66  // SE_W161
#define SE_M_TRI_ATTACK2                 SE_MOVES_START + 0x67  // SE_W161B
#define SE_M_ENCORE                      SE_MOVES_START + 0x68  // SE_W227
#define SE_M_ENCORE2                     SE_MOVES_START + 0x69  // SE_W227B
#define SE_M_BATON_PASS                  SE_MOVES_START + 0x6A  // SE_W226
#define SE_M_MILK_DRINK                  SE_MOVES_START + 0x6B  // SE_W208
#define SE_M_ATTRACT                     SE_MOVES_START + 0x6C  // SE_W213
#define SE_M_ATTRACT2                    SE_MOVES_START + 0x6D  // SE_W213B
#define SE_M_MORNING_SUN                 SE_MOVES_START + 0x6E  // SE_W234
#define SE_M_FLATTER                     SE_MOVES_START + 0x6F  // SE_W260
#define SE_M_SAND_TOMB                   SE_MOVES_START + 0x70  // SE_W328
#define SE_M_GRASSWHISTLE                SE_MOVES_START + 0x71  // SE_W320
#define SE_M_SPIT_UP                     SE_MOVES_START + 0x72  // SE_W255
#define SE_M_DIVE                        SE_MOVES_START + 0x73  // SE_W291
#define SE_M_EARTHQUAKE                  SE_MOVES_START + 0x74  // SE_W089
#define SE_M_TWISTER                     SE_MOVES_START + 0x75  // SE_W239
#define SE_M_SWEET_SCENT                 SE_MOVES_START + 0x76  // SE_W230
#define SE_M_YAWN                        SE_MOVES_START + 0x77  // SE_W281
#define SE_M_SKY_UPPERCUT                SE_MOVES_START + 0x78  // SE_W327
#define SE_M_STAT_INCREASE               SE_MOVES_START + 0x79  // SE_W287
#define SE_M_HEAT_WAVE                   SE_MOVES_START + 0x7A  // SE_W257
#define SE_M_UPROAR                      SE_MOVES_START + 0x7B  // SE_W253
#define SE_M_HAIL                        SE_MOVES_START + 0x7C  // SE_W258
#define SE_M_COSMIC_POWER                SE_MOVES_START + 0x7D  // SE_W322
#define SE_M_TEETER_DANCE                SE_MOVES_START + 0x7E  // SE_W298
#define SE_M_STAT_DECREASE               SE_MOVES_START + 0x7F  // SE_W287B
#define SE_M_HAZE                        SE_MOVES_START + 0x80  // SE_W114
#define SE_M_HYPER_BEAM2                 SE_MOVES_START + 0x81  // SE_W063B

// FRLG SFX 
#define SE_FRLG_START                      SE_M_HYPER_BEAM2 + 0x01

#define SE_RG_DOOR                       SE_FRLG_START + 0x00  // SE_RG_W_DOOR
#define SE_RG_CARD_FLIP                  SE_FRLG_START + 0x01  // SE_RG_CARD1
#define SE_RG_CARD_FLIPPING              SE_FRLG_START + 0x02  // SE_RG_CARD2
#define SE_RG_CARD_OPEN                  SE_FRLG_START + 0x03  // SE_RG_CARD3
#define SE_RG_BAG_CURSOR                 SE_FRLG_START + 0x04  // SE_RG_BAG1
#define SE_RG_BAG_POCKET                 SE_FRLG_START + 0x05  // SE_RG_BAG2
#define SE_RG_BALL_CLICK                 SE_FRLG_START + 0x06  // SE_RG_GETTING
#define SE_RG_SHOP                       SE_FRLG_START + 0x07  // SE_RG_SHOP
#define SE_RG_SS_ANNE_HORN               SE_FRLG_START + 0x08  // SE_RG_KITEKI
#define SE_RG_HELP_OPEN                  SE_FRLG_START + 0x09  // SE_RG_HELP_OP
#define SE_RG_HELP_CLOSE                 SE_FRLG_START + 0x0A  // SE_RG_HELP_CL
#define SE_RG_HELP_ERROR                 SE_FRLG_START + 0x0B  // SE_RG_HELP_NG
#define SE_RG_DEOXYS_MOVE                SE_FRLG_START + 0x0C  // SE_RG_DEOMOV
#define SE_RG_POKE_JUMP_SUCCESS          SE_FRLG_START + 0x0D  // SE_RG_EXCELLENT
#define SE_RG_POKE_JUMP_FAILURE          SE_FRLG_START + 0x0E  // SE_RG_NAWAMISS 

// Emerald SFX 
#define SE_EMERALD_START                      SE_RG_POKE_JUMP_FAILURE + 0x01

#define SE_POKENAV_CALL                  SE_EMERALD_START + 0x00  // SE_TOREEYE
#define SE_POKENAV_HANG_UP               SE_EMERALD_START + 0x01  // SE_TOREOFF
#define SE_ARENA_TIMEUP1                 SE_EMERALD_START + 0x02  // SE_HANTEI1
#define SE_ARENA_TIMEUP2                 SE_EMERALD_START + 0x03  // SE_HANTEI2
#define SE_PIKE_CURTAIN_CLOSE            SE_EMERALD_START + 0x04  // SE_CURTAIN
#define SE_PIKE_CURTAIN_OPEN             SE_EMERALD_START + 0x05  // SE_CURTAIN1
#define SE_SUDOWOODO_SHAKE               SE_EMERALD_START + 0x06  // SE_USSOKI

// Bard SFX
#define SE_BARD_START                      SE_SUDOWOODO_SHAKE + 0x01

#define PH_TRAP_BLEND                    SE_BARD_START + 0x00
#define PH_TRAP_HELD                     SE_BARD_START + 0x01
#define PH_TRAP_SOLO                     SE_BARD_START + 0x02
#define PH_FACE_BLEND                    SE_BARD_START + 0x03
#define PH_FACE_HELD                     SE_BARD_START + 0x04
#define PH_FACE_SOLO                     SE_BARD_START + 0x05
#define PH_CLOTH_BLEND                   SE_BARD_START + 0x06
#define PH_CLOTH_HELD                    SE_BARD_START + 0x07
#define PH_CLOTH_SOLO                    SE_BARD_START + 0x08
#define PH_DRESS_BLEND                   SE_BARD_START + 0x09
#define PH_DRESS_HELD                    SE_BARD_START + 0x0A
#define PH_DRESS_SOLO                    SE_BARD_START + 0x0B
#define PH_FLEECE_BLEND                  SE_BARD_START + 0x0C
#define PH_FLEECE_HELD                   SE_BARD_START + 0x0D
#define PH_FLEECE_SOLO                   SE_BARD_START + 0x0E
#define PH_KIT_BLEND                     SE_BARD_START + 0x0F
#define PH_KIT_HELD                      SE_BARD_START + 0x10
#define PH_KIT_SOLO                      SE_BARD_START + 0x11
#define PH_PRICE_BLEND                   SE_BARD_START + 0x12
#define PH_PRICE_HELD                    SE_BARD_START + 0x13
#define PH_PRICE_SOLO                    SE_BARD_START + 0x14
#define PH_LOT_BLEND                     SE_BARD_START + 0x15
#define PH_LOT_HELD                      SE_BARD_START + 0x16
#define PH_LOT_SOLO                      SE_BARD_START + 0x17
#define PH_GOAT_BLEND                    SE_BARD_START + 0x18
#define PH_GOAT_HELD                     SE_BARD_START + 0x19
#define PH_GOAT_SOLO                     SE_BARD_START + 0x1A
#define PH_THOUGHT_BLEND                 SE_BARD_START + 0x1B
#define PH_THOUGHT_HELD                  SE_BARD_START + 0x1C
#define PH_THOUGHT_SOLO                  SE_BARD_START + 0x1D
#define PH_CHOICE_BLEND                  SE_BARD_START + 0x1E
#define PH_CHOICE_HELD                   SE_BARD_START + 0x1F
#define PH_CHOICE_SOLO                   SE_BARD_START + 0x20
#define PH_MOUTH_BLEND                   SE_BARD_START + 0x21
#define PH_MOUTH_HELD                    SE_BARD_START + 0x22
#define PH_MOUTH_SOLO                    SE_BARD_START + 0x23
#define PH_FOOT_BLEND                    SE_BARD_START + 0x24
#define PH_FOOT_HELD                     SE_BARD_START + 0x25
#define PH_FOOT_SOLO                     SE_BARD_START + 0x26
#define PH_GOOSE_BLEND                   SE_BARD_START + 0x27
#define PH_GOOSE_HELD                    SE_BARD_START + 0x28
#define PH_GOOSE_SOLO                    SE_BARD_START + 0x29
#define PH_STRUT_BLEND                   SE_BARD_START + 0x2A
#define PH_STRUT_HELD                    SE_BARD_START + 0x2B
#define PH_STRUT_SOLO                    SE_BARD_START + 0x2C
#define PH_CURE_BLEND                    SE_BARD_START + 0x2D
#define PH_CURE_HELD                     SE_BARD_START + 0x2E
#define PH_CURE_SOLO                     SE_BARD_START + 0x2F
#define PH_NURSE_BLEND                   SE_BARD_START + 0x30
#define PH_NURSE_HELD                    SE_BARD_START + 0x31
#define PH_NURSE_SOLO                    SE_BARD_START + 0x32

#define SOUND_EFFECTS_END                 PH_NURSE_SOLO

#define SONGS_START                        SOUND_EFFECTS_END + 0x01

// Ruby & Sapphire Music 
#define RS_MUSIC_START                    SONGS_START

#define MUS_LITTLEROOT_TEST              RS_MUSIC_START + 0x00  // MUS_TETSUJI
#define MUS_GSC_ROUTE38                  RS_MUSIC_START + 0x01  // MUS_FIELD13
#define MUS_CAUGHT                       RS_MUSIC_START + 0x02  // MUS_KACHI22
#define MUS_VICTORY_WILD                 RS_MUSIC_START + 0x03  // MUS_KACHI2
#define MUS_VICTORY_GYM_LEADER           RS_MUSIC_START + 0x04  // MUS_KACHI3
#define MUS_VICTORY_LEAGUE               RS_MUSIC_START + 0x05  // MUS_KACHI5
#define MUS_C_COMM_CENTER                RS_MUSIC_START + 0x06  // MUS_PCC
#define MUS_GSC_PEWTER                   RS_MUSIC_START + 0x07  // MUS_NIBI
#define MUS_C_VS_LEGEND_BEAST            RS_MUSIC_START + 0x08  // MUS_SUIKUN
#define MUS_ROUTE101                     RS_MUSIC_START + 0x09  // MUS_DOORO1
#define MUS_ROUTE110                     RS_MUSIC_START + 0x0A  // MUS_DOORO_X1
#define MUS_ROUTE120                     RS_MUSIC_START + 0x0B  // MUS_DOORO_X3
#define MUS_PETALBURG                    RS_MUSIC_START + 0x0C  // MUS_MACHI_S2
#define MUS_OLDALE                       RS_MUSIC_START + 0x0D  // MUS_MACHI_S4
#define MUS_GYM                          RS_MUSIC_START + 0x0E  // MUS_GIM
#define MUS_SURF                         RS_MUSIC_START + 0x0F  // MUS_NAMINORI
#define MUS_PETALBURG_WOODS              RS_MUSIC_START + 0x10  // MUS_DAN01
#define MUS_LEVEL_UP                     RS_MUSIC_START + 0x11  // MUS_FANFA1
#define MUS_HEAL                         RS_MUSIC_START + 0x12  // MUS_ME_ASA
#define MUS_OBTAIN_BADGE                 RS_MUSIC_START + 0x13  // MUS_ME_BACHI
#define MUS_OBTAIN_ITEM                  RS_MUSIC_START + 0x14  // MUS_FANFA4
#define MUS_EVOLVED                      RS_MUSIC_START + 0x15  // MUS_FANFA5
#define MUS_OBTAIN_TMHM                  RS_MUSIC_START + 0x16  // MUS_ME_WAZA
#define MUS_LILYCOVE_MUSEUM              RS_MUSIC_START + 0x17  // MUS_BIJYUTU
#define MUS_ROUTE122                     RS_MUSIC_START + 0x18  // MUS_DOORO_X4
#define MUS_OCEANIC_MUSEUM               RS_MUSIC_START + 0x19  // MUS_FUNE_KAN
#define MUS_EVOLUTION_INTRO              RS_MUSIC_START + 0x1A  // MUS_ME_SHINKA
#define MUS_EVOLUTION                    RS_MUSIC_START + 0x1B  // MUS_SHINKA
#define MUS_MOVE_DELETED                 RS_MUSIC_START + 0x1C  // MUS_ME_WASURE
#define MUS_ENCOUNTER_GIRL               RS_MUSIC_START + 0x1D  // MUS_SYOUJOEYE
#define MUS_ENCOUNTER_MALE               RS_MUSIC_START + 0x1E  // MUS_BOYEYE
#define MUS_ABANDONED_SHIP               RS_MUSIC_START + 0x1F  // MUS_DAN02
#define MUS_FORTREE                      RS_MUSIC_START + 0x20  // MUS_MACHI_S3
#define MUS_BIRCH_LAB                    RS_MUSIC_START + 0x21  // MUS_ODAMAKI
#define MUS_B_TOWER_RS                   RS_MUSIC_START + 0x22  // MUS_B_TOWER
#define MUS_ENCOUNTER_SWIMMER            RS_MUSIC_START + 0x23  // MUS_SWIMEYE
#define MUS_CAVE_OF_ORIGIN               RS_MUSIC_START + 0x24  // MUS_DAN03
#define MUS_OBTAIN_BERRY                 RS_MUSIC_START + 0x25  // MUS_ME_KINOMI
#define MUS_AWAKEN_LEGEND                RS_MUSIC_START + 0x26  // MUS_ME_TAMA
#define MUS_SLOTS_JACKPOT                RS_MUSIC_START + 0x27  // MUS_ME_B_BIG
#define MUS_SLOTS_WIN                    RS_MUSIC_START + 0x28  // MUS_ME_B_SMALL
#define MUS_TOO_BAD                      RS_MUSIC_START + 0x29  // MUS_ME_ZANNEN
#define MUS_ROULETTE                     RS_MUSIC_START + 0x2A  // MUS_BD_TIME
#define MUS_LINK_CONTEST_P1              RS_MUSIC_START + 0x2B  // MUS_TEST1
#define MUS_LINK_CONTEST_P2              RS_MUSIC_START + 0x2C  // MUS_TEST2
#define MUS_LINK_CONTEST_P3              RS_MUSIC_START + 0x2D  // MUS_TEST3
#define MUS_LINK_CONTEST_P4              RS_MUSIC_START + 0x2E  // MUS_TEST4
#define MUS_ENCOUNTER_RICH               RS_MUSIC_START + 0x2F  // MUS_TEST
#define MUS_VERDANTURF                   RS_MUSIC_START + 0x30  // MUS_GOMACHI0
#define MUS_RUSTBORO                     RS_MUSIC_START + 0x31  // MUS_GOTOWN
#define MUS_POKE_CENTER                  RS_MUSIC_START + 0x32  // MUS_POKECEN
#define MUS_ROUTE104                     RS_MUSIC_START + 0x33  // MUS_NEXTROAD
#define MUS_ROUTE119                     RS_MUSIC_START + 0x34  // MUS_GRANROAD
#define MUS_CYCLING                      RS_MUSIC_START + 0x35  // MUS_CYCLING
#define MUS_POKE_MART                    RS_MUSIC_START + 0x36  // MUS_FRIENDLY
#define MUS_LITTLEROOT                   RS_MUSIC_START + 0x37  // MUS_MISHIRO
#define MUS_MT_CHIMNEY                   RS_MUSIC_START + 0x38  // MUS_TOZAN
#define MUS_ENCOUNTER_FEMALE             RS_MUSIC_START + 0x39  // MUS_GIRLEYE
#define MUS_LILYCOVE                     RS_MUSIC_START + 0x3A  // MUS_MINAMO
#define MUS_DESERT                       RS_MUSIC_START + 0x3B  // MUS_ASHROAD
#define MUS_HELP                         RS_MUSIC_START + 0x3C  // MUS_EVENT0
#define MUS_UNDERWATER                   RS_MUSIC_START + 0x3D  // MUS_DEEPDEEP
#define MUS_VICTORY_TRAINER              RS_MUSIC_START + 0x3E  // MUS_KACHI1
#define MUS_TITLE                        RS_MUSIC_START + 0x3F  // MUS_TITLE3
#define MUS_INTRO                        RS_MUSIC_START + 0x40  // MUS_DEMO1
#define MUS_ENCOUNTER_MAY                RS_MUSIC_START + 0x41  // MUS_GIRL_SUP
#define MUS_ENCOUNTER_INTENSE            RS_MUSIC_START + 0x42  // MUS_HAGESHII
#define MUS_ENCOUNTER_COOL               RS_MUSIC_START + 0x43  // MUS_KAKKOII
#define MUS_ROUTE113                     RS_MUSIC_START + 0x44  // MUS_KAZANBAI
#define MUS_ENCOUNTER_AQUA               RS_MUSIC_START + 0x45  // MUS_AQA_0
#define MUS_FOLLOW_ME                    RS_MUSIC_START + 0x46  // MUS_TSURETEK
#define MUS_ENCOUNTER_BRENDAN            RS_MUSIC_START + 0x47  // MUS_BOY_SUP
#define MUS_EVER_GRANDE                  RS_MUSIC_START + 0x48  // MUS_RAINBOW
#define MUS_ENCOUNTER_SUSPICIOUS         RS_MUSIC_START + 0x49  // MUS_AYASII
#define MUS_VICTORY_AQUA_MAGMA           RS_MUSIC_START + 0x4A  // MUS_KACHI4
#define MUS_CABLE_CAR                    RS_MUSIC_START + 0x4B  // MUS_ROPEWAY
#define MUS_GAME_CORNER                  RS_MUSIC_START + 0x4C  // MUS_CASINO
#define MUS_DEWFORD                      RS_MUSIC_START + 0x4D  // MUS_HIGHTOWN
#define MUS_SAFARI_ZONE                  RS_MUSIC_START + 0x4E  // MUS_SAFARI
#define MUS_VICTORY_ROAD                 RS_MUSIC_START + 0x4F  // MUS_C_ROAD
#define MUS_AQUA_MAGMA_HIDEOUT           RS_MUSIC_START + 0x50  // MUS_AJITO
#define MUS_SAILING                      RS_MUSIC_START + 0x51  // MUS_M_BOAT
#define MUS_MT_PYRE                      RS_MUSIC_START + 0x52  // MUS_M_DUNGON
#define MUS_SLATEPORT                    RS_MUSIC_START + 0x53  // MUS_FINECITY
#define MUS_MT_PYRE_EXTERIOR             RS_MUSIC_START + 0x54  // MUS_MACHUPI
#define MUS_SCHOOL                       RS_MUSIC_START + 0x55  // MUS_P_SCHOOL
#define MUS_HALL_OF_FAME                 RS_MUSIC_START + 0x56  // MUS_DENDOU
#define MUS_FALLARBOR                    RS_MUSIC_START + 0x57  // MUS_TONEKUSA
#define MUS_SEALED_CHAMBER               RS_MUSIC_START + 0x58  // MUS_MABOROSI
#define MUS_CONTEST_WINNER               RS_MUSIC_START + 0x59  // MUS_CON_FAN
#define MUS_CONTEST                      RS_MUSIC_START + 0x5A  // MUS_CONTEST0
#define MUS_ENCOUNTER_MAGMA              RS_MUSIC_START + 0x5B  // MUS_MGM0
#define MUS_INTRO_BATTLE                 RS_MUSIC_START + 0x5C  // MUS_T_BATTLE
#define MUS_WEATHER_KYOGRE               RS_MUSIC_START + 0x5D  // old MUS_OOAME (Unused, from R/S)
#define MUS_WEATHER_GROUDON              RS_MUSIC_START + 0x5E  // MUS_HIDERI (Unused, from R/S)
#define MUS_SOOTOPOLIS                   RS_MUSIC_START + 0x5F  // MUS_RUNECITY
#define MUS_CONTEST_RESULTS              RS_MUSIC_START + 0x60  // MUS_CON_K
#define MUS_HALL_OF_FAME_ROOM            RS_MUSIC_START + 0x61  // MUS_EIKOU_R
#define MUS_TRICK_HOUSE                  RS_MUSIC_START + 0x62  // MUS_KARAKURI
#define MUS_ENCOUNTER_TWINS              RS_MUSIC_START + 0x63  // MUS_HUTAGO
#define MUS_ENCOUNTER_ELITE_FOUR         RS_MUSIC_START + 0x64  // MUS_SITENNOU
#define MUS_ENCOUNTER_HIKER              RS_MUSIC_START + 0x65  // MUS_YAMA_EYE
#define MUS_CONTEST_LOBBY                RS_MUSIC_START + 0x66  // MUS_CONLOBBY
#define MUS_ENCOUNTER_INTERVIEWER        RS_MUSIC_START + 0x67  // MUS_INTER_V
#define MUS_ENCOUNTER_CHAMPION           RS_MUSIC_START + 0x68  // MUS_DAIGO
#define MUS_CREDITS                      RS_MUSIC_START + 0x69  // MUS_THANKFOR
#define MUS_END                          RS_MUSIC_START + 0x6A  // MUS_END
#define MUS_VS_WILD                      RS_MUSIC_START + 0x6B  // MUS_BATTLE27
#define MUS_VS_AQUA_MAGMA                RS_MUSIC_START + 0x6C  // MUS_BATTLE31
#define MUS_VS_TRAINER                   RS_MUSIC_START + 0x6D  // MUS_BATTLE20
#define MUS_VS_GYM_LEADER                RS_MUSIC_START + 0x6E  // MUS_BATTLE32
#define MUS_VS_CHAMPION                  RS_MUSIC_START + 0x6F  // MUS_BATTLE33
#define MUS_VS_REGI                      RS_MUSIC_START + 0x70  // MUS_BATTLE36
#define MUS_VS_KYOGRE_GROUDON            RS_MUSIC_START + 0x71  // MUS_BATTLE34
#define MUS_VS_RIVAL                     RS_MUSIC_START + 0x72  // MUS_BATTLE35
#define MUS_VS_ELITE_FOUR                RS_MUSIC_START + 0x73  // MUS_BATTLE38
#define MUS_VS_AQUA_MAGMA_LEADER         RS_MUSIC_START + 0x74  // MUS_BATTLE30

#define RS_MUSIC_END                      MUS_VS_AQUA_MAGMA_LEADER

// FireRed & LeafGreen Music 
#define RG_MUSIC_START                     RS_MUSIC_END + 0x01

#define MUS_RG_FOLLOW_ME                 RG_MUSIC_START + 0x00  // MUS_RG_ANNAI
#define MUS_RG_GAME_CORNER               RG_MUSIC_START + 0x01  // MUS_RG_SLOT
#define MUS_RG_ROCKET_HIDEOUT            RG_MUSIC_START + 0x02  // MUS_RG_AJITO
#define MUS_RG_GYM                       RG_MUSIC_START + 0x03  // MUS_RG_GYM
#define MUS_RG_JIGGLYPUFF                RG_MUSIC_START + 0x04  // MUS_RG_PURIN
#define MUS_RG_INTRO_FIGHT               RG_MUSIC_START + 0x05  // MUS_RG_DEMO
#define MUS_RG_TITLE                     RG_MUSIC_START + 0x06  // MUS_RG_TITLE
#define MUS_RG_CINNABAR                  RG_MUSIC_START + 0x07  // MUS_RG_GUREN
#define MUS_RG_LAVENDER                  RG_MUSIC_START + 0x08  // MUS_RG_SHION
#define MUS_RG_HEAL                      RG_MUSIC_START + 0x09  // MUS_RG_KAIHUKU
#define MUS_RG_CYCLING                   RG_MUSIC_START + 0x0A  // MUS_RG_CYCLING
#define MUS_RG_ENCOUNTER_ROCKET          RG_MUSIC_START + 0x0B  // MUS_RG_ROCKET
#define MUS_RG_ENCOUNTER_GIRL            RG_MUSIC_START + 0x0C  // MUS_RG_SHOUJO
#define MUS_RG_ENCOUNTER_BOY             RG_MUSIC_START + 0x0D  // MUS_RG_SHOUNEN
#define MUS_RG_HALL_OF_FAME              RG_MUSIC_START + 0x0E  // MUS_RG_DENDOU
#define MUS_RG_VIRIDIAN_FOREST           RG_MUSIC_START + 0x0F  // MUS_RG_T_MORI
#define MUS_RG_MT_MOON                   RG_MUSIC_START + 0x10  // MUS_RG_OTSUKIMI
#define MUS_RG_POKE_MANSION              RG_MUSIC_START + 0x11  // MUS_RG_POKEYASHI
#define MUS_RG_CREDITS                   RG_MUSIC_START + 0x12  // MUS_RG_ENDING
#define MUS_RG_ROUTE1                    RG_MUSIC_START + 0x13  // MUS_RG_LOAD01
#define MUS_RG_ROUTE24                   RG_MUSIC_START + 0x14  // MUS_RG_OPENING
#define MUS_RG_ROUTE3                    RG_MUSIC_START + 0x15  // MUS_RG_LOAD02
#define MUS_RG_ROUTE11                   RG_MUSIC_START + 0x16  // MUS_RG_LOAD03
#define MUS_RG_VICTORY_ROAD              RG_MUSIC_START + 0x17  // MUS_RG_CHAMP_R
#define MUS_RG_VS_GYM_LEADER             RG_MUSIC_START + 0x18  // MUS_RG_VS_GYM
#define MUS_RG_VS_TRAINER                RG_MUSIC_START + 0x19  // MUS_RG_VS_TORE
#define MUS_RG_VS_WILD                   RG_MUSIC_START + 0x1A  // MUS_RG_VS_YASEI
#define MUS_RG_VS_CHAMPION               RG_MUSIC_START + 0x1B  // MUS_RG_VS_LAST
#define MUS_RG_PALLET                    RG_MUSIC_START + 0x1C  // MUS_RG_MASARA
#define MUS_RG_OAK_LAB                   RG_MUSIC_START + 0x1D  // MUS_RG_KENKYU
#define MUS_RG_OAK                       RG_MUSIC_START + 0x1E  // MUS_RG_OHKIDO
#define MUS_RG_POKE_CENTER               RG_MUSIC_START + 0x1F  // MUS_RG_POKECEN
#define MUS_RG_SS_ANNE                   RG_MUSIC_START + 0x20  // MUS_RG_SANTOAN
#define MUS_RG_SURF                      RG_MUSIC_START + 0x21  // MUS_RG_NAMINORI
#define MUS_RG_POKE_TOWER                RG_MUSIC_START + 0x22  // MUS_RG_P_TOWER
#define MUS_RG_SILPH                     RG_MUSIC_START + 0x23  // MUS_RG_SHIRUHU
#define MUS_RG_FUCHSIA                   RG_MUSIC_START + 0x24  // MUS_RG_HANADA
#define MUS_RG_CELADON                   RG_MUSIC_START + 0x25  // MUS_RG_TAMAMUSI
#define MUS_RG_VICTORY_TRAINER           RG_MUSIC_START + 0x26  // MUS_RG_WIN_TRE (Identical to MUS_VICTORY_TRAINER)
#define MUS_RG_VICTORY_WILD              RG_MUSIC_START + 0x27  // MUS_RG_WIN_YASEI (Identical to MUS_VICTORY_WILD)
#define MUS_RG_VICTORY_GYM_LEADER        RG_MUSIC_START + 0x28  // MUS_RG_WIN_GYM (Identical to MUS_VICTORY_GYM_LEADER)
#define MUS_RG_VERMILION                 RG_MUSIC_START + 0x29  // MUS_RG_KUCHIBA
#define MUS_RG_PEWTER                    RG_MUSIC_START + 0x2A  // MUS_RG_NIBI
#define MUS_RG_ENCOUNTER_RIVAL           RG_MUSIC_START + 0x2B  // MUS_RG_RIVAL1
#define MUS_RG_RIVAL_EXIT                RG_MUSIC_START + 0x2C  // MUS_RG_RIVAL2
#define MUS_RG_DEX_RATING                RG_MUSIC_START + 0x2D  // MUS_RG_FAN2
#define MUS_RG_OBTAIN_KEY_ITEM           RG_MUSIC_START + 0x2E  // MUS_RG_FAN5
#define MUS_RG_CAUGHT_INTRO              RG_MUSIC_START + 0x2F  // MUS_RG_FAN6
#define MUS_RG_PHOTO                     RG_MUSIC_START + 0x30  // MUS_ME_RG_PHOTO
#define MUS_RG_GAME_FREAK                RG_MUSIC_START + 0x31  // MUS_RG_TITLEROG
#define MUS_RG_CAUGHT                    RG_MUSIC_START + 0x32  // MUS_RG_GET_YASEI
#define MUS_RG_NEW_GAME_INSTRUCT         RG_MUSIC_START + 0x33  // MUS_RG_SOUSA
#define MUS_RG_NEW_GAME_INTRO            RG_MUSIC_START + 0x34  // MUS_RG_SEKAIKAN
#define MUS_RG_NEW_GAME_EXIT             RG_MUSIC_START + 0x35  // MUS_RG_SEIBETU
#define MUS_RG_POKE_JUMP                 RG_MUSIC_START + 0x36  // MUS_RG_JUMP
#define MUS_RG_UNION_ROOM                RG_MUSIC_START + 0x37  // MUS_RG_UNION
#define MUS_RG_NET_CENTER                RG_MUSIC_START + 0x38  // MUS_RG_NETWORK
#define MUS_RG_MYSTERY_GIFT              RG_MUSIC_START + 0x39  // MUS_RG_OKURIMONO
#define MUS_RG_BERRY_PICK                RG_MUSIC_START + 0x3A  // MUS_RG_KINOMIKUI
#define MUS_RG_SEVII_CAVE                RG_MUSIC_START + 0x3B  // MUS_RG_NANADUNGEON (Identical to MUS_RG_MT_MOON)
#define MUS_RG_TEACHY_TV_SHOW            RG_MUSIC_START + 0x3C  // MUS_RG_OSHIE_TV (Identical to MUS_RG_FOLLOW_ME)
#define MUS_RG_SEVII_ROUTE               RG_MUSIC_START + 0x3D  // MUS_RG_NANASHIMA
#define MUS_RG_SEVII_DUNGEON             RG_MUSIC_START + 0x3E  // MUS_RG_NANAISEKI (Identical to MUS_RG_VIRIDIAN_FOREST)
#define MUS_RG_SEVII_123                 RG_MUSIC_START + 0x3F  // MUS_RG_NANA123 (Identical to MUS_RG_PEWTER)
#define MUS_RG_SEVII_45                  RG_MUSIC_START + 0x40  // MUS_RG_NANA45
#define MUS_RG_SEVII_67                  RG_MUSIC_START + 0x41  // MUS_RG_NANA67
#define MUS_RG_POKE_FLUTE                RG_MUSIC_START + 0x42  // MUS_RG_POKEFUE
#define MUS_RG_VS_DEOXYS                 RG_MUSIC_START + 0x43  // MUS_RG_VS_DEO
#define MUS_RG_VS_MEWTWO                 RG_MUSIC_START + 0x44  // MUS_RG_VS_MYU2
#define MUS_RG_VS_LEGEND                 RG_MUSIC_START + 0x45  // MUS_RG_VS_DEN
#define MUS_RG_ENCOUNTER_GYM_LEADER      RG_MUSIC_START + 0x46  // MUS_RG_EXEYE
#define MUS_RG_ENCOUNTER_DEOXYS          RG_MUSIC_START + 0x47  // MUS_RG_DEOEYE
#define MUS_RG_TRAINER_TOWER             RG_MUSIC_START + 0x48  // MUS_RG_T_TOWER
#define MUS_RG_SLOW_PALLET               RG_MUSIC_START + 0x49  // MUS_RG_SLOWMASARA
#define MUS_RG_TEACHY_TV_MENU            RG_MUSIC_START + 0x4A  // MUS_RG_TVNOIZE

#define RG_MUSIC_END                      MUS_RG_TEACHY_TV_MENU

// Emerald Music
#define EM_MUSIC_START                     RG_MUSIC_END + 0x01

#define MUS_ABNORMAL_WEATHER             EM_MUSIC_START + 0x00  // MUS_OOAME
#define MUS_B_FRONTIER                   EM_MUSIC_START + 0x01  // MUS_B_FRONTIER
#define MUS_B_ARENA                      EM_MUSIC_START + 0x02  // MUS_B_ARENA
#define MUS_OBTAIN_B_POINTS              EM_MUSIC_START + 0x03  // MUS_ME_POINTGET
#define MUS_REGISTER_MATCH_CALL          EM_MUSIC_START + 0x04  // MUS_ME_TORE_EYE
#define MUS_B_PYRAMID                    EM_MUSIC_START + 0x05  // MUS_PYRAMID
#define MUS_B_PYRAMID_TOP                EM_MUSIC_START + 0x06  // MUS_PYRAMID_TOP
#define MUS_B_PALACE                     EM_MUSIC_START + 0x07  // MUS_B_PALACE
#define MUS_RAYQUAZA_APPEARS             EM_MUSIC_START + 0x08  // MUS_REKKUU_KOURIN
#define MUS_B_TOWER                      EM_MUSIC_START + 0x09  // MUS_SATTOWER
#define MUS_OBTAIN_SYMBOL                EM_MUSIC_START + 0x0A  // MUS_ME_SYMBOLGET
#define MUS_B_DOME                       EM_MUSIC_START + 0x0B  // MUS_B_DOME
#define MUS_B_PIKE                       EM_MUSIC_START + 0x0C  // MUS_B_TUBE
#define MUS_B_FACTORY                    EM_MUSIC_START + 0x0D  // MUS_B_FACTORY
#define MUS_VS_RAYQUAZA                  EM_MUSIC_START + 0x0E  // MUS_VS_REKKU (Identical to MUS_VS_KYOGRE_GROUDON)
#define MUS_VS_FRONTIER_BRAIN            EM_MUSIC_START + 0x0F  // MUS_VS_FRONT
#define MUS_VS_MEW                       EM_MUSIC_START + 0x10  // MUS_VS_MEW
#define MUS_B_DOME_LOBBY                 EM_MUSIC_START + 0x11  // MUS_B_DOME1

#define EM_MUSIC_END                      MUS_B_DOME_LOBBY

// HeartGold & SoulSilver Music
#define HG_MUSIC_START                     EM_MUSIC_END + 0x01

#define MUS_HG_INTRO                     HG_MUSIC_START + 0x00  // Opening Movie
#define MUS_HG_TITLE                     HG_MUSIC_START + 0x01  // Title Screen
#define MUS_HG_NEW_GAME                  HG_MUSIC_START + 0x02  // An Adventure Begins!
#define MUS_HG_EVOLUTION                 HG_MUSIC_START + 0x03  // Evolution
#define MUS_HG_EVOLUTION_NO_INTRO        HG_MUSIC_START + 0x04  // Evolution (No intro)
#define MUS_HG_CYCLING                   HG_MUSIC_START + 0x05  // Bicycle
#define MUS_HG_SURF                      HG_MUSIC_START + 0x06  // Surf
#define MUS_HG_HALL_OF_FAME              HG_MUSIC_START + 0x07  // The Hall of Fame
#define MUS_HG_CREDITS                   HG_MUSIC_START + 0x08  // Ending Theme
#define MUS_HG_END                       HG_MUSIC_START + 0x09  // The End
#define MUS_HG_NEW_BARK                  HG_MUSIC_START + 0x0A  // New Bark Town
#define MUS_HG_CHERRYGROVE               HG_MUSIC_START + 0x0B  // Cherrygrove City
#define MUS_HG_VIOLET                    HG_MUSIC_START + 0x0C  // Violet City
#define MUS_HG_AZALEA                    HG_MUSIC_START + 0x0D  // Azalea Town
#define MUS_HG_GOLDENROD                 HG_MUSIC_START + 0x0E  // Goldenrod City
#define MUS_HG_ECRUTEAK                  HG_MUSIC_START + 0x0F  // Ecruteak City
#define MUS_HG_CIANWOOD                  HG_MUSIC_START + 0x10  // Cianwood City
#define MUS_HG_ROUTE29                   HG_MUSIC_START + 0x11  // Route 29
#define MUS_HG_ROUTE30                   HG_MUSIC_START + 0x12  // Route 30
#define MUS_HG_ROUTE34                   HG_MUSIC_START + 0x13  // Route 34
#define MUS_HG_ROUTE38                   HG_MUSIC_START + 0x14  // Route 38
#define MUS_HG_ROUTE42                   HG_MUSIC_START + 0x15  // Route 42
#define MUS_HG_VERMILION                 HG_MUSIC_START + 0x16  // Vermilion City
#define MUS_HG_PEWTER                    HG_MUSIC_START + 0x17  // Pewter City
#define MUS_HG_CERULEAN                  HG_MUSIC_START + 0x18  // Cerulean City
#define MUS_HG_LAVENDER                  HG_MUSIC_START + 0x19  // Lavender Town
#define MUS_HG_CELADON                   HG_MUSIC_START + 0x1A  // Celadon City
#define MUS_HG_PALLET                    HG_MUSIC_START + 0x1B  // Pallet Town
#define MUS_HG_CINNABAR                  HG_MUSIC_START + 0x1C  // Cinnabar Island
#define MUS_HG_ROUTE1                    HG_MUSIC_START + 0x1D  // Route 1
#define MUS_HG_ROUTE3                    HG_MUSIC_START + 0x1E  // Route 3
#define MUS_HG_ROUTE11                   HG_MUSIC_START + 0x1F  // Route 11
#define MUS_HG_ROUTE24                   HG_MUSIC_START + 0x20  // Route 24
#define MUS_HG_ROUTE26                   HG_MUSIC_START + 0x21  // Route 26
#define MUS_HG_POKE_CENTER               HG_MUSIC_START + 0x22  // Pokémon Center
#define MUS_HG_POKE_MART                 HG_MUSIC_START + 0x23  // Poké Mart
#define MUS_HG_GYM                       HG_MUSIC_START + 0x24  // Pokémon Gym
#define MUS_HG_ELM_LAB                   HG_MUSIC_START + 0x25  // Elm Pokémon Lab
#define MUS_HG_OAK                       HG_MUSIC_START + 0x26  // Professor Oak
#define MUS_HG_DANCE_THEATER             HG_MUSIC_START + 0x27  // Ecruteak Dance Theater
#define MUS_HG_GAME_CORNER               HG_MUSIC_START + 0x28  // Goldenrod Game Corner
#define MUS_HG_B_TOWER                   HG_MUSIC_START + 0x29  // Battle Tower (Johto)
#define MUS_HG_B_TOWER_RECEPTION         HG_MUSIC_START + 0x2A  // Battle Tower Reception Desk
#define MUS_HG_SPROUT_TOWER              HG_MUSIC_START + 0x2B  // Sprout Tower
#define MUS_HG_UNION_CAVE                HG_MUSIC_START + 0x2C  // Union Cave
#define MUS_HG_RUINS_OF_ALPH             HG_MUSIC_START + 0x2D  // Ruins of Alph
#define MUS_HG_NATIONAL_PARK             HG_MUSIC_START + 0x2E  // National Park
#define MUS_HG_BURNED_TOWER              HG_MUSIC_START + 0x2F  // Burned Tower
#define MUS_HG_BELL_TOWER                HG_MUSIC_START + 0x30  // Bell Tower
#define MUS_HG_LIGHTHOUSE                HG_MUSIC_START + 0x31  // Olivine Lighthouse
#define MUS_HG_TEAM_ROCKET_HQ            HG_MUSIC_START + 0x32  // Team Rocket HQ
#define MUS_HG_ICE_PATH                  HG_MUSIC_START + 0x33  // Ice Path
#define MUS_HG_DRAGONS_DEN               HG_MUSIC_START + 0x34  // Dragon's Den
#define MUS_HG_ROCK_TUNNEL               HG_MUSIC_START + 0x35  // Rock Tunnel
#define MUS_HG_VIRIDIAN_FOREST           HG_MUSIC_START + 0x36  // Viridian Forest
#define MUS_HG_VICTORY_ROAD              HG_MUSIC_START + 0x37  // Victory Road
#define MUS_HG_POKEMON_LEAGUE            HG_MUSIC_START + 0x38  // The Pokémon League
#define MUS_HG_FOLLOW_ME_1               HG_MUSIC_START + 0x39  // Hurry Along
#define MUS_HG_FOLLOW_ME_2               HG_MUSIC_START + 0x3A  // Hurry Along 2
#define MUS_HG_ENCOUNTER_RIVAL           HG_MUSIC_START + 0x3B  // A Rival Appears!
#define MUS_HG_RIVAL_EXIT                HG_MUSIC_START + 0x3C  // A Rival Appears! (Version 2)
#define MUS_HG_BUG_CONTEST_PREP          HG_MUSIC_START + 0x3D  // The Bug-Catching Contest Begins!
#define MUS_HG_BUG_CATCHING_CONTEST      HG_MUSIC_START + 0x3E  // The Bug-Catching Contest
#define MUS_HG_RADIO_ROCKET              HG_MUSIC_START + 0x3F  // Radio Transmission
#define MUS_HG_ROCKET_TAKEOVER           HG_MUSIC_START + 0x40  // Radio Tower Occupied!
#define MUS_HG_MAGNET_TRAIN              HG_MUSIC_START + 0x41  // Magnet Train
#define MUS_HG_SS_AQUA                   HG_MUSIC_START + 0x42  // S.S. Aqua
#define MUS_HG_MT_MOON_SQUARE            HG_MUSIC_START + 0x43  // Mt. Moon
#define MUS_HG_RADIO_JINGLE              HG_MUSIC_START + 0x44  // Pokégear Radio: Pokémon Channel
#define MUS_HG_RADIO_LULLABY             HG_MUSIC_START + 0x45  // Pokégear Radio: Pokémon Lullaby
#define MUS_HG_RADIO_MARCH               HG_MUSIC_START + 0x46  // Pokégear Radio: Pokémon March
#define MUS_HG_RADIO_UNOWN               HG_MUSIC_START + 0x47  // Pokégear Radio: Unown
#define MUS_HG_RADIO_POKE_FLUTE          HG_MUSIC_START + 0x48  // Pokégear Radio: Poké Flute
#define MUS_HG_RADIO_OAK                 HG_MUSIC_START + 0x49  // Pokégear Radio: Professor Oak's Pokémon Talk
#define MUS_HG_RADIO_BUENA               HG_MUSIC_START + 0x4A  // Pokégear Radio: Buena's Password
#define MUS_HG_EUSINE                    HG_MUSIC_START + 0x4B  // Eusine
#define MUS_HG_CLAIR                     HG_MUSIC_START + 0x4C  // Clair
#define MUS_HG_ENCOUNTER_GIRL_1          HG_MUSIC_START + 0x4D  // Trainers' Eyes Meet (Girl 1)
#define MUS_HG_ENCOUNTER_BOY_1           HG_MUSIC_START + 0x4E  // Trainers' Eyes Meet (Boy 1)
#define MUS_HG_ENCOUNTER_SUSPICIOUS_1    HG_MUSIC_START + 0x4F  // Trainers' Eyes Meet (Suspicious Figure 1)
#define MUS_HG_ENCOUNTER_SAGE            HG_MUSIC_START + 0x50  // Trainers' Eyes Meet (Sage)
#define MUS_HG_ENCOUNTER_KIMONO_GIRL     HG_MUSIC_START + 0x51  // Trainers' Eyes Meet (Kimono Girl)
#define MUS_HG_ENCOUNTER_ROCKET          HG_MUSIC_START + 0x52  // Trainers' Eyes Meet (Team Rocket)
#define MUS_HG_ENCOUNTER_GIRL_2          HG_MUSIC_START + 0x53  // Trainers' Eyes Meet (Girl 2)
#define MUS_HG_ENCOUNTER_BOY_2           HG_MUSIC_START + 0x54  // Trainers' Eyes Meet (Boy 2)
#define MUS_HG_ENCOUNTER_SUSPICIOUS_2    HG_MUSIC_START + 0x55  // Trainers' Eyes Meet (Suspicious Figure 2)
#define MUS_HG_VS_WILD                   HG_MUSIC_START + 0x56  // Battle! (Wild Pokémon - Johto Version)
#define MUS_HG_VS_TRAINER                HG_MUSIC_START + 0x57  // Battle! (Trainer Battle - Johto Version)
#define MUS_HG_VS_GYM_LEADER             HG_MUSIC_START + 0x58  // Battle! (Gym Leader - Johto Version)
#define MUS_HG_VS_RIVAL                  HG_MUSIC_START + 0x59  // Battle! (Rival)
#define MUS_HG_VS_ROCKET                 HG_MUSIC_START + 0x5A  // Battle! (Team Rocket)
#define MUS_HG_VS_SUICUNE                HG_MUSIC_START + 0x5B  // Battle! (Suicune)
#define MUS_HG_VS_ENTEI                  HG_MUSIC_START + 0x5C  // Battle! (Entei)
#define MUS_HG_VS_RAIKOU                 HG_MUSIC_START + 0x5D  // Battle! (Raikou)
#define MUS_HG_VS_CHAMPION               HG_MUSIC_START + 0x5E  // Battle! (Champion)
#define MUS_HG_VS_WILD_KANTO             HG_MUSIC_START + 0x5F  // Battle! (Wild Pokémon - Kanto Version)
#define MUS_HG_VS_TRAINER_KANTO          HG_MUSIC_START + 0x60  // Battle! (Trainer Battle - Kanto Version)
#define MUS_HG_VS_GYM_LEADER_KANTO       HG_MUSIC_START + 0x61  // Battle! (Gym Leader - Kanto Version)
#define MUS_HG_VICTORY_TRAINER           HG_MUSIC_START + 0x62  // Victory! (Trainer Battle)
#define MUS_HG_VICTORY_WILD              HG_MUSIC_START + 0x63  // Victory! (Wild Pokémon)
#define MUS_HG_CAUGHT                    HG_MUSIC_START + 0x64  // Victory! (Wild Pokémon) (No intro)
#define MUS_HG_VICTORY_GYM_LEADER        HG_MUSIC_START + 0x65  // Victory! (Gym Leader)
#define MUS_HG_VS_HO_OH                  HG_MUSIC_START + 0x66  // Battle! (Ho-Oh)
#define MUS_HG_VS_LUGIA                  HG_MUSIC_START + 0x67  // Battle! (Lugia)
#define MUS_HG_POKEATHLON_LOBBY          HG_MUSIC_START + 0x68  // Pokéathlon: In the Pokéathlon Dome
#define MUS_HG_POKEATHLON_START          HG_MUSIC_START + 0x69  // Pokéathlon: Opening Ceremony
#define MUS_HG_POKEATHLON_BEFORE         HG_MUSIC_START + 0x6A  // Pokéathlon: An Event Begins!
#define MUS_HG_POKEATHLON_EVENT          HG_MUSIC_START + 0x6B  // Pokéathlon: Event Time!
#define MUS_HG_POKEATHLON_FINALS         HG_MUSIC_START + 0x6C  // Pokéathlon: Finals!
#define MUS_HG_POKEATHLON_RESULTS        HG_MUSIC_START + 0x6D  // Pokéathlon: Results Announcement!
#define MUS_HG_POKEATHLON_END            HG_MUSIC_START + 0x6E  // Pokéathlon: Medal Ceremony
#define MUS_HG_POKEATHLON_WINNER         HG_MUSIC_START + 0x6F  // Pokéathlon: Winner!
#define MUS_HG_B_FACTORY                 HG_MUSIC_START + 0x70  // Battle Factory
#define MUS_HG_B_HALL                    HG_MUSIC_START + 0x71  // Battle Hall
#define MUS_HG_B_ARCADE                  HG_MUSIC_START + 0x72  // Battle Arcade
#define MUS_HG_B_CASTLE                  HG_MUSIC_START + 0x73  // Battle Castle
#define MUS_HG_VS_FRONTIER_BRAIN         HG_MUSIC_START + 0x74  // Battle! (Frontier Brain)
#define MUS_HG_VICTORY_FRONTIER_BRAIN    HG_MUSIC_START + 0x75  // Victory! (Frontier Brain)
#define MUS_HG_WFC                       HG_MUSIC_START + 0x76  // Nintendo Wi-Fi Connection
#define MUS_HG_MYSTERY_GIFT              HG_MUSIC_START + 0x77  // Mystery Gift
#define MUS_HG_WIFI_PLAZA                HG_MUSIC_START + 0x78  // Wi-Fi Plaza
#define MUS_HG_WIFI_MINIGAMES            HG_MUSIC_START + 0x79  // Wi-Fi Plaza: Plaza Games
#define MUS_HG_WIFI_PARADE               HG_MUSIC_START + 0x7A  // Wi-Fi Plaza: Parade
#define MUS_HG_GLOBAL_TERMINAL           HG_MUSIC_START + 0x7B  // Global Terminal
#define MUS_HG_SPIN_TRADE                HG_MUSIC_START + 0x7C  // Spin Trade
#define MUS_HG_GTS                       HG_MUSIC_START + 0x7D  // GTS
#define MUS_HG_ROUTE47                   HG_MUSIC_START + 0x7E  // Route 47
#define MUS_HG_SAFARI_ZONE_GATE          HG_MUSIC_START + 0x7F  // Safari Zone Gate
#define MUS_HG_SAFARI_ZONE               HG_MUSIC_START + 0x80  // Safari Zone
#define MUS_HG_ETHAN                     HG_MUSIC_START + 0x81  // Ethan
#define MUS_HG_LYRA                      HG_MUSIC_START + 0x82  // Lyra
#define MUS_HG_GAME_CORNER_WIN           HG_MUSIC_START + 0x83  // You're a Winner!
#define MUS_HG_KIMONO_GIRL_DANCE         HG_MUSIC_START + 0x84  // The Dance of Ecruteak
#define MUS_HG_KIMONO_GIRL               HG_MUSIC_START + 0x85  // Kimono Girl
#define MUS_HG_HO_OH_APPEARS             HG_MUSIC_START + 0x86  // Ho-Oh Appears!
#define MUS_HG_LUGIA_APPEARS             HG_MUSIC_START + 0x87  // Lugia Appears!
#define MUS_HG_SPIKY_EARED_PICHU         HG_MUSIC_START + 0x88  // Spiky-Eared Pichu Appears!
#define MUS_HG_SINJOU_RUINS              HG_MUSIC_START + 0x89  // Sinjoh Ruins
#define MUS_HG_RADIO_ROUTE101            HG_MUSIC_START + 0x8A  // Pokégear Radio: Route 101
#define MUS_HG_RADIO_ROUTE201            HG_MUSIC_START + 0x8B  // Pokégear Radio: Route 201
#define MUS_HG_RADIO_TRAINER             HG_MUSIC_START + 0x8C  // Pokégear Radio: Trainer Channel
#define MUS_HG_RADIO_VARIETY             HG_MUSIC_START + 0x8D  // Pokégear Radio: Variety Channel
#define MUS_HG_VS_KYOGRE_GROUDON         HG_MUSIC_START + 0x8E  // Battle! (Super-Ancient Pokémon)
#define MUS_HG_POKEWALKER                HG_MUSIC_START + 0x8F  // Pokéwalker
#define MUS_HG_VS_ARCEUS                 HG_MUSIC_START + 0x90  // Arceus
#define MUS_HG_HEAL                      HG_MUSIC_START + 0x91  // Pokémon Healed
#define MUS_HG_LEVEL_UP                  HG_MUSIC_START + 0x92  // Level Up!
#define MUS_HG_OBTAIN_ITEM               HG_MUSIC_START + 0x93  // Picked Up an Item!
#define MUS_HG_OBTAIN_KEY_ITEM           HG_MUSIC_START + 0x94  // Obtained a Key Item!
#define MUS_HG_EVOLVED                   HG_MUSIC_START + 0x95  // Congratulations! Your Pokémon Evolved!
#define MUS_HG_OBTAIN_BADGE              HG_MUSIC_START + 0x96  // Received a Gym Badge!
#define MUS_HG_OBTAIN_TMHM               HG_MUSIC_START + 0x97  // Received a TM!
#define MUS_HG_OBTAIN_ACCESSORY          HG_MUSIC_START + 0x98  // Obtained an Accessory
#define MUS_HG_MOVE_DELETED              HG_MUSIC_START + 0x99  // Move Deleted
#define MUS_HG_OBTAIN_BERRY              HG_MUSIC_START + 0x9A  // Obtained a Berry!
#define MUS_HG_DEX_RATING_1              HG_MUSIC_START + 0x9B  // Pokédex Evaluation... No Good!
#define MUS_HG_DEX_RATING_2              HG_MUSIC_START + 0x9C  // Pokédex Evaluation... You're on Your Way!
#define MUS_HG_DEX_RATING_3              HG_MUSIC_START + 0x9D  // Pokédex Evaluation... Keep at It!
#define MUS_HG_DEX_RATING_4              HG_MUSIC_START + 0x9E  // Pokédex Evaluation... Not Bad!
#define MUS_HG_DEX_RATING_5              HG_MUSIC_START + 0x9F  // Pokédex Evaluation... Just a Little More!
#define MUS_HG_DEX_RATING_6              HG_MUSIC_START + 0xA0  // Pokédex Evaluation... Complete!
#define MUS_HG_OBTAIN_EGG                HG_MUSIC_START + 0xA1  // Received a Pokémon Egg!
#define MUS_HG_BUG_CONTEST_1ST_PLACE     HG_MUSIC_START + 0xA2  // Bug-Catching Contest: Winner
#define MUS_HG_BUG_CONTEST_2ND_PLACE     HG_MUSIC_START + 0xA3  // Bug-Catching Contest: Second Place
#define MUS_HG_BUG_CONTEST_3RD_PLACE     HG_MUSIC_START + 0xA4  // Bug-Catching Contest: Third Place
#define MUS_HG_CARD_FLIP                 HG_MUSIC_START + 0xA5  // Voltorb Flip: Is this what you're expecting?!
#define MUS_HG_CARD_FLIP_GAME_OVER       HG_MUSIC_START + 0xA6  // Voltorb Flip: Game Over
#define MUS_HG_POKEGEAR_REGISTERED       HG_MUSIC_START + 0xA7  // Registered in the Pokégear!
#define MUS_HG_LETS_GO_TOGETHER          HG_MUSIC_START + 0xA8  // Let's Go Together
#define MUS_HG_POKEATHLON_READY          HG_MUSIC_START + 0xA9  // Pokéathlon: Getting Changed
#define MUS_HG_POKEATHLON_1ST_PLACE      HG_MUSIC_START + 0xAA  // Pokéathlon: In First Place!
#define MUS_HG_RECEIVE_POKEMON           HG_MUSIC_START + 0xAB  // Received a Pokémon!
#define MUS_HG_OBTAIN_ARCADE_POINTS      HG_MUSIC_START + 0xAC  // Received Battle Points in the Battle Arcade!
#define MUS_HG_OBTAIN_CASTLE_POINTS      HG_MUSIC_START + 0xAD  // Received Castle Points!
#define MUS_HG_OBTAIN_B_POINTS           HG_MUSIC_START + 0xAE  // Received Battle Points!
#define MUS_HG_WIN_MINIGAME              HG_MUSIC_START + 0xAF  // Cleared Wobbuffet Pop!

#define HG_MUSIC_END                      MUS_HG_WIN_MINIGAME

#define SONGS_END                         HG_MUSIC_END
#define END_SE                            PH_NURSE_SOLO
#define END_MUS                           MUS_HG_WIN_MINIGAME

#define MUS_ROUTE118                      0x7FFF  // Map is split into 2 music sections. controlled by GetCurrLocationDefaultMusic().

#define MUS_NONE                          0xFFFF

#define FIRST_PHONEME_SONG          PH_TRAP_BLEND
#define LAST_PHONEME_SONG           PH_NURSE_SOLO
#define NUM_PHONEME_SONGS            ((LAST_PHONEME_SONG - FIRST_PHONEME_SONG) + 0x01)
#define PHONEME_ID(song)             ((song) - FIRST_PHONEME_SONG)
#define PHONEME_ID_NONE             0xFF

#endif  // GUARD_CONSTANTS_SONGS_H
 