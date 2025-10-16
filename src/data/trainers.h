//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("SAWYER"),
#line 86
        .trainerClass = TRAINER_CLASS_HIKER,
#line 87
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 90
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 91
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 97
    [DIFFICULTY_NORMAL][TRAINER_ROSS] =
    {
#line 98
        .trainerName = _("ROSS"),
#line 99
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 100
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 103
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 110
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 111
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 114
    [DIFFICULTY_NORMAL][TRAINER_MITCH] =
    {
#line 115
        .trainerName = _("MITCH"),
#line 116
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 117
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 120
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 123
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 124
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 127
    [DIFFICULTY_NORMAL][TRAINER_JED] =
    {
#line 128
        .trainerName = _("JED"),
#line 129
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 130
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 132
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 133
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 136
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 140
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 141
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 144
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 145
        .trainerName = _("MARC"),
#line 146
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 147
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 149
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 150
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 153
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 154
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 157
    [DIFFICULTY_NORMAL][TRAINER_RICH] =
    {
#line 158
        .trainerName = _("RICH"),
#line 159
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 160
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 162
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 163
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 166
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 167
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 170
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 171
        .trainerName = _("JOEY"),
#line 172
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 173
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 175
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 176
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 179
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 180
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 183
    [DIFFICULTY_NORMAL][TRAINER_MIKEY] =
    {
#line 184
        .trainerName = _("MIKEY"),
#line 185
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 186
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 188
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 189
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 192
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 193
            .lvl = 2,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 196
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 197
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 200
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 201
        .trainerName = _("ALBERT"),
#line 202
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 203
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 205
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 206
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 209
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 210
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 213
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 214
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 217
    [DIFFICULTY_NORMAL][TRAINER_GORDON] =
    {
#line 218
        .trainerName = _("GORDON"),
#line 219
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 220
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 222
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 223
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 226
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 227
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 230
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 231
        .trainerName = _("SAMUEL"),
#line 232
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 233
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 235
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 236
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 239
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 240
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 243
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 244
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 247
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 248
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 251
    [DIFFICULTY_NORMAL][TRAINER_IAN] =
    {
#line 252
        .trainerName = _("IAN"),
#line 253
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 254
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 256
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 257
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 260
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 261
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 264
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 265
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 268
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 269
        .trainerName = _("WARREN"),
#line 270
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 271
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 273
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 274
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 277
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 278
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 281
    [DIFFICULTY_NORMAL][TRAINER_JIMMY] =
    {
#line 282
        .trainerName = _("JIMMY"),
#line 283
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 284
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 286
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 287
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 290
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 291
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 294
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 295
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 298
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 299
        .trainerName = _("OWEN"),
#line 300
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 301
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 303
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 304
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 307
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 308
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 311
    [DIFFICULTY_NORMAL][TRAINER_JASON] =
    {
#line 312
        .trainerName = _("JASON"),
#line 313
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 314
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 316
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 317
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 320
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 321
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 324
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 325
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 328
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 329
        .trainerName = _("JACK"),
#line 330
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 331
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 333
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 334
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 337
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 338
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 341
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 342
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 345
    [DIFFICULTY_NORMAL][TRAINER_KIPP] =
    {
#line 346
        .trainerName = _("KIPP"),
#line 347
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 348
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 350
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 351
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 354
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 355
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 358
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 359
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 362
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 363
        .trainerName = _("ALAN"),
#line 364
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 365
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 367
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 368
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 371
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 372
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 375
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 376
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 379
    [DIFFICULTY_NORMAL][TRAINER_JOHNNY] =
    {
#line 380
        .trainerName = _("JOHNNY"),
#line 381
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 382
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 384
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 385
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 388
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 389
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 392
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 393
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 396
    [DIFFICULTY_NORMAL][TRAINER_DANNY] =
    {
#line 397
        .trainerName = _("DANNY"),
#line 398
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 399
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 401
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 405
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 406
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 409
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 410
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 413
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 414
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 417
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 418
        .trainerName = _("TOMMY"),
#line 419
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 420
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 422
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 423
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 426
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 427
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 430
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 431
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 434
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 435
        .trainerName = _("DUDLEY"),
#line 436
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 437
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 439
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 440
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 443
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 444
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 447
    [DIFFICULTY_NORMAL][TRAINER_JOE] =
    {
#line 448
        .trainerName = _("JOE"),
#line 449
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 450
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 452
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 453
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 456
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 457
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 460
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 461
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 464
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 465
        .trainerName = _("BILLY"),
#line 466
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 467
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 469
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 473
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 474
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 477
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 478
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 481
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 482
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 485
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 486
        .trainerName = _("CHAD"),
#line 487
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 488
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 490
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 491
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 494
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 495
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 498
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 499
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 502
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 503
        .trainerName = _("NATE"),
#line 504
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 505
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 507
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 508
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 511
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 512
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 515
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 516
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 519
    [DIFFICULTY_NORMAL][TRAINER_RICKY] =
    {
#line 520
        .trainerName = _("RICKY"),
#line 521
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 522
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 524
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 525
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 528
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 529
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 532
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 533
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 536
    [DIFFICULTY_NORMAL][TRAINER_ROD] =
    {
#line 537
        .trainerName = _("ROD"),
#line 538
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 539
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 541
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 542
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 545
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 546
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 549
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 550
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 553
    [DIFFICULTY_NORMAL][TRAINER_ABE] =
    {
#line 554
        .trainerName = _("ABE"),
#line 555
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 556
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 558
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 559
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 562
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 563
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 566
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 567
        .trainerName = _("BRYAN"),
#line 568
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 569
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 571
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 572
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 575
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 576
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 579
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 580
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 583
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 584
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 587
    [DIFFICULTY_NORMAL][TRAINER_THEO] =
    {
#line 588
        .trainerName = _("THEO"),
#line 589
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 590
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 592
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 593
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 596
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 597
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 600
    [DIFFICULTY_NORMAL][TRAINER_TOBY] =
    {
#line 601
        .trainerName = _("TOBY"),
#line 602
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 603
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 605
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 606
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 609
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 610
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 613
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 614
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 617
    [DIFFICULTY_NORMAL][TRAINER_DENIS] =
    {
#line 618
        .trainerName = _("DENIS"),
#line 619
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 620
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 622
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 623
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 626
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 627
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 630
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 631
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 634
    [DIFFICULTY_NORMAL][TRAINER_VANCE] =
    {
#line 635
        .trainerName = _("VANCE"),
#line 636
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 637
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 639
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 640
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 643
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 644
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 647
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 648
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 651
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 652
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 655
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 656
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 659
    [DIFFICULTY_NORMAL][TRAINER_HANK] =
    {
#line 660
        .trainerName = _("HANK"),
#line 661
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 662
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 664
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 665
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 668
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 669
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 672
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 673
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 676
    [DIFFICULTY_NORMAL][TRAINER_ROY] =
    {
#line 677
        .trainerName = _("ROY"),
#line 678
        .trainerClass = TRAINER_CLASS_BIKER,
#line 679
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 681
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 685
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 686
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 689
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 690
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 693
    [DIFFICULTY_NORMAL][TRAINER_BORIS] =
    {
#line 694
        .trainerName = _("BORIS"),
#line 695
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 696
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 698
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 699
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 702
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 703
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 706
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 707
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 710
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 711
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 714
    [DIFFICULTY_NORMAL][TRAINER_BOB] =
    {
#line 715
        .trainerName = _("BOB"),
#line 716
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 717
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 719
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 720
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 723
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 724
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 727
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 728
        .trainerName = _("JOSE"),
#line 729
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 730
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 732
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 733
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 736
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 737
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 740
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 741
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 744
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 745
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 748
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 749
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 752
    [DIFFICULTY_NORMAL][TRAINER_PETER] =
    {
#line 753
        .trainerName = _("PETER"),
#line 754
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 755
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 757
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 758
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 761
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 762
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 765
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 766
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 769
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 770
        .trainerName = _("PERRY"),
#line 771
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 772
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 774
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 775
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 778
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 779
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 782
    [DIFFICULTY_NORMAL][TRAINER_BRET] =
    {
#line 783
        .trainerName = _("BRET"),
#line 784
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 785
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 787
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 788
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 791
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 792
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 795
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 796
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 799
    [DIFFICULTY_NORMAL][TRAINER_CARRIE] =
    {
#line 800
        .trainerName = _("CARRIE"),
#line 801
        .trainerClass = TRAINER_CLASS_LASS,
#line 802
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 804
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 805
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 808
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 809
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 812
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 813
        .trainerName = _("BRIDGET"),
#line 814
        .trainerClass = TRAINER_CLASS_LASS,
#line 815
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 817
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 818
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 821
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 822
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 825
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 826
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 829
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 830
        .trainerName = _("ALICE"),
#line 831
        .trainerClass = TRAINER_CLASS_LASS,
#line 832
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 834
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 835
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 838
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 839
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 842
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 843
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 846
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 847
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 850
    [DIFFICULTY_NORMAL][TRAINER_KRISE] =
    {
#line 851
        .trainerName = _("KRISE"),
#line 852
        .trainerClass = TRAINER_CLASS_LASS,
#line 853
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 855
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 856
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 859
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 860
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 863
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 864
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 867
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 868
        .trainerName = _("CONNIE"),
#line 869
        .trainerClass = TRAINER_CLASS_LASS,
#line 870
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 872
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 873
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 876
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 877
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 880
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 881
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 884
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 885
        .trainerName = _("LINDA"),
#line 886
        .trainerClass = TRAINER_CLASS_LASS,
#line 887
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 889
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 890
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 893
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 894
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 897
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 898
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 901
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 902
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 905
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 906
        .trainerName = _("LAURA"),
#line 907
        .trainerClass = TRAINER_CLASS_LASS,
#line 908
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 910
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 911
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 914
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 915
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 918
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 919
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 922
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 923
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 926
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 927
        .trainerName = _("SHANNON"),
#line 928
        .trainerClass = TRAINER_CLASS_LASS,
#line 929
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 931
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 932
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 935
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 936
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 939
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 940
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 943
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 944
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 947
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 948
        .trainerName = _("MICHELLE"),
#line 949
        .trainerClass = TRAINER_CLASS_LASS,
#line 950
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 952
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 953
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 956
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 957
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 960
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 961
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 964
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 965
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 968
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 969
        .trainerName = _("DANA"),
#line 970
        .trainerClass = TRAINER_CLASS_LASS,
#line 971
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 973
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 977
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 978
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 981
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 982
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 985
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 986
        .trainerName = _("ELLEN"),
#line 987
        .trainerClass = TRAINER_CLASS_LASS,
#line 988
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 990
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 991
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 994
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 995
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 998
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 999
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1002
    [DIFFICULTY_NORMAL][TRAINER_NICK] =
    {
#line 1003
        .trainerName = _("NICK"),
#line 1004
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1005
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1007
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1008
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1011
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1012
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1015
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1016
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1019
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1020
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1023
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 1024
        .trainerName = _("AARON"),
#line 1025
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1026
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1028
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1029
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1032
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1033
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1036
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1037
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1040
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1041
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1044
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 1045
        .trainerName = _("PAUL"),
#line 1046
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1047
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1049
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1050
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1053
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1054
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1057
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1058
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1061
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1062
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1065
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1066
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1069
    [DIFFICULTY_NORMAL][TRAINER_CODY] =
    {
#line 1070
        .trainerName = _("CODY"),
#line 1071
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1072
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1074
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1075
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1078
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1079
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1082
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1083
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1086
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1087
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1090
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1091
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1094
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 1095
        .trainerName = _("MIKE"),
#line 1096
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1097
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1099
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1100
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1103
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1104
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1107
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1108
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1111
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1112
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1115
    [DIFFICULTY_NORMAL][TRAINER_GAVEN] =
    {
#line 1116
        .trainerName = _("GAVEN"),
#line 1117
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1118
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1120
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1121
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1124
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1125
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1128
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1129
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1132
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1133
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1136
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1137
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1140
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1141
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1144
    [DIFFICULTY_NORMAL][TRAINER_RYAN] =
    {
#line 1145
        .trainerName = _("RYAN"),
#line 1146
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1147
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1149
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1150
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1153
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1154
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1157
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1158
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1161
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1162
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1165
    [DIFFICULTY_NORMAL][TRAINER_JAKE] =
    {
#line 1166
        .trainerName = _("JAKE"),
#line 1167
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1168
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1170
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1171
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1174
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1175
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1178
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1179
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1182
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1183
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1186
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1187
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1190
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1191
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1194
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 1195
        .trainerName = _("BLAKE"),
#line 1196
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1197
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1199
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1200
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1203
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1204
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1207
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1208
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1211
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1212
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1215
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1216
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1219
    [DIFFICULTY_NORMAL][TRAINER_BRIAN] =
    {
#line 1220
        .trainerName = _("BRIAN"),
#line 1221
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1222
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1224
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1225
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1228
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1229
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1232
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1233
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1236
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1237
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1240
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1241
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1244
    [DIFFICULTY_NORMAL][TRAINER_ERICK] =
    {
#line 1245
        .trainerName = _("ERICK"),
#line 1246
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1247
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1249
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1253
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1254
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1257
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1258
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1261
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1262
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1265
    [DIFFICULTY_NORMAL][TRAINER_ANDY] =
    {
#line 1266
        .trainerName = _("ANDY"),
#line 1267
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1268
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1270
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1271
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1274
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1275
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1278
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1279
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1282
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1283
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1286
    [DIFFICULTY_NORMAL][TRAINER_TYLER] =
    {
#line 1287
        .trainerName = _("TYLER"),
#line 1288
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1289
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1291
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1292
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1295
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1296
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1299
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1300
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1303
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1304
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1307
    [DIFFICULTY_NORMAL][TRAINER_SEAN] =
    {
#line 1308
        .trainerName = _("SEAN"),
#line 1309
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1310
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1312
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1313
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1316
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1317
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1320
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1321
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1324
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1325
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1328
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 1329
        .trainerName = _("KEVIN"),
#line 1330
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1331
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1333
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1334
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1337
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1338
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1341
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1342
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1345
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1346
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1349
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1350
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1353
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1354
        .trainerName = _("STEVE"),
#line 1355
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1356
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1358
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1359
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1362
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1363
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1366
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1367
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1370
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1371
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1374
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 1375
        .trainerName = _("ALLEN"),
#line 1376
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1377
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1379
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1380
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1383
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1384
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1387
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1388
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1391
    [DIFFICULTY_NORMAL][TRAINER_DARIN] =
    {
#line 1392
        .trainerName = _("DARIN"),
#line 1393
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1394
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1396
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1397
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1400
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1401
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1404
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1405
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1408
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1409
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1412
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1413
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1416
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 1417
        .trainerName = _("GWEN"),
#line 1418
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1419
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1421
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1422
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1425
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1426
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1429
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1430
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1433
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1434
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1437
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1438
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1441
    [DIFFICULTY_NORMAL][TRAINER_LOIS] =
    {
#line 1442
        .trainerName = _("LOIS"),
#line 1443
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1444
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1446
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1447
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1450
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1452
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1451
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1454
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1455
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1458
    [DIFFICULTY_NORMAL][TRAINER_FRAN] =
    {
#line 1459
        .trainerName = _("FRAN"),
#line 1460
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1461
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1463
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1464
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1467
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1468
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1471
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1472
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1475
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1476
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1479
    [DIFFICULTY_NORMAL][TRAINER_LOLA] =
    {
#line 1480
        .trainerName = _("LOLA"),
#line 1481
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1482
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1484
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1485
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1488
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1489
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1492
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1493
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1496
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1497
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1500
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1501
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1504
    [DIFFICULTY_NORMAL][TRAINER_KATE] =
    {
#line 1505
        .trainerName = _("KATE"),
#line 1506
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1507
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1509
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1510
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1513
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1514
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1517
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1518
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1521
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 1522
        .trainerName = _("IRENE"),
#line 1523
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1524
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1526
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1527
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1530
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1531
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1534
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1535
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1538
    [DIFFICULTY_NORMAL][TRAINER_KELLY] =
    {
#line 1539
        .trainerName = _("KELLY"),
#line 1540
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1541
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1543
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1544
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1547
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1548
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1551
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1552
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1555
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1556
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1559
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1560
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1563
    [DIFFICULTY_NORMAL][TRAINER_JOYCE] =
    {
#line 1564
        .trainerName = _("JOYCE"),
#line 1565
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1566
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1568
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1569
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1572
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1573
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1576
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1577
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1580
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1581
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1584
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1585
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1588
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1589
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1592
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 1593
        .trainerName = _("BETH"),
#line 1594
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1595
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1597
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1598
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1601
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1602
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1605
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1606
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1609
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1610
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1613
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1614
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1617
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1618
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1621
    [DIFFICULTY_NORMAL][TRAINER_REENA] =
    {
#line 1622
        .trainerName = _("REENA"),
#line 1623
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1624
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1626
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1627
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1630
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1631
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1634
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1635
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1638
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1639
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1642
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1643
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1646
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1647
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1650
    [DIFFICULTY_NORMAL][TRAINER_MEGAN] =
    {
#line 1651
        .trainerName = _("MEGAN"),
#line 1652
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1653
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1655
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1656
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1659
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1660
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1663
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1664
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1667
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1668
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1671
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1672
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1675
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 1676
        .trainerName = _("CAROL"),
#line 1677
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1678
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1680
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1681
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1682
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1684
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1685
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1688
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1689
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1692
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1693
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1696
    [DIFFICULTY_NORMAL][TRAINER_QUINN] =
    {
#line 1697
        .trainerName = _("QUINN"),
#line 1698
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1699
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1701
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1702
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1705
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1706
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1709
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1710
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1713
    [DIFFICULTY_NORMAL][TRAINER_EMMA] =
    {
#line 1714
        .trainerName = _("EMMA"),
#line 1715
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1716
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1718
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1719
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1722
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1723
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1726
    [DIFFICULTY_NORMAL][TRAINER_CYBIL] =
    {
#line 1727
        .trainerName = _("CYBIL"),
#line 1728
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1729
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1731
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1732
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1735
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1736
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1739
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1740
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1743
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1744
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1747
    [DIFFICULTY_NORMAL][TRAINER_JENN] =
    {
#line 1748
        .trainerName = _("JENN"),
#line 1749
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1750
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1752
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1753
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1756
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1757
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1760
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1761
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1764
    [DIFFICULTY_NORMAL][TRAINER_CARA] =
    {
#line 1765
        .trainerName = _("CARA"),
#line 1766
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1767
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1769
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1770
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1773
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1774
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1777
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1778
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1781
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1782
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1785
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 1786
        .trainerName = _("VICTORIA"),
#line 1787
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1788
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1790
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1791
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1794
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1795
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1798
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1799
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1802
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 1803
        .trainerName = _("SAMANTHA"),
#line 1804
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1805
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1807
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1808
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1811
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1812
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1815
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1816
        .trainerName = _("JULIE"),
#line 1817
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1818
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1820
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1821
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1824
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1825
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1828
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 1829
        .trainerName = _("JACLYN"),
#line 1830
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1831
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1833
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1834
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1837
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1838
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1841
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 1842
        .trainerName = _("BRENDA"),
#line 1843
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1844
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1846
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1847
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1850
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1851
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1854
    [DIFFICULTY_NORMAL][TRAINER_CASSIE] =
    {
#line 1855
        .trainerName = _("CASSIE"),
#line 1856
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1857
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1859
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1860
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1863
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1864
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1867
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1868
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1871
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1872
        .trainerName = _("CAROLINE"),
#line 1873
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1874
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1876
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1877
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1880
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1881
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1884
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1885
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1888
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1889
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1892
    [DIFFICULTY_NORMAL][TRAINER_CARLENE] =
    {
#line 1893
        .trainerName = _("CARLENE"),
#line 1894
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1895
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1897
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1898
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1901
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1902
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1905
    [DIFFICULTY_NORMAL][TRAINER_JESSICA] =
    {
#line 1906
        .trainerName = _("JESSICA"),
#line 1907
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1908
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1910
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1911
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1914
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1915
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1918
    [DIFFICULTY_NORMAL][TRAINER_RACHAEL] =
    {
#line 1919
        .trainerName = _("RACHAEL"),
#line 1920
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1921
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1923
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1924
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1927
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1928
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1931
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 1932
        .trainerName = _("ANGELICA"),
#line 1933
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1934
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1936
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1937
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1940
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1941
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1944
    [DIFFICULTY_NORMAL][TRAINER_KENDRA] =
    {
#line 1945
        .trainerName = _("KENDRA"),
#line 1946
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1947
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1949
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1950
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1953
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1954
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1957
    [DIFFICULTY_NORMAL][TRAINER_VERONICA] =
    {
#line 1958
        .trainerName = _("VERONICA"),
#line 1959
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1960
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1962
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1963
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1966
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1967
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1970
    [DIFFICULTY_NORMAL][TRAINER_JULIA] =
    {
#line 1971
        .trainerName = _("JULIA"),
#line 1972
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1973
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1975
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1976
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1979
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1980
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1983
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1984
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1987
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1988
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1991
    [DIFFICULTY_NORMAL][TRAINER_THERESA] =
    {
#line 1992
        .trainerName = _("THERESA"),
#line 1993
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1994
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1996
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1997
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2000
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2001
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2004
    [DIFFICULTY_NORMAL][TRAINER_VALERIE] =
    {
#line 2005
        .trainerName = _("VALERIE"),
#line 2006
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2007
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2009
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2010
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2013
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2014
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2017
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2018
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2021
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 2022
        .trainerName = _("OLIVIA"),
#line 2023
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2024
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2026
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2027
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2030
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2031
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2034
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2035
        .trainerName = _("LARRY"),
#line 2036
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2037
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2039
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2040
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2043
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2044
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2047
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 2048
        .trainerName = _("ANDREW"),
#line 2049
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2050
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2052
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2053
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2056
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2057
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2060
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2061
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2064
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 2065
        .trainerName = _("CALVIN"),
#line 2066
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2067
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2069
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2070
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2073
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2074
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2077
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2078
        .trainerName = _("SHANE"),
#line 2079
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2080
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2082
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2083
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2086
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2087
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2090
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2091
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2094
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 2095
        .trainerName = _("BEN"),
#line 2096
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2097
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2099
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2100
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2103
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2104
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2107
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2108
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2111
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2112
        .trainerName = _("BRENT"),
#line 2113
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2114
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2116
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2117
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2120
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2121
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2124
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2125
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2128
    [DIFFICULTY_NORMAL][TRAINER_RON] =
    {
#line 2129
        .trainerName = _("RON"),
#line 2130
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2131
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2133
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2134
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2137
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2138
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2141
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2142
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2145
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2146
        .trainerName = _("ETHAN"),
#line 2147
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2148
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2150
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2151
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2154
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2155
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2158
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2159
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2162
    [DIFFICULTY_NORMAL][TRAINER_ISSAC] =
    {
#line 2163
        .trainerName = _("ISSAC"),
#line 2164
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2165
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2167
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2168
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2171
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2172
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2175
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2176
        .trainerName = _("DONALD"),
#line 2177
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2178
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2180
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2181
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2184
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2185
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2188
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2189
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2192
    [DIFFICULTY_NORMAL][TRAINER_ZACH] =
    {
#line 2193
        .trainerName = _("ZACH"),
#line 2194
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2195
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2198
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2201
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2202
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2205
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2206
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2209
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2210
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2213
    [DIFFICULTY_NORMAL][TRAINER_MILLER] =
    {
#line 2214
        .trainerName = _("MILLER"),
#line 2215
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2216
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2218
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2219
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2222
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2223
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2226
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2227
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2230
    [DIFFICULTY_NORMAL][TRAINER_GRUNT] =
    {
#line 2231
        .trainerName = _("GRUNT"),
#line 2232
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2233
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2235
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2236
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2239
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2240
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2243
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2244
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2247
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2248
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2251
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_2] =
    {
#line 2252
        .trainerName = _("GRUNT"),
#line 2253
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2254
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2256
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2257
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2260
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2261
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2264
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2265
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2268
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2269
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2272
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_3] =
    {
#line 2273
        .trainerName = _("GRUNT"),
#line 2274
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2275
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2277
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2278
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2281
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2282
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2285
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2286
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2289
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_4] =
    {
#line 2290
        .trainerName = _("GRUNT"),
#line 2291
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2292
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2294
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2295
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2298
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2299
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2302
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2303
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2306
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2307
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2310
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_5] =
    {
#line 2311
        .trainerName = _("GRUNT"),
#line 2312
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2313
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2315
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2316
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2319
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2320
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2323
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2324
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2327
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_6] =
    {
#line 2328
        .trainerName = _("GRUNT"),
#line 2329
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2330
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2332
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2333
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2336
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2337
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2340
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2341
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2344
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2345
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2348
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_7] =
    {
#line 2349
        .trainerName = _("GRUNT"),
#line 2350
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2351
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2353
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2354
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2357
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2358
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2361
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2362
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2365
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_8] =
    {
#line 2366
        .trainerName = _("GRUNT"),
#line 2367
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2368
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2370
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2371
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2374
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2375
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2378
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2379
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2382
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_9] =
    {
#line 2383
        .trainerName = _("GRUNT"),
#line 2384
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2385
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2387
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2388
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2391
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2392
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2395
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2396
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2399
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2400
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2403
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_10] =
    {
#line 2404
        .trainerName = _("GRUNT"),
#line 2405
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2406
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2408
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2409
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2412
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2413
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2416
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2417
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2420
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_11] =
    {
#line 2421
        .trainerName = _("GRUNT"),
#line 2422
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2423
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2425
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2426
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2429
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2430
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2433
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2434
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2437
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_12] =
    {
#line 2438
        .trainerName = _("GRUNT"),
#line 2439
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2440
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2442
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2443
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2446
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2447
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2450
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2452
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2451
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2454
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2455
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2458
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_13] =
    {
#line 2459
        .trainerName = _("GRUNT"),
#line 2460
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2461
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2463
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2464
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2467
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2468
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2471
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_14] =
    {
#line 2472
        .trainerName = _("GRUNT"),
#line 2473
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2474
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2476
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2477
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2480
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2481
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2484
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_15] =
    {
#line 2485
        .trainerName = _("GRUNT"),
#line 2486
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2487
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2489
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2490
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2493
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2494
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2497
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2498
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2501
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2502
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2505
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_16] =
    {
#line 2506
        .trainerName = _("GRUNT"),
#line 2507
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2508
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2510
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2511
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2514
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2515
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2518
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_17] =
    {
#line 2519
        .trainerName = _("GRUNT"),
#line 2520
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2521
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2523
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2524
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2527
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2528
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2531
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2532
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2535
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_18] =
    {
#line 2536
        .trainerName = _("GRUNT"),
#line 2537
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2538
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2540
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2541
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2544
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2545
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2548
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2549
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2552
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2553
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2556
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_19] =
    {
#line 2557
        .trainerName = _("GRUNT"),
#line 2558
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2559
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2561
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2562
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2565
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2566
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2569
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_20] =
    {
#line 2570
        .trainerName = _("GRUNT"),
#line 2571
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2572
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2574
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2575
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2578
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2579
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2582
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2583
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2586
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_21] =
    {
#line 2587
        .trainerName = _("GRUNT"),
#line 2588
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2589
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2591
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2592
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2595
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2596
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2599
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2600
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2603
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_22] =
    {
#line 2604
        .trainerName = _("GRUNT"),
#line 2605
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2606
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 2608
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2609
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2612
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2613
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2616
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2617
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2620
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_23] =
    {
#line 2621
        .trainerName = _("GRUNT"),
#line 2622
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2623
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2625
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2626
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2629
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2630
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2633
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2634
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2637
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2638
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2641
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_24] =
    {
#line 2642
        .trainerName = _("GRUNT"),
#line 2643
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2644
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2646
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2647
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2650
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2651
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2654
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2655
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2658
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2659
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2662
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2663
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2666
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2667
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2670
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_25] =
    {
#line 2671
        .trainerName = _("GRUNT"),
#line 2672
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2673
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2675
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2676
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2679
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2680
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2683
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2684
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2687
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_26] =
    {
#line 2688
        .trainerName = _("GRUNT"),
#line 2689
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2690
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 2692
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2693
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2696
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2697
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2700
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2701
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2704
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_27] =
    {
#line 2705
        .trainerName = _("GRUNT"),
#line 2706
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2707
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2709
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2710
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2713
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2714
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2717
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2718
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2721
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2722
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2725
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2726
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2729
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_28] =
    {
#line 2730
        .trainerName = _("GRUNT"),
#line 2731
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2732
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 2734
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2735
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2738
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2739
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2742
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2743
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2746
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2747
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2750
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2751
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2754
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_29] =
    {
#line 2755
        .trainerName = _("GRUNT"),
#line 2756
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2757
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 2759
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2760
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2763
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2764
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2767
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2768
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2771
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_30] =
    {
#line 2772
        .trainerName = _("GRUNT"),
#line 2773
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2774
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2776
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2777
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2778
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2781
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2782
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2785
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_31] =
    {
#line 2786
        .trainerName = _("GRUNT"),
#line 2787
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2788
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2790
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2791
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2792
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2795
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2796
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2799
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_32] =
    {
#line 2800
        .trainerName = _("GRUNT"),
#line 2801
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2802
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2804
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2805
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2806
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2809
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2810
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2813
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_33] =
    {
#line 2814
        .trainerName = _("GRUNT"),
#line 2815
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2816
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2818
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2819
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2820
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2823
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2824
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2827
    [DIFFICULTY_NORMAL][TRAINER_ETO] =
    {
#line 2828
        .trainerName = _("ETO"),
#line 2829
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2830
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2832
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2833
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2836
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2837
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2840
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2841
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2844
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2845
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2848
    [DIFFICULTY_NORMAL][TRAINER_ETO_2] =
    {
#line 2849
        .trainerName = _("ETO"),
#line 2850
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2851
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2853
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2857
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2858
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2861
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2862
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2865
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2866
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2869
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2870
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2873
    [DIFFICULTY_NORMAL][TRAINER_ETO_3] =
    {
#line 2874
        .trainerName = _("ETO"),
#line 2875
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2876
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2878
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2879
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2882
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2883
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2886
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2887
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2890
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2891
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2894
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2895
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2898
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2899
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2902
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2903
        .trainerName = _("PRESTON"),
#line 2904
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2905
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2907
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2908
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2911
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2912
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2915
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2916
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2919
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2920
        .trainerName = _("EDWARD"),
#line 2921
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2922
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2924
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2925
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2928
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2929
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2932
    [DIFFICULTY_NORMAL][TRAINER_GREGORY] =
    {
#line 2933
        .trainerName = _("GREGORY"),
#line 2934
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2935
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2937
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2938
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2941
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2942
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2945
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2946
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2949
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2950
        .trainerName = _("VIRGIL"),
#line 2951
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2952
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2954
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2955
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2958
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2959
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2962
    [DIFFICULTY_NORMAL][TRAINER_ALFRED] =
    {
#line 2963
        .trainerName = _("ALFRED"),
#line 2964
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2965
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 2967
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2968
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2971
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2972
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2975
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE] =
    {
#line 2976
        .trainerName = _("ROXANNE"),
#line 2977
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2978
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2980
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2981
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2984
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2985
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2988
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 2989
        .trainerName = _("CLARISSA"),
#line 2990
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2991
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2993
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2994
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2997
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2998
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3001
    [DIFFICULTY_NORMAL][TRAINER_COLETTE] =
    {
#line 3002
        .trainerName = _("COLETTE"),
#line 3003
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3004
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3006
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3007
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3010
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3011
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3014
    [DIFFICULTY_NORMAL][TRAINER_HILLARY] =
    {
#line 3015
        .trainerName = _("HILLARY"),
#line 3016
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3017
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3019
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3020
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3023
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3024
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3027
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3028
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3031
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 3032
        .trainerName = _("SHIRLEY"),
#line 3033
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3034
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3036
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3037
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3040
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3041
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3044
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3045
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3048
    [DIFFICULTY_NORMAL][TRAINER_DON] =
    {
#line 3049
        .trainerName = _("DON"),
#line 3050
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3051
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3053
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3054
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3057
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3058
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3061
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3062
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3065
    [DIFFICULTY_NORMAL][TRAINER_ROB] =
    {
#line 3066
        .trainerName = _("ROB"),
#line 3067
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3068
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3070
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3071
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3074
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3075
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3078
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3079
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3082
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 3083
        .trainerName = _("ED"),
#line 3084
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3085
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3087
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3088
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3091
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3092
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3095
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3096
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3099
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3101
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3100
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3103
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 3104
        .trainerName = _("WADE"),
#line 3105
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3106
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3108
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3109
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3112
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3113
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3116
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3117
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3120
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 3121
        .trainerName = _("BENNY"),
#line 3122
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3123
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3125
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3126
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3129
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3130
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3133
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3134
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3137
    [DIFFICULTY_NORMAL][TRAINER_AL] =
    {
#line 3138
        .trainerName = _("AL"),
#line 3139
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3140
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3142
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3143
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3146
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3147
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3150
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3151
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3154
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 3155
        .trainerName = _("JOSH"),
#line 3156
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3157
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3159
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3160
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3163
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3164
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3167
    [DIFFICULTY_NORMAL][TRAINER_ARNIE] =
    {
#line 3168
        .trainerName = _("ARNIE"),
#line 3169
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3170
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3172
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3173
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3176
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3177
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3180
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3181
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3184
    [DIFFICULTY_NORMAL][TRAINER_KEN] =
    {
#line 3185
        .trainerName = _("KEN"),
#line 3186
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3187
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3189
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3190
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3193
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3194
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3197
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3198
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3201
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 3202
        .trainerName = _("DOUG"),
#line 3203
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3204
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3206
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3207
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3210
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3211
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3214
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 3215
        .trainerName = _("WAYNE"),
#line 3216
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3217
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3219
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3220
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3223
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3224
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3227
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3228
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3231
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 3232
        .trainerName = _("JUSTIN"),
#line 3233
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3234
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3236
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3237
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3240
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3241
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3244
    [DIFFICULTY_NORMAL][TRAINER_RALPH] =
    {
#line 3245
        .trainerName = _("RALPH"),
#line 3246
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3247
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3249
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3253
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3254
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3257
    [DIFFICULTY_NORMAL][TRAINER_ARNOLD] =
    {
#line 3258
        .trainerName = _("ARNOLD"),
#line 3259
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3260
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3262
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3263
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3266
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3267
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3270
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3271
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3274
    [DIFFICULTY_NORMAL][TRAINER_KYLE] =
    {
#line 3275
        .trainerName = _("KYLE"),
#line 3276
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3277
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3279
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3280
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3283
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3284
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3287
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3288
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3291
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3292
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3295
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 3296
        .trainerName = _("HENRY"),
#line 3297
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3298
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3300
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3301
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3304
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3305
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3308
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3309
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3312
    [DIFFICULTY_NORMAL][TRAINER_MARVIN] =
    {
#line 3313
        .trainerName = _("MARVIN"),
#line 3314
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3315
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3317
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3318
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3321
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3322
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3325
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3326
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3329
    [DIFFICULTY_NORMAL][TRAINER_TULLY] =
    {
#line 3330
        .trainerName = _("TULLY"),
#line 3331
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3332
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3334
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3335
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3338
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3339
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3342
    [DIFFICULTY_NORMAL][TRAINER_ANDRE] =
    {
#line 3343
        .trainerName = _("ANDRE"),
#line 3344
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3345
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3347
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3348
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3351
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3352
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3355
    [DIFFICULTY_NORMAL][TRAINER_RAYMOND] =
    {
#line 3356
        .trainerName = _("RAYMOND"),
#line 3357
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3358
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3360
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3361
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3364
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3365
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3368
    [DIFFICULTY_NORMAL][TRAINER_WILTON] =
    {
#line 3369
        .trainerName = _("WILTON"),
#line 3370
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3371
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3373
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3377
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3378
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3381
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3382
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3385
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3386
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3389
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 3390
        .trainerName = _("EDGAR"),
#line 3391
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3392
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3394
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3395
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3398
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3399
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3402
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3403
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3406
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3407
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3410
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 3411
        .trainerName = _("JONAH"),
#line 3412
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3413
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3415
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3416
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3419
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3420
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3423
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3424
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3427
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3428
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3431
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3432
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3435
    [DIFFICULTY_NORMAL][TRAINER_MARTIN] =
    {
#line 3436
        .trainerName = _("MARTIN"),
#line 3437
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3438
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3440
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3441
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3444
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3445
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3448
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3449
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3452
    [DIFFICULTY_NORMAL][TRAINER_STEPHEN] =
    {
#line 3453
        .trainerName = _("STEPHEN"),
#line 3454
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3455
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3457
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3458
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3461
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3462
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3465
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3466
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3469
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3470
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3473
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3474
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3477
    [DIFFICULTY_NORMAL][TRAINER_BARNEY] =
    {
#line 3478
        .trainerName = _("BARNEY"),
#line 3479
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3480
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3482
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3483
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3486
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3487
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3490
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3491
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3494
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3495
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3498
    [DIFFICULTY_NORMAL][TRAINER_SCOTT] =
    {
#line 3499
        .trainerName = _("SCOTT"),
#line 3500
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3501
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3503
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3504
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3507
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3508
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3511
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3512
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3515
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3516
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3519
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3520
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3523
    [DIFFICULTY_NORMAL][TRAINER_HAROLD] =
    {
#line 3524
        .trainerName = _("HAROLD"),
#line 3525
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3526
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3528
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3529
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3532
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3533
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3536
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3537
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3540
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 3541
        .trainerName = _("SIMON"),
#line 3542
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3543
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3545
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3546
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3549
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3550
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3553
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3554
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3557
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 3558
        .trainerName = _("RANDALL"),
#line 3559
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3560
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3562
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3563
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3566
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3567
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3570
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3571
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3574
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 3575
        .trainerName = _("CHARLIE"),
#line 3576
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3577
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3579
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3580
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3583
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3584
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3587
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3588
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3591
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 3592
        .trainerName = _("GEORGE"),
#line 3593
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3594
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3596
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3597
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3600
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3601
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3604
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3605
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3608
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3609
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3612
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 3613
        .trainerName = _("BERKE"),
#line 3614
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3615
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3617
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3621
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3622
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3625
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 3626
        .trainerName = _("KIRK"),
#line 3627
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3628
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3630
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3634
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3635
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3638
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3639
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3642
    [DIFFICULTY_NORMAL][TRAINER_MATHEW] =
    {
#line 3643
        .trainerName = _("MATHEW"),
#line 3644
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3645
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3647
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3648
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3651
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3652
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3655
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3656
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3659
    [DIFFICULTY_NORMAL][TRAINER_HAL] =
    {
#line 3660
        .trainerName = _("HAL"),
#line 3661
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3662
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3664
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3665
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3668
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3669
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3672
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3673
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3676
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3677
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3680
    [DIFFICULTY_NORMAL][TRAINER_PATON] =
    {
#line 3681
        .trainerName = _("PATON"),
#line 3682
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3683
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3685
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3686
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3689
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3690
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3693
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3694
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3697
    [DIFFICULTY_NORMAL][TRAINER_DARYL] =
    {
#line 3698
        .trainerName = _("DARYL"),
#line 3699
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3700
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3702
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3703
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3706
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3707
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3710
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3711
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3714
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3715
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3718
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 3719
        .trainerName = _("WALTER"),
#line 3720
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3721
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3723
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3724
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3727
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3728
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3731
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3732
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3735
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3736
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3739
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 3740
        .trainerName = _("TONY"),
#line 3741
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3742
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3744
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3745
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3748
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3749
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3752
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3753
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3756
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3757
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3760
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 3761
        .trainerName = _("JEROME"),
#line 3762
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3763
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3765
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3766
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3769
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3770
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3773
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3774
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3777
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3778
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3781
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 3782
        .trainerName = _("TUCKER"),
#line 3783
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3784
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3786
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3787
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3790
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3791
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3794
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3795
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3798
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 3799
        .trainerName = _("RICK"),
#line 3800
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3801
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3803
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3804
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3807
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3808
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3811
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3812
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3815
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3816
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3819
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 3820
        .trainerName = _("CAMERON"),
#line 3821
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3822
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3824
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3825
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3828
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3829
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3832
    [DIFFICULTY_NORMAL][TRAINER_SETH] =
    {
#line 3833
        .trainerName = _("SETH"),
#line 3834
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3835
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3837
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3838
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3841
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3842
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3845
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3846
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3849
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3850
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3853
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 3854
        .trainerName = _("JAMES"),
#line 3855
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3856
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3858
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3859
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3862
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3863
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3866
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3867
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3870
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3871
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3874
    [DIFFICULTY_NORMAL][TRAINER_LEWIS] =
    {
#line 3875
        .trainerName = _("LEWIS"),
#line 3876
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3877
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3879
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3880
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3883
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3884
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3887
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3888
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3891
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3892
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3895
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 3896
        .trainerName = _("PARKER"),
#line 3897
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3898
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3900
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 3901
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3904
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3905
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3908
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3909
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3912
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3913
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3916
    [DIFFICULTY_NORMAL][TRAINER_ELAINE] =
    {
#line 3917
        .trainerName = _("ELAINE"),
#line 3918
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3919
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3921
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3922
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3925
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3926
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3929
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 3930
        .trainerName = _("PAULA"),
#line 3931
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3932
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3934
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3935
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3938
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3939
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3942
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3943
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3946
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 3947
        .trainerName = _("KAYLEE"),
#line 3948
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3949
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3951
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3952
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3955
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3956
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3959
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3960
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3963
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3964
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3967
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 3968
        .trainerName = _("SUSIE"),
#line 3969
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3970
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3972
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3973
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3976
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3977
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3980
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3981
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3984
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 3985
        .trainerName = _("DENISE"),
#line 3986
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3987
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3989
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3990
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3993
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3994
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3997
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 3998
        .trainerName = _("KARA"),
#line 3999
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4000
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4002
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4003
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4006
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4007
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4010
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4011
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4014
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 4015
        .trainerName = _("WENDY"),
#line 4016
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4017
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4019
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4020
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4023
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4024
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4027
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4028
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4031
    [DIFFICULTY_NORMAL][TRAINER_LISA] =
    {
#line 4032
        .trainerName = _("LISA"),
#line 4033
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4034
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4036
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4037
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4040
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4041
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4044
    [DIFFICULTY_NORMAL][TRAINER_JILL] =
    {
#line 4045
        .trainerName = _("JILL"),
#line 4046
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4047
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4049
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4050
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4053
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4054
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4057
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 4058
        .trainerName = _("MARY"),
#line 4059
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4060
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4062
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4063
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4066
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4067
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4070
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 4071
        .trainerName = _("KATIE"),
#line 4072
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4073
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4075
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4076
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4079
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4080
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4083
    [DIFFICULTY_NORMAL][TRAINER_DAWN] =
    {
#line 4084
        .trainerName = _("DAWN"),
#line 4085
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4086
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4088
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4089
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4092
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4093
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4096
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 4097
        .trainerName = _("TARA"),
#line 4098
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4099
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4101
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4102
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4105
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4106
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4109
    [DIFFICULTY_NORMAL][TRAINER_NICOLE] =
    {
#line 4110
        .trainerName = _("NICOLE"),
#line 4111
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4112
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4114
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4115
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4118
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4119
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4122
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4123
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4126
    [DIFFICULTY_NORMAL][TRAINER_LORI] =
    {
#line 4127
        .trainerName = _("LORI"),
#line 4128
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4129
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4131
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4132
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4135
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4136
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4139
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4140
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4143
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 4144
        .trainerName = _("JODY"),
#line 4145
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4146
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4148
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4149
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4152
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4153
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4156
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 4157
        .trainerName = _("NIKKI"),
#line 4158
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4159
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4161
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4162
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4165
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4166
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4169
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4170
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4173
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4174
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4177
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 4178
        .trainerName = _("DIANA"),
#line 4179
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4180
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4182
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4183
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4186
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4187
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4190
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4191
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4194
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4195
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4198
    [DIFFICULTY_NORMAL][TRAINER_BRIANA] =
    {
#line 4199
        .trainerName = _("BRIANA"),
#line 4200
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4201
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4203
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4204
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4207
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4208
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4211
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4212
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4215
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4216
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4219
    [DIFFICULTY_NORMAL][TRAINER_EUGENE] =
    {
#line 4220
        .trainerName = _("EUGENE"),
#line 4221
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4222
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4224
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4225
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4228
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4229
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4232
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4233
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4236
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 4237
        .trainerName = _("HUEY"),
#line 4238
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4239
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4241
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4242
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4245
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4246
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4249
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4250
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4253
    [DIFFICULTY_NORMAL][TRAINER_TERRELL] =
    {
#line 4254
        .trainerName = _("TERRELL"),
#line 4255
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4256
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4258
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4259
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4262
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4263
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4266
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 4267
        .trainerName = _("KENT"),
#line 4268
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4269
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4271
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4272
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4276
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4279
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4280
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4283
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 4284
        .trainerName = _("ERNEST"),
#line 4285
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4286
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4288
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4289
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4292
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4293
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4296
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4297
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4300
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4304
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 4305
        .trainerName = _("JEFF"),
#line 4306
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4307
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4309
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4310
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4314
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4317
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4318
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4321
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 4322
        .trainerName = _("GARRETT"),
#line 4323
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4324
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4326
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4327
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4330
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4331
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4334
    [DIFFICULTY_NORMAL][TRAINER_KENNETH] =
    {
#line 4335
        .trainerName = _("KENNETH"),
#line 4336
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4337
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4339
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4340
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4343
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4344
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4347
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4348
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4351
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4352
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4355
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4356
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4359
    [DIFFICULTY_NORMAL][TRAINER_STANLY] =
    {
#line 4360
        .trainerName = _("STANLY"),
#line 4361
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4362
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4364
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4365
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4368
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4369
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4372
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4373
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4376
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4377
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4380
    [DIFFICULTY_NORMAL][TRAINER_HARRY] =
    {
#line 4381
        .trainerName = _("HARRY"),
#line 4382
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4383
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4385
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4386
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4389
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4390
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4393
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 4394
        .trainerName = _("STAN"),
#line 4395
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4396
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4398
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4399
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4402
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4403
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4406
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 4407
        .trainerName = _("ERIC"),
#line 4408
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4409
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4411
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4412
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4415
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4417
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4416
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4419
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4420
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4423
    [DIFFICULTY_NORMAL][TRAINER_GREGG] =
    {
#line 4424
        .trainerName = _("GREGG"),
#line 4425
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4426
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4428
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4429
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4432
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4433
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4436
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4437
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4440
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4441
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4444
    [DIFFICULTY_NORMAL][TRAINER_JAY] =
    {
#line 4445
        .trainerName = _("JAY"),
#line 4446
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4447
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4449
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4450
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4451
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4453
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4454
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4457
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4458
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4461
    [DIFFICULTY_NORMAL][TRAINER_DAVE] =
    {
#line 4462
        .trainerName = _("DAVE"),
#line 4463
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4464
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4466
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4467
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4470
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4471
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4474
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 4475
        .trainerName = _("SAM"),
#line 4476
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4477
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4479
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4480
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4483
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4484
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4487
    [DIFFICULTY_NORMAL][TRAINER_TOM] =
    {
#line 4488
        .trainerName = _("TOM"),
#line 4489
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4490
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4492
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4493
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4496
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4497
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4500
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4501
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4504
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4505
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4508
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 4509
        .trainerName = _("PAT"),
#line 4510
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4511
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4513
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4514
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4515
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4517
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4518
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4521
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4522
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4525
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4526
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4529
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 4530
        .trainerName = _("SHAWN"),
#line 4531
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4532
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4534
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4535
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4538
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4539
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4542
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4543
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4546
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4547
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4550
    [DIFFICULTY_NORMAL][TRAINER_TERU] =
    {
#line 4551
        .trainerName = _("TERU"),
#line 4552
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4553
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4555
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4556
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4559
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4560
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4563
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4564
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4567
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4568
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4571
    [DIFFICULTY_NORMAL][TRAINER_RUSS] =
    {
#line 4572
        .trainerName = _("RUSS"),
#line 4573
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4574
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4576
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4577
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4580
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4581
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4584
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4585
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4588
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4589
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4592
    [DIFFICULTY_NORMAL][TRAINER_NORTON] =
    {
#line 4593
        .trainerName = _("NORTON"),
#line 4594
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4595
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4597
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4598
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4601
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4602
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4605
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4606
        .trainerName = _("HUGH"),
#line 4607
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4608
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4610
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4611
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4615
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4618
    [DIFFICULTY_NORMAL][TRAINER_MARKUS] =
    {
#line 4619
        .trainerName = _("MARKUS"),
#line 4620
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4621
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4623
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 4624
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4627
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4628
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4631
    [DIFFICULTY_NORMAL][TRAINER_CLYDE] =
    {
#line 4632
        .trainerName = _("CLYDE"),
#line 4633
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 4634
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 4636
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4637
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4640
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4641
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4644
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 4645
        .trainerName = _("VINCENT"),
#line 4646
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4647
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4649
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4650
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4653
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4654
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4657
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4658
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4661
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4662
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4665
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4666
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4669
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4670
        .trainerName = _("ANTHONY"),
#line 4671
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4672
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4674
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4675
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4678
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4679
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4682
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4683
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4686
    [DIFFICULTY_NORMAL][TRAINER_RUSSELL] =
    {
#line 4687
        .trainerName = _("RUSSELL"),
#line 4688
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4689
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4691
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4692
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4695
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4696
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4699
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4700
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4703
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 4704
        .trainerName = _("PHILLIP"),
#line 4705
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4706
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4708
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4709
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4712
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4713
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4716
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4717
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4720
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4721
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4724
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 4725
        .trainerName = _("LEONARD"),
#line 4726
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4727
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4729
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4730
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4733
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4734
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4737
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4738
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4741
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4742
        .trainerName = _("BENJAMIN"),
#line 4743
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4744
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4746
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4747
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4750
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4751
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4754
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4755
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4758
    [DIFFICULTY_NORMAL][TRAINER_ERIK] =
    {
#line 4759
        .trainerName = _("ERIK"),
#line 4760
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4761
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4763
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4764
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4767
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4768
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4771
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4772
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4775
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4776
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4779
    [DIFFICULTY_NORMAL][TRAINER_MICHAEL] =
    {
#line 4780
        .trainerName = _("MICHAEL"),
#line 4781
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4782
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4784
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4785
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4786
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4788
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4789
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4792
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4793
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4796
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4797
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4800
    [DIFFICULTY_NORMAL][TRAINER_PARRY] =
    {
#line 4801
        .trainerName = _("PARRY"),
#line 4802
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4803
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4805
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4806
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4809
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4810
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4813
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4814
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4817
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4818
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4821
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 4822
        .trainerName = _("TIMOTHY"),
#line 4823
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4824
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4826
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4827
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4830
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4831
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4834
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4835
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4838
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4839
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4842
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4843
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4846
    [DIFFICULTY_NORMAL][TRAINER_BAILEY] =
    {
#line 4847
        .trainerName = _("BAILEY"),
#line 4848
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4849
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4851
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4852
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4855
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4856
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4859
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4860
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4863
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4864
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4867
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4868
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4871
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4872
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4875
    [DIFFICULTY_NORMAL][TRAINER_TIM] =
    {
#line 4876
        .trainerName = _("TIM"),
#line 4877
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4878
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4880
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4881
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4884
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4885
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4888
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4889
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4892
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4893
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4896
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 4897
        .trainerName = _("NOLAND"),
#line 4898
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4899
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4901
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4902
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4905
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4906
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4909
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4910
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4913
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 4914
        .trainerName = _("SIDNEY"),
#line 4915
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4916
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4918
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4919
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4922
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4923
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4926
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4927
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4930
    [DIFFICULTY_NORMAL][TRAINER_KENNY] =
    {
#line 4931
        .trainerName = _("KENNY"),
#line 4932
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4933
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4935
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4936
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4939
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4940
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4943
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4944
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4947
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4948
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4951
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4952
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4955
    [DIFFICULTY_NORMAL][TRAINER_JIM] =
    {
#line 4956
        .trainerName = _("JIM"),
#line 4957
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4958
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4960
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4961
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4964
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4965
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4968
    [DIFFICULTY_NORMAL][TRAINER_DEVIN] =
    {
#line 4969
        .trainerName = _("DEVIN"),
#line 4970
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4971
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4973
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4977
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4978
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4981
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4982
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4985
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4986
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4989
    [DIFFICULTY_NORMAL][TRAINER_DANIEL] =
    {
#line 4990
        .trainerName = _("DANIEL"),
#line 4991
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4992
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4994
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4995
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4998
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4999
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5002
    [DIFFICULTY_NORMAL][TRAINER_KAZU] =
    {
#line 5003
        .trainerName = _("KAZU"),
#line 5004
        .trainerClass = TRAINER_CLASS_BIKER,
#line 5005
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 5007
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5008
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5011
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5012
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5015
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5016
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5019
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5020
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5023
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5024
        .trainerName = _("DWAYNE"),
#line 5025
        .trainerClass = TRAINER_CLASS_BIKER,
#line 5026
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 5028
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5029
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5033
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5036
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5037
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5040
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5041
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5044
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5045
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5048
    [DIFFICULTY_NORMAL][TRAINER_HARRIS] =
    {
#line 5049
        .trainerName = _("HARRIS"),
#line 5050
        .trainerClass = TRAINER_CLASS_BIKER,
#line 5051
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 5053
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5054
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5057
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5058
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5061
    [DIFFICULTY_NORMAL][TRAINER_ZEKE] =
    {
#line 5062
        .trainerName = _("ZEKE"),
#line 5063
        .trainerClass = TRAINER_CLASS_BIKER,
#line 5064
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 5066
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5067
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5070
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5071
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5074
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5075
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5078
    [DIFFICULTY_NORMAL][TRAINER_CHARLES] =
    {
#line 5079
        .trainerName = _("CHARLES"),
#line 5080
        .trainerClass = TRAINER_CLASS_BIKER,
#line 5081
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 5083
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5084
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5087
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5088
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5091
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5092
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5095
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5096
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5099
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 5100
        .trainerName = _("RILEY"),
#line 5101
        .trainerClass = TRAINER_CLASS_BIKER,
#line 5102
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 5104
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5105
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5108
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5109
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5112
    [DIFFICULTY_NORMAL][TRAINER_JOEL] =
    {
#line 5113
        .trainerName = _("JOEL"),
#line 5114
        .trainerClass = TRAINER_CLASS_BIKER,
#line 5115
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 5117
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5121
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5122
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5125
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5126
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5129
    [DIFFICULTY_NORMAL][TRAINER_GLENN] =
    {
#line 5130
        .trainerName = _("GLENN"),
#line 5131
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 5132
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 5134
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5135
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5138
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5139
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5142
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5143
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5146
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5147
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5150
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5151
        .trainerName = _("DUNCAN"),
#line 5152
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 5153
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 5155
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5156
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5159
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5160
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5163
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5164
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5167
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 5168
        .trainerName = _("EDDIE"),
#line 5169
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 5170
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 5172
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5173
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5176
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5177
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5180
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5181
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5184
    [DIFFICULTY_NORMAL][TRAINER_RICHARDO] =
    {
#line 5185
        .trainerName = _("RICHARDO"),
#line 5186
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 5187
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 5189
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5190
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5193
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5194
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5197
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5198
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5201
    [DIFFICULTY_NORMAL][TRAINER_NARD] =
    {
#line 5202
        .trainerName = _("NARD"),
#line 5203
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5204
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5206
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5207
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5211
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5214
    [DIFFICULTY_NORMAL][TRAINER_COREY] =
    {
#line 5215
        .trainerName = _("COREY"),
#line 5216
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5217
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5219
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5220
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5223
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5224
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5227
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5228
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5231
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5232
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5235
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5237
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5236
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5239
    [DIFFICULTY_NORMAL][TRAINER_OTIS] =
    {
#line 5240
        .trainerName = _("OTIS"),
#line 5241
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5242
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5244
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5245
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5248
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5249
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5252
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5253
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5256
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5257
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5260
    [DIFFICULTY_NORMAL][TRAINER_DICK] =
    {
#line 5261
        .trainerName = _("DICK"),
#line 5262
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5263
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5265
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5266
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5269
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5270
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5273
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 5274
        .trainerName = _("NED"),
#line 5275
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5276
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5278
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5279
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5282
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5283
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5286
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5287
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5290
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5291
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5294
    [DIFFICULTY_NORMAL][TRAINER_BURT] =
    {
#line 5295
        .trainerName = _("BURT"),
#line 5296
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5297
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5299
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5300
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5303
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5304
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5307
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5308
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5311
    [DIFFICULTY_NORMAL][TRAINER_BILL] =
    {
#line 5312
        .trainerName = _("BILL"),
#line 5313
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5314
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5316
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5317
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5320
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5321
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5324
    [DIFFICULTY_NORMAL][TRAINER_WALT] =
    {
#line 5325
        .trainerName = _("WALT"),
#line 5326
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5327
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5329
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5330
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5333
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5334
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5337
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5338
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5341
    [DIFFICULTY_NORMAL][TRAINER_RAY] =
    {
#line 5342
        .trainerName = _("RAY"),
#line 5343
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5344
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5346
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5347
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5350
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5351
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5354
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 5355
        .trainerName = _("LYLE"),
#line 5356
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5357
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5359
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5360
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5363
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5364
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5367
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5368
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5371
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5372
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5375
    [DIFFICULTY_NORMAL][TRAINER_IRWIN] =
    {
#line 5376
        .trainerName = _("IRWIN"),
#line 5377
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 5378
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 5380
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5381
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5384
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5385
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5388
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5389
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5392
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5393
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5396
    [DIFFICULTY_NORMAL][TRAINER_FRITZ] =
    {
#line 5397
        .trainerName = _("FRITZ"),
#line 5398
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 5399
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 5401
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5405
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5406
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5409
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5410
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5413
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5414
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5417
    [DIFFICULTY_NORMAL][TRAINER_HORTON] =
    {
#line 5418
        .trainerName = _("HORTON"),
#line 5419
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 5420
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 5422
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5423
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5426
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5427
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5430
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5431
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5434
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5435
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5438
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5439
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5442
    [DIFFICULTY_NORMAL][TRAINER_KENJI] =
    {
#line 5443
        .trainerName = _("KENJI"),
#line 5444
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5445
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5447
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5448
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5451
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5452
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5455
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5456
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5459
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5460
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5463
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5464
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5467
    [DIFFICULTY_NORMAL][TRAINER_YOSHI] =
    {
#line 5468
        .trainerName = _("YOSHI"),
#line 5469
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5470
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5472
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5473
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5476
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5477
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5480
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5481
        .trainerName = _("LAO"),
#line 5482
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5483
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5485
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5486
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5489
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5490
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5493
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 5494
        .trainerName = _("NOB"),
#line 5495
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5496
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5498
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5499
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5502
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5503
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5506
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5507
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5510
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 5511
        .trainerName = _("KIYO"),
#line 5512
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5513
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5515
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5516
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5519
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5520
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5523
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5524
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5527
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5528
        .trainerName = _("LUNG"),
#line 5529
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5530
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5532
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5533
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5536
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5537
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5540
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5541
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5544
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5545
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5548
    [DIFFICULTY_NORMAL][TRAINER_WAI] =
    {
#line 5549
        .trainerName = _("WAI"),
#line 5550
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5551
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5553
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5554
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5555
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5557
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5558
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5561
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5562
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5565
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5566
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5569
    [DIFFICULTY_NORMAL][TRAINER_NATHAN] =
    {
#line 5570
        .trainerName = _("NATHAN"),
#line 5571
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5572
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5574
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5575
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5578
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5579
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5582
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 5583
        .trainerName = _("FRANKLIN"),
#line 5584
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5585
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5587
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5588
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5591
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5592
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5595
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 5596
        .trainerName = _("HERMAN"),
#line 5597
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5598
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5600
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5601
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5604
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5605
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5608
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5609
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5612
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5613
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5616
    [DIFFICULTY_NORMAL][TRAINER_FIDEL] =
    {
#line 5617
        .trainerName = _("FIDEL"),
#line 5618
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5619
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5621
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5622
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5625
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5626
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5629
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 5630
        .trainerName = _("GREG"),
#line 5631
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5632
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5634
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5635
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5638
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5639
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5642
    [DIFFICULTY_NORMAL][TRAINER_NORMAN] =
    {
#line 5643
        .trainerName = _("NORMAN"),
#line 5644
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5645
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5647
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5648
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5651
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5652
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5655
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5656
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5659
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 5660
        .trainerName = _("MARK"),
#line 5661
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5662
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5664
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5665
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5668
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5669
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5672
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5673
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5676
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5677
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5680
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5681
        .trainerName = _("PHIL"),
#line 5682
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5683
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5685
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5686
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5689
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5690
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5693
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5694
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5697
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5698
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5701
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 5702
        .trainerName = _("RICHARD"),
#line 5703
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5704
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5706
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5707
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5710
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5711
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5714
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5715
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5718
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5719
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5722
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 5723
        .trainerName = _("GILBERT"),
#line 5724
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5725
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5727
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5728
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5731
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5732
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5735
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5736
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5739
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5740
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5743
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5744
        .trainerName = _("JARED"),
#line 5745
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5746
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5748
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5749
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5752
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5753
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5756
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5757
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5760
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5761
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5764
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 5765
        .trainerName = _("RODNEY"),
#line 5766
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5767
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5769
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 5770
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5773
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5774
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5777
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5778
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5781
    [DIFFICULTY_NORMAL][TRAINER_LIZ] =
    {
#line 5782
        .trainerName = _("LIZ"),
#line 5783
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5784
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5786
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5787
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5790
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5791
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5794
    [DIFFICULTY_NORMAL][TRAINER_GINA] =
    {
#line 5795
        .trainerName = _("GINA"),
#line 5796
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5797
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5799
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5800
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5803
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5804
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5807
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5808
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5811
    [DIFFICULTY_NORMAL][TRAINER_BROOKE] =
    {
#line 5812
        .trainerName = _("BROOKE"),
#line 5813
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5814
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5816
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5817
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5820
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5821
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5824
    [DIFFICULTY_NORMAL][TRAINER_KIM] =
    {
#line 5825
        .trainerName = _("KIM"),
#line 5826
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5827
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5829
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5830
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5833
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5834
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5837
    [DIFFICULTY_NORMAL][TRAINER_CINDY] =
    {
#line 5838
        .trainerName = _("CINDY"),
#line 5839
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5840
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5842
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5843
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5846
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5847
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5850
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5851
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5854
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 5855
        .trainerName = _("HOPE"),
#line 5856
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5857
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5859
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5860
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5863
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5864
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5867
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5868
        .trainerName = _("SHARON"),
#line 5869
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5870
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5872
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5873
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5876
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5877
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5880
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5881
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5884
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5885
        .trainerName = _("DEBRA"),
#line 5886
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5887
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5889
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5890
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5893
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5894
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5897
    [DIFFICULTY_NORMAL][TRAINER_ERIN] =
    {
#line 5898
        .trainerName = _("ERIN"),
#line 5899
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5900
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5902
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5903
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5906
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5907
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5910
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5911
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5914
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5915
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5918
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5919
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5922
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5923
        .trainerName = _("HEIDI"),
#line 5924
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5925
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5927
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5928
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5931
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5932
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5935
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5936
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5939
    [DIFFICULTY_NORMAL][TRAINER_EDNA] =
    {
#line 5940
        .trainerName = _("EDNA"),
#line 5941
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5942
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5944
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5945
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5948
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5949
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5952
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5953
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5956
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 5957
        .trainerName = _("TIFFANY"),
#line 5958
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5959
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5961
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5962
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5965
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5966
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5969
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5970
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5973
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5974
        .trainerName = _("TANYA"),
#line 5975
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5976
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5978
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 5979
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5982
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5983
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5986
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5987
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5990
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5991
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5994
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 5995
        .trainerName = _("ROLAND"),
#line 5996
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5997
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5999
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6000
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6003
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6004
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6007
    [DIFFICULTY_NORMAL][TRAINER_TODD] =
    {
#line 6008
        .trainerName = _("TODD"),
#line 6009
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6010
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6012
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6013
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6016
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6017
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6020
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 6021
        .trainerName = _("IVAN"),
#line 6022
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6023
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6025
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6026
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6029
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6030
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6033
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6034
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6037
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 6038
        .trainerName = _("ELLIOT"),
#line 6039
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6040
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6042
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6043
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6046
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6047
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6050
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6051
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6054
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 6055
        .trainerName = _("BARRY"),
#line 6056
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6057
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6059
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6060
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6063
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6064
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6067
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6068
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6071
    [DIFFICULTY_NORMAL][TRAINER_LLOYD] =
    {
#line 6072
        .trainerName = _("LLOYD"),
#line 6073
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6074
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6076
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6077
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6080
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6081
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6084
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 6085
        .trainerName = _("DEAN"),
#line 6086
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6087
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6089
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6090
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6093
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6094
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6097
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6098
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6101
    [DIFFICULTY_NORMAL][TRAINER_SID] =
    {
#line 6102
        .trainerName = _("SID"),
#line 6103
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6104
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6106
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6107
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6110
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6111
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6114
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6115
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6118
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6119
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6122
    [DIFFICULTY_NORMAL][TRAINER_HARVEY] =
    {
#line 6123
        .trainerName = _("HARVEY"),
#line 6124
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6125
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6127
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6128
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6131
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6132
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6135
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 6136
        .trainerName = _("DALE"),
#line 6137
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6138
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6140
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6141
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6144
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6145
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6148
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 6149
        .trainerName = _("TED"),
#line 6150
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6151
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6153
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6154
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6157
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6158
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6161
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6162
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6165
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6166
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6169
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 6170
        .trainerName = _("THOMAS"),
#line 6171
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6172
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6174
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6175
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6178
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6179
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6182
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6183
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6186
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6187
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6190
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6191
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6194
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 6195
        .trainerName = _("LEROY"),
#line 6196
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6197
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6199
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6200
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6203
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6204
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6207
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6208
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6211
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6212
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6215
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6216
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6219
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 6220
        .trainerName = _("DAVID"),
#line 6221
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6222
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6224
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6225
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6228
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6229
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6232
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6233
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6236
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6237
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6240
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6241
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6244
    [DIFFICULTY_NORMAL][TRAINER_JOHN] =
    {
#line 6245
        .trainerName = _("JOHN"),
#line 6246
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6247
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6249
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6253
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6254
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6257
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6258
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6261
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6262
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6265
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6266
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6269
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 6270
        .trainerName = _("JERRY"),
#line 6271
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6272
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6274
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6275
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6278
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6279
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6282
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6283
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6286
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6287
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6290
    [DIFFICULTY_NORMAL][TRAINER_GRANT] =
    {
#line 6291
        .trainerName = _("GRANT"),
#line 6292
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6293
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6295
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6296
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6299
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6300
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6303
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6304
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6307
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 6308
        .trainerName = _("SPENCER"),
#line 6309
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6310
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6312
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6313
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6316
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6317
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6320
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6321
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6324
    [DIFFICULTY_NORMAL][TRAINER_QUENTIN] =
    {
#line 6325
        .trainerName = _("QUENTIN"),
#line 6326
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 6327
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 6329
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6330
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6333
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6334
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6337
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6338
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6341
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6342
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6345
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6346
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6349
    [DIFFICULTY_NORMAL][TRAINER_CHOW] =
    {
#line 6350
        .trainerName = _("CHOW"),
#line 6351
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6352
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6354
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6355
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6358
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6359
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6362
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6363
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6366
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6367
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6370
    [DIFFICULTY_NORMAL][TRAINER_NICO] =
    {
#line 6371
        .trainerName = _("NICO"),
#line 6372
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6373
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6375
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6376
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6379
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6380
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6383
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6384
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6387
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6388
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6391
    [DIFFICULTY_NORMAL][TRAINER_JIN] =
    {
#line 6392
        .trainerName = _("JIN"),
#line 6393
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6394
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6396
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6397
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6400
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6401
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6404
    [DIFFICULTY_NORMAL][TRAINER_TROY] =
    {
#line 6405
        .trainerName = _("TROY"),
#line 6406
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6407
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6409
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6410
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6413
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6414
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6417
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6418
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6421
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 6422
        .trainerName = _("JEFFREY"),
#line 6423
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6424
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6426
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6427
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6430
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6431
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6434
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6435
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6438
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6439
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6442
    [DIFFICULTY_NORMAL][TRAINER_PING] =
    {
#line 6443
        .trainerName = _("PING"),
#line 6444
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6445
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6447
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6448
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6451
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6452
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6455
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6456
        .trainerName = _("EDMOND"),
#line 6457
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6458
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6460
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6461
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6464
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6465
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6468
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6469
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6472
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6473
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6476
    [DIFFICULTY_NORMAL][TRAINER_NEAL] =
    {
#line 6477
        .trainerName = _("NEAL"),
#line 6478
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6479
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6481
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6482
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6485
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6486
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6489
    [DIFFICULTY_NORMAL][TRAINER_LI] =
    {
#line 6490
        .trainerName = _("LI"),
#line 6491
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6492
        .trainerPic = TRAINER_PIC_MR_FUJI,
        .encounterMusic_gender =
#line 6494
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6495
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6498
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6499
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6502
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6503
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6506
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6507
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6510
    [DIFFICULTY_NORMAL][TRAINER_GAKU] =
    {
#line 6511
        .trainerName = _("GAKU"),
#line 6512
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6513
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6515
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6516
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6519
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6520
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6523
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6524
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6527
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6528
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6531
    [DIFFICULTY_NORMAL][TRAINER_MASA] =
    {
#line 6532
        .trainerName = _("MASA"),
#line 6533
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6534
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6536
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 6537
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6540
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6541
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6544
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6545
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6548
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6549
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6552
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 6553
        .trainerName = _("KOJI"),
#line 6554
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6555
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6557
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6558
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6561
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6562
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6565
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6566
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6569
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6570
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6573
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6574
        .trainerName = _("MARTHA"),
#line 6575
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6576
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6578
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6579
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6582
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6583
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6586
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6587
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6590
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 6591
        .trainerName = _("GRACE"),
#line 6592
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6593
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6595
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6596
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6599
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6600
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6603
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6604
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6607
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 6608
        .trainerName = _("BETHANY"),
#line 6609
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6610
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6612
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6613
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6616
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6617
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6620
    [DIFFICULTY_NORMAL][TRAINER_MARGRET] =
    {
#line 6621
        .trainerName = _("MARGRET"),
#line 6622
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6623
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6625
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6626
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6629
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6630
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6633
    [DIFFICULTY_NORMAL][TRAINER_ETHEL] =
    {
#line 6634
        .trainerName = _("ETHEL"),
#line 6635
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6636
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6638
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6639
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6642
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6643
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [DIFFICULTY_NORMAL][TRAINER_REBECCA] =
    {
#line 6647
        .trainerName = _("REBECCA"),
#line 6648
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6649
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6651
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6652
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6655
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6656
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6659
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6660
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6663
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6664
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6667
    [DIFFICULTY_NORMAL][TRAINER_DORIS] =
    {
#line 6668
        .trainerName = _("DORIS"),
#line 6669
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6670
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 6672
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6673
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6676
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6677
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6680
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6681
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6684
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6685
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6688
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 6689
        .trainerName = _("RONALD"),
#line 6690
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6691
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6693
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6694
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6697
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6698
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6701
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6702
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6705
    [DIFFICULTY_NORMAL][TRAINER_BRAD] =
    {
#line 6706
        .trainerName = _("BRAD"),
#line 6707
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6708
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6710
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6711
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6714
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6715
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6718
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6719
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6722
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 6723
        .trainerName = _("DOUGLAS"),
#line 6724
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6725
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6727
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6728
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6731
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6732
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6735
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6736
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6739
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6740
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6743
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 6744
        .trainerName = _("WILLIAM"),
#line 6745
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6746
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6748
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6749
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6752
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6753
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6756
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 6757
        .trainerName = _("DEREK"),
#line 6758
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6759
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6761
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6762
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6765
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6766
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6769
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6770
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6773
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 6774
        .trainerName = _("ROBERT"),
#line 6775
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6776
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6778
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6779
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6782
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6783
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6786
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 6787
        .trainerName = _("JOSHUA"),
#line 6788
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6789
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6791
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6792
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6795
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6796
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6799
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6800
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6803
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6804
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6807
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 6808
        .trainerName = _("CARTER"),
#line 6809
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6810
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6812
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6813
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6816
            .species = SPECIES_CHIKORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6817
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6820
            .species = SPECIES_CYNDAQUIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6821
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6824
            .species = SPECIES_TOTODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6825
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6828
    [DIFFICULTY_NORMAL][TRAINER_TREVOR] =
    {
#line 6829
        .trainerName = _("TREVOR"),
#line 6830
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 6831
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 6833
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 6834
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6837
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6838
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6841
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 6842
        .trainerName = _("BRANDON"),
#line 6843
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6844
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6846
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6847
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6850
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6851
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6854
    [DIFFICULTY_NORMAL][TRAINER_JEREMY] =
    {
#line 6855
        .trainerName = _("JEREMY"),
#line 6856
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6857
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6859
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6860
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6863
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6864
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6867
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6868
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6871
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6872
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6875
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 6876
        .trainerName = _("COLIN"),
#line 6877
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6878
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6880
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6881
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6884
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6885
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6888
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 6889
        .trainerName = _("ALEX"),
#line 6890
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6891
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6893
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 6894
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6897
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6898
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6901
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6902
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6905
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6906
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6909
    [DIFFICULTY_NORMAL][TRAINER_REX] =
    {
#line 6910
        .trainerName = _("REX"),
#line 6911
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6912
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6914
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6915
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6918
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6919
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6922
    [DIFFICULTY_NORMAL][TRAINER_ALLAN] =
    {
#line 6923
        .trainerName = _("ALLAN"),
#line 6924
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6925
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6927
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6928
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6931
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6932
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6935
    [DIFFICULTY_NORMAL][TRAINER_NAOKO] =
    {
#line 6936
        .trainerName = _("NAOKO"),
#line 6937
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6938
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6940
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6941
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 6943
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6945
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6946
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6948
                MOVE_PSYCHIC,
                MOVE_PSYCH_UP,
                MOVE_SWIFT,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6953
    [DIFFICULTY_NORMAL][TRAINER_SAYO] =
    {
#line 6954
        .trainerName = _("SAYO"),
#line 6955
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6956
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6958
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6959
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 6961
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6963
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6964
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6966
                MOVE_THUNDERBOLT,
                MOVE_DOUBLE_TEAM,
                MOVE_THUNDER_WAVE,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6971
    [DIFFICULTY_NORMAL][TRAINER_ZUKI] =
    {
#line 6972
        .trainerName = _("ZUKI"),
#line 6973
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6974
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6976
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6977
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 6979
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6981
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6982
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6984
                MOVE_DARK_PULSE,
                MOVE_CONFUSE_RAY,
                MOVE_SHADOW_BALL,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6989
    [DIFFICULTY_NORMAL][TRAINER_KUNI] =
    {
#line 6990
        .trainerName = _("KUNI"),
#line 6991
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6992
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6994
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6995
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 6997
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6999
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7000
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7002
                MOVE_SURF,
                MOVE_QUICK_ATTACK,
                MOVE_AURORA_BEAM,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 7007
    [DIFFICULTY_NORMAL][TRAINER_MIKI] =
    {
#line 7008
        .trainerName = _("MIKI"),
#line 7009
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 7010
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 7012
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7013
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7015
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7017
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7018
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7020
                MOVE_FIRE_BLAST,
                MOVE_QUICK_ATTACK,
                MOVE_WILL_O_WISP,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 7025
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_MAY] =
    {
#line 7026
        .trainerName = _("AMY&MAY"),
#line 7027
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7028
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 7030
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7031
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7034
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7035
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7038
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7039
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7042
    [DIFFICULTY_NORMAL][TRAINER_ANN_AND_ANNE] =
    {
#line 7043
        .trainerName = _("ANN&ANNE"),
#line 7044
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7045
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 7047
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7048
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7051
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7052
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7055
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7056
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7059
    [DIFFICULTY_NORMAL][TRAINER_JO_AND_ZOE] =
    {
#line 7060
        .trainerName = _("JO&ZOE"),
#line 7061
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7062
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 7064
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7065
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7068
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7069
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7072
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7073
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7076
    [DIFFICULTY_NORMAL][TRAINER_MEG_AND_PEG] =
    {
#line 7077
        .trainerName = _("MEG&PEG"),
#line 7078
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7079
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 7081
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7082
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7085
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7086
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7089
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7090
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7093
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_PIA] =
    {
#line 7094
        .trainerName = _("LEA&PIA"),
#line 7095
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7096
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 7098
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7099
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7102
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7103
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7106
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7107
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7110
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7111
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7114
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7115
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7118
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 7119
        .trainerName = _("BEVERLY"),
#line 7120
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7121
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 7123
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 7124
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7127
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7128
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7131
    [DIFFICULTY_NORMAL][TRAINER_RUTH] =
    {
#line 7132
        .trainerName = _("RUTH"),
#line 7133
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7134
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 7136
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 7137
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7140
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7141
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7144
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 7145
        .trainerName = _("GEORGIA"),
#line 7146
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7147
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 7149
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 7150
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7153
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7154
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7157
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7158
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7161
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7162
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7165
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7166
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7169
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7170
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7173
    [DIFFICULTY_NORMAL][TRAINER_JAMIE] =
    {
#line 7174
        .trainerName = _("JAIME"),
#line 7175
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7176
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 7178
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 7179
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7182
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7183
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7186
    [DIFFICULTY_NORMAL][TRAINER_KEITH] =
    {
#line 7187
        .trainerName = _("KEITH"),
#line 7188
        .trainerClass = TRAINER_CLASS_POLICEMAN,
#line 7189
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .encounterMusic_gender =
#line 7191
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 7192
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7195
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7196
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7199
    [DIFFICULTY_NORMAL][TRAINER_DIRK] =
    {
#line 7200
        .trainerName = _("DIRK"),
#line 7201
        .trainerClass = TRAINER_CLASS_POLICEMAN,
#line 7202
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .encounterMusic_gender =
#line 7204
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 7205
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7208
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7209
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7212
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7213
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7216
    [DIFFICULTY_NORMAL][TRAINER_THOM_AND_KAE] =
    {
#line 7217
        .trainerName = _("THOM & KAE"),
#line 7218
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7219
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7221
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7222
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7225
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7226
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7229
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7230
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7233
    [DIFFICULTY_NORMAL][TRAINER_DUFF_AND_EDA] =
    {
#line 7234
        .trainerName = _("DUFF & EDA"),
#line 7235
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7236
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7238
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7239
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7242
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7243
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7246
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7247
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7250
    [DIFFICULTY_NORMAL][TRAINER_FALKNER_1] =
    {
#line 7251
        .trainerName = _("FALKNER"),
#line 7252
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7253
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .encounterMusic_gender =
#line 7255
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7256
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7258
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7260
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7262
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7261
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7263
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 7267
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7267
            .heldItem = ITEM_SITRUS_BERRY,
#line 7269
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7268
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7270
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_GROWL,
                MOVE_PECK,
            },
            },
        },
    },
#line 7275
    [DIFFICULTY_NORMAL][TRAINER_FALKNER_2] =
    {
#line 7276
        .trainerName = _("FALKNER"),
#line 7277
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7278
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .encounterMusic_gender =
#line 7280
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7281
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7282
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7284
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7286
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7286
            .heldItem = ITEM_SITRUS_BERRY,
#line 7288
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7287
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7289
                MOVE_PSYCHIC,
                MOVE_WING_ATTACK,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 7294
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7296
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7295
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7297
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_MUD_SLAP,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7302
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7302
            .heldItem = ITEM_FOCUS_BAND,
#line 7304
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7303
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7305
                MOVE_ENDURE,
                MOVE_FLAIL,
                MOVE_DRILL_PECK,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7310
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7312
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7311
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7313
                MOVE_DRILL_PECK,
                MOVE_FAINT_ATTACK,
                MOVE_HAZE,
                MOVE_ICY_WIND,
            },
            },
            {
#line 7318
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7320
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7319
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7321
                MOVE_SKY_ATTACK,
                MOVE_EXTREME_SPEED,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7326
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7328
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7327
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7329
                MOVE_AERIAL_ACE,
                MOVE_SURF,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
        },
    },
#line 7334
    [DIFFICULTY_NORMAL][TRAINER_BUGSY_1] =
    {
#line 7335
        .trainerName = _("BUGSY"),
#line 7336
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7337
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .encounterMusic_gender =
#line 7339
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7340
        .items = { ITEM_POTION, ITEM_POTION },
#line 7341
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7343
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7345
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7347
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7346
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7348
                MOVE_PIN_MISSILE,
                MOVE_HEADBUTT,
                MOVE_BULLET_SEED,
                MOVE_HARDEN,
            },
            },
            {
#line 7353
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7354
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7356
                MOVE_BULLET_SEED,
                MOVE_COMET_PUNCH,
                MOVE_SUPERSONIC,
                MOVE_REFLECT,
            },
            },
            {
#line 7361
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7361
            .heldItem = ITEM_BERRY_JUICE,
#line 7363
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7362
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7364
                MOVE_QUICK_ATTACK,
                MOVE_FURY_CUTTER,
                MOVE_BULLET_SEED,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 7369
    [DIFFICULTY_NORMAL][TRAINER_BUGSY_2] =
    {
#line 7370
        .trainerName = _("BUGSY"),
#line 7371
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7372
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .encounterMusic_gender =
#line 7374
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7375
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7376
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7378
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7380
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7380
            .heldItem = ITEM_FOCUS_BAND,
#line 7382
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7381
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7383
                MOVE_GIGA_DRAIN,
                MOVE_AGILITY,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 7388
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7390
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7389
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7391
                MOVE_CURSE,
                MOVE_EXPLOSION,
                MOVE_PIN_MISSILE,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 7396
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7396
            .heldItem = ITEM_BERRY_JUICE,
#line 7398
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7397
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7399
                MOVE_AERIAL_ACE,
                MOVE_HYPNOSIS,
                MOVE_ANCIENT_POWER,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 7404
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7406
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7405
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7407
                MOVE_METAL_CLAW,
                MOVE_TWINEEDLE,
                MOVE_AGILITY,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 7412
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7414
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7413
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7415
                MOVE_SHADOW_CLAW,
                MOVE_BUG_BUZZ,
                MOVE_GRUDGE,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 7420
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7420
            .heldItem = ITEM_SCOPE_LENS,
#line 7422
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7421
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7423
                MOVE_SLASH,
                MOVE_CUT,
                MOVE_WING_ATTACK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7428
    [DIFFICULTY_NORMAL][TRAINER_WHITNEY_1] =
    {
#line 7429
        .trainerName = _("WHITNEY"),
#line 7430
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7431
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .encounterMusic_gender =
#line 7433
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7434
        .items = { ITEM_SUPER_POTION, ITEM_POTION },
#line 7435
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7437
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7439
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7441
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7440
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7442
                MOVE_HEADBUTT,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_METRONOME,
            },
            },
            {
#line 7447
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7449
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7448
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7450
                MOVE_FURY_SWIPES,
                MOVE_FAKE_TEARS,
                MOVE_LICK,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 7455
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7455
            .heldItem = ITEM_SITRUS_BERRY,
#line 7457
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7456
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7458
                MOVE_ROLLOUT,
                MOVE_ATTRACT,
                MOVE_STOMP,
                MOVE_MILK_DRINK,
            },
            },
        },
    },
#line 7463
    [DIFFICULTY_NORMAL][TRAINER_WHITNEY_2] =
    {
#line 7464
        .trainerName = _("WHITNEY"),
#line 7465
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7466
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .encounterMusic_gender =
#line 7468
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7469
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7472
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7474
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7476
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7475
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7477
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ENCORE,
            },
            },
            {
#line 7482
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7482
            .heldItem = ITEM_CHESTO_BERRY,
#line 7484
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7483
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7485
                MOVE_YAWN,
                MOVE_ATTRACT,
                MOVE_FAKE_OUT,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 7490
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7492
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7491
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7493
                MOVE_EGG_BOMB,
                MOVE_ATTRACT,
                MOVE_SOFT_BOILED,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 7498
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7500
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7499
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7501
                MOVE_THRASH,
                MOVE_EARTHQUAKE,
                MOVE_RAGE,
                MOVE_PURSUIT,
            },
            },
            {
#line 7506
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7506
            .heldItem = ITEM_SILK_SCARF,
#line 7508
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7507
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7509
                MOVE_IRON_TAIL,
                MOVE_ATTRACT,
                MOVE_BODY_SLAM,
                MOVE_MILK_DRINK,
            },
            },
            {
#line 7514
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7514
            .heldItem = ITEM_SILK_SCARF,
#line 7516
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7515
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7517
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_FOCUS_BLAST,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7522
    [DIFFICULTY_NORMAL][TRAINER_MORTY_1] =
    {
#line 7523
        .trainerName = _("MORTY"),
#line 7524
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7525
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .encounterMusic_gender =
#line 7527
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7528
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7529
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7531
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7533
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7535
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7534
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7536
                MOVE_HYPNOSIS,
                MOVE_NIGHTMARE,
                MOVE_CURSE,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 7541
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7543
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7542
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7544
                MOVE_SWIFT,
                MOVE_HYPNOSIS,
                MOVE_NIGHTMARE,
                MOVE_LEER,
            },
            },
            {
#line 7549
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7551
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7550
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7552
                MOVE_SHADOW_BALL,
                MOVE_PAIN_SPLIT,
                MOVE_PERISH_SONG,
                MOVE_PSYWAVE,
            },
            },
            {
#line 7557
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7557
            .heldItem = ITEM_SITRUS_BERRY,
#line 7559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7558
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7560
                MOVE_HYPNOSIS,
                MOVE_SHADOW_BALL,
                MOVE_MEAN_LOOK,
                MOVE_DREAM_EATER,
            },
            },
        },
    },
#line 7565
    [DIFFICULTY_NORMAL][TRAINER_MORTY_2] =
    {
#line 7566
        .trainerName = _("MORTY"),
#line 7567
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7568
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .encounterMusic_gender =
#line 7570
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7571
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7572
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7574
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7576
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7578
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7577
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7579
                MOVE_SHADOW_CLAW,
                MOVE_POWER_GEM,
                MOVE_MEAN_LOOK,
                MOVE_DETECT,
            },
            },
            {
#line 7584
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7584
            .heldItem = ITEM_SILK_SCARF,
#line 7586
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7585
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7587
                MOVE_JUMP_KICK,
                MOVE_HEADBUTT,
                MOVE_HYPNOSIS,
                MOVE_PSYCHO_CUT,
            },
            },
            {
#line 7592
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7592
            .heldItem = ITEM_SPELL_TAG,
#line 7594
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7593
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7595
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SLUDGE_BOMB,
                MOVE_PSYCHIC,
            },
            },
            {
#line 7600
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7602
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7601
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7603
                MOVE_SHADOW_BALL,
                MOVE_MEAN_LOOK,
                MOVE_PAIN_SPLIT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 7608
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7608
            .heldItem = ITEM_SITRUS_BERRY,
#line 7610
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7609
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7611
                MOVE_SHADOW_BALL,
                MOVE_HYPNOSIS,
                MOVE_THUNDERBOLT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 7616
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7618
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7617
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7619
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_WILL_O_WISP,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 7624
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1] =
    {
#line 7625
        .trainerName = _("PRYCE"),
#line 7626
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7627
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7630
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7633
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7635
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7636
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7638
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
                MOVE_REST,
            },
            },
            {
#line 7643
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7645
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7644
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7646
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_ICY_WIND,
            },
            },
            {
#line 7651
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7653
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7652
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7654
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_RAIN_DANCE,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7659
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .heldItem = ITEM_SITRUS_BERRY,
#line 7661
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7660
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7662
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7667
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_2] =
    {
#line 7668
        .trainerName = _("PRYCE"),
#line 7669
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7670
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7672
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7673
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7674
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7676
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7678
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7679
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7681
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_BEAT_UP,
                MOVE_BLIZZARD,
            },
            },
            {
#line 7686
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7686
            .heldItem = ITEM_SITRUS_BERRY,
#line 7688
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7687
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7689
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_REST,
                MOVE_ENCORE,
            },
            },
            {
#line 7694
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7696
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7695
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7697
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7702
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7704
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7703
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7705
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_WILL_O_WISP,
                MOVE_DESTINY_BOND,
            },
            },
            {
#line 7710
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7710
            .heldItem = ITEM_SOFT_SAND,
#line 7712
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7711
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7713
                MOVE_STRENGTH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
            {
#line 7718
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7720
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7719
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7721
                MOVE_SHEER_COLD,
                MOVE_CRUNCH,
                MOVE_DARK_PULSE,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7726
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1_2] =
    {
#line 7727
        .trainerName = _("PRYCE"),
#line 7728
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7729
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7731
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7732
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7733
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7735
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7737
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7739
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7738
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7740
                MOVE_SURF,
                MOVE_SPIKES,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 7745
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7747
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7746
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7748
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 7753
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7755
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7754
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7756
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_RAIN_DANCE,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7761
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7762
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7764
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 7769
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7769
            .heldItem = ITEM_SITRUS_BERRY,
#line 7771
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7770
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7772
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7777
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1_3] =
    {
#line 7778
        .trainerName = _("PRYCE"),
#line 7779
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7780
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7782
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7783
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7784
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7786
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7788
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7790
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7789
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7791
                MOVE_SURF,
                MOVE_SPIKES,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 7796
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7798
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7797
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7799
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_BLIZZARD,
            },
            },
            {
#line 7804
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7806
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7805
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7807
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7812
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7814
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7813
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7815
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 7820
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7820
            .heldItem = ITEM_SITRUS_BERRY,
#line 7822
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7821
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7823
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7828
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1] =
    {
#line 7829
        .trainerName = _("JASMINE"),
#line 7830
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7831
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7833
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7834
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7835
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7837
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7839
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7841
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7840
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7842
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7847
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7848
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7850
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 7855
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7857
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7856
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7858
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 7863
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7863
            .heldItem = ITEM_FOCUS_BAND,
#line 7865
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7864
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7866
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7871
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7871
            .heldItem = ITEM_QUICK_CLAW,
#line 7873
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7872
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7874
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7879
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_2] =
    {
#line 7880
        .trainerName = _("JASMINE"),
#line 7881
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7882
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7884
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7885
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7886
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7888
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7890
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7891
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7893
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7898
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7899
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7901
                MOVE_FLASH_CANNON,
                MOVE_IRON_DEFENSE,
                MOVE_BATON_PASS,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 7906
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7907
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7909
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 7914
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7916
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7915
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7917
                MOVE_DOUBLE_EDGE,
                MOVE_SUBSTITUTE,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 7922
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7922
            .heldItem = ITEM_HARD_STONE,
#line 7924
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7923
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7925
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
                MOVE_SWORDS_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 7930
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7930
            .heldItem = ITEM_QUICK_CLAW,
#line 7932
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7931
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7933
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7938
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1_2] =
    {
#line 7939
        .trainerName = _("JASMINE"),
#line 7940
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7941
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7943
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7944
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7945
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7947
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7949
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7951
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7950
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7952
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7957
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7959
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7958
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7960
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 7965
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7967
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7966
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7968
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 7973
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7973
            .heldItem = ITEM_FOCUS_BAND,
#line 7975
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7974
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7976
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7981
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7981
            .heldItem = ITEM_QUICK_CLAW,
#line 7983
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7982
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7984
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7989
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1_3] =
    {
#line 7990
        .trainerName = _("JASMINE"),
#line 7991
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7992
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7994
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7995
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7996
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 7998
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8000
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8002
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8001
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8003
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 8008
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8009
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8011
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 8016
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8018
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8017
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8019
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 8024
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8024
            .heldItem = ITEM_FOCUS_BAND,
#line 8026
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8025
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8027
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 8032
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8032
            .heldItem = ITEM_QUICK_CLAW,
#line 8034
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8033
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8035
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 8040
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1] =
    {
#line 8041
        .trainerName = _("CHUCK"),
#line 8042
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8043
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 8045
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8046
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 8047
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8049
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8051
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8052
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8054
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 8059
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8061
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8060
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8062
                MOVE_LOW_KICK,
                MOVE_KARATE_CHOP,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 8067
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8069
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8068
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8070
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 8075
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8075
            .heldItem = ITEM_BLACK_BELT,
#line 8077
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8076
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8078
                MOVE_HYPNOSIS,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 8083
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_2] =
    {
#line 8084
        .trainerName = _("CHUCK"),
#line 8085
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8086
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 8088
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8089
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8090
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8092
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8094
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8094
            .heldItem = ITEM_SCOPE_LENS,
#line 8096
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8095
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8097
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
            {
#line 8102
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8104
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8103
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8105
                MOVE_DETECT,
                MOVE_HI_JUMP_KICK,
                MOVE_PSYCH_UP,
                MOVE_REVERSAL,
            },
            },
            {
#line 8110
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8112
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8111
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8113
                MOVE_CROSS_CHOP,
                MOVE_SHADOW_PUNCH,
                MOVE_ROCK_SLIDE,
                MOVE_MEDITATE,
            },
            },
            {
#line 8118
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8120
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8119
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8121
                MOVE_MEGA_KICK,
                MOVE_BLAZE_KICK,
                MOVE_HI_JUMP_KICK,
                MOVE_ROLLING_KICK,
            },
            },
            {
#line 8126
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8127
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8129
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SKY_UPPERCUT,
                MOVE_DYNAMIC_PUNCH,
            },
            },
            {
#line 8134
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8134
            .heldItem = ITEM_SITRUS_BERRY,
#line 8136
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8135
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8137
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 8142
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1_2] =
    {
#line 8143
        .trainerName = _("CHUCK"),
#line 8144
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8145
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 8147
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8148
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8149
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8151
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8153
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8155
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8154
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8156
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 8161
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8163
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8162
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8164
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 8169
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8171
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8170
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8172
                MOVE_LOW_KICK,
                MOVE_KARATE_CHOP,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 8177
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8179
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8178
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8180
                MOVE_ROCK_SMASH,
                MOVE_TWINEEDLE,
                MOVE_VICE_GRIP,
                MOVE_HARDEN,
            },
            },
            {
#line 8185
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8185
            .heldItem = ITEM_BLACK_BELT,
#line 8187
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8186
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8188
                MOVE_HYPNOSIS,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 8193
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1_3] =
    {
#line 8194
        .trainerName = _("CHUCK"),
#line 8195
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8196
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 8198
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8199
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8200
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8202
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8204
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8206
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8205
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8207
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 8212
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8214
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8213
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8215
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 8220
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8222
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8221
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8223
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 8228
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8230
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8229
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8231
                MOVE_SUBMISSION,
                MOVE_TWINEEDLE,
                MOVE_STRENGTH,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 8236
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8236
            .heldItem = ITEM_BLACK_BELT,
#line 8238
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8237
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8239
                MOVE_ICE_PUNCH,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 8244
    [DIFFICULTY_NORMAL][TRAINER_CLAIR_1] =
    {
#line 8245
        .trainerName = _("CLAIR"),
#line 8246
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8247
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .encounterMusic_gender =
#line 8249
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8250
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8251
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8253
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8255
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8257
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8256
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8258
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 8263
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8263
            .heldItem = ITEM_FOCUS_BAND,
#line 8265
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8264
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8266
                MOVE_BITE,
                MOVE_WATERFALL,
                MOVE_FLY,
                MOVE_TWISTER,
            },
            },
            {
#line 8271
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8271
            .heldItem = ITEM_CHESTO_BERRY,
#line 8273
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8272
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8274
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 8279
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8279
            .heldItem = ITEM_SITRUS_BERRY,
#line 8281
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8280
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8282
                MOVE_GLARE,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
                MOVE_POISON_JAB,
            },
            },
            {
#line 8287
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8287
            .heldItem = ITEM_LEFTOVERS,
#line 8289
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8288
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8290
                MOVE_SMOKESCREEN,
                MOVE_SURF,
                MOVE_HYPER_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 8295
    [DIFFICULTY_NORMAL][TRAINER_CLAIR_2] =
    {
#line 8296
        .trainerName = _("CLAIR"),
#line 8297
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8298
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .encounterMusic_gender =
#line 8300
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8301
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8302
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8304
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8306
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8306
            .heldItem = ITEM_METAL_COAT,
#line 8308
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8307
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8309
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 8314
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8314
            .heldItem = ITEM_FOCUS_BAND,
#line 8316
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8315
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8317
                MOVE_BITE,
                MOVE_SURF,
                MOVE_FLY,
                MOVE_TWISTER,
            },
            },
            {
#line 8322
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8324
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8323
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8325
                MOVE_REST,
                MOVE_GLARE,
                MOVE_POISON_JAB,
                MOVE_SKULL_BASH,
            },
            },
            {
#line 8330
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8330
            .heldItem = ITEM_SITRUS_BERRY,
#line 8332
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8331
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8333
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 8338
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8339
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8341
                MOVE_AGILITY,
                MOVE_THUNDER,
                MOVE_DRAGON_PULSE,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 8346
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8346
            .heldItem = ITEM_LEFTOVERS,
#line 8348
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8347
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8349
                MOVE_AGILITY,
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 8354
    [DIFFICULTY_NORMAL][TRAINER_BROCK] =
    {
#line 8355
        .trainerName = _("BROCK"),
#line 8356
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8357
        .trainerPic = TRAINER_PIC_LEADER_BROCK,
        .encounterMusic_gender =
#line 8359
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8360
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8361
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8363
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8365
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8365
            .heldItem = ITEM_QUICK_CLAW,
#line 8367
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8366
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8368
                MOVE_CURSE,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 8373
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8373
            .heldItem = ITEM_HARD_STONE,
#line 8375
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8374
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8376
                MOVE_ANCIENT_POWER,
                MOVE_SKY_ATTACK,
                MOVE_EARTHQUAKE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 8381
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8381
            .heldItem = ITEM_SCOPE_LENS,
#line 8383
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8382
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8384
                MOVE_SURF,
                MOVE_ANCIENT_POWER,
                MOVE_CUT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 8389
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8389
            .heldItem = ITEM_FOCUS_BAND,
#line 8391
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8390
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8392
                MOVE_ANCIENT_POWER,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_TOXIC,
            },
            },
            {
#line 8397
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8397
            .heldItem = ITEM_HARD_STONE,
#line 8399
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8398
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8400
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 8405
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8405
            .heldItem = ITEM_QUICK_CLAW,
#line 8407
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8406
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8408
                MOVE_SWORDS_DANCE,
                MOVE_ROCK_SLIDE,
                MOVE_TWINEEDLE,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 8413
    [DIFFICULTY_NORMAL][TRAINER_MISTY] =
    {
#line 8414
        .trainerName = _("MISTY"),
#line 8415
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8416
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        .encounterMusic_gender =
#line 8418
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8419
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8420
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8422
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8424
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8425
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8427
                MOVE_SURF,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CROSS_CHOP,
            },
            },
            {
#line 8432
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8432
            .heldItem = ITEM_QUICK_CLAW,
#line 8434
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8433
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8435
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 8440
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8440
            .heldItem = ITEM_LEFTOVERS,
#line 8442
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8441
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8443
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_ACID_ARMOR,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 8448
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8450
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8449
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8451
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_REST,
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 8456
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8456
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 8458
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8457
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8459
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_RAIN_DANCE,
                MOVE_REFLECT,
            },
            },
            {
#line 8464
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8464
            .heldItem = ITEM_MYSTIC_WATER,
#line 8466
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8465
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8467
                MOVE_SURF,
                MOVE_PSYCHIC,
                MOVE_RECOVER,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 8472
    [DIFFICULTY_NORMAL][TRAINER_LTSURGE] =
    {
#line 8473
        .trainerName = _("LTSURGE"),
#line 8474
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8475
        .trainerPic = TRAINER_PIC_LEADER_SURGE,
        .encounterMusic_gender =
#line 8477
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8478
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8479
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8482
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8482
            .heldItem = ITEM_FOCUS_BAND,
#line 8484
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8483
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8485
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 8490
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8491
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8493
                MOVE_THUNDER,
                MOVE_REFLECT,
                MOVE_RAIN_DANCE,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 8498
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8498
            .heldItem = ITEM_LEFTOVERS,
#line 8500
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8499
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8501
                MOVE_SURF,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8506
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8508
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8507
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8509
                MOVE_CHARGE,
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_CRUNCH,
            },
            },
            {
#line 8514
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8514
            .heldItem = ITEM_SCOPE_LENS,
#line 8516
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8515
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8517
                MOVE_THUNDERBOLT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_SUBMISSION,
            },
            },
            {
#line 8522
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8522
            .heldItem = ITEM_MAGNET,
#line 8524
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8523
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8525
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
                MOVE_BODY_SLAM,
                MOVE_SURF,
            },
            },
        },
    },
#line 8530
    [DIFFICULTY_NORMAL][TRAINER_ERIKA] =
    {
#line 8531
        .trainerName = _("ERIKA"),
#line 8532
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8533
        .trainerPic = TRAINER_PIC_LEADER_ERIKA,
        .encounterMusic_gender =
#line 8535
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8536
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8537
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8539
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8541
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8541
            .heldItem = ITEM_FOCUS_BAND,
#line 8543
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8542
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8544
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_ENCORE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 8549
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8551
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8550
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8552
                MOVE_SYNTHESIS,
                MOVE_GRASS_WHISTLE,
                MOVE_TOXIC,
                MOVE_PETAL_DANCE,
            },
            },
            {
#line 8557
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8559
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8558
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8560
                MOVE_MEGA_DRAIN,
                MOVE_BIND,
                MOVE_TICKLE,
                MOVE_BLOCK,
            },
            },
            {
#line 8565
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8565
            .heldItem = ITEM_LEFTOVERS,
#line 8567
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8566
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8568
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_SLUDGE_BOMB,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 8573
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8573
            .heldItem = ITEM_POISON_BARB,
#line 8575
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8574
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8576
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SWORDS_DANCE,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 8581
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .heldItem = ITEM_MIRACLE_SEED,
#line 8583
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8582
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8584
                MOVE_SUNNY_DAY,
                MOVE_SYNTHESIS,
                MOVE_SLEEP_POWDER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 8589
    [DIFFICULTY_NORMAL][TRAINER_SABRINA] =
    {
#line 8590
        .trainerName = _("SABRINA"),
#line 8591
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8592
        .trainerPic = TRAINER_PIC_LEADER_SABRINA,
        .encounterMusic_gender =
#line 8594
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8595
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8596
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8598
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8600
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8600
            .heldItem = ITEM_QUICK_CLAW,
#line 8602
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8601
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8603
                MOVE_PSYCHIC,
                MOVE_THUNDER_WAVE,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 8608
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8610
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8609
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8611
                MOVE_PSYCHIC,
                MOVE_ICE_BEAM,
                MOVE_LOVELY_KISS,
                MOVE_BUBBLE_BEAM,
            },
            },
            {
#line 8616
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8616
            .heldItem = ITEM_CHESTO_BERRY,
#line 8618
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8617
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8619
                MOVE_REST,
                MOVE_SLEEP_TALK,
                MOVE_SUBMISSION,
                MOVE_SURF,
            },
            },
            {
#line 8624
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8624
            .heldItem = ITEM_LEFTOVERS,
#line 8626
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8625
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8627
                MOVE_MIRROR_COAT,
                MOVE_COUNTER,
                MOVE_SAFEGUARD,
                MOVE_DESTINY_BOND,
            },
            },
            {
#line 8632
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8634
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8633
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8635
                MOVE_PSYCHIC,
                MOVE_MORNING_SUN,
                MOVE_FUTURE_SIGHT,
                MOVE_POWER_GEM,
            },
            },
            {
#line 8640
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8640
            .heldItem = ITEM_TWISTED_SPOON,
#line 8642
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8641
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8643
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_RECOVER,
                MOVE_THUNDER_PUNCH,
            },
            },
        },
    },
#line 8648
    [DIFFICULTY_NORMAL][TRAINER_JANINE] =
    {
#line 8649
        .trainerName = _("JANINE"),
#line 8650
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8651
        .trainerPic = TRAINER_PIC_LEADER_JANINE,
        .encounterMusic_gender =
#line 8653
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8654
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8655
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8657
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8659
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8659
            .heldItem = ITEM_LEFTOVERS,
#line 8661
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8660
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8662
                MOVE_SLUDGE_BOMB,
                MOVE_FIRE_BLAST,
                MOVE_DESTINY_BOND,
                MOVE_AMNESIA,
            },
            },
            {
#line 8667
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8669
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8668
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8670
                MOVE_MINIMIZE,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
            },
            },
            {
#line 8675
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8677
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8676
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8678
                MOVE_SWALLOW,
                MOVE_STOCKPILE,
                MOVE_AMNESIA,
                MOVE_SPIT_UP,
            },
            },
            {
#line 8683
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .heldItem = ITEM_QUICK_CLAW,
#line 8685
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8684
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8686
                MOVE_EARTHQUAKE,
                MOVE_SLUDGE_BOMB,
                MOVE_THUNDERBOLT,
                MOVE_SUBMISSION,
            },
            },
            {
#line 8691
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8693
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8692
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8694
                MOVE_PURSUIT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8699
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8699
            .heldItem = ITEM_BRIGHT_POWDER,
#line 8701
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8700
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8702
                MOVE_GIGA_DRAIN,
                MOVE_PSYCHIC,
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 8707
    [DIFFICULTY_NORMAL][TRAINER_BLAINE] =
    {
#line 8708
        .trainerName = _("BLAINE"),
#line 8709
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8710
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        .encounterMusic_gender =
#line 8712
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8713
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8714
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8716
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8718
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8718
            .heldItem = ITEM_QUICK_CLAW,
#line 8720
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8719
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8721
                MOVE_DOUBLE_EDGE,
                MOVE_SUNNY_DAY,
                MOVE_FIRE_BLAST,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 8726
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8726
            .heldItem = ITEM_SITRUS_BERRY,
#line 8728
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8727
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8729
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_BLAST,
                MOVE_PSYCHIC,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8734
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8734
            .heldItem = ITEM_MIRACLE_SEED,
#line 8736
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8735
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8737
                MOVE_FIRE_BLAST,
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_CRUNCH,
            },
            },
            {
#line 8742
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8742
            .heldItem = ITEM_LEFTOVERS,
#line 8744
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8743
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8745
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_SUNNY_DAY,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 8750
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8750
            .heldItem = ITEM_WHITE_HERB,
#line 8752
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8751
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8753
                MOVE_CURSE,
                MOVE_IRON_DEFENSE,
                MOVE_WITHDRAW,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 8758
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8758
            .heldItem = ITEM_CHARCOAL,
#line 8760
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8759
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8761
                MOVE_EARTH_POWER,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_AMNESIA,
            },
            },
        },
    },
#line 8766
    [DIFFICULTY_NORMAL][TRAINER_BLUE] =
    {
#line 8767
        .trainerName = _("BLUE"),
#line 8768
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8769
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .encounterMusic_gender =
#line 8771
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8772
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8773
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8775
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8777
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8777
            .heldItem = ITEM_SITRUS_BERRY,
#line 8779
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8778
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8780
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_REST,
                MOVE_TOXIC,
            },
            },
            {
#line 8785
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .heldItem = ITEM_SHARP_BEAK,
#line 8787
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8786
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8788
                MOVE_SKY_ATTACK,
                MOVE_SAND_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 8793
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8793
            .heldItem = ITEM_SCOPE_LENS,
#line 8795
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8794
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8796
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 8801
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .heldItem = ITEM_LEFTOVERS,
#line 8803
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8802
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8804
                MOVE_LEECH_SEED,
                MOVE_SLEEP_POWDER,
                MOVE_PSYCHIC,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8809
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8809
            .heldItem = ITEM_FOCUS_BAND,
#line 8811
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8810
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8812
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FOCUS_BLAST,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 8817
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8817
            .heldItem = ITEM_SILK_SCARF,
#line 8819
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8818
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8820
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_CRUNCH,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 8825
    [DIFFICULTY_NORMAL][TRAINER_BLUE_2] =
    {
#line 8826
        .trainerName = _("BLUE"),
#line 8827
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8828
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .encounterMusic_gender =
#line 8830
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8831
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8832
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8834
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8836
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8836
            .heldItem = ITEM_SITRUS_BERRY,
#line 8838
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8837
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8839
                MOVE_ICE_BEAM,
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_TOXIC,
            },
            },
            {
#line 8844
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8844
            .heldItem = ITEM_TWISTED_SPOON,
#line 8846
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8845
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8847
                MOVE_THUNDERBOLT,
                MOVE_RECOVER,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 8852
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8852
            .heldItem = ITEM_QUICK_CLAW,
#line 8854
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8853
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8855
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
            },
            },
            {
#line 8860
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .heldItem = ITEM_LEFTOVERS,
#line 8862
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8861
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8863
                MOVE_LEECH_SEED,
                MOVE_SLEEP_POWDER,
                MOVE_PSYCHIC,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8868
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8868
            .heldItem = ITEM_FOCUS_BAND,
#line 8870
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8869
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8871
                MOVE_HYDRO_PUMP,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_REVERSAL,
            },
            },
            {
#line 8876
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .heldItem = ITEM_SILK_SCARF,
#line 8878
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8877
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8879
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_CRUNCH,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 8884
    [DIFFICULTY_NORMAL][TRAINER_WILL_1] =
    {
#line 8885
        .trainerName = _("WILL"),
#line 8886
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8887
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .encounterMusic_gender =
#line 8889
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8890
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8891
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8893
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8895
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8896
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8898
                MOVE_PSYCHIC,
                MOVE_ROCK_SMASH,
                MOVE_AGILITY,
                MOVE_BATON_PASS,
            },
            },
            {
#line 8903
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8904
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8906
                MOVE_AMNESIA,
                MOVE_FLAMETHROWER,
                MOVE_SURF,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8911
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8912
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8914
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_REFLECT,
                MOVE_HEADBUTT,
            },
            },
            {
#line 8919
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8919
            .heldItem = ITEM_QUICK_CLAW,
#line 8921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8920
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8922
                MOVE_CURSE,
                MOVE_ROCK_SMASH,
                MOVE_BODY_SLAM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8927
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8927
            .heldItem = ITEM_TWISTED_SPOON,
#line 8929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8928
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8930
                MOVE_DRILL_PECK,
                MOVE_RECOVER,
                MOVE_CONFUSE_RAY,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 8935
    [DIFFICULTY_NORMAL][TRAINER_WILL_2] =
    {
#line 8936
        .trainerName = _("WILL"),
#line 8937
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8938
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .encounterMusic_gender =
#line 8940
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8941
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8942
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8944
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8946
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8947
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8949
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_MOONBLAST,
                MOVE_REFLECT,
            },
            },
            {
#line 8954
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8955
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8957
                MOVE_BLIZZARD,
                MOVE_PSYCHIC,
                MOVE_PERISH_SONG,
                MOVE_SING,
            },
            },
            {
#line 8962
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8962
            .heldItem = ITEM_SITRUS_BERRY,
#line 8964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8963
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8965
                MOVE_ANCIENT_POWER,
                MOVE_SLEEP_POWDER,
                MOVE_DREAM_EATER,
                MOVE_SOFT_BOILED,
            },
            },
            {
#line 8970
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8971
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8973
                MOVE_TEETER_DANCE,
                MOVE_POWER_GEM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 8978
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8978
            .heldItem = ITEM_QUICK_CLAW,
#line 8980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8979
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8981
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 8986
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .heldItem = ITEM_LEFTOVERS,
#line 8988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8987
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8989
                MOVE_FUTURE_SIGHT,
                MOVE_FLY,
                MOVE_CONFUSE_RAY,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 8994
    [DIFFICULTY_NORMAL][TRAINER_BRUNO_1] =
    {
#line 8995
        .trainerName = _("BRUNO"),
#line 8996
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8997
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .encounterMusic_gender =
#line 8999
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 9000
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9001
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9002
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9003
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9005
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9005
            .heldItem = ITEM_SCOPE_LENS,
#line 9007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9006
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9008
                MOVE_MACH_PUNCH,
                MOVE_PURSUIT,
                MOVE_DIZZY_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9013
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9014
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9016
                MOVE_CROSS_CHOP,
                MOVE_MEGAHORN,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9021
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .heldItem = ITEM_SILK_SCARF,
#line 9023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9022
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9024
                MOVE_BODY_SLAM,
                MOVE_MEDITATE,
                MOVE_REVERSAL,
                MOVE_HI_JUMP_KICK,
            },
            },
            {
#line 9029
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9030
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9032
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 9037
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9037
            .heldItem = ITEM_BLACK_BELT,
#line 9039
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9038
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9040
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
                MOVE_VITAL_THROW,
                MOVE_CROSS_CHOP,
            },
            },
        },
    },
#line 9045
    [DIFFICULTY_NORMAL][TRAINER_BRUNO_2] =
    {
#line 9046
        .trainerName = _("BRUNO"),
#line 9047
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 9048
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .encounterMusic_gender =
#line 9050
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 9051
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9052
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9054
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9056
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9056
            .heldItem = ITEM_QUICK_CLAW,
#line 9058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9057
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9059
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 9064
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9064
            .heldItem = ITEM_SCOPE_LENS,
#line 9066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9065
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9067
                MOVE_SUBMISSION,
                MOVE_BLIZZARD,
                MOVE_HYDRO_PUMP,
                MOVE_PSYCHIC,
            },
            },
            {
#line 9072
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9072
            .heldItem = ITEM_QUICK_CLAW,
#line 9074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9073
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9075
                MOVE_CROSS_CHOP,
                MOVE_MEGAHORN,
                MOVE_REVERSAL,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9080
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9081
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9083
                MOVE_BELLY_DRUM,
                MOVE_SMELLING_SALTS,
                MOVE_FOCUS_PUNCH,
                MOVE_SEISMIC_TOSS,
            },
            },
            {
#line 9088
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9088
            .heldItem = ITEM_SCOPE_LENS,
#line 9090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9089
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9091
                MOVE_TRIPLE_KICK,
                MOVE_DOUBLE_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 9096
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9096
            .heldItem = ITEM_LEFTOVERS,
#line 9098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9097
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9099
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
                MOVE_CROSS_CHOP,
            },
            },
        },
    },
#line 9104
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 9105
        .trainerName = _("KAREN"),
#line 9106
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 9107
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .encounterMusic_gender =
#line 9109
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 9110
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9111
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9113
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9115
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9115
            .heldItem = ITEM_SITRUS_BERRY,
#line 9117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9116
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9118
                MOVE_FAINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BATON_PASS,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 9123
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9124
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9126
                MOVE_SHADOW_BALL,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 9131
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9131
            .heldItem = ITEM_LEFTOVERS,
#line 9133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9132
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9134
                MOVE_SLEEP_POWDER,
                MOVE_GIGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 9139
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9139
            .heldItem = ITEM_SHARP_BEAK,
#line 9141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9140
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9142
                MOVE_DRILL_PECK,
                MOVE_FAINT_ATTACK,
                MOVE_STEEL_WING,
                MOVE_HAZE,
            },
            },
            {
#line 9147
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9147
            .heldItem = ITEM_BLACK_GLASSES,
#line 9149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9148
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9150
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_IRON_TAIL,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 9155
    [DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
    {
#line 9156
        .trainerName = _("KAREN"),
#line 9157
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 9158
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .encounterMusic_gender =
#line 9160
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 9161
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9162
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9164
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9166
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9166
            .heldItem = ITEM_SITRUS_BERRY,
#line 9168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9167
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9169
                MOVE_GROWTH,
                MOVE_SHADOW_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_BATON_PASS,
            },
            },
            {
#line 9174
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9175
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9177
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_BEAT_UP,
                MOVE_BLIZZARD,
            },
            },
            {
#line 9182
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9182
            .heldItem = ITEM_SCOPE_LENS,
#line 9184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9183
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9185
                MOVE_SLASH,
                MOVE_CUT,
                MOVE_IRON_TAIL,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 9190
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9190
            .heldItem = ITEM_SHARP_BEAK,
#line 9192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9191
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9193
                MOVE_SKY_ATTACK,
                MOVE_PURSUIT,
                MOVE_SWAGGER,
                MOVE_PSYCH_UP,
            },
            },
            {
#line 9198
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .heldItem = ITEM_LEFTOVERS,
#line 9200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9199
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9201
                MOVE_PSYCHO_CUT,
                MOVE_SHADOW_CLAW,
                MOVE_PERISH_SONG,
                MOVE_SLASH,
            },
            },
            {
#line 9206
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9206
            .heldItem = ITEM_CHARCOAL,
#line 9208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9207
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9209
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_IRON_TAIL,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 9214
    [DIFFICULTY_NORMAL][TRAINER_KOGA_1] =
    {
#line 9215
        .trainerName = _("KOGA"),
#line 9216
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 9217
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .encounterMusic_gender =
#line 9219
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 9220
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9221
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9223
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9225
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9225
            .heldItem = ITEM_KINGS_ROCK,
#line 9227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9226
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9228
                MOVE_MEGAHORN,
                MOVE_GIGA_DRAIN,
                MOVE_DOUBLE_TEAM,
                MOVE_TOXIC,
            },
            },
            {
#line 9233
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9234
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9236
                MOVE_SURF,
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 9241
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9241
            .heldItem = ITEM_LEFTOVERS,
#line 9243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9242
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9244
                MOVE_MINIMIZE,
                MOVE_FIRE_BLAST,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
            },
            },
            {
#line 9249
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9250
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9252
                MOVE_LEECH_LIFE,
                MOVE_PSYCHIC,
                MOVE_SLUDGE_BOMB,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 9257
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9257
            .heldItem = ITEM_BRIGHT_POWDER,
#line 9259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9258
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9260
                MOVE_DOUBLE_TEAM,
                MOVE_TOXIC,
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 9265
    [DIFFICULTY_NORMAL][TRAINER_KOGA_2] =
    {
#line 9266
        .trainerName = _("KOGA"),
#line 9267
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 9268
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .encounterMusic_gender =
#line 9270
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 9271
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9272
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9274
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9276
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9276
            .heldItem = ITEM_CHESTO_BERRY,
#line 9278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9277
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9279
                MOVE_WATERFALL,
                MOVE_BLIZZARD,
                MOVE_GIGA_DRAIN,
                MOVE_REST,
            },
            },
            {
#line 9284
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .heldItem = ITEM_LEFTOVERS,
#line 9286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9285
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9287
                MOVE_MINIMIZE,
                MOVE_FIRE_BLAST,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
            },
            },
            {
#line 9292
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9293
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9295
                MOVE_SWALLOW,
                MOVE_STOCKPILE,
                MOVE_AMNESIA,
                MOVE_SPIT_UP,
            },
            },
            {
#line 9300
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9300
            .heldItem = ITEM_QUICK_CLAW,
#line 9302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9301
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9303
                MOVE_LOVELY_KISS,
                MOVE_FIRE_BLAST,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9308
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9308
            .heldItem = ITEM_BRIGHT_POWDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9309
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9311
                MOVE_SILVER_WIND,
                MOVE_SIGNAL_BEAM,
                MOVE_PSYCHIC,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 9316
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .heldItem = ITEM_LEFTOVERS,
#line 9318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9317
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9319
                MOVE_PROTECT,
                MOVE_FLY,
                MOVE_TOXIC,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 9324
    [DIFFICULTY_NORMAL][TRAINER_LANCE_1] =
    {
#line 9325
        .trainerName = _("LANCE"),
#line 9326
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 9327
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .encounterMusic_gender =
#line 9329
            TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
#line 9330
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9331
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9333
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9335
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9335
            .heldItem = ITEM_LEFTOVERS,
#line 9337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9336
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9338
                MOVE_SURF,
                MOVE_RAIN_DANCE,
                MOVE_HYPER_BEAM,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 9343
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9343
            .heldItem = ITEM_SITRUS_BERRY,
#line 9345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9344
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9346
                MOVE_BLIZZARD,
                MOVE_FIRE_BLAST,
                MOVE_THUNDER,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 9351
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9351
            .heldItem = ITEM_CHARCOAL,
#line 9353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9352
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9354
                MOVE_FLAMETHROWER,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9359
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9360
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9362
                MOVE_BOUNCE,
                MOVE_DRAGON_CLAW,
                MOVE_WATERFALL,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9367
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9367
            .heldItem = ITEM_SILK_SCARF,
#line 9369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9368
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9370
                MOVE_WING_ATTACK,
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9375
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9375
            .heldItem = ITEM_SITRUS_BERRY,
#line 9377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9376
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9378
                MOVE_THUNDER,
                MOVE_SAFEGUARD,
                MOVE_OUTRAGE,
                MOVE_HYPER_BEAM,
            },
            },
        },
    },
#line 9383
    [DIFFICULTY_NORMAL][TRAINER_LANCE_2] =
    {
#line 9384
        .trainerName = _("LANCE"),
#line 9385
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 9386
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .encounterMusic_gender =
#line 9388
            TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
#line 9389
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9390
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9392
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9394
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9395
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9397
                MOVE_DRAGON_CLAW,
                MOVE_AIR_SLASH,
                MOVE_DOUBLE_EDGE,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 9402
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9402
            .heldItem = ITEM_SITRUS_BERRY,
#line 9404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9403
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9405
                MOVE_BLIZZARD,
                MOVE_EXTREME_SPEED,
                MOVE_THUNDER,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9410
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9410
            .heldItem = ITEM_QUICK_CLAW,
#line 9412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9411
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9413
                MOVE_HIDDEN_POWER,
                MOVE_HYPER_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 9418
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9418
            .heldItem = ITEM_LEFTOVERS,
#line 9420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9419
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9421
                MOVE_FIRE_BLAST,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 9426
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9426
            .heldItem = ITEM_SCOPE_LENS,
#line 9428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9427
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9429
                MOVE_SKY_ATTACK,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 9434
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9434
            .heldItem = ITEM_SILK_SCARF,
#line 9436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9435
            .lvl = 70,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9437
                MOVE_DRAGON_DANCE,
                MOVE_PLAY_ROUGH,
                MOVE_SAFEGUARD,
                MOVE_SKY_ATTACK,
            },
            },
        },
    },
#line 9442
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_1] =
    {
#line 9443
        .trainerName = _("???"),
#line 9444
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9445
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9447
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9448
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9451
            .species = SPECIES_CHIKORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9452
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9455
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_2] =
    {
#line 9456
        .trainerName = _("SILVER"),
#line 9457
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9458
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9460
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9461
        .items = { ITEM_POTION },
#line 9462
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9464
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9466
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9467
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9469
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
                MOVE_POISON_STING,
                MOVE_ASTONISH,
            },
            },
            {
#line 9474
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9475
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9477
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
                MOVE_SANDSTORM,
            },
            },
            {
#line 9482
            .species = SPECIES_BAYLEEF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9483
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9485
                MOVE_RAZOR_LEAF,
                MOVE_REFLECT,
                MOVE_POISON_POWDER,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 9490
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_3] =
    {
#line 9491
        .trainerName = _("SILVER"),
#line 9492
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9493
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9495
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9496
        .items = { ITEM_SUPER_POTION },
#line 9497
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9499
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9501
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9502
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9504
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 9508
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9509
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9511
                MOVE_BUBBLE_BEAM,
                MOVE_AURORA_BEAM,
                MOVE_PSYBEAM,
                MOVE_LOCK_ON,
            },
            },
            {
#line 9516
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9517
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9519
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_POISON_STING,
                MOVE_GUST,
            },
            },
            {
#line 9524
            .species = SPECIES_BAYLEEF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9525
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9527
                MOVE_MEGA_DRAIN,
                MOVE_RAZOR_LEAF,
                MOVE_TACKLE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 9532
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_4] =
    {
#line 9533
        .trainerName = _("SILVER"),
#line 9534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9535
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9537
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9538
        .items = { ITEM_HYPER_POTION },
#line 9539
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9541
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9543
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9545
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9544
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9546
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 9551
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9553
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9552
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9554
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_BITE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 9559
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9560
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9562
                MOVE_OCTAZOOKA,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 9566
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9568
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9567
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9569
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9574
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9576
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9575
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9577
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 9582
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_5] =
    {
#line 9583
        .trainerName = _("SILVER"),
#line 9584
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9585
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9587
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9588
        .items = { ITEM_HYPER_POTION },
#line 9589
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9591
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9593
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9593
            .heldItem = ITEM_CHESTO_BERRY,
#line 9595
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9594
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9596
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 9601
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9602
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9604
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9609
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9609
            .heldItem = ITEM_QUICK_CLAW,
#line 9611
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9610
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9612
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9617
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9619
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9618
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9620
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 9625
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9625
            .heldItem = ITEM_MIRACLE_SEED,
#line 9627
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9626
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9628
                MOVE_SUNNY_DAY,
                MOVE_GIGA_DRAIN,
                MOVE_BODY_SLAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 9633
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9635
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9634
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9636
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9641
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_6] =
    {
#line 9642
        .trainerName = _("SILVER"),
#line 9643
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9644
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9646
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9647
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9648
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9650
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9652
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9652
            .heldItem = ITEM_CHESTO_BERRY,
#line 9654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9653
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9655
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 9660
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9660
            .heldItem = ITEM_LEFTOVERS,
#line 9662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9661
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9663
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9668
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9668
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 9670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9669
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9671
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9676
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9676
            .heldItem = ITEM_CHARCOAL,
#line 9678
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9677
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9679
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 9684
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9684
            .heldItem = ITEM_MIRACLE_SEED,
#line 9686
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9685
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9687
                MOVE_REFLECT,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 9692
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9692
            .heldItem = ITEM_QUICK_CLAW,
#line 9694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9693
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9695
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9700
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_7] =
    {
#line 9701
        .trainerName = _("SILVER"),
#line 9702
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9703
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9705
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9706
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9707
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9709
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9711
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9711
            .heldItem = ITEM_CHESTO_BERRY,
#line 9713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9712
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9714
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 9719
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9719
            .heldItem = ITEM_LEFTOVERS,
#line 9721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9720
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9722
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 9727
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9727
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 9729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9728
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9730
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9735
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9735
            .heldItem = ITEM_CHARCOAL,
#line 9737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9736
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9738
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 9743
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9743
            .heldItem = ITEM_MIRACLE_SEED,
#line 9745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9744
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9746
                MOVE_REFLECT,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 9751
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9751
            .heldItem = ITEM_QUICK_CLAW,
#line 9753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9752
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9754
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9759
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_1] =
    {
#line 9760
        .trainerName = _("???"),
#line 9761
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9762
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9764
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9765
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9768
            .species = SPECIES_CYNDAQUIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9769
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9772
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_2] =
    {
#line 9773
        .trainerName = _("SILVER"),
#line 9774
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9775
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9777
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9778
        .items = { ITEM_POTION },
#line 9779
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9781
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9783
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9784
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9786
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
                MOVE_POISON_STING,
                MOVE_ASTONISH,
            },
            },
            {
#line 9791
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9792
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9794
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
                MOVE_SANDSTORM,
            },
            },
            {
#line 9799
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9800
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9802
                MOVE_LEER,
                MOVE_SMOKESCREEN,
                MOVE_EMBER,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 9807
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_3] =
    {
#line 9808
        .trainerName = _("SILVER"),
#line 9809
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9810
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9812
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9813
        .items = { ITEM_SUPER_POTION },
#line 9814
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9816
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9818
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9819
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9821
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 9825
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9826
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9828
                MOVE_RAZOR_LEAF,
                MOVE_GROWTH,
                MOVE_SLEEP_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 9833
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9834
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9836
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_POISON_STING,
                MOVE_GUST,
            },
            },
            {
#line 9841
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9842
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9844
                MOVE_FLAME_WHEEL,
                MOVE_DIG,
                MOVE_QUICK_ATTACK,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 9849
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_4] =
    {
#line 9850
        .trainerName = _("SILVER"),
#line 9851
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9852
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9854
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9855
        .items = { ITEM_SUPER_POTION },
#line 9856
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9858
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9860
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9862
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9861
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9863
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 9868
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9870
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9869
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9871
                MOVE_SLUDGE,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9876
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9878
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9877
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9879
                MOVE_OCTAZOOKA,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 9883
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9885
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9884
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9886
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9891
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9893
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9892
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9894
                MOVE_THUNDER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_QUICK_ATTACK,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 9899
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_5] =
    {
#line 9900
        .trainerName = _("SILVER"),
#line 9901
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9902
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9904
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9905
        .items = { ITEM_HYPER_POTION },
#line 9906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9908
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9910
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .heldItem = ITEM_CHESTO_BERRY,
#line 9912
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9911
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9913
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 9918
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9920
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9919
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9921
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9926
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9926
            .heldItem = ITEM_QUICK_CLAW,
#line 9928
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9927
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9929
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9934
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9936
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9935
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9937
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9942
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9942
            .heldItem = ITEM_CHARCOAL,
#line 9944
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9943
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9945
                MOVE_FLAMETHROWER,
                MOVE_QUICK_ATTACK,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9950
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9952
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9951
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9953
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9958
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_6] =
    {
#line 9959
        .trainerName = _("SILVER"),
#line 9960
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9961
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9963
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9964
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9965
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9967
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9969
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9969
            .heldItem = ITEM_CHESTO_BERRY,
#line 9971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9970
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9972
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 9977
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9977
            .heldItem = ITEM_LEFTOVERS,
#line 9979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9978
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9980
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9985
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9985
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 9987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9986
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9988
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9993
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9993
            .heldItem = ITEM_SCOPE_LENS,
#line 9995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9994
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9996
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 10001
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10001
            .heldItem = ITEM_CHARCOAL,
#line 10003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10002
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10004
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10009
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10009
            .heldItem = ITEM_QUICK_CLAW,
#line 10011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10010
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10012
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 10017
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_7] =
    {
#line 10018
        .trainerName = _("SILVER"),
#line 10019
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10020
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10022
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10023
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10024
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10026
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10028
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10028
            .heldItem = ITEM_CHESTO_BERRY,
#line 10030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10029
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10031
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 10036
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10036
            .heldItem = ITEM_LEFTOVERS,
#line 10038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10037
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10039
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 10044
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10044
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 10046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10045
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10047
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 10052
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10052
            .heldItem = ITEM_SCOPE_LENS,
#line 10054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10053
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10055
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 10060
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10060
            .heldItem = ITEM_CHARCOAL,
#line 10062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10061
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10063
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10068
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10068
            .heldItem = ITEM_QUICK_CLAW,
#line 10070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10069
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10071
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 10076
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_1] =
    {
#line 10077
        .trainerName = _("???"),
#line 10078
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10079
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10081
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10085
            .species = SPECIES_TOTODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10086
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10089
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_2] =
    {
#line 10090
        .trainerName = _("SILVER"),
#line 10091
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10092
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10094
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10095
        .items = { ITEM_POTION },
#line 10096
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10098
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10100
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10101
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10103
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
                MOVE_POISON_STING,
                MOVE_ASTONISH,
            },
            },
            {
#line 10108
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10109
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10111
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
                MOVE_SANDSTORM,
            },
            },
            {
#line 10116
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10117
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10119
                MOVE_SCRATCH,
                MOVE_RAGE,
                MOVE_BUBBLE_BEAM,
                MOVE_LEER,
            },
            },
        },
    },
#line 10124
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_3] =
    {
#line 10125
        .trainerName = _("SILVER"),
#line 10126
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10127
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10129
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10130
        .items = { ITEM_SUPER_POTION },
#line 10131
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10133
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10135
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10136
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10138
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 10142
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10143
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10145
                MOVE_EMBER,
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
            },
            },
            {
#line 10150
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10151
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10153
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_POISON_STING,
                MOVE_GUST,
            },
            },
            {
#line 10158
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10159
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10161
                MOVE_BITE,
                MOVE_ICE_PUNCH,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 10166
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_4] =
    {
#line 10167
        .trainerName = _("SILVER"),
#line 10168
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10169
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10171
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10172
        .items = { ITEM_SUPER_POTION },
#line 10173
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10175
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10177
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10179
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10178
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10180
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 10185
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10187
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10186
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10188
                MOVE_SLUDGE,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 10193
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10195
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10194
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10196
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_BITE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 10201
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10203
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10202
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10204
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 10209
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10211
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10210
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10212
                MOVE_ICE_PUNCH,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_BITE,
            },
            },
        },
    },
#line 10217
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_5] =
    {
#line 10218
        .trainerName = _("SILVER"),
#line 10219
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10220
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10222
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10223
        .items = { ITEM_HYPER_POTION },
#line 10224
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10226
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10228
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10228
            .heldItem = ITEM_CHESTO_BERRY,
#line 10230
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10229
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10231
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 10236
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10238
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10237
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10239
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 10244
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10244
            .heldItem = ITEM_QUICK_CLAW,
#line 10246
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10245
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10247
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 10252
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10253
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10255
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 10260
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10260
            .heldItem = ITEM_MYSTIC_WATER,
#line 10262
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10261
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10263
                MOVE_ICE_PUNCH,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_BITE,
            },
            },
            {
#line 10268
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10270
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10269
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10271
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 10276
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_6] =
    {
#line 10277
        .trainerName = _("SILVER"),
#line 10278
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10279
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10281
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10282
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10283
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10285
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10287
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10287
            .heldItem = ITEM_CHESTO_BERRY,
#line 10289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10288
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10290
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 10295
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10295
            .heldItem = ITEM_LEFTOVERS,
#line 10297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10296
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10298
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 10303
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10303
            .heldItem = ITEM_SCOPE_LENS,
#line 10305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10304
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10306
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 10311
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10311
            .heldItem = ITEM_CHARCOAL,
#line 10313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10312
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10314
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 10319
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10319
            .heldItem = ITEM_SCOPE_LENS,
#line 10321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10320
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10322
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10327
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10327
            .heldItem = ITEM_QUICK_CLAW,
#line 10329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10328
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10330
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 10335
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_7] =
    {
#line 10336
        .trainerName = _("SILVER"),
#line 10337
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10338
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 10340
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 10341
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10342
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10344
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10346
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10346
            .heldItem = ITEM_CHESTO_BERRY,
#line 10348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10347
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10349
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 10354
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10354
            .heldItem = ITEM_LEFTOVERS,
#line 10356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10355
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10357
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 10362
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10362
            .heldItem = ITEM_SCOPE_LENS,
#line 10364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10363
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10365
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 10370
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10370
            .heldItem = ITEM_CHARCOAL,
#line 10372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10371
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10373
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 10378
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10378
            .heldItem = ITEM_SCOPE_LENS,
#line 10380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10379
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10381
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10386
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10386
            .heldItem = ITEM_QUICK_CLAW,
#line 10388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10387
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10389
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 10394
    [DIFFICULTY_NORMAL][TRAINER_RED_2] =
    {
#line 10395
        .trainerName = _("RED"),
#line 10396
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 10397
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10399
            TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
#line 10400
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10401
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10404
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10404
            .heldItem = ITEM_LIGHT_BALL,
#line 10406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10405
            .lvl = 93,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10407
                MOVE_THUNDERBOLT,
                MOVE_SURF,
                MOVE_IRON_TAIL,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 10412
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10412
            .heldItem = ITEM_LEFTOVERS,
#line 10414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10413
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10415
                MOVE_AMNESIA,
                MOVE_CURSE,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10420
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10420
            .heldItem = ITEM_CHARCOAL,
#line 10422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10421
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10423
                MOVE_FIRE_BLAST,
                MOVE_WING_ATTACK,
                MOVE_OUTRAGE,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10428
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10428
            .heldItem = ITEM_MIRACLE_SEED,
#line 10430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10429
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10431
                MOVE_GIGA_DRAIN,
                MOVE_BODY_SLAM,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 10436
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10436
            .heldItem = ITEM_QUICK_CLAW,
#line 10438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10437
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10439
                MOVE_ICE_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10444
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10444
            .heldItem = ITEM_SITRUS_BERRY,
#line 10446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10445
            .lvl = 80,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10447
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_MORNING_SUN,
            },
            },
        },
    },
#line 10452
    [DIFFICULTY_NORMAL][TRAINER_EUSINE] =
    {
#line 10453
        .trainerName = _("EUSINE"),
#line 10454
        .trainerClass = TRAINER_CLASS_MYSTERY_MAN,
#line 10455
        .trainerPic = TRAINER_PIC_EUSINE,
        .encounterMusic_gender =
#line 10457
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10458
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10459
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10461
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10463
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10465
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 10464
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10466
                MOVE_BUBBLE_BEAM,
                MOVE_RAIN_DANCE,
                MOVE_HYPNOSIS,
                MOVE_ICY_WIND,
            },
            },
            {
#line 10471
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10473
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 10472
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10474
                MOVE_HYPNOSIS,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10479
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10481
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 10480
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10482
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
                MOVE_BODY_SLAM,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 10487
    [DIFFICULTY_NORMAL][TRAINER_GIOVANNI] =
    {
#line 10488
        .trainerName = _("GIOVANNI"),
#line 10489
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10490
        .trainerPic = TRAINER_PIC_GIOVANNI,
        .encounterMusic_gender =
#line 10492
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10493
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10494
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10496
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10498
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10499
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10501
                MOVE_DIZZY_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_SAFEGUARD,
                MOVE_MEGA_PUNCH,
            },
            },
            {
#line 10506
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10507
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10509
                MOVE_DARK_PULSE,
                MOVE_AIR_SLASH,
                MOVE_THIEF,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 10514
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10515
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10517
                MOVE_ICE_PUNCH,
                MOVE_SLUDGE_BOMB,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 10522
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10523
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10525
                MOVE_FAINT_ATTACK,
                MOVE_SWAGGER,
                MOVE_SCREECH,
                MOVE_SLASH,
            },
            },
            {
#line 10530
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10531
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10533
                MOVE_EARTHQUAKE,
                MOVE_SANDSTORM,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 10538
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10539
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10541
                MOVE_THUNDER_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_THRASH,
            },
            },
        },
    },
#line 10546
    [DIFFICULTY_NORMAL][TRAINER_PROTON_1] =
    {
#line 10547
        .trainerName = _("PROTON"),
#line 10548
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10549
        .trainerPic = TRAINER_PIC_PROTON,
        .encounterMusic_gender =
#line 10551
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10552
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 10554
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10556
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10557
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10560
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10561
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10564
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10565
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10568
    [DIFFICULTY_NORMAL][TRAINER_PROTON_2] =
    {
#line 10569
        .trainerName = _("PROTON"),
#line 10570
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10571
        .trainerPic = TRAINER_PIC_PROTON,
        .encounterMusic_gender =
#line 10573
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10574
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10575
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10577
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10579
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10580
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10582
                MOVE_SLUDGE_BOMB,
                MOVE_POUND,
                MOVE_ACID_ARMOR,
                MOVE_MINIMIZE,
            },
            },
            {
#line 10587
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10588
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10590
                MOVE_SLUDGE_BOMB,
                MOVE_DOUBLE_KICK,
                MOVE_THUNDER_PUNCH,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 10595
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10596
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10598
                MOVE_SLUDGE_BOMB,
                MOVE_SELF_DESTRUCT,
                MOVE_HAZE,
                MOVE_TACKLE,
            },
            },
            {
#line 10603
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10604
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10606
                MOVE_SLUDGE_BOMB,
                MOVE_DOUBLE_KICK,
                MOVE_ICE_PUNCH,
                MOVE_THRASH,
            },
            },
            {
#line 10611
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10612
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10614
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_FISSURE,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 10619
    [DIFFICULTY_NORMAL][TRAINER_ARCHER] =
    {
#line 10620
        .trainerName = _("ARCHER"),
#line 10621
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10622
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10624
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10625
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10626
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10628
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10630
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10631
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10633
                MOVE_TRI_ATTACK,
                MOVE_ZAP_CANNON,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10638
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10639
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10641
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10646
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10647
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10649
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10654
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10655
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10657
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10662
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10663
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10665
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 10670
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_1] =
    {
#line 10671
        .trainerName = _("ARCHER"),
#line 10672
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10673
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10675
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10676
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10677
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10679
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10681
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10682
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10684
                MOVE_SELF_DESTRUCT,
                MOVE_SMOG,
                MOVE_SMOKESCREEN,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 10689
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10690
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10692
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10697
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10698
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10700
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10705
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_4] =
    {
#line 10706
        .trainerName = _("ARCHER"),
#line 10707
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10708
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10710
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10711
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10712
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10714
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10716
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10718
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10717
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10719
                MOVE_TRI_ATTACK,
                MOVE_ZAP_CANNON,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10724
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10725
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10727
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10732
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10733
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10735
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10740
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10742
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10741
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10743
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10748
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10750
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10749
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10751
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 10756
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_5] =
    {
#line 10757
        .trainerName = _("ARCHER"),
#line 10758
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10759
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10761
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10762
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10763
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10765
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10767
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10768
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10770
                MOVE_TRI_ATTACK,
                MOVE_ZAP_CANNON,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10775
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10776
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10778
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10783
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10784
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10786
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10791
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10792
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10794
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10799
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10800
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10802
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 10807
    [DIFFICULTY_NORMAL][TRAINER_PETREL_1] =
    {
#line 10808
        .trainerName = _("PETREL"),
#line 10809
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10810
        .trainerPic = TRAINER_PIC_PETREL,
        .encounterMusic_gender =
#line 10812
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10813
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10814
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10816
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10818
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10819
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10821
                MOVE_PIN_MISSILE,
                MOVE_EXPLOSION,
                MOVE_SPIKES,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 10826
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10827
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10829
                MOVE_ROCK_TOMB,
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 10834
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10835
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10837
                MOVE_SMOG,
                MOVE_FLAMETHROWER,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
            },
            },
            {
#line 10842
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10843
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10845
                MOVE_ICE_BEAM,
                MOVE_CLAMP,
                MOVE_SPIKE_CANNON,
                MOVE_SURF,
            },
            },
        },
    },
#line 10850
    [DIFFICULTY_NORMAL][TRAINER_PETREL_2] =
    {
#line 10851
        .trainerName = _("PETREL"),
#line 10852
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10853
        .trainerPic = TRAINER_PIC_PETREL,
        .encounterMusic_gender =
#line 10855
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10856
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10857
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10858
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10859
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10861
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10863
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10862
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10864
                MOVE_PIN_MISSILE,
                MOVE_EXPLOSION,
                MOVE_SPIKES,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 10869
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10870
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10872
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 10877
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10878
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10880
                MOVE_SMOG,
                MOVE_FLAMETHROWER,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
            },
            },
            {
#line 10885
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10886
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10888
                MOVE_ICE_BEAM,
                MOVE_CLAMP,
                MOVE_SPIKE_CANNON,
                MOVE_SURF,
            },
            },
        },
    },
#line 10893
    [DIFFICULTY_NORMAL][TRAINER_ARIANA_1] =
    {
#line 10894
        .trainerName = _("ARIANA"),
#line 10895
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10896
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 10898
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10899
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10900
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10902
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10904
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10905
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10907
                MOVE_LEER,
                MOVE_SLUDGE_BOMB,
                MOVE_BITE,
                MOVE_WRAP,
            },
            },
            {
#line 10912
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10913
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10915
                MOVE_FAINT_ATTACK,
                MOVE_PAY_DAY,
                MOVE_MUD_SLAP,
                MOVE_SLASH,
            },
            },
            {
#line 10920
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10921
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10923
                MOVE_SWEET_SCENT,
                MOVE_SLEEP_POWDER,
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
            },
            },
        },
    },
#line 10928
    [DIFFICULTY_NORMAL][TRAINER_ARIANA_2] =
    {
#line 10929
        .trainerName = _("ARIANA"),
#line 10930
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10931
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 10933
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10934
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10935
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10937
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10939
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10940
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10942
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 10947
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10948
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10950
                MOVE_BITE,
                MOVE_SCREECH,
                MOVE_CHARM,
                MOVE_SLASH,
            },
            },
            {
#line 10955
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10956
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10958
                MOVE_SLEEP_POWDER,
                MOVE_SLUDGE_BOMB,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 10963
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10964
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10966
                MOVE_STRENGTH,
                MOVE_TWISTER,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10971
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10972
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10974
                MOVE_PURSUIT,
                MOVE_TOXIC,
                MOVE_FAINT_ATTACK,
                MOVE_FLY,
            },
            },
        },
    },
