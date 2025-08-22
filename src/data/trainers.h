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
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 90
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 92
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 94
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 93
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 96
    [DIFFICULTY_NORMAL][TRAINER_ROSS] =
    {
#line 97
        .trainerName = _("ROSS"),
#line 98
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 99
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 101
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 102
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 104
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 105
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 108
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 109
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 112
    [DIFFICULTY_NORMAL][TRAINER_MITCH] =
    {
#line 113
        .trainerName = _("MITCH"),
#line 114
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 115
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 117
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 120
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 121
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 124
    [DIFFICULTY_NORMAL][TRAINER_JED] =
    {
#line 125
        .trainerName = _("JED"),
#line 126
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 127
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 129
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 130
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 132
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 133
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 136
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 140
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 141
        .trainerName = _("MARC"),
#line 142
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 143
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 145
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 146
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 148
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 149
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 152
    [DIFFICULTY_NORMAL][TRAINER_RICH] =
    {
#line 153
        .trainerName = _("RICH"),
#line 154
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 155
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 157
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 158
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 160
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 161
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 164
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 165
        .trainerName = _("JOEY"),
#line 166
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 167
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 169
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 170
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 172
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 173
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 176
    [DIFFICULTY_NORMAL][TRAINER_MIKEY] =
    {
#line 177
        .trainerName = _("MIKEY"),
#line 178
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 179
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 181
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 182
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 184
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 185
            .lvl = 2,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 188
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 189
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 192
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 193
        .trainerName = _("ALBERT"),
#line 194
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 195
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 198
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 200
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 201
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 204
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 205
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 208
    [DIFFICULTY_NORMAL][TRAINER_GORDON] =
    {
#line 209
        .trainerName = _("GORDON"),
#line 210
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 211
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 213
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 214
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 216
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 217
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 220
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 221
        .trainerName = _("SAMUEL"),
#line 222
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 223
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 225
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 226
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 228
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 229
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 232
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 233
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 236
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 237
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 240
    [DIFFICULTY_NORMAL][TRAINER_IAN] =
    {
#line 241
        .trainerName = _("IAN"),
#line 242
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 243
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 246
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 248
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 249
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 252
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 253
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 256
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 257
        .trainerName = _("WARREN"),
#line 258
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 259
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 261
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 262
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 264
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 265
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 268
    [DIFFICULTY_NORMAL][TRAINER_JIMMY] =
    {
#line 269
        .trainerName = _("JIMMY"),
#line 270
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 271
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 273
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 274
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 276
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 277
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 280
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 281
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 284
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 285
        .trainerName = _("OWEN"),
#line 286
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 287
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 289
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 290
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 292
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 293
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 296
    [DIFFICULTY_NORMAL][TRAINER_JASON] =
    {
#line 297
        .trainerName = _("JASON"),
#line 298
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 299
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 301
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 302
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 304
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 305
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 308
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 309
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 312
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 313
        .trainerName = _("JACK"),
#line 314
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 315
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 317
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 318
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 320
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 321
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 324
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 325
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 328
    [DIFFICULTY_NORMAL][TRAINER_KIPP] =
    {
#line 329
        .trainerName = _("KIPP"),
#line 330
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 331
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 334
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 336
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 337
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 340
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 341
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 344
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 345
        .trainerName = _("ALAN"),
#line 346
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 347
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 349
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 350
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 352
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 353
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 356
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 357
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 360
    [DIFFICULTY_NORMAL][TRAINER_JOHNNY] =
    {
#line 361
        .trainerName = _("JOHNNY"),
#line 362
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 363
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 365
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 366
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 368
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 369
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 372
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 373
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 376
    [DIFFICULTY_NORMAL][TRAINER_DANNY] =
    {
#line 377
        .trainerName = _("DANNY"),
#line 378
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 379
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 381
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 382
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 384
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 385
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 388
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 389
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 392
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 393
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 396
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 397
        .trainerName = _("TOMMY"),
#line 398
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 399
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 401
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 404
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 405
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 408
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 409
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 412
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 413
        .trainerName = _("DUDLEY"),
#line 414
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 415
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 417
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 418
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 420
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 421
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 424
    [DIFFICULTY_NORMAL][TRAINER_JOE] =
    {
#line 425
        .trainerName = _("JOE"),
#line 426
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 427
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 429
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 430
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 432
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 433
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 436
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 437
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 440
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 441
        .trainerName = _("BILLY"),
#line 442
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 443
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 445
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 446
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 448
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 449
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 452
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 453
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 456
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 457
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 460
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 461
        .trainerName = _("CHAD"),
#line 462
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 463
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 465
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 466
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 468
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 469
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 472
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 473
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 476
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 477
        .trainerName = _("NATE"),
#line 478
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 479
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 481
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 482
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 484
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 485
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 488
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 489
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 492
    [DIFFICULTY_NORMAL][TRAINER_RICKY] =
    {
#line 493
        .trainerName = _("RICKY"),
#line 494
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 495
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 497
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 498
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 500
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 501
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 504
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 505
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 508
    [DIFFICULTY_NORMAL][TRAINER_ROD] =
    {
#line 509
        .trainerName = _("ROD"),
#line 510
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 511
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 513
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 514
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 516
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 517
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 520
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 521
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 524
    [DIFFICULTY_NORMAL][TRAINER_ABE] =
    {
#line 525
        .trainerName = _("ABE"),
#line 526
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 527
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 529
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 530
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 532
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 533
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 536
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 537
        .trainerName = _("BRYAN"),
#line 538
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 539
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 541
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 542
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 544
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 545
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 548
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 549
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 552
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 553
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 556
    [DIFFICULTY_NORMAL][TRAINER_THEO] =
    {
#line 557
        .trainerName = _("THEO"),
#line 558
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 559
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 561
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 562
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 564
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 565
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 568
    [DIFFICULTY_NORMAL][TRAINER_TOBY] =
    {
#line 569
        .trainerName = _("TOBY"),
#line 570
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 571
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 573
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 574
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 576
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 577
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 580
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 581
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 584
    [DIFFICULTY_NORMAL][TRAINER_DENIS] =
    {
#line 585
        .trainerName = _("DENIS"),
#line 586
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 587
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 589
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 590
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 592
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 593
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 596
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 597
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 600
    [DIFFICULTY_NORMAL][TRAINER_VANCE] =
    {
#line 601
        .trainerName = _("VANCE"),
#line 602
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 603
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 605
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 606
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 608
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 609
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 612
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 613
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 616
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 617
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 620
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 621
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 624
    [DIFFICULTY_NORMAL][TRAINER_HANK] =
    {
#line 625
        .trainerName = _("HANK"),
#line 626
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 627
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 630
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 632
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 633
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 636
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 637
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 640
    [DIFFICULTY_NORMAL][TRAINER_ROY] =
    {
#line 641
        .trainerName = _("ROY"),
#line 642
        .trainerClass = TRAINER_CLASS_BIKER,
#line 643
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 645
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 646
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 648
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 649
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 652
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 653
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 656
    [DIFFICULTY_NORMAL][TRAINER_BORIS] =
    {
#line 657
        .trainerName = _("BORIS"),
#line 658
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 659
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 661
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 662
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 664
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 665
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 668
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 669
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 672
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 673
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 676
    [DIFFICULTY_NORMAL][TRAINER_BOB] =
    {
#line 677
        .trainerName = _("BOB"),
#line 678
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 679
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 681
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 684
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 685
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 688
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 689
        .trainerName = _("JOSE"),
#line 690
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 691
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 693
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 694
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 696
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 697
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 700
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 701
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 704
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 705
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 708
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 709
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 712
    [DIFFICULTY_NORMAL][TRAINER_PETER] =
    {
#line 713
        .trainerName = _("PETER"),
#line 714
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 715
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 717
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 718
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 720
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 721
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 724
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 725
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 728
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 729
        .trainerName = _("PERRY"),
#line 730
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 731
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 733
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 734
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 736
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 737
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 740
    [DIFFICULTY_NORMAL][TRAINER_BRET] =
    {
#line 741
        .trainerName = _("BRET"),
#line 742
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 743
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 745
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 746
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 748
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 749
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 752
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 753
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 756
    [DIFFICULTY_NORMAL][TRAINER_CARRIE] =
    {
#line 757
        .trainerName = _("CARRIE"),
#line 758
        .trainerClass = TRAINER_CLASS_LASS,
#line 759
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 761
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 762
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 764
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 765
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 768
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 769
        .trainerName = _("BRIDGET"),
#line 770
        .trainerClass = TRAINER_CLASS_LASS,
#line 771
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 773
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 774
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 776
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 777
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 780
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 781
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 784
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 785
        .trainerName = _("ALICE"),
#line 786
        .trainerClass = TRAINER_CLASS_LASS,
#line 787
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 789
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 790
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 792
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 793
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 796
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 797
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 800
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 801
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 804
    [DIFFICULTY_NORMAL][TRAINER_KRISE] =
    {
#line 805
        .trainerName = _("KRISE"),
#line 806
        .trainerClass = TRAINER_CLASS_LASS,
#line 807
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 809
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 810
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 812
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 813
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 816
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 817
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 820
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 821
        .trainerName = _("CONNIE"),
#line 822
        .trainerClass = TRAINER_CLASS_LASS,
#line 823
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 825
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 826
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 828
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 829
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 832
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 833
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 836
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 837
        .trainerName = _("LINDA"),
#line 838
        .trainerClass = TRAINER_CLASS_LASS,
#line 839
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 841
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 842
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 844
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 845
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 848
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 849
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 852
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 853
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 856
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 857
        .trainerName = _("LAURA"),
#line 858
        .trainerClass = TRAINER_CLASS_LASS,
#line 859
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 861
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 862
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 864
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 865
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 868
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 869
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 872
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 873
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 876
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 877
        .trainerName = _("SHANNON"),
#line 878
        .trainerClass = TRAINER_CLASS_LASS,
#line 879
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 881
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 882
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 884
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 885
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 888
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 889
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 892
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 893
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 896
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 897
        .trainerName = _("MICHELLE"),
#line 898
        .trainerClass = TRAINER_CLASS_LASS,
#line 899
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 901
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 902
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 904
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 905
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 908
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 909
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 912
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 913
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 916
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 917
        .trainerName = _("DANA"),
#line 918
        .trainerClass = TRAINER_CLASS_LASS,
#line 919
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 921
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 922
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 924
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 925
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 928
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 929
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 932
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 933
        .trainerName = _("ELLEN"),
#line 934
        .trainerClass = TRAINER_CLASS_LASS,
#line 935
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 937
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 938
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 940
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 941
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 944
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 945
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 948
    [DIFFICULTY_NORMAL][TRAINER_NICK] =
    {
#line 949
        .trainerName = _("NICK"),
#line 950
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 951
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 953
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 954
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 956
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 957
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 960
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 961
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 964
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 965
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 968
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 969
        .trainerName = _("AARON"),
#line 970
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 971
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 973
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 976
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 977
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 980
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 981
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 984
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 985
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 988
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 989
        .trainerName = _("PAUL"),
#line 990
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 991
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 993
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 994
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 996
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 997
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1000
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1001
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1004
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1005
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1008
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1009
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1012
    [DIFFICULTY_NORMAL][TRAINER_CODY] =
    {
#line 1013
        .trainerName = _("CODY"),
#line 1014
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1015
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1017
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1018
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1020
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1021
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1024
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1025
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1028
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1029
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1032
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1033
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1036
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 1037
        .trainerName = _("MIKE"),
#line 1038
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1039
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1041
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1042
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1044
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1045
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1048
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1049
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1052
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1053
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1056
    [DIFFICULTY_NORMAL][TRAINER_GAVEN] =
    {
#line 1057
        .trainerName = _("GAVEN"),
#line 1058
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1059
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1061
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1062
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1064
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1065
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1068
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1069
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1072
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1073
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1076
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1077
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1080
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1081
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1084
    [DIFFICULTY_NORMAL][TRAINER_RYAN] =
    {
#line 1085
        .trainerName = _("RYAN"),
#line 1086
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1089
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1090
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1092
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1093
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1096
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1097
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1100
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1101
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1104
    [DIFFICULTY_NORMAL][TRAINER_JAKE] =
    {
#line 1105
        .trainerName = _("JAKE"),
#line 1106
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1107
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1109
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1110
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1112
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1113
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1116
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1117
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1120
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1121
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1124
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1125
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1128
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1129
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1132
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 1133
        .trainerName = _("BLAKE"),
#line 1134
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1138
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1140
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1141
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1144
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1145
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1148
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1149
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1152
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1153
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1156
    [DIFFICULTY_NORMAL][TRAINER_BRIAN] =
    {
#line 1157
        .trainerName = _("BRIAN"),
#line 1158
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1161
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1162
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1164
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1165
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1168
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1169
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1172
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1173
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1176
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1177
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1180
    [DIFFICULTY_NORMAL][TRAINER_ERICK] =
    {
#line 1181
        .trainerName = _("ERICK"),
#line 1182
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1185
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1186
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1188
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1189
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1192
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1193
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1196
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1197
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1200
    [DIFFICULTY_NORMAL][TRAINER_ANDY] =
    {
#line 1201
        .trainerName = _("ANDY"),
#line 1202
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1203
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1205
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1206
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1208
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1209
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1212
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1213
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1216
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1217
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1220
    [DIFFICULTY_NORMAL][TRAINER_TYLER] =
    {
#line 1221
        .trainerName = _("TYLER"),
#line 1222
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1223
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1225
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1226
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1228
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1229
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1232
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1233
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1236
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1237
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1240
    [DIFFICULTY_NORMAL][TRAINER_SEAN] =
    {
#line 1241
        .trainerName = _("SEAN"),
#line 1242
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1243
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1246
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1248
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1249
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1252
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1253
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1256
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1257
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1260
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 1261
        .trainerName = _("KEVIN"),
#line 1262
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1265
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1266
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1268
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1269
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1272
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1273
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1276
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1277
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1280
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1281
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1284
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1285
        .trainerName = _("STEVE"),
#line 1286
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1287
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1289
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1290
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1292
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1293
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1296
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1297
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1300
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1301
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1304
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 1305
        .trainerName = _("ALLEN"),
#line 1306
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1307
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1309
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1310
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1312
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1313
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1316
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1317
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1320
    [DIFFICULTY_NORMAL][TRAINER_DARIN] =
    {
#line 1321
        .trainerName = _("DARIN"),
#line 1322
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1323
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1325
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1326
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1328
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1329
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1332
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1333
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1336
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1337
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1340
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1341
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1344
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 1345
        .trainerName = _("GWEN"),
#line 1346
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1347
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1349
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1350
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1352
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1353
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1356
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1357
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1360
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1361
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1364
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1365
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1368
    [DIFFICULTY_NORMAL][TRAINER_LOIS] =
    {
#line 1369
        .trainerName = _("LOIS"),
#line 1370
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1371
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1373
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1376
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1377
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1380
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1381
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1384
    [DIFFICULTY_NORMAL][TRAINER_FRAN] =
    {
#line 1385
        .trainerName = _("FRAN"),
#line 1386
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1387
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1389
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1390
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1392
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1393
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1396
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1397
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1400
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1401
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1404
    [DIFFICULTY_NORMAL][TRAINER_LOLA] =
    {
#line 1405
        .trainerName = _("LOLA"),
#line 1406
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1407
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1409
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1410
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1412
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1413
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1416
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1417
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1420
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1421
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1424
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1425
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1428
    [DIFFICULTY_NORMAL][TRAINER_KATE] =
    {
#line 1429
        .trainerName = _("KATE"),
#line 1430
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1431
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1433
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1434
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1436
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1437
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1440
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1441
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1444
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 1445
        .trainerName = _("IRENE"),
#line 1446
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1447
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1449
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1450
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1452
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1453
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1456
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1457
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1460
    [DIFFICULTY_NORMAL][TRAINER_KELLY] =
    {
#line 1461
        .trainerName = _("KELLY"),
#line 1462
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1463
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1465
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1466
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1468
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1469
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1472
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1473
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1476
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1477
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1480
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1481
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1484
    [DIFFICULTY_NORMAL][TRAINER_JOYCE] =
    {
#line 1485
        .trainerName = _("JOYCE"),
#line 1486
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1487
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1489
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1490
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1492
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1493
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1496
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1497
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1500
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1501
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1504
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1505
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1508
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1509
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1512
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 1513
        .trainerName = _("BETH"),
#line 1514
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1515
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1517
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1518
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1520
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1521
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1524
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1525
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1528
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1529
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1532
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1533
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1536
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1537
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1540
    [DIFFICULTY_NORMAL][TRAINER_REENA] =
    {
#line 1541
        .trainerName = _("REENA"),
#line 1542
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1543
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1545
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1546
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1548
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1549
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1552
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1553
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1556
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1557
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1560
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1561
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1564
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1565
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1568
    [DIFFICULTY_NORMAL][TRAINER_MEGAN] =
    {
#line 1569
        .trainerName = _("MEGAN"),
#line 1570
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1571
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1573
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1574
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1576
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1577
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1580
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1581
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1584
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1585
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1588
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1589
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1592
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 1593
        .trainerName = _("CAROL"),
#line 1594
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1595
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1597
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1598
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1600
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1601
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1604
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1605
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1608
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1609
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1612
    [DIFFICULTY_NORMAL][TRAINER_QUINN] =
    {
#line 1613
        .trainerName = _("QUINN"),
#line 1614
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1615
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1617
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1620
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1621
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1624
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1625
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1628
    [DIFFICULTY_NORMAL][TRAINER_EMMA] =
    {
#line 1629
        .trainerName = _("EMMA"),
#line 1630
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1631
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1633
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1634
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1636
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1637
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1640
    [DIFFICULTY_NORMAL][TRAINER_CYBIL] =
    {
#line 1641
        .trainerName = _("CYBIL"),
#line 1642
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1643
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1645
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1646
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1648
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1649
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1652
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1653
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1656
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1657
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1660
    [DIFFICULTY_NORMAL][TRAINER_JENN] =
    {
#line 1661
        .trainerName = _("JENN"),
#line 1662
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1663
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1665
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1666
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1668
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1669
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1672
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1673
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1676
    [DIFFICULTY_NORMAL][TRAINER_CARA] =
    {
#line 1677
        .trainerName = _("CARA"),
#line 1678
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1679
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1681
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1684
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1685
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1688
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1689
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1692
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1693
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1696
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 1697
        .trainerName = _("VICTORIA"),
#line 1698
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1699
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1701
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1702
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1704
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1705
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1708
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1709
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1712
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 1713
        .trainerName = _("SAMANTHA"),
#line 1714
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1715
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1717
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1718
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1720
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1721
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1724
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1725
        .trainerName = _("JULIE"),
#line 1726
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1727
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1729
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1730
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1732
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1733
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1736
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 1737
        .trainerName = _("JACLYN"),
#line 1738
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1739
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1741
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1742
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1744
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1745
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1748
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 1749
        .trainerName = _("BRENDA"),
#line 1750
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1751
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1753
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1756
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1757
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1760
    [DIFFICULTY_NORMAL][TRAINER_CASSIE] =
    {
#line 1761
        .trainerName = _("CASSIE"),
#line 1762
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1763
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1765
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1766
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1768
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1769
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1772
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1773
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1776
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1777
        .trainerName = _("CAROLINE"),
#line 1778
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1779
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1781
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1782
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1784
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1785
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1788
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1789
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1792
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1793
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1796
    [DIFFICULTY_NORMAL][TRAINER_CARLENE] =
    {
#line 1797
        .trainerName = _("CARLENE"),
#line 1798
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1799
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1801
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1802
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1804
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1805
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1808
    [DIFFICULTY_NORMAL][TRAINER_JESSICA] =
    {
#line 1809
        .trainerName = _("JESSICA"),
#line 1810
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1811
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1813
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1814
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1816
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1817
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1820
    [DIFFICULTY_NORMAL][TRAINER_RACHAEL] =
    {
#line 1821
        .trainerName = _("RACHAEL"),
#line 1822
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1823
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1825
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1826
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1828
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1829
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1832
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 1833
        .trainerName = _("ANGELICA"),
#line 1834
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1835
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1837
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1838
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1840
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1841
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1844
    [DIFFICULTY_NORMAL][TRAINER_KENDRA] =
    {
#line 1845
        .trainerName = _("KENDRA"),
#line 1846
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1847
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1849
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1850
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1852
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1853
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1856
    [DIFFICULTY_NORMAL][TRAINER_VERONICA] =
    {
#line 1857
        .trainerName = _("VERONICA"),
#line 1858
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1859
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1861
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1862
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1864
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1865
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1868
    [DIFFICULTY_NORMAL][TRAINER_JULIA] =
    {
#line 1869
        .trainerName = _("JULIA"),
#line 1870
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1871
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1873
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1874
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1876
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1877
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1880
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1881
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1884
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1885
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1888
    [DIFFICULTY_NORMAL][TRAINER_THERESA] =
    {
#line 1889
        .trainerName = _("THERESA"),
#line 1890
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1891
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1893
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1894
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1896
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1897
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1900
    [DIFFICULTY_NORMAL][TRAINER_VALERIE] =
    {
#line 1901
        .trainerName = _("VALERIE"),
#line 1902
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1903
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1905
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1908
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1909
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1912
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1913
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1916
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1917
        .trainerName = _("OLIVIA"),
#line 1918
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1919
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1921
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1922
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1924
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1925
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1928
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 1929
        .trainerName = _("LARRY"),
#line 1930
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1931
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1933
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1934
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1936
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1937
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1940
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 1941
        .trainerName = _("ANDREW"),
#line 1942
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1943
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1945
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1946
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1948
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1949
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1952
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1953
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1956
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 1957
        .trainerName = _("CALVIN"),
#line 1958
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1959
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1961
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1962
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1964
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1965
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1968
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 1969
        .trainerName = _("SHANE"),
#line 1970
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1971
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1973
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1976
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1977
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1980
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1981
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1984
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 1985
        .trainerName = _("BEN"),
#line 1986
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1987
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1989
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1990
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1992
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1993
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1996
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1997
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2000
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2001
        .trainerName = _("BRENT"),
#line 2002
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2003
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2005
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2006
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2008
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2009
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2012
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2013
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2016
    [DIFFICULTY_NORMAL][TRAINER_RON] =
    {
#line 2017
        .trainerName = _("RON"),
#line 2018
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2019
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2021
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2022
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2024
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2025
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2028
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2029
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2032
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2033
        .trainerName = _("ETHAN"),
#line 2034
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2035
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2037
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2038
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2040
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2041
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2044
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2045
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2048
    [DIFFICULTY_NORMAL][TRAINER_ISSAC] =
    {
#line 2049
        .trainerName = _("ISSAC"),
#line 2050
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2051
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2053
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2054
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2056
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2057
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2060
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2061
        .trainerName = _("DONALD"),
#line 2062
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2063
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2065
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2066
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2068
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2069
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2072
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2073
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2076
    [DIFFICULTY_NORMAL][TRAINER_ZACH] =
    {
#line 2077
        .trainerName = _("ZACH"),
#line 2078
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2079
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2081
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2084
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2085
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2088
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2089
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2092
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2093
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2096
    [DIFFICULTY_NORMAL][TRAINER_MILLER] =
    {
#line 2097
        .trainerName = _("MILLER"),
#line 2098
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2099
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2101
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2102
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2104
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2105
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2108
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2109
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2112
    [DIFFICULTY_NORMAL][TRAINER_GRUNT] =
    {
#line 2113
        .trainerName = _("GRUNT"),
#line 2114
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2115
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2117
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2120
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2121
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2124
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2125
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2128
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2129
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2132
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_2] =
    {
#line 2133
        .trainerName = _("GRUNT"),
#line 2134
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2135
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2137
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2138
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2140
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2141
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2144
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2145
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2148
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2149
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2152
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_3] =
    {
#line 2153
        .trainerName = _("GRUNT"),
#line 2154
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2155
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2157
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2158
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2160
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2161
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2164
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2165
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2168
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_4] =
    {
#line 2169
        .trainerName = _("GRUNT"),
#line 2170
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2171
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2173
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2174
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2176
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2177
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2180
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2181
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2184
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2185
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2188
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_5] =
    {
#line 2189
        .trainerName = _("GRUNT"),
#line 2190
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2191
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2193
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2194
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2196
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2197
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2200
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2201
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2204
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_6] =
    {
#line 2205
        .trainerName = _("GRUNT"),
#line 2206
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2207
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2209
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2210
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2212
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2213
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2216
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2217
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2220
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2221
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2224
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_7] =
    {
#line 2225
        .trainerName = _("GRUNT"),
#line 2226
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2227
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2229
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2230
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2232
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2233
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2236
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2237
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2240
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_8] =
    {
#line 2241
        .trainerName = _("GRUNT"),
#line 2242
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2243
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2245
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2246
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2248
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2249
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2252
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2253
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2256
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_9] =
    {
#line 2257
        .trainerName = _("GRUNT"),
#line 2258
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2259
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2261
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2262
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2264
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2265
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2268
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2269
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2272
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2273
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2276
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_10] =
    {
#line 2277
        .trainerName = _("GRUNT"),
#line 2278
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2279
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2281
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2282
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2284
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2285
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2288
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2289
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2292
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_11] =
    {
#line 2293
        .trainerName = _("GRUNT"),
#line 2294
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2295
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2297
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2298
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2300
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2301
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2304
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2305
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2308
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_12] =
    {
#line 2309
        .trainerName = _("GRUNT"),
#line 2310
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2311
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2313
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2314
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2316
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2317
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2320
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2321
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2324
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2325
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2328
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_13] =
    {
#line 2329
        .trainerName = _("GRUNT"),
#line 2330
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2331
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2333
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2334
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2336
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2337
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2340
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_14] =
    {
#line 2341
        .trainerName = _("GRUNT"),
#line 2342
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2343
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2345
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2346
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2348
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2349
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2352
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_15] =
    {
#line 2353
        .trainerName = _("GRUNT"),
#line 2354
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2355
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2357
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2358
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2360
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2361
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2364
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2365
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2368
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2369
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2372
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_16] =
    {
#line 2373
        .trainerName = _("GRUNT"),
#line 2374
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2375
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2377
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2378
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2380
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2381
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2384
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_17] =
    {
#line 2385
        .trainerName = _("GRUNT"),
#line 2386
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2387
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2389
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2390
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2392
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2393
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2396
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2397
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2400
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_18] =
    {
#line 2401
        .trainerName = _("GRUNT"),
#line 2402
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2403
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2405
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2406
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2408
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2409
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2412
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2413
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2416
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2417
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2420
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_19] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2428
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2429
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2432
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_20] =
    {
#line 2433
        .trainerName = _("GRUNT"),
#line 2434
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2435
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2437
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2438
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2440
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2441
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2444
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2445
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2448
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_21] =
    {
#line 2449
        .trainerName = _("GRUNT"),
#line 2450
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2451
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2453
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2454
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2456
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2457
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2460
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2461
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2464
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_22] =
    {
#line 2465
        .trainerName = _("GRUNT"),
#line 2466
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2467
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 2469
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2472
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2473
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2476
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2477
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2480
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_23] =
    {
#line 2481
        .trainerName = _("GRUNT"),
#line 2482
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2483
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2485
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2486
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2488
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2489
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2492
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2493
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2496
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2497
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2500
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_24] =
    {
#line 2501
        .trainerName = _("GRUNT"),
#line 2502
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2503
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2505
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2506
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2508
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2509
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2512
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2513
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2516
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2517
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2520
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2521
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2524
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2525
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2528
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_25] =
    {
#line 2529
        .trainerName = _("GRUNT"),
#line 2530
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2531
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2533
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2534
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2536
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2537
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2540
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2541
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2544
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_26] =
    {
#line 2545
        .trainerName = _("GRUNT"),
#line 2546
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2547
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2549
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2550
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2552
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2553
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2556
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2557
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2560
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_27] =
    {
#line 2561
        .trainerName = _("GRUNT"),
#line 2562
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2563
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2565
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2566
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2568
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2569
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2572
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2573
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2576
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2577
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2580
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2581
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2584
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_28] =
    {
#line 2585
        .trainerName = _("GRUNT"),
#line 2586
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2587
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 2589
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2590
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2592
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2593
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2596
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2597
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2600
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2601
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2604
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2605
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2608
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_29] =
    {
#line 2609
        .trainerName = _("GRUNT"),
#line 2610
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2611
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 2613
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2614
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2616
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2617
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2620
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2621
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2624
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_30] =
    {
#line 2625
        .trainerName = _("GRUNT"),
#line 2626
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2627
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2629
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2630
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2633
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2634
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2637
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_31] =
    {
#line 2638
        .trainerName = _("GRUNT"),
#line 2639
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2640
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2642
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2643
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2644
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2646
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2647
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2650
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_32] =
    {
#line 2651
        .trainerName = _("GRUNT"),
#line 2652
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2653
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2655
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2656
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2657
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2659
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2660
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2663
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_33] =
    {
#line 2664
        .trainerName = _("GRUNT"),
#line 2665
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2666
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2668
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2669
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 2670
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2672
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2673
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2676
    [DIFFICULTY_NORMAL][TRAINER_ETO] =
    {
#line 2677
        .trainerName = _("ETO"),
#line 2678
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2679
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2681
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2684
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2685
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2688
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2689
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2692
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2693
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2696
    [DIFFICULTY_NORMAL][TRAINER_ETO_2] =
    {
#line 2697
        .trainerName = _("ETO"),
#line 2698
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2699
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2701
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2702
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2704
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2705
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2708
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2709
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2712
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2713
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2716
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2717
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2720
    [DIFFICULTY_NORMAL][TRAINER_ETO_3] =
    {
#line 2721
        .trainerName = _("ETO"),
#line 2722
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2723
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2725
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2726
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2728
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2729
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2732
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2733
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2736
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2737
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2740
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2741
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2744
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2745
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2748
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2749
        .trainerName = _("PRESTON"),
#line 2750
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2751
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2753
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2756
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2757
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2760
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2761
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2764
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2765
        .trainerName = _("EDWARD"),
#line 2766
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2767
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2769
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2770
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2772
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2773
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2776
    [DIFFICULTY_NORMAL][TRAINER_GREGORY] =
    {
#line 2777
        .trainerName = _("GREGORY"),
#line 2778
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2779
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2781
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2782
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2784
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2785
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2788
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2789
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2792
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2793
        .trainerName = _("VIRGIL"),
#line 2794
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2795
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2797
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2798
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2800
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2801
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2804
    [DIFFICULTY_NORMAL][TRAINER_ALFRED] =
    {
#line 2805
        .trainerName = _("ALFRED"),
#line 2806
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2807
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 2809
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2810
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2812
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2813
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2816
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE] =
    {
#line 2817
        .trainerName = _("ROXANNE"),
#line 2818
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2819
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2821
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2822
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2824
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2825
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2828
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 2829
        .trainerName = _("CLARISSA"),
#line 2830
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2831
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2833
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2834
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2836
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2837
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2840
    [DIFFICULTY_NORMAL][TRAINER_COLETTE] =
    {
#line 2841
        .trainerName = _("COLETTE"),
#line 2842
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2843
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2845
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2846
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2848
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2849
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2852
    [DIFFICULTY_NORMAL][TRAINER_HILLARY] =
    {
#line 2853
        .trainerName = _("HILLARY"),
#line 2854
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2855
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2857
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2858
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2860
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2861
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2864
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2865
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2868
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 2869
        .trainerName = _("SHIRLEY"),
#line 2870
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2871
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2873
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2874
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2876
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2877
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2880
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2881
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2884
    [DIFFICULTY_NORMAL][TRAINER_DON] =
    {
#line 2885
        .trainerName = _("DON"),
#line 2886
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2887
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2890
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2892
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2893
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2896
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2897
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2900
    [DIFFICULTY_NORMAL][TRAINER_ROB] =
    {
#line 2901
        .trainerName = _("ROB"),
#line 2902
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2903
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2905
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2908
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2909
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2912
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2913
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2916
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 2917
        .trainerName = _("ED"),
#line 2918
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2919
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2921
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2922
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2924
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2925
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2928
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2929
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2932
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2933
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2936
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 2937
        .trainerName = _("WADE"),
#line 2938
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2939
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2941
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2942
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2944
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2945
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2948
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2949
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2952
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 2953
        .trainerName = _("BENNY"),
#line 2954
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2955
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2957
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2958
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2960
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2961
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2964
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2965
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2968
    [DIFFICULTY_NORMAL][TRAINER_AL] =
    {
#line 2969
        .trainerName = _("AL"),
#line 2970
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2971
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2973
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2976
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2977
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2980
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2981
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2984
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 2985
        .trainerName = _("JOSH"),
#line 2986
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2987
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2989
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2990
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2992
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2993
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2996
    [DIFFICULTY_NORMAL][TRAINER_ARNIE] =
    {
#line 2997
        .trainerName = _("ARNIE"),
#line 2998
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2999
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3001
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3002
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3004
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3005
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3008
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3009
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3012
    [DIFFICULTY_NORMAL][TRAINER_KEN] =
    {
#line 3013
        .trainerName = _("KEN"),
#line 3014
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3015
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3017
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3018
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3020
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3021
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3024
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3025
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3028
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 3029
        .trainerName = _("DOUG"),
#line 3030
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3031
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3033
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3034
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3036
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3037
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3040
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 3041
        .trainerName = _("WAYNE"),
#line 3042
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3043
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3045
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3048
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3049
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3052
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3053
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3056
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 3057
        .trainerName = _("JUSTIN"),
#line 3058
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3059
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3061
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3062
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3064
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3065
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3068
    [DIFFICULTY_NORMAL][TRAINER_RALPH] =
    {
#line 3069
        .trainerName = _("RALPH"),
#line 3070
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3071
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3073
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3074
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3076
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3077
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3080
    [DIFFICULTY_NORMAL][TRAINER_ARNOLD] =
    {
#line 3081
        .trainerName = _("ARNOLD"),
#line 3082
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3083
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3085
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3086
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3088
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3089
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3092
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3093
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3096
    [DIFFICULTY_NORMAL][TRAINER_KYLE] =
    {
#line 3097
        .trainerName = _("KYLE"),
#line 3098
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3099
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3101
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3102
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3104
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3105
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3108
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3109
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3112
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3113
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3116
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 3117
        .trainerName = _("HENRY"),
#line 3118
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3119
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3121
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3122
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3124
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3125
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3128
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3129
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3132
    [DIFFICULTY_NORMAL][TRAINER_MARVIN] =
    {
#line 3133
        .trainerName = _("MARVIN"),
#line 3134
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3135
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3138
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3140
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3141
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3144
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3145
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3148
    [DIFFICULTY_NORMAL][TRAINER_TULLY] =
    {
#line 3149
        .trainerName = _("TULLY"),
#line 3150
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3151
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3154
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3156
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3157
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3160
    [DIFFICULTY_NORMAL][TRAINER_ANDRE] =
    {
#line 3161
        .trainerName = _("ANDRE"),
#line 3162
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3163
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3165
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3166
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3168
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3169
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3172
    [DIFFICULTY_NORMAL][TRAINER_RAYMOND] =
    {
#line 3173
        .trainerName = _("RAYMOND"),
#line 3174
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3175
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3177
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3178
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3180
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3181
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3184
    [DIFFICULTY_NORMAL][TRAINER_WILTON] =
    {
#line 3185
        .trainerName = _("WILTON"),
#line 3186
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3187
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3189
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3190
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3192
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3193
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3196
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3197
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3200
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3201
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3204
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 3205
        .trainerName = _("EDGAR"),
#line 3206
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3207
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3209
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3210
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3212
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3213
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3216
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3217
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3220
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3221
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3224
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 3225
        .trainerName = _("JONAH"),
#line 3226
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3227
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3230
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3232
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3233
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3236
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3237
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3240
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3241
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3244
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3245
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3248
    [DIFFICULTY_NORMAL][TRAINER_MARTIN] =
    {
#line 3249
        .trainerName = _("MARTIN"),
#line 3250
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3251
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3253
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3254
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3256
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3257
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3260
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3261
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3264
    [DIFFICULTY_NORMAL][TRAINER_STEPHEN] =
    {
#line 3265
        .trainerName = _("STEPHEN"),
#line 3266
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3267
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3269
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3270
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3272
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3273
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3276
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3277
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3280
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3281
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3284
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3285
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3288
    [DIFFICULTY_NORMAL][TRAINER_BARNEY] =
    {
#line 3289
        .trainerName = _("BARNEY"),
#line 3290
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3291
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3293
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3294
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3296
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3297
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3300
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3301
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3304
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3305
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3308
    [DIFFICULTY_NORMAL][TRAINER_SCOTT] =
    {
#line 3309
        .trainerName = _("SCOTT"),
#line 3310
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3311
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3313
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3314
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3316
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3317
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3320
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3321
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3324
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3325
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3328
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3329
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3332
    [DIFFICULTY_NORMAL][TRAINER_HAROLD] =
    {
#line 3333
        .trainerName = _("HAROLD"),
#line 3334
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3335
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3337
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3338
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3340
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3341
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3344
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3345
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3348
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 3349
        .trainerName = _("SIMON"),
#line 3350
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3351
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3353
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3354
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3356
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3357
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3360
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3361
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3364
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 3365
        .trainerName = _("RANDALL"),
#line 3366
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3367
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3369
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3370
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3372
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3373
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3376
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3377
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3380
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 3381
        .trainerName = _("CHARLIE"),
#line 3382
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3383
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3385
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3386
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3388
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3389
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3392
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3393
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3396
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 3397
        .trainerName = _("GEORGE"),
#line 3398
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3399
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3401
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3404
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3405
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3408
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3409
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3412
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3413
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3416
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 3417
        .trainerName = _("BERKE"),
#line 3418
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3419
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3421
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3422
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3424
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3425
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3428
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 3429
        .trainerName = _("KIRK"),
#line 3430
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3431
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3433
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3434
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3436
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3437
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3440
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3441
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3444
    [DIFFICULTY_NORMAL][TRAINER_MATHEW] =
    {
#line 3445
        .trainerName = _("MATHEW"),
#line 3446
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3447
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3449
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3450
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3452
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3453
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3456
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3457
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3460
    [DIFFICULTY_NORMAL][TRAINER_HAL] =
    {
#line 3461
        .trainerName = _("HAL"),
#line 3462
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3463
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3465
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3466
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3468
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3469
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3472
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3473
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3476
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3477
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3480
    [DIFFICULTY_NORMAL][TRAINER_PATON] =
    {
#line 3481
        .trainerName = _("PATON"),
#line 3482
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3483
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3485
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3486
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3488
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3489
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3492
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3493
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3496
    [DIFFICULTY_NORMAL][TRAINER_DARYL] =
    {
#line 3497
        .trainerName = _("DARYL"),
#line 3498
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3499
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3501
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3502
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3504
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3505
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3508
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3509
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3512
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3513
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3516
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 3517
        .trainerName = _("WALTER"),
#line 3518
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3519
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3521
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3522
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3524
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3525
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3528
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3529
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3532
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3533
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3536
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 3537
        .trainerName = _("TONY"),
#line 3538
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3539
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3541
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3542
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3544
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3545
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3548
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3549
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3552
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3553
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3556
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 3557
        .trainerName = _("JEROME"),
#line 3558
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3559
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3561
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3562
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3564
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3565
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3568
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3569
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3572
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3573
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3576
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 3577
        .trainerName = _("TUCKER"),
#line 3578
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3579
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3581
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3582
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3584
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3585
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3588
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3589
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3592
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 3593
        .trainerName = _("RICK"),
#line 3594
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3595
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3597
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3598
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3600
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3601
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3604
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3605
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3608
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3609
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3612
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 3613
        .trainerName = _("CAMERON"),
#line 3614
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3615
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3617
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3620
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3621
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3624
    [DIFFICULTY_NORMAL][TRAINER_SETH] =
    {
#line 3625
        .trainerName = _("SETH"),
#line 3626
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3627
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3630
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3632
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3633
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3636
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3637
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3640
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3641
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3644
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 3645
        .trainerName = _("JAMES"),
#line 3646
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3647
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3649
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3650
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3652
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3653
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3656
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3657
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3660
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3661
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3664
    [DIFFICULTY_NORMAL][TRAINER_LEWIS] =
    {
#line 3665
        .trainerName = _("LEWIS"),
#line 3666
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3667
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3669
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3670
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3672
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3673
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3676
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3677
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3680
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3681
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3684
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 3685
        .trainerName = _("PARKER"),
#line 3686
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 3687
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 3689
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3690
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3692
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3693
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3696
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3697
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3700
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3701
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3704
    [DIFFICULTY_NORMAL][TRAINER_ELAINE] =
    {
#line 3705
        .trainerName = _("ELAINE"),
#line 3706
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3707
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3709
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3710
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3712
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3713
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3716
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 3717
        .trainerName = _("PAULA"),
#line 3718
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3719
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3721
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3722
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3724
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3725
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3728
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3729
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3732
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 3733
        .trainerName = _("KAYLEE"),
#line 3734
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3735
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3737
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3738
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3740
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3741
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3744
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3745
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3748
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3749
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3752
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 3753
        .trainerName = _("SUSIE"),
#line 3754
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3755
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3757
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3758
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3760
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3761
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3764
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3765
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3768
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 3769
        .trainerName = _("DENISE"),
#line 3770
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3771
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3773
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3774
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3776
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3777
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3780
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 3781
        .trainerName = _("KARA"),
#line 3782
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3783
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3785
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3786
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3788
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3789
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3792
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3793
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3796
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 3797
        .trainerName = _("WENDY"),
#line 3798
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3799
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3801
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3802
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3804
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3805
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3808
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3809
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3812
    [DIFFICULTY_NORMAL][TRAINER_LISA] =
    {
#line 3813
        .trainerName = _("LISA"),
#line 3814
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3815
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3817
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3818
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3820
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3821
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3824
    [DIFFICULTY_NORMAL][TRAINER_JILL] =
    {
#line 3825
        .trainerName = _("JILL"),
#line 3826
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3827
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3829
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3830
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3832
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3833
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3836
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 3837
        .trainerName = _("MARY"),
#line 3838
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3839
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3841
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3842
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3844
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3845
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3848
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 3849
        .trainerName = _("KATIE"),
#line 3850
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3851
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3853
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3856
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3857
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3860
    [DIFFICULTY_NORMAL][TRAINER_DAWN] =
    {
#line 3861
        .trainerName = _("DAWN"),
#line 3862
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3863
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3865
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3866
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3868
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3869
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3872
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 3873
        .trainerName = _("TARA"),
#line 3874
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3875
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3877
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3878
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3880
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3881
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3884
    [DIFFICULTY_NORMAL][TRAINER_NICOLE] =
    {
#line 3885
        .trainerName = _("NICOLE"),
#line 3886
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3887
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3889
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3890
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3892
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3893
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3896
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3897
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3900
    [DIFFICULTY_NORMAL][TRAINER_LORI] =
    {
#line 3901
        .trainerName = _("LORI"),
#line 3902
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3903
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3905
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3908
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3909
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3912
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3913
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3916
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 3917
        .trainerName = _("JODY"),
#line 3918
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3919
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3921
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3922
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3924
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3925
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3928
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 3929
        .trainerName = _("NIKKI"),
#line 3930
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3931
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3933
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3934
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3936
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3937
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3940
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3941
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3944
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3945
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3948
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 3949
        .trainerName = _("DIANA"),
#line 3950
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3951
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3953
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3954
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3956
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3957
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3960
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3961
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3964
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3965
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3968
    [DIFFICULTY_NORMAL][TRAINER_BRIANA] =
    {
#line 3969
        .trainerName = _("BRIANA"),
#line 3970
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 3971
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 3973
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3976
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3977
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3980
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3981
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3984
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3985
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3988
    [DIFFICULTY_NORMAL][TRAINER_EUGENE] =
    {
#line 3989
        .trainerName = _("EUGENE"),
#line 3990
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 3991
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3993
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3994
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3996
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3997
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4000
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4001
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4004
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 4005
        .trainerName = _("HUEY"),
#line 4006
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4007
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4009
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4010
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4012
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4013
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4016
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4017
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4020
    [DIFFICULTY_NORMAL][TRAINER_TERRELL] =
    {
#line 4021
        .trainerName = _("TERRELL"),
#line 4022
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4023
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4025
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4026
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4028
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4029
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4032
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 4033
        .trainerName = _("KENT"),
#line 4034
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4035
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4037
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4038
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4040
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4041
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4044
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4045
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4048
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 4049
        .trainerName = _("ERNEST"),
#line 4050
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4051
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4053
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4054
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4056
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4057
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4060
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4061
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4064
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4065
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4068
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 4069
        .trainerName = _("JEFF"),
#line 4070
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4071
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4073
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4074
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4076
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4077
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4080
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4081
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4084
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 4085
        .trainerName = _("GARRETT"),
#line 4086
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4087
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4089
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4090
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4092
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4093
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4096
    [DIFFICULTY_NORMAL][TRAINER_KENNETH] =
    {
#line 4097
        .trainerName = _("KENNETH"),
#line 4098
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4099
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4101
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4102
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4104
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4105
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4108
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4109
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4112
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4113
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4116
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4117
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4120
    [DIFFICULTY_NORMAL][TRAINER_STANLY] =
    {
#line 4121
        .trainerName = _("STANLY"),
#line 4122
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4123
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4125
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4126
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4128
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4129
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4132
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4133
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4136
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4137
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4140
    [DIFFICULTY_NORMAL][TRAINER_HARRY] =
    {
#line 4141
        .trainerName = _("HARRY"),
#line 4142
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 4143
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 4145
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4146
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4148
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4149
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4152
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 4153
        .trainerName = _("STAN"),
#line 4154
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4155
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4157
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4158
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4160
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4161
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4164
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 4165
        .trainerName = _("ERIC"),
#line 4166
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4167
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4169
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4170
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4172
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4173
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4176
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4177
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4180
    [DIFFICULTY_NORMAL][TRAINER_GREGG] =
    {
#line 4181
        .trainerName = _("GREGG"),
#line 4182
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4183
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4185
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4186
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4188
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4189
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4192
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4193
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4196
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4197
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4200
    [DIFFICULTY_NORMAL][TRAINER_JAY] =
    {
#line 4201
        .trainerName = _("JAY"),
#line 4202
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4203
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4205
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4206
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4208
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4209
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4212
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4213
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4216
    [DIFFICULTY_NORMAL][TRAINER_DAVE] =
    {
#line 4217
        .trainerName = _("DAVE"),
#line 4218
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4219
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4221
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4222
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4225
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4228
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 4229
        .trainerName = _("SAM"),
#line 4230
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4231
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4233
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4234
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4236
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4237
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4240
    [DIFFICULTY_NORMAL][TRAINER_TOM] =
    {
#line 4241
        .trainerName = _("TOM"),
#line 4242
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4243
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4246
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4248
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4249
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4252
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4253
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4256
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4257
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4260
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 4261
        .trainerName = _("PAT"),
#line 4262
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4263
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4265
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4266
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4268
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4269
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4272
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4273
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4276
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4277
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4280
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 4281
        .trainerName = _("SHAWN"),
#line 4282
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4283
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4285
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4286
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4288
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4289
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4292
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4293
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4296
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4297
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4300
    [DIFFICULTY_NORMAL][TRAINER_TERU] =
    {
#line 4301
        .trainerName = _("TERU"),
#line 4302
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4303
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4305
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4306
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4308
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4309
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4312
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4313
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4316
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4317
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4320
    [DIFFICULTY_NORMAL][TRAINER_RUSS] =
    {
#line 4321
        .trainerName = _("RUSS"),
#line 4322
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4323
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4325
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4326
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4328
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4329
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4332
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4333
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4336
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4337
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4340
    [DIFFICULTY_NORMAL][TRAINER_NORTON] =
    {
#line 4341
        .trainerName = _("NORTON"),
#line 4342
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4343
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4345
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4346
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4348
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4349
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4352
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4353
        .trainerName = _("HUGH"),
#line 4354
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4355
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4357
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4358
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4360
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4361
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4364
    [DIFFICULTY_NORMAL][TRAINER_MARKUS] =
    {
#line 4365
        .trainerName = _("MARKUS"),
#line 4366
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 4367
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 4369
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4370
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4372
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4373
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4376
    [DIFFICULTY_NORMAL][TRAINER_CLYDE] =
    {
#line 4377
        .trainerName = _("CLYDE"),
#line 4378
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 4379
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 4381
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4382
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4384
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4385
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4388
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 4389
        .trainerName = _("VINCENT"),
#line 4390
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4391
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4393
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4394
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4396
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4397
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4400
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4401
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4404
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4405
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4408
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4409
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4412
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4413
        .trainerName = _("ANTHONY"),
#line 4414
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4415
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4417
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4418
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4420
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4421
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4424
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4425
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4428
    [DIFFICULTY_NORMAL][TRAINER_RUSSELL] =
    {
#line 4429
        .trainerName = _("RUSSELL"),
#line 4430
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4431
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4433
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4434
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4436
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4437
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4440
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4441
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4444
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 4445
        .trainerName = _("PHILLIP"),
#line 4446
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4447
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4449
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4450
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4452
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4453
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4456
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4457
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4460
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4461
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4464
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 4465
        .trainerName = _("LEONARD"),
#line 4466
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4467
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4469
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4472
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4473
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4476
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4477
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4480
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4481
        .trainerName = _("BENJAMIN"),
#line 4482
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4483
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4485
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4486
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4488
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4489
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4492
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4493
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4496
    [DIFFICULTY_NORMAL][TRAINER_ERIK] =
    {
#line 4497
        .trainerName = _("ERIK"),
#line 4498
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4499
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4501
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4502
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4504
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4505
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4508
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4509
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4512
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4513
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4516
    [DIFFICULTY_NORMAL][TRAINER_MICHAEL] =
    {
#line 4517
        .trainerName = _("MICHAEL"),
#line 4518
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4519
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4521
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4522
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4524
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4525
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4528
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4529
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4532
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4533
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4536
    [DIFFICULTY_NORMAL][TRAINER_PARRY] =
    {
#line 4537
        .trainerName = _("PARRY"),
#line 4538
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4539
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4541
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4542
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4544
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4545
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4548
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4549
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4552
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4553
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4556
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 4557
        .trainerName = _("TIMOTHY"),
#line 4558
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4559
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4561
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4562
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4564
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4565
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4568
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4569
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4572
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4573
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4576
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4577
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4580
    [DIFFICULTY_NORMAL][TRAINER_BAILEY] =
    {
#line 4581
        .trainerName = _("BAILEY"),
#line 4582
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4583
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4585
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4586
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4588
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4589
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4592
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4593
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4596
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4597
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4600
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4601
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4604
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4605
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4608
    [DIFFICULTY_NORMAL][TRAINER_TIM] =
    {
#line 4609
        .trainerName = _("TIM"),
#line 4610
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4611
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4613
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4614
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4616
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4617
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4620
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4621
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4624
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4625
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4628
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 4629
        .trainerName = _("NOLAND"),
#line 4630
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4631
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4633
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4634
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4636
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4637
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4640
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4641
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4644
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 4645
        .trainerName = _("SIDNEY"),
#line 4646
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4647
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4649
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4650
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4652
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4653
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4656
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4657
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4660
    [DIFFICULTY_NORMAL][TRAINER_KENNY] =
    {
#line 4661
        .trainerName = _("KENNY"),
#line 4662
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4663
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4665
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4666
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4668
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4669
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4672
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4673
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4676
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4677
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4680
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4681
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4684
    [DIFFICULTY_NORMAL][TRAINER_JIM] =
    {
#line 4685
        .trainerName = _("JIM"),
#line 4686
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4687
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4689
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4690
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4692
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4693
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4696
    [DIFFICULTY_NORMAL][TRAINER_DEVIN] =
    {
#line 4697
        .trainerName = _("DEVIN"),
#line 4698
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4699
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4701
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4702
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4704
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4705
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4708
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4709
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4712
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4713
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4716
    [DIFFICULTY_NORMAL][TRAINER_DANIEL] =
    {
#line 4717
        .trainerName = _("DANIEL"),
#line 4718
        .trainerClass = TRAINER_CLASS_HIKER,
#line 4719
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4721
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4722
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4724
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4725
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4728
    [DIFFICULTY_NORMAL][TRAINER_KAZU] =
    {
#line 4729
        .trainerName = _("KAZU"),
#line 4730
        .trainerClass = TRAINER_CLASS_BIKER,
#line 4731
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 4733
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4734
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4736
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4737
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4740
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4741
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4744
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4745
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4748
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 4749
        .trainerName = _("DWAYNE"),
#line 4750
        .trainerClass = TRAINER_CLASS_BIKER,
#line 4751
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 4753
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4756
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4757
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4760
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4761
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4764
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4765
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4768
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4769
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4772
    [DIFFICULTY_NORMAL][TRAINER_HARRIS] =
    {
#line 4773
        .trainerName = _("HARRIS"),
#line 4774
        .trainerClass = TRAINER_CLASS_BIKER,
#line 4775
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 4777
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4778
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4780
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4781
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4784
    [DIFFICULTY_NORMAL][TRAINER_ZEKE] =
    {
#line 4785
        .trainerName = _("ZEKE"),
#line 4786
        .trainerClass = TRAINER_CLASS_BIKER,
#line 4787
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 4789
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4790
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4792
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4793
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4796
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4797
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4800
    [DIFFICULTY_NORMAL][TRAINER_CHARLES] =
    {
#line 4801
        .trainerName = _("CHARLES"),
#line 4802
        .trainerClass = TRAINER_CLASS_BIKER,
#line 4803
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 4805
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4806
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4808
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4809
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4812
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4813
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4816
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4817
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4820
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 4821
        .trainerName = _("RILEY"),
#line 4822
        .trainerClass = TRAINER_CLASS_BIKER,
#line 4823
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 4825
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4826
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4828
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4829
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4832
    [DIFFICULTY_NORMAL][TRAINER_JOEL] =
    {
#line 4833
        .trainerName = _("JOEL"),
#line 4834
        .trainerClass = TRAINER_CLASS_BIKER,
#line 4835
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 4837
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4838
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4840
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4841
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4844
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4845
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4848
    [DIFFICULTY_NORMAL][TRAINER_GLENN] =
    {
#line 4849
        .trainerName = _("GLENN"),
#line 4850
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 4851
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 4853
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4856
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4857
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4860
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4861
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4864
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4865
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4868
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 4869
        .trainerName = _("DUNCAN"),
#line 4870
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 4871
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 4873
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4874
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4876
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4877
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4880
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4881
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4884
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4885
        .trainerName = _("EDDIE"),
#line 4886
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 4887
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 4889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4890
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4892
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4893
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4896
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4897
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4900
    [DIFFICULTY_NORMAL][TRAINER_RICHARDO] =
    {
#line 4901
        .trainerName = _("RICHARDO"),
#line 4902
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 4903
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 4905
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4908
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4909
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4912
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4913
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4916
    [DIFFICULTY_NORMAL][TRAINER_NARD] =
    {
#line 4917
        .trainerName = _("NARD"),
#line 4918
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 4919
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 4921
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4922
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4924
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4925
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4928
    [DIFFICULTY_NORMAL][TRAINER_COREY] =
    {
#line 4929
        .trainerName = _("COREY"),
#line 4930
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 4931
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 4933
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4934
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4936
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4937
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4940
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4941
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4944
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4945
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4948
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4949
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4952
    [DIFFICULTY_NORMAL][TRAINER_OTIS] =
    {
#line 4953
        .trainerName = _("OTIS"),
#line 4954
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 4955
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 4957
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4958
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4960
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4961
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4964
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4965
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4968
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4969
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4972
    [DIFFICULTY_NORMAL][TRAINER_DICK] =
    {
#line 4973
        .trainerName = _("DICK"),
#line 4974
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 4975
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 4977
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4978
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4980
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4981
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4984
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4985
        .trainerName = _("NED"),
#line 4986
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 4987
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 4989
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4990
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4992
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4993
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4996
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4997
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5000
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5001
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5004
    [DIFFICULTY_NORMAL][TRAINER_BURT] =
    {
#line 5005
        .trainerName = _("BURT"),
#line 5006
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5007
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5009
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5010
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5012
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5013
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5016
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5017
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5020
    [DIFFICULTY_NORMAL][TRAINER_BILL] =
    {
#line 5021
        .trainerName = _("BILL"),
#line 5022
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5023
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5025
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5026
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5028
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5029
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5032
    [DIFFICULTY_NORMAL][TRAINER_WALT] =
    {
#line 5033
        .trainerName = _("WALT"),
#line 5034
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5035
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5037
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5038
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5040
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5041
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5044
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5045
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5048
    [DIFFICULTY_NORMAL][TRAINER_RAY] =
    {
#line 5049
        .trainerName = _("RAY"),
#line 5050
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5051
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5053
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5054
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5056
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5057
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5060
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 5061
        .trainerName = _("LYLE"),
#line 5062
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 5063
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 5065
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5066
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5068
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5069
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5072
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5073
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5076
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5077
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5080
    [DIFFICULTY_NORMAL][TRAINER_IRWIN] =
    {
#line 5081
        .trainerName = _("IRWIN"),
#line 5082
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 5083
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 5085
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5086
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5088
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5089
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5092
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5093
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5096
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5097
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5100
    [DIFFICULTY_NORMAL][TRAINER_FRITZ] =
    {
#line 5101
        .trainerName = _("FRITZ"),
#line 5102
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 5103
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 5105
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5106
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5108
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5109
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5112
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5113
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5116
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5117
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5120
    [DIFFICULTY_NORMAL][TRAINER_HORTON] =
    {
#line 5121
        .trainerName = _("HORTON"),
#line 5122
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 5123
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 5125
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5126
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5128
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5129
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5132
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5133
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5136
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5137
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5140
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5141
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5144
    [DIFFICULTY_NORMAL][TRAINER_KENJI] =
    {
#line 5145
        .trainerName = _("KENJI"),
#line 5146
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5147
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5149
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5150
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5152
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5153
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5156
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5157
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5160
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5161
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5164
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5165
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5168
    [DIFFICULTY_NORMAL][TRAINER_YOSHI] =
    {
#line 5169
        .trainerName = _("YOSHI"),
#line 5170
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5171
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5173
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5174
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5176
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5177
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5180
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5181
        .trainerName = _("LAO"),
#line 5182
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5183
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5185
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5186
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5188
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5189
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5192
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 5193
        .trainerName = _("NOB"),
#line 5194
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5195
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5198
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5200
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5201
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5204
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5205
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5208
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 5209
        .trainerName = _("KIYO"),
#line 5210
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5211
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5213
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5214
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5216
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5217
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5220
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5221
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5224
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5225
        .trainerName = _("LUNG"),
#line 5226
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 5227
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 5229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5230
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5232
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5233
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5236
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5237
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5240
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5241
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5244
    [DIFFICULTY_NORMAL][TRAINER_WAI] =
    {
#line 5245
        .trainerName = _("WAI"),
#line 5246
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5247
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5249
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5252
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5253
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5256
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5257
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5260
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5261
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5264
    [DIFFICULTY_NORMAL][TRAINER_NATHAN] =
    {
#line 5265
        .trainerName = _("NATHAN"),
#line 5266
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5267
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5269
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5270
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5272
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5273
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5276
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 5277
        .trainerName = _("FRANKLIN"),
#line 5278
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5279
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5281
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5282
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5284
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5285
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5288
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 5289
        .trainerName = _("HERMAN"),
#line 5290
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5291
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5293
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5294
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5296
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5297
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5300
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5301
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5304
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5305
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5308
    [DIFFICULTY_NORMAL][TRAINER_FIDEL] =
    {
#line 5309
        .trainerName = _("FIDEL"),
#line 5310
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5311
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5313
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5314
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5316
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5317
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5320
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 5321
        .trainerName = _("GREG"),
#line 5322
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5323
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5325
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5326
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5328
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5329
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5332
    [DIFFICULTY_NORMAL][TRAINER_NORMAN] =
    {
#line 5333
        .trainerName = _("NORMAN"),
#line 5334
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5335
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5337
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5338
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5340
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5341
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5344
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5345
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5348
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 5349
        .trainerName = _("MARK"),
#line 5350
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5351
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5353
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5354
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5356
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5357
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5360
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5361
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5364
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5365
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5368
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5369
        .trainerName = _("PHIL"),
#line 5370
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5371
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5373
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5376
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5377
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5380
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5381
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5384
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5385
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5388
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 5389
        .trainerName = _("RICHARD"),
#line 5390
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5391
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5393
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5394
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5396
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5397
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5400
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5401
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5404
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5405
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5408
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 5409
        .trainerName = _("GILBERT"),
#line 5410
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5411
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5413
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5414
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5416
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5417
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5420
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5421
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5424
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5425
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5428
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5429
        .trainerName = _("JARED"),
#line 5430
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5431
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5433
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5434
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5436
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5437
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5440
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5441
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5444
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5445
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5448
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 5449
        .trainerName = _("RODNEY"),
#line 5450
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 5451
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5453
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5454
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5456
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5457
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5460
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5461
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5464
    [DIFFICULTY_NORMAL][TRAINER_LIZ] =
    {
#line 5465
        .trainerName = _("LIZ"),
#line 5466
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5467
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5469
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5472
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5473
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5476
    [DIFFICULTY_NORMAL][TRAINER_GINA] =
    {
#line 5477
        .trainerName = _("GINA"),
#line 5478
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5479
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5481
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5482
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5484
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5485
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5488
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5489
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5492
    [DIFFICULTY_NORMAL][TRAINER_BROOKE] =
    {
#line 5493
        .trainerName = _("BROOKE"),
#line 5494
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5495
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5497
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5498
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5500
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5501
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5504
    [DIFFICULTY_NORMAL][TRAINER_KIM] =
    {
#line 5505
        .trainerName = _("KIM"),
#line 5506
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5507
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5509
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5510
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5512
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5513
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5516
    [DIFFICULTY_NORMAL][TRAINER_CINDY] =
    {
#line 5517
        .trainerName = _("CINDY"),
#line 5518
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5519
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5521
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5522
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5524
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5525
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5528
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5529
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5532
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 5533
        .trainerName = _("HOPE"),
#line 5534
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5535
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5537
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5538
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5540
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5541
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5544
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5545
        .trainerName = _("SHARON"),
#line 5546
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5547
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5549
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5550
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5552
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5553
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5556
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5557
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5560
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5561
        .trainerName = _("DEBRA"),
#line 5562
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5563
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5565
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5566
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5568
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5569
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5572
    [DIFFICULTY_NORMAL][TRAINER_ERIN] =
    {
#line 5573
        .trainerName = _("ERIN"),
#line 5574
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5575
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5577
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5578
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5580
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5581
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5584
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5585
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5588
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5589
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5592
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5593
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5596
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5597
        .trainerName = _("HEIDI"),
#line 5598
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5599
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5601
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5602
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5604
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5605
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5608
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5609
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5612
    [DIFFICULTY_NORMAL][TRAINER_EDNA] =
    {
#line 5613
        .trainerName = _("EDNA"),
#line 5614
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5615
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5617
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5620
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5621
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5624
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5625
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5628
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 5629
        .trainerName = _("TIFFANY"),
#line 5630
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5631
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5633
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5634
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5636
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5637
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5640
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5641
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5644
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5645
        .trainerName = _("TANYA"),
#line 5646
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5647
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5649
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5650
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5652
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5653
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5656
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5657
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5660
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5664
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 5665
        .trainerName = _("ROLAND"),
#line 5666
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5667
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5669
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5670
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5672
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5673
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5676
    [DIFFICULTY_NORMAL][TRAINER_TODD] =
    {
#line 5677
        .trainerName = _("TODD"),
#line 5678
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5679
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5681
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5684
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5685
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5688
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 5689
        .trainerName = _("IVAN"),
#line 5690
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5691
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5693
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5694
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5696
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5697
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5700
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5701
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5704
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 5705
        .trainerName = _("ELLIOT"),
#line 5706
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5707
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5709
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5710
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5712
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5713
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5716
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5717
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5720
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 5721
        .trainerName = _("BARRY"),
#line 5722
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5723
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5725
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5726
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5728
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5729
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5732
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5733
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5736
    [DIFFICULTY_NORMAL][TRAINER_LLOYD] =
    {
#line 5737
        .trainerName = _("LLOYD"),
#line 5738
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5739
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5741
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5742
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5744
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5745
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5748
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 5749
        .trainerName = _("DEAN"),
#line 5750
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5751
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5753
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5756
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5757
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5760
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5761
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5764
    [DIFFICULTY_NORMAL][TRAINER_SID] =
    {
#line 5765
        .trainerName = _("SID"),
#line 5766
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5767
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5769
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5770
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5772
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5773
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5776
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5777
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5780
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5781
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5784
    [DIFFICULTY_NORMAL][TRAINER_HARVEY] =
    {
#line 5785
        .trainerName = _("HARVEY"),
#line 5786
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5787
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5789
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5790
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5792
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5793
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5796
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 5797
        .trainerName = _("DALE"),
#line 5798
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5799
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5801
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5802
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5804
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5805
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5808
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 5809
        .trainerName = _("TED"),
#line 5810
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5811
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5813
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5814
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5816
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5817
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5820
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5821
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5824
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5825
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5828
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 5829
        .trainerName = _("THOMAS"),
#line 5830
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5831
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5833
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5834
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5836
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5837
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5840
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5841
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5844
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5845
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5848
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5849
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5852
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 5853
        .trainerName = _("LEROY"),
#line 5854
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5855
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5857
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5858
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5860
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5861
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5864
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5865
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5868
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5869
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5872
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5873
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5876
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 5877
        .trainerName = _("DAVID"),
#line 5878
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5879
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5881
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5882
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5884
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5885
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5888
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5889
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5892
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5893
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5896
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5897
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5900
    [DIFFICULTY_NORMAL][TRAINER_JOHN] =
    {
#line 5901
        .trainerName = _("JOHN"),
#line 5902
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5903
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5905
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5908
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5909
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5912
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5913
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5916
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5917
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5920
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5921
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5924
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 5925
        .trainerName = _("JERRY"),
#line 5926
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5927
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5929
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5930
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5932
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5933
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5936
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5937
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5940
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5941
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5944
    [DIFFICULTY_NORMAL][TRAINER_GRANT] =
    {
#line 5945
        .trainerName = _("GRANT"),
#line 5946
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5947
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5949
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5950
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5952
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5953
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5956
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5957
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5960
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 5961
        .trainerName = _("SPENCER"),
#line 5962
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5963
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5965
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5966
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5968
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5969
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5972
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5973
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5976
    [DIFFICULTY_NORMAL][TRAINER_QUENTIN] =
    {
#line 5977
        .trainerName = _("QUENTIN"),
#line 5978
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 5979
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 5981
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5982
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5984
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5985
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5988
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5989
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5992
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5993
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5996
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5997
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6000
    [DIFFICULTY_NORMAL][TRAINER_CHOW] =
    {
#line 6001
        .trainerName = _("CHOW"),
#line 6002
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6003
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6005
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6006
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6008
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6009
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6012
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6013
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6016
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6017
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6020
    [DIFFICULTY_NORMAL][TRAINER_NICO] =
    {
#line 6021
        .trainerName = _("NICO"),
#line 6022
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6023
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6025
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6026
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6028
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6029
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6032
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6033
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6036
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6037
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6040
    [DIFFICULTY_NORMAL][TRAINER_JIN] =
    {
#line 6041
        .trainerName = _("JIN"),
#line 6042
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6043
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6045
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6048
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6049
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6052
    [DIFFICULTY_NORMAL][TRAINER_TROY] =
    {
#line 6053
        .trainerName = _("TROY"),
#line 6054
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6055
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6057
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6058
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6060
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6061
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6064
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6065
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6068
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 6069
        .trainerName = _("JEFFREY"),
#line 6070
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6071
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6073
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6074
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6076
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6077
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6080
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6081
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6084
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6085
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6088
    [DIFFICULTY_NORMAL][TRAINER_PING] =
    {
#line 6089
        .trainerName = _("PING"),
#line 6090
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6091
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6093
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6094
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6096
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6097
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6100
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6101
        .trainerName = _("EDMOND"),
#line 6102
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6103
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6105
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6106
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6108
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6109
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6112
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6113
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6116
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6117
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6120
    [DIFFICULTY_NORMAL][TRAINER_NEAL] =
    {
#line 6121
        .trainerName = _("NEAL"),
#line 6122
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6123
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6125
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6126
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6128
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6129
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6132
    [DIFFICULTY_NORMAL][TRAINER_LI] =
    {
#line 6133
        .trainerName = _("LI"),
#line 6134
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6135
        .trainerPic = TRAINER_PIC_MR_FUJI,
        .encounterMusic_gender =
#line 6137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6138
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6140
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6141
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6144
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6145
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6148
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6149
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6152
    [DIFFICULTY_NORMAL][TRAINER_GAKU] =
    {
#line 6153
        .trainerName = _("GAKU"),
#line 6154
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6155
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6157
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6158
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6160
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6161
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6164
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6165
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6168
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6169
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6172
    [DIFFICULTY_NORMAL][TRAINER_MASA] =
    {
#line 6173
        .trainerName = _("MASA"),
#line 6174
        .trainerClass = TRAINER_CLASS_SAGE,
#line 6175
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 6177
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6178
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6180
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6181
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6184
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6185
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6188
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6189
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6192
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 6193
        .trainerName = _("KOJI"),
#line 6194
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6195
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6198
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6200
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6201
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6204
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6205
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6208
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6209
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6212
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6213
        .trainerName = _("MARTHA"),
#line 6214
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6215
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6217
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6218
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6220
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6221
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6224
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6225
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6228
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 6229
        .trainerName = _("GRACE"),
#line 6230
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6231
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6233
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6234
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6236
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6237
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6240
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6241
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6244
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 6245
        .trainerName = _("BETHANY"),
#line 6246
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6247
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6249
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6252
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6253
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6256
    [DIFFICULTY_NORMAL][TRAINER_MARGRET] =
    {
#line 6257
        .trainerName = _("MARGRET"),
#line 6258
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6259
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6261
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6262
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6264
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6265
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6268
    [DIFFICULTY_NORMAL][TRAINER_ETHEL] =
    {
#line 6269
        .trainerName = _("ETHEL"),
#line 6270
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6271
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6273
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6274
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6276
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6277
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6280
    [DIFFICULTY_NORMAL][TRAINER_REBECCA] =
    {
#line 6281
        .trainerName = _("REBECCA"),
#line 6282
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6283
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6285
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6286
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6288
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6289
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6292
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6293
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6296
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6297
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6300
    [DIFFICULTY_NORMAL][TRAINER_DORIS] =
    {
#line 6301
        .trainerName = _("DORIS"),
#line 6302
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6303
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 6305
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6306
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6308
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6309
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6312
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6313
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6316
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6317
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6320
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 6321
        .trainerName = _("RONALD"),
#line 6322
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6323
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6325
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6326
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6328
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6329
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6332
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6333
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6336
    [DIFFICULTY_NORMAL][TRAINER_BRAD] =
    {
#line 6337
        .trainerName = _("BRAD"),
#line 6338
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6339
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6341
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6342
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6344
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6345
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6348
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6349
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6352
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 6353
        .trainerName = _("DOUGLAS"),
#line 6354
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6355
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6357
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6358
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6360
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6361
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6364
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6365
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6368
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6369
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6372
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 6373
        .trainerName = _("WILLIAM"),
#line 6374
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6375
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6377
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6378
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6380
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6381
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6384
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 6385
        .trainerName = _("DEREK"),
#line 6386
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6387
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6389
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6390
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6392
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6393
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6396
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6397
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6400
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 6401
        .trainerName = _("ROBERT"),
#line 6402
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6403
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6405
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6406
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6408
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6409
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6412
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 6413
        .trainerName = _("JOSHUA"),
#line 6414
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6415
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6417
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6418
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6420
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6421
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6424
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6425
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6428
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6429
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6432
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 6433
        .trainerName = _("CARTER"),
#line 6434
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6435
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6437
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6438
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6440
            .species = SPECIES_CHIKORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6441
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6444
            .species = SPECIES_CYNDAQUIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6445
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6448
            .species = SPECIES_TOTODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6449
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6452
    [DIFFICULTY_NORMAL][TRAINER_TREVOR] =
    {
#line 6453
        .trainerName = _("TREVOR"),
#line 6454
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 6455
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 6457
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6458
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6460
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6461
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6464
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 6465
        .trainerName = _("BRANDON"),
#line 6466
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6467
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6469
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6472
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6473
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6476
    [DIFFICULTY_NORMAL][TRAINER_JEREMY] =
    {
#line 6477
        .trainerName = _("JEREMY"),
#line 6478
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6479
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6481
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6482
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6484
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6485
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6488
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6489
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6492
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6493
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6496
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 6497
        .trainerName = _("COLIN"),
#line 6498
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6499
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6501
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6502
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6504
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6505
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6508
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 6509
        .trainerName = _("ALEX"),
#line 6510
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6511
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6513
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6514
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6516
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6517
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6520
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6521
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6524
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6525
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6528
    [DIFFICULTY_NORMAL][TRAINER_REX] =
    {
#line 6529
        .trainerName = _("REX"),
#line 6530
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6531
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6533
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6534
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6536
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6537
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6540
    [DIFFICULTY_NORMAL][TRAINER_ALLAN] =
    {
#line 6541
        .trainerName = _("ALLAN"),
#line 6542
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6543
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 6545
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6546
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6548
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6549
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6552
    [DIFFICULTY_NORMAL][TRAINER_NAOKO] =
    {
#line 6553
        .trainerName = _("NAOKO"),
#line 6554
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6555
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6557
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6558
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6560
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6561
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6563
                MOVE_PSYCHIC,
                MOVE_PSYCH_UP,
                MOVE_SWIFT,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6568
    [DIFFICULTY_NORMAL][TRAINER_SAYO] =
    {
#line 6569
        .trainerName = _("SAYO"),
#line 6570
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6571
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6573
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6574
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6576
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6577
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6579
                MOVE_THUNDERBOLT,
                MOVE_DOUBLE_TEAM,
                MOVE_THUNDER_WAVE,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6584
    [DIFFICULTY_NORMAL][TRAINER_ZUKI] =
    {
#line 6585
        .trainerName = _("ZUKI"),
#line 6586
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6587
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6589
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6590
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6592
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6593
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6595
                MOVE_DARK_PULSE,
                MOVE_CONFUSE_RAY,
                MOVE_SHADOW_BALL,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6600
    [DIFFICULTY_NORMAL][TRAINER_KUNI] =
    {
#line 6601
        .trainerName = _("KUNI"),
#line 6602
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6603
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6605
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6606
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6608
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6609
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6611
                MOVE_SURF,
                MOVE_QUICK_ATTACK,
                MOVE_AURORA_BEAM,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6616
    [DIFFICULTY_NORMAL][TRAINER_MIKI] =
    {
#line 6617
        .trainerName = _("MIKI"),
#line 6618
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 6619
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 6621
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6622
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6624
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6625
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6627
                MOVE_FIRE_BLAST,
                MOVE_QUICK_ATTACK,
                MOVE_WILL_O_WISP,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 6632
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_MAY] =
    {
#line 6633
        .trainerName = _("AMY&MAY"),
#line 6634
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6635
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6637
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6638
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6640
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6641
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6644
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6645
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6648
    [DIFFICULTY_NORMAL][TRAINER_ANN_AND_ANNE] =
    {
#line 6649
        .trainerName = _("ANN&ANNE"),
#line 6650
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6651
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6653
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6654
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6656
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6657
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6660
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6661
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6664
    [DIFFICULTY_NORMAL][TRAINER_JO_AND_ZOE] =
    {
#line 6665
        .trainerName = _("JO&ZOE"),
#line 6666
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6667
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6669
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6670
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6672
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6673
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6676
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6677
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6680
    [DIFFICULTY_NORMAL][TRAINER_MEG_AND_PEG] =
    {
#line 6681
        .trainerName = _("MEG&PEG"),
#line 6682
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6683
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6685
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6686
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6688
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6689
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6692
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6693
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6696
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_PIA] =
    {
#line 6697
        .trainerName = _("LEA&PIA"),
#line 6698
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6699
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6701
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6702
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6704
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6705
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6708
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6709
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6712
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6713
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6716
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6717
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6720
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 6721
        .trainerName = _("BEVERLY"),
#line 6722
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6723
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6725
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6726
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6728
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6729
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6732
    [DIFFICULTY_NORMAL][TRAINER_RUTH] =
    {
#line 6733
        .trainerName = _("RUTH"),
#line 6734
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6735
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6737
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6738
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6740
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6741
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6744
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 6745
        .trainerName = _("GEORGIA"),
#line 6746
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6747
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6749
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6750
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6752
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6753
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6756
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6757
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6760
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6761
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6764
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6765
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6768
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6769
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6772
    [DIFFICULTY_NORMAL][TRAINER_JAMIE] =
    {
#line 6773
        .trainerName = _("JAIME"),
#line 6774
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6775
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6777
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6778
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6780
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6781
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6784
    [DIFFICULTY_NORMAL][TRAINER_KEITH] =
    {
#line 6785
        .trainerName = _("KEITH"),
#line 6786
        .trainerClass = TRAINER_CLASS_POLICEMAN,
#line 6787
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .encounterMusic_gender =
#line 6789
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6790
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6792
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6793
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6796
    [DIFFICULTY_NORMAL][TRAINER_DIRK] =
    {
#line 6797
        .trainerName = _("DIRK"),
#line 6798
        .trainerClass = TRAINER_CLASS_POLICEMAN,
#line 6799
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .encounterMusic_gender =
#line 6801
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6802
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6804
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6805
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6808
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6809
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6812
    [DIFFICULTY_NORMAL][TRAINER_THOM_AND_KAE] =
    {
#line 6813
        .trainerName = _("THOM & KAE"),
#line 6814
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 6815
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 6817
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6818
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6820
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6821
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6824
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6825
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6828
    [DIFFICULTY_NORMAL][TRAINER_DUFF_AND_EDA] =
    {
#line 6829
        .trainerName = _("DUFF & EDA"),
#line 6830
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 6831
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 6833
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6834
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6836
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6837
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6840
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6841
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6844
    [DIFFICULTY_NORMAL][TRAINER_FALKNER_1] =
    {
#line 6845
        .trainerName = _("FALKNER"),
#line 6846
        .trainerClass = TRAINER_CLASS_LEADER,
#line 6847
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .encounterMusic_gender =
#line 6849
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6850
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6852
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6854
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6853
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6855
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 6859
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6859
            .heldItem = ITEM_SITRUS_BERRY,
#line 6861
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6860
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6862
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_GROWL,
                MOVE_PECK,
            },
            },
        },
    },
#line 6867
    [DIFFICULTY_NORMAL][TRAINER_FALKNER_2] =
    {
#line 6868
        .trainerName = _("FALKNER"),
#line 6869
        .trainerClass = TRAINER_CLASS_LEADER,
#line 6870
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .encounterMusic_gender =
#line 6872
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6873
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6874
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6876
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .heldItem = ITEM_SITRUS_BERRY,
#line 6878
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6877
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6879
                MOVE_PSYCHIC,
                MOVE_WING_ATTACK,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 6884
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6886
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6885
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6887
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_MUD_SLAP,
                MOVE_STEEL_WING,
            },
            },
            {
#line 6892
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6892
            .heldItem = ITEM_FOCUS_BAND,
#line 6894
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6893
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6895
                MOVE_ENDURE,
                MOVE_FLAIL,
                MOVE_DRILL_PECK,
                MOVE_STEEL_WING,
            },
            },
            {
#line 6900
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6902
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6901
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6903
                MOVE_DRILL_PECK,
                MOVE_FAINT_ATTACK,
                MOVE_HAZE,
                MOVE_ICY_WIND,
            },
            },
            {
#line 6908
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6910
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6909
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6911
                MOVE_SKY_ATTACK,
                MOVE_EXTREME_SPEED,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
            {
#line 6916
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6918
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6917
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6919
                MOVE_AERIAL_ACE,
                MOVE_SURF,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
        },
    },
#line 6924
    [DIFFICULTY_NORMAL][TRAINER_BUGSY_1] =
    {
#line 6925
        .trainerName = _("BUGSY"),
#line 6926
        .trainerClass = TRAINER_CLASS_LEADER,
#line 6927
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .encounterMusic_gender =
#line 6929
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6930
        .items = { ITEM_POTION, ITEM_POTION },
#line 6931
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6933
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6934
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6936
                MOVE_PIN_MISSILE,
                MOVE_HEADBUTT,
                MOVE_MEGA_DRAIN,
                MOVE_HARDEN,
            },
            },
            {
#line 6941
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6943
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6942
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6944
                MOVE_THUNDER_PUNCH,
                MOVE_COMET_PUNCH,
                MOVE_SUPERSONIC,
                MOVE_REFLECT,
            },
            },
            {
#line 6949
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6949
            .heldItem = ITEM_BERRY_JUICE,
#line 6951
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6950
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6952
                MOVE_QUICK_ATTACK,
                MOVE_FURY_CUTTER,
                MOVE_CUT,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 6957
    [DIFFICULTY_NORMAL][TRAINER_BUGSY_2] =
    {
#line 6958
        .trainerName = _("BUGSY"),
#line 6959
        .trainerClass = TRAINER_CLASS_LEADER,
#line 6960
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .encounterMusic_gender =
#line 6962
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6963
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6964
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6966
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6966
            .heldItem = ITEM_FOCUS_BAND,
#line 6968
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6967
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6969
                MOVE_GIGA_DRAIN,
                MOVE_AGILITY,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 6974
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6976
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6975
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6977
                MOVE_CURSE,
                MOVE_EXPLOSION,
                MOVE_PIN_MISSILE,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 6982
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6982
            .heldItem = ITEM_BERRY_JUICE,
#line 6984
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6983
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6985
                MOVE_AERIAL_ACE,
                MOVE_HYPNOSIS,
                MOVE_ANCIENT_POWER,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 6990
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6992
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6991
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6993
                MOVE_METAL_CLAW,
                MOVE_TWINEEDLE,
                MOVE_AGILITY,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 6998
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7000
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6999
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7001
                MOVE_SHADOW_CLAW,
                MOVE_BUG_BUZZ,
                MOVE_GRUDGE,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 7006
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7006
            .heldItem = ITEM_SCOPE_LENS,
#line 7008
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7007
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7009
                MOVE_SLASH,
                MOVE_CUT,
                MOVE_WING_ATTACK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7014
    [DIFFICULTY_NORMAL][TRAINER_WHITNEY_1] =
    {
#line 7015
        .trainerName = _("WHITNEY"),
#line 7016
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7017
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .encounterMusic_gender =
#line 7019
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7020
        .items = { ITEM_SUPER_POTION, ITEM_POTION },
#line 7021
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7023
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7025
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7024
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7026
                MOVE_HEADBUTT,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_METRONOME,
            },
            },
            {
#line 7031
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7033
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7032
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7034
                MOVE_FURY_SWIPES,
                MOVE_FAKE_TEARS,
                MOVE_LICK,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 7039
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7039
            .heldItem = ITEM_SITRUS_BERRY,
#line 7041
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7040
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7042
                MOVE_ROLLOUT,
                MOVE_ATTRACT,
                MOVE_STOMP,
                MOVE_MILK_DRINK,
            },
            },
        },
    },
#line 7047
    [DIFFICULTY_NORMAL][TRAINER_WHITNEY_2] =
    {
#line 7048
        .trainerName = _("WHITNEY"),
#line 7049
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7050
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .encounterMusic_gender =
#line 7052
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7053
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7054
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7056
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7058
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7057
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7059
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ENCORE,
            },
            },
            {
#line 7064
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7064
            .heldItem = ITEM_CHESTO_BERRY,
#line 7066
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7065
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7067
                MOVE_YAWN,
                MOVE_ATTRACT,
                MOVE_FAKE_OUT,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 7072
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7074
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7073
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7075
                MOVE_EGG_BOMB,
                MOVE_ATTRACT,
                MOVE_SOFT_BOILED,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 7080
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7082
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7081
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7083
                MOVE_THRASH,
                MOVE_EARTHQUAKE,
                MOVE_RAGE,
                MOVE_PURSUIT,
            },
            },
            {
#line 7088
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7088
            .heldItem = ITEM_SILK_SCARF,
#line 7090
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7089
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7091
                MOVE_IRON_TAIL,
                MOVE_ATTRACT,
                MOVE_BODY_SLAM,
                MOVE_MILK_DRINK,
            },
            },
            {
#line 7096
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7096
            .heldItem = ITEM_SILK_SCARF,
#line 7098
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7097
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7099
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_FOCUS_BLAST,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7104
    [DIFFICULTY_NORMAL][TRAINER_MORTY_1] =
    {
#line 7105
        .trainerName = _("MORTY"),
#line 7106
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7107
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .encounterMusic_gender =
#line 7109
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7110
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7111
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7113
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7115
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7114
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7116
                MOVE_HYPNOSIS,
                MOVE_NIGHTMARE,
                MOVE_CURSE,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 7121
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7123
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7122
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7124
                MOVE_SWIFT,
                MOVE_HYPNOSIS,
                MOVE_NIGHTMARE,
                MOVE_LEER,
            },
            },
            {
#line 7129
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7131
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7130
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7132
                MOVE_SHADOW_BALL,
                MOVE_PAIN_SPLIT,
                MOVE_PERISH_SONG,
                MOVE_PSYWAVE,
            },
            },
            {
#line 7137
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7137
            .heldItem = ITEM_SITRUS_BERRY,
#line 7139
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7138
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7140
                MOVE_HYPNOSIS,
                MOVE_SHADOW_BALL,
                MOVE_MEAN_LOOK,
                MOVE_DREAM_EATER,
            },
            },
        },
    },
#line 7145
    [DIFFICULTY_NORMAL][TRAINER_MORTY_2] =
    {
#line 7146
        .trainerName = _("MORTY"),
#line 7147
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7148
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .encounterMusic_gender =
#line 7150
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7151
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7152
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7154
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7156
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7155
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7157
                MOVE_SHADOW_CLAW,
                MOVE_POWER_GEM,
                MOVE_MEAN_LOOK,
                MOVE_DETECT,
            },
            },
            {
#line 7162
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7162
            .heldItem = ITEM_SILK_SCARF,
#line 7164
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7163
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7165
                MOVE_SHADOW_BALL,
                MOVE_HEADBUTT,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 7170
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7170
            .heldItem = ITEM_SPELL_TAG,
#line 7172
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7171
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7173
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SLUDGE_BOMB,
                MOVE_PSYCHIC,
            },
            },
            {
#line 7178
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7180
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7179
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7181
                MOVE_SHADOW_BALL,
                MOVE_MEAN_LOOK,
                MOVE_PAIN_SPLIT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 7186
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7186
            .heldItem = ITEM_SITRUS_BERRY,
#line 7188
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7187
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7189
                MOVE_SHADOW_BALL,
                MOVE_HYPNOSIS,
                MOVE_THUNDERBOLT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 7194
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7195
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7197
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_WILL_O_WISP,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 7202
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1] =
    {
#line 7203
        .trainerName = _("PRYCE"),
#line 7204
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7205
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7207
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7208
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7209
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7211
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7213
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7212
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7214
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
                MOVE_REST,
            },
            },
            {
#line 7219
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7221
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7220
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7222
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_ICY_WIND,
            },
            },
            {
#line 7227
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7229
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7228
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7230
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_RAIN_DANCE,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7235
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7235
            .heldItem = ITEM_SITRUS_BERRY,
#line 7237
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7236
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7238
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7243
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_2] =
    {
#line 7244
        .trainerName = _("PRYCE"),
#line 7245
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7246
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7248
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7249
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7252
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7254
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7253
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7255
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_BEAT_UP,
                MOVE_BLIZZARD,
            },
            },
            {
#line 7260
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7260
            .heldItem = ITEM_SITRUS_BERRY,
#line 7262
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7261
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7263
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_REST,
                MOVE_ENCORE,
            },
            },
            {
#line 7268
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7270
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7269
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7271
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7276
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7278
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7277
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7279
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_WILL_O_WISP,
                MOVE_DESTINY_BOND,
            },
            },
            {
#line 7284
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7284
            .heldItem = ITEM_SOFT_SAND,
#line 7286
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7285
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7287
                MOVE_STRENGTH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
            {
#line 7292
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7294
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7293
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7295
                MOVE_SHEER_COLD,
                MOVE_CRUNCH,
                MOVE_DARK_PULSE,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7300
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1_2] =
    {
#line 7301
        .trainerName = _("PRYCE"),
#line 7302
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7303
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7305
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7306
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7307
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7309
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7311
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7310
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7312
                MOVE_SURF,
                MOVE_SPIKES,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 7317
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7319
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7318
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7320
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 7325
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7327
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7326
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7328
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_RAIN_DANCE,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7333
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7335
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7334
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7336
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 7341
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7341
            .heldItem = ITEM_SITRUS_BERRY,
#line 7343
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7342
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7344
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7349
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1_3] =
    {
#line 7350
        .trainerName = _("PRYCE"),
#line 7351
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7352
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 7354
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7355
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7356
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7358
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7360
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7359
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7361
                MOVE_SURF,
                MOVE_SPIKES,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 7366
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7368
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7367
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7369
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_BLIZZARD,
            },
            },
            {
#line 7374
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7376
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7375
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7377
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 7382
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7384
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7383
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7385
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 7390
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7390
            .heldItem = ITEM_SITRUS_BERRY,
#line 7392
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7391
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7393
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 7398
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1] =
    {
#line 7399
        .trainerName = _("JASMINE"),
#line 7400
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7401
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7403
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7404
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7405
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7407
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7409
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7408
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7410
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7415
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7417
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7416
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7418
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 7423
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7425
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7424
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7426
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 7431
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7431
            .heldItem = ITEM_FOCUS_BAND,
#line 7433
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7432
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7434
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7439
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7439
            .heldItem = ITEM_QUICK_CLAW,
#line 7441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7440
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7442
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7447
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_2] =
    {
#line 7448
        .trainerName = _("JASMINE"),
#line 7449
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7450
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7452
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7453
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7454
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7456
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7458
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7457
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7459
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7464
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7466
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7465
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7467
                MOVE_FLASH_CANNON,
                MOVE_IRON_DEFENSE,
                MOVE_BATON_PASS,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 7472
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7474
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7473
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7475
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 7480
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7482
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7481
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7483
                MOVE_DOUBLE_EDGE,
                MOVE_SUBSTITUTE,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 7488
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7488
            .heldItem = ITEM_HARD_STONE,
#line 7490
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7489
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7491
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
                MOVE_SWORDS_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 7496
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7496
            .heldItem = ITEM_QUICK_CLAW,
#line 7498
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7497
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7499
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7504
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1_2] =
    {
#line 7505
        .trainerName = _("JASMINE"),
#line 7506
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7507
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7509
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7510
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7511
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7513
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7515
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7514
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7516
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7521
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7523
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7522
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7524
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 7529
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7531
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7530
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7532
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 7537
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7537
            .heldItem = ITEM_FOCUS_BAND,
#line 7539
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7538
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7540
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7545
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7545
            .heldItem = ITEM_QUICK_CLAW,
#line 7547
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7546
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7548
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7553
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1_3] =
    {
#line 7554
        .trainerName = _("JASMINE"),
#line 7555
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7556
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 7558
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7559
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7560
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7562
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7564
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7563
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7565
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 7570
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7572
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7571
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7573
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 7578
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7580
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7579
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7581
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 7586
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7586
            .heldItem = ITEM_FOCUS_BAND,
#line 7588
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7587
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7589
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7594
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7594
            .heldItem = ITEM_QUICK_CLAW,
#line 7596
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7595
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7597
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7602
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1] =
    {
#line 7603
        .trainerName = _("CHUCK"),
#line 7604
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7605
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 7607
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7608
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7609
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7611
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7613
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7612
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7614
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 7619
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7621
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7620
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7622
                MOVE_LOW_KICK,
                MOVE_KARATE_CHOP,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 7627
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7629
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7628
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7630
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 7635
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7635
            .heldItem = ITEM_BLACK_BELT,
#line 7637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7636
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7638
                MOVE_HYPNOSIS,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 7643
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_2] =
    {
#line 7644
        .trainerName = _("CHUCK"),
#line 7645
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7646
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 7648
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7649
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7650
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7652
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7652
            .heldItem = ITEM_SCOPE_LENS,
#line 7654
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7653
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7655
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
            {
#line 7660
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7662
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7661
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7663
                MOVE_DETECT,
                MOVE_HI_JUMP_KICK,
                MOVE_PSYCH_UP,
                MOVE_REVERSAL,
            },
            },
            {
#line 7668
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7670
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7669
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7671
                MOVE_CROSS_CHOP,
                MOVE_THUNDER_PUNCH,
                MOVE_ROCK_SLIDE,
                MOVE_MEDITATE,
            },
            },
            {
#line 7676
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7678
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7677
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7679
                MOVE_MEGA_KICK,
                MOVE_BLAZE_KICK,
                MOVE_HI_JUMP_KICK,
                MOVE_ROLLING_KICK,
            },
            },
            {
#line 7684
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7686
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7685
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7687
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SKY_UPPERCUT,
                MOVE_DYNAMIC_PUNCH,
            },
            },
            {
#line 7692
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7692
            .heldItem = ITEM_SITRUS_BERRY,
#line 7694
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7693
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7695
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 7700
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1_2] =
    {
#line 7701
        .trainerName = _("CHUCK"),
#line 7702
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7703
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 7705
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7706
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7707
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7709
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7711
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7710
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7712
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 7717
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7719
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7718
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7720
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 7725
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7727
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7726
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7728
                MOVE_LOW_KICK,
                MOVE_KARATE_CHOP,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 7733
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7735
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7734
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7736
                MOVE_ROCK_SMASH,
                MOVE_TWINEEDLE,
                MOVE_VICE_GRIP,
                MOVE_HARDEN,
            },
            },
            {
#line 7741
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7741
            .heldItem = ITEM_BLACK_BELT,
#line 7743
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7742
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7744
                MOVE_HYPNOSIS,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 7749
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1_3] =
    {
#line 7750
        .trainerName = _("CHUCK"),
#line 7751
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7752
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 7754
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7755
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7756
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7758
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7760
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7759
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7761
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 7766
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7768
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7767
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7769
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 7774
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7776
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7775
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7777
                MOVE_DYNAMIC_PUNCH,
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_RAGE,
            },
            },
            {
#line 7782
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7784
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7783
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7785
                MOVE_SUBMISSION,
                MOVE_TWINEEDLE,
                MOVE_STRENGTH,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7790
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7790
            .heldItem = ITEM_BLACK_BELT,
#line 7792
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7791
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7793
                MOVE_ICE_PUNCH,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 7798
    [DIFFICULTY_NORMAL][TRAINER_CLAIR_1] =
    {
#line 7799
        .trainerName = _("CLAIR"),
#line 7800
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7801
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .encounterMusic_gender =
#line 7803
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7804
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7805
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7807
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7808
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7810
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 7815
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7815
            .heldItem = ITEM_FOCUS_BAND,
#line 7817
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7816
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7818
                MOVE_BITE,
                MOVE_WATERFALL,
                MOVE_FLY,
                MOVE_TWISTER,
            },
            },
            {
#line 7823
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7823
            .heldItem = ITEM_CHESTO_BERRY,
#line 7825
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7824
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7826
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 7831
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7831
            .heldItem = ITEM_SITRUS_BERRY,
#line 7833
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7832
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7834
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 7839
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7839
            .heldItem = ITEM_LEFTOVERS,
#line 7841
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7840
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7842
                MOVE_SMOKESCREEN,
                MOVE_SURF,
                MOVE_HYPER_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 7847
    [DIFFICULTY_NORMAL][TRAINER_CLAIR_2] =
    {
#line 7848
        .trainerName = _("CLAIR"),
#line 7849
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7850
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .encounterMusic_gender =
#line 7852
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7853
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7856
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7856
            .heldItem = ITEM_SITRUS_BERRY,
#line 7858
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7857
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7859
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 7864
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7864
            .heldItem = ITEM_FOCUS_BAND,
#line 7866
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7865
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7867
                MOVE_BITE,
                MOVE_SURF,
                MOVE_FLY,
                MOVE_TWISTER,
            },
            },
            {
#line 7872
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7874
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7873
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7875
                MOVE_FLY,
                MOVE_FLAMETHROWER,
                MOVE_STEEL_WING,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 7880
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7880
            .heldItem = ITEM_SITRUS_BERRY,
#line 7882
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7881
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7883
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 7888
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7890
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7889
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7891
                MOVE_AGILITY,
                MOVE_THUNDER,
                MOVE_DRAGON_PULSE,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 7896
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7896
            .heldItem = ITEM_LEFTOVERS,
#line 7898
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7897
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7899
                MOVE_AGILITY,
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 7904
    [DIFFICULTY_NORMAL][TRAINER_BROCK] =
    {
#line 7905
        .trainerName = _("BROCK"),
#line 7906
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7907
        .trainerPic = TRAINER_PIC_LEADER_BROCK,
        .encounterMusic_gender =
#line 7909
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7910
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7911
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7913
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7913
            .heldItem = ITEM_QUICK_CLAW,
#line 7915
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7914
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7916
                MOVE_CURSE,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 7921
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7921
            .heldItem = ITEM_HARD_STONE,
#line 7923
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7922
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7924
                MOVE_ANCIENT_POWER,
                MOVE_SKY_ATTACK,
                MOVE_EARTHQUAKE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 7929
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7929
            .heldItem = ITEM_SCOPE_LENS,
#line 7931
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7930
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7932
                MOVE_SURF,
                MOVE_ANCIENT_POWER,
                MOVE_CUT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7937
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7937
            .heldItem = ITEM_FOCUS_BAND,
#line 7939
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7938
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7940
                MOVE_ANCIENT_POWER,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_TOXIC,
            },
            },
            {
#line 7945
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7945
            .heldItem = ITEM_HARD_STONE,
#line 7947
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7946
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7948
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 7953
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7953
            .heldItem = ITEM_LEFTOVERS,
#line 7955
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7954
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7956
                MOVE_CURSE,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 7961
    [DIFFICULTY_NORMAL][TRAINER_MISTY] =
    {
#line 7962
        .trainerName = _("MISTY"),
#line 7963
        .trainerClass = TRAINER_CLASS_LEADER,
#line 7964
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        .encounterMusic_gender =
#line 7966
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7967
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7968
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7970
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7972
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7971
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7973
                MOVE_SURF,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CROSS_CHOP,
            },
            },
            {
#line 7978
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7978
            .heldItem = ITEM_QUICK_CLAW,
#line 7980
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7979
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7981
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 7986
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7986
            .heldItem = ITEM_LEFTOVERS,
#line 7988
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7987
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7989
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_ACID_ARMOR,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 7994
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 7995
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7997
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_REST,
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 8002
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8002
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 8004
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8003
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8005
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_RAIN_DANCE,
                MOVE_REFLECT,
            },
            },
            {
#line 8010
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .heldItem = ITEM_MYSTIC_WATER,
#line 8012
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8011
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8013
                MOVE_SURF,
                MOVE_PSYCHIC,
                MOVE_RECOVER,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 8018
    [DIFFICULTY_NORMAL][TRAINER_LTSURGE] =
    {
#line 8019
        .trainerName = _("LTSURGE"),
#line 8020
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8021
        .trainerPic = TRAINER_PIC_LEADER_SURGE,
        .encounterMusic_gender =
#line 8023
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8024
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8025
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8027
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8027
            .heldItem = ITEM_FOCUS_BAND,
#line 8029
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8028
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8030
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 8035
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8037
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8036
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8038
                MOVE_THUNDER,
                MOVE_REFLECT,
                MOVE_RAIN_DANCE,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 8043
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8043
            .heldItem = ITEM_LEFTOVERS,
#line 8045
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8044
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8046
                MOVE_SURF,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8051
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8052
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8054
                MOVE_CHARGE,
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_CRUNCH,
            },
            },
            {
#line 8059
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8059
            .heldItem = ITEM_SCOPE_LENS,
#line 8061
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8060
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8062
                MOVE_THUNDERBOLT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_SUBMISSION,
            },
            },
            {
#line 8067
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8067
            .heldItem = ITEM_MAGNET,
#line 8069
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8068
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8070
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
                MOVE_BODY_SLAM,
                MOVE_SURF,
            },
            },
        },
    },
#line 8075
    [DIFFICULTY_NORMAL][TRAINER_ERIKA] =
    {
#line 8076
        .trainerName = _("ERIKA"),
#line 8077
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8078
        .trainerPic = TRAINER_PIC_LEADER_ERIKA,
        .encounterMusic_gender =
#line 8080
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8081
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8084
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8084
            .heldItem = ITEM_FOCUS_BAND,
#line 8086
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8085
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8087
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_ENCORE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 8092
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8094
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8093
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8095
                MOVE_SYNTHESIS,
                MOVE_GRASS_WHISTLE,
                MOVE_TOXIC,
                MOVE_PETAL_DANCE,
            },
            },
            {
#line 8100
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8102
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8101
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8103
                MOVE_MEGA_DRAIN,
                MOVE_BIND,
                MOVE_TICKLE,
                MOVE_BLOCK,
            },
            },
            {
#line 8108
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8108
            .heldItem = ITEM_LEFTOVERS,
#line 8110
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8109
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8111
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_SLUDGE_BOMB,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 8116
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8116
            .heldItem = ITEM_POISON_BARB,
#line 8118
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8117
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8119
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SWORDS_DANCE,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 8124
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8124
            .heldItem = ITEM_MIRACLE_SEED,
#line 8126
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8125
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8127
                MOVE_SUNNY_DAY,
                MOVE_SYNTHESIS,
                MOVE_SLEEP_POWDER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 8132
    [DIFFICULTY_NORMAL][TRAINER_SABRINA] =
    {
#line 8133
        .trainerName = _("SABRINA"),
#line 8134
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8135
        .trainerPic = TRAINER_PIC_LEADER_SABRINA,
        .encounterMusic_gender =
#line 8137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8138
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8139
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8141
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8141
            .heldItem = ITEM_QUICK_CLAW,
#line 8143
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8142
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8144
                MOVE_PSYCHIC,
                MOVE_THUNDER_WAVE,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 8149
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8151
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8150
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8152
                MOVE_PSYCHIC,
                MOVE_ICE_BEAM,
                MOVE_LOVELY_KISS,
                MOVE_BUBBLE_BEAM,
            },
            },
            {
#line 8157
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8157
            .heldItem = ITEM_CHESTO_BERRY,
#line 8159
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8158
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8160
                MOVE_REST,
                MOVE_SLEEP_TALK,
                MOVE_SUBMISSION,
                MOVE_SURF,
            },
            },
            {
#line 8165
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8165
            .heldItem = ITEM_LEFTOVERS,
#line 8167
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8166
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8168
                MOVE_MIRROR_COAT,
                MOVE_COUNTER,
                MOVE_SAFEGUARD,
                MOVE_DESTINY_BOND,
            },
            },
            {
#line 8173
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8175
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8174
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8176
                MOVE_PSYCHIC,
                MOVE_MORNING_SUN,
                MOVE_FUTURE_SIGHT,
                MOVE_POWER_GEM,
            },
            },
            {
#line 8181
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8181
            .heldItem = ITEM_TWISTED_SPOON,
#line 8183
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8182
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8184
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_RECOVER,
                MOVE_THUNDER_PUNCH,
            },
            },
        },
    },
#line 8189
    [DIFFICULTY_NORMAL][TRAINER_JANINE] =
    {
#line 8190
        .trainerName = _("JANINE"),
#line 8191
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8192
        .trainerPic = TRAINER_PIC_LEADER_JANINE,
        .encounterMusic_gender =
#line 8194
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8195
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8196
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8198
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8198
            .heldItem = ITEM_LEFTOVERS,
#line 8200
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8199
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8201
                MOVE_SLUDGE_BOMB,
                MOVE_FIRE_BLAST,
                MOVE_DESTINY_BOND,
                MOVE_AMNESIA,
            },
            },
            {
#line 8206
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8208
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8207
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8209
                MOVE_MINIMIZE,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
            },
            },
            {
#line 8214
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8216
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8215
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8217
                MOVE_SWALLOW,
                MOVE_STOCKPILE,
                MOVE_AMNESIA,
                MOVE_SPIT_UP,
            },
            },
            {
#line 8222
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8222
            .heldItem = ITEM_QUICK_CLAW,
#line 8224
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8223
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8225
                MOVE_EARTHQUAKE,
                MOVE_SLUDGE_BOMB,
                MOVE_THUNDERBOLT,
                MOVE_SUBMISSION,
            },
            },
            {
#line 8230
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8232
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8231
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8233
                MOVE_PURSUIT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8238
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8238
            .heldItem = ITEM_BRIGHT_POWDER,
#line 8240
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8239
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8241
                MOVE_GIGA_DRAIN,
                MOVE_PSYCHIC,
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 8246
    [DIFFICULTY_NORMAL][TRAINER_BLAINE] =
    {
#line 8247
        .trainerName = _("BLAINE"),
#line 8248
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8249
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        .encounterMusic_gender =
#line 8251
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8252
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8253
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8255
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8255
            .heldItem = ITEM_QUICK_CLAW,
#line 8257
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8256
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8258
                MOVE_DOUBLE_EDGE,
                MOVE_SUNNY_DAY,
                MOVE_FIRE_BLAST,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 8263
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8263
            .heldItem = ITEM_SITRUS_BERRY,
#line 8265
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8264
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8266
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_BLAST,
                MOVE_PSYCHIC,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8271
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8271
            .heldItem = ITEM_MIRACLE_SEED,
#line 8273
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8272
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8274
                MOVE_FIRE_BLAST,
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_CRUNCH,
            },
            },
            {
#line 8279
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8279
            .heldItem = ITEM_LEFTOVERS,
#line 8281
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8280
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8282
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_SUNNY_DAY,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 8287
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8287
            .heldItem = ITEM_WHITE_HERB,
#line 8289
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8288
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8290
                MOVE_CURSE,
                MOVE_IRON_DEFENSE,
                MOVE_WITHDRAW,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 8295
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8295
            .heldItem = ITEM_CHARCOAL,
#line 8297
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8296
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8298
                MOVE_EARTH_POWER,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_AMNESIA,
            },
            },
        },
    },
#line 8303
    [DIFFICULTY_NORMAL][TRAINER_BLUE] =
    {
#line 8304
        .trainerName = _("BLUE"),
#line 8305
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8306
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .encounterMusic_gender =
#line 8308
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8309
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8310
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8312
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8312
            .heldItem = ITEM_SITRUS_BERRY,
#line 8314
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8313
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8315
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_REST,
                MOVE_TOXIC,
            },
            },
            {
#line 8320
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8320
            .heldItem = ITEM_SHARP_BEAK,
#line 8322
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8321
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8323
                MOVE_SKY_ATTACK,
                MOVE_SAND_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 8328
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8328
            .heldItem = ITEM_SCOPE_LENS,
#line 8330
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8329
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8331
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 8336
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8336
            .heldItem = ITEM_LEFTOVERS,
#line 8338
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8337
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8339
                MOVE_LEECH_SEED,
                MOVE_SLEEP_POWDER,
                MOVE_PSYCHIC,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8344
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8344
            .heldItem = ITEM_FOCUS_BAND,
#line 8346
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8345
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8347
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FOCUS_BLAST,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 8352
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8352
            .heldItem = ITEM_SILK_SCARF,
#line 8354
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8353
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8355
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_CRUNCH,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 8360
    [DIFFICULTY_NORMAL][TRAINER_BLUE_2] =
    {
#line 8361
        .trainerName = _("BLUE"),
#line 8362
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8363
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .encounterMusic_gender =
#line 8365
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8366
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8367
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8369
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8369
            .heldItem = ITEM_SITRUS_BERRY,
#line 8371
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8370
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8372
                MOVE_ICE_BEAM,
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_TOXIC,
            },
            },
            {
#line 8377
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8377
            .heldItem = ITEM_TWISTED_SPOON,
#line 8379
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8378
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8380
                MOVE_THUNDERBOLT,
                MOVE_RECOVER,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 8385
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8385
            .heldItem = ITEM_QUICK_CLAW,
#line 8387
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8386
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8388
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
            },
            },
            {
#line 8393
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8393
            .heldItem = ITEM_LEFTOVERS,
#line 8395
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8394
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8396
                MOVE_LEECH_SEED,
                MOVE_SLEEP_POWDER,
                MOVE_PSYCHIC,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8401
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8401
            .heldItem = ITEM_FOCUS_BAND,
#line 8403
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8402
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8404
                MOVE_HYDRO_PUMP,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_REVERSAL,
            },
            },
            {
#line 8409
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8409
            .heldItem = ITEM_SILK_SCARF,
#line 8411
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8410
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8412
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_CRUNCH,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 8417
    [DIFFICULTY_NORMAL][TRAINER_WILL_1] =
    {
#line 8418
        .trainerName = _("WILL"),
#line 8419
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8420
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .encounterMusic_gender =
#line 8422
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8423
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8424
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8426
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8427
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8429
                MOVE_PSYCHIC,
                MOVE_ROCK_SMASH,
                MOVE_AGILITY,
                MOVE_BATON_PASS,
            },
            },
            {
#line 8434
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8435
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8437
                MOVE_AMNESIA,
                MOVE_FLAMETHROWER,
                MOVE_SURF,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8442
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8443
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8445
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_REFLECT,
                MOVE_HEADBUTT,
            },
            },
            {
#line 8450
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8450
            .heldItem = ITEM_QUICK_CLAW,
#line 8452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8451
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8453
                MOVE_CURSE,
                MOVE_ROCK_SMASH,
                MOVE_BODY_SLAM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8458
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8458
            .heldItem = ITEM_TWISTED_SPOON,
#line 8460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8459
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8461
                MOVE_DRILL_PECK,
                MOVE_RECOVER,
                MOVE_CONFUSE_RAY,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 8466
    [DIFFICULTY_NORMAL][TRAINER_WILL_2] =
    {
#line 8467
        .trainerName = _("WILL"),
#line 8468
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8469
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .encounterMusic_gender =
#line 8471
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8472
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8473
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8475
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8476
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8478
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_MOONBLAST,
                MOVE_REFLECT,
            },
            },
            {
#line 8483
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8484
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8486
                MOVE_BLIZZARD,
                MOVE_PSYCHIC,
                MOVE_PERISH_SONG,
                MOVE_SING,
            },
            },
            {
#line 8491
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8491
            .heldItem = ITEM_SITRUS_BERRY,
#line 8493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8492
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8494
                MOVE_ANCIENT_POWER,
                MOVE_SLEEP_POWDER,
                MOVE_DREAM_EATER,
                MOVE_SOFT_BOILED,
            },
            },
            {
#line 8499
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8500
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8502
                MOVE_TEETER_DANCE,
                MOVE_POWER_GEM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 8507
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8507
            .heldItem = ITEM_QUICK_CLAW,
#line 8509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8508
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8510
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 8515
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8515
            .heldItem = ITEM_LEFTOVERS,
#line 8517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8516
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8518
                MOVE_FUTURE_SIGHT,
                MOVE_FLY,
                MOVE_CONFUSE_RAY,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 8523
    [DIFFICULTY_NORMAL][TRAINER_BRUNO_1] =
    {
#line 8524
        .trainerName = _("BRUNO"),
#line 8525
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8526
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .encounterMusic_gender =
#line 8528
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8529
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8530
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8532
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8532
            .heldItem = ITEM_SCOPE_LENS,
#line 8534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8533
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8535
                MOVE_MACH_PUNCH,
                MOVE_PURSUIT,
                MOVE_DIZZY_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 8540
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8541
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8543
                MOVE_CROSS_CHOP,
                MOVE_MEGAHORN,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 8548
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8548
            .heldItem = ITEM_SILK_SCARF,
#line 8550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8549
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8551
                MOVE_BODY_SLAM,
                MOVE_MEDITATE,
                MOVE_REVERSAL,
                MOVE_HI_JUMP_KICK,
            },
            },
            {
#line 8556
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8558
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8557
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8559
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 8564
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8564
            .heldItem = ITEM_BLACK_BELT,
#line 8566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8565
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8567
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
                MOVE_VITAL_THROW,
                MOVE_CROSS_CHOP,
            },
            },
        },
    },
#line 8572
    [DIFFICULTY_NORMAL][TRAINER_BRUNO_2] =
    {
#line 8573
        .trainerName = _("BRUNO"),
#line 8574
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8575
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .encounterMusic_gender =
#line 8577
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8578
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8579
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8581
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .heldItem = ITEM_QUICK_CLAW,
#line 8583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8582
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8584
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 8589
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8589
            .heldItem = ITEM_SCOPE_LENS,
#line 8591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8590
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8592
                MOVE_SUBMISSION,
                MOVE_BLIZZARD,
                MOVE_HYDRO_PUMP,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8597
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8597
            .heldItem = ITEM_QUICK_CLAW,
#line 8599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8598
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8600
                MOVE_CROSS_CHOP,
                MOVE_MEGAHORN,
                MOVE_REVERSAL,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 8605
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8606
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8608
                MOVE_BELLY_DRUM,
                MOVE_SMELLING_SALTS,
                MOVE_FOCUS_PUNCH,
                MOVE_SEISMIC_TOSS,
            },
            },
            {
#line 8613
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8613
            .heldItem = ITEM_SCOPE_LENS,
#line 8615
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8614
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8616
                MOVE_TRIPLE_KICK,
                MOVE_DOUBLE_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 8621
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8621
            .heldItem = ITEM_LEFTOVERS,
#line 8623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8622
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8624
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
                MOVE_CROSS_CHOP,
            },
            },
        },
    },
#line 8629
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 8630
        .trainerName = _("KAREN"),
#line 8631
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8632
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .encounterMusic_gender =
#line 8634
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8635
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8636
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8638
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8638
            .heldItem = ITEM_SITRUS_BERRY,
#line 8640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8639
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8641
                MOVE_FAINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BATON_PASS,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 8646
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8647
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8649
                MOVE_SHADOW_BALL,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8654
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8654
            .heldItem = ITEM_LEFTOVERS,
#line 8656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8655
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8657
                MOVE_SLEEP_POWDER,
                MOVE_GIGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 8662
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8662
            .heldItem = ITEM_SHARP_BEAK,
#line 8664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8663
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8665
                MOVE_DRILL_PECK,
                MOVE_FAINT_ATTACK,
                MOVE_STEEL_WING,
                MOVE_HAZE,
            },
            },
            {
#line 8670
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8670
            .heldItem = ITEM_BLACK_GLASSES,
#line 8672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8671
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8673
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_IRON_TAIL,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 8678
    [DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
    {
#line 8679
        .trainerName = _("KAREN"),
#line 8680
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8681
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .encounterMusic_gender =
#line 8683
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8684
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8685
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8687
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8687
            .heldItem = ITEM_SITRUS_BERRY,
#line 8689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8688
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8690
                MOVE_GROWTH,
                MOVE_SHADOW_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_BATON_PASS,
            },
            },
            {
#line 8695
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8696
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8698
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_BEAT_UP,
                MOVE_BLIZZARD,
            },
            },
            {
#line 8703
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8703
            .heldItem = ITEM_SCOPE_LENS,
#line 8705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8704
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8706
                MOVE_SLASH,
                MOVE_CUT,
                MOVE_IRON_TAIL,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 8711
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8711
            .heldItem = ITEM_SHARP_BEAK,
#line 8713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8712
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8714
                MOVE_SKY_ATTACK,
                MOVE_PURSUIT,
                MOVE_SWAGGER,
                MOVE_PSYCH_UP,
            },
            },
            {
#line 8719
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8719
            .heldItem = ITEM_LEFTOVERS,
#line 8721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8720
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8722
                MOVE_PSYCHO_CUT,
                MOVE_SHADOW_CLAW,
                MOVE_PERISH_SONG,
                MOVE_SLASH,
            },
            },
            {
#line 8727
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8727
            .heldItem = ITEM_CHARCOAL,
#line 8729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8728
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8730
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_IRON_TAIL,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 8735
    [DIFFICULTY_NORMAL][TRAINER_KOGA_1] =
    {
#line 8736
        .trainerName = _("KOGA"),
#line 8737
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8738
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .encounterMusic_gender =
#line 8740
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8741
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8742
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8744
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8744
            .heldItem = ITEM_KINGS_ROCK,
#line 8746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8745
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8747
                MOVE_MEGAHORN,
                MOVE_GIGA_DRAIN,
                MOVE_DOUBLE_TEAM,
                MOVE_TOXIC,
            },
            },
            {
#line 8752
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8753
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8755
                MOVE_SURF,
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 8760
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8760
            .heldItem = ITEM_LEFTOVERS,
#line 8762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8761
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8763
                MOVE_MINIMIZE,
                MOVE_FIRE_BLAST,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
            },
            },
            {
#line 8768
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8769
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8771
                MOVE_LEECH_LIFE,
                MOVE_PSYCHIC,
                MOVE_SLUDGE_BOMB,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 8776
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .heldItem = ITEM_BRIGHT_POWDER,
#line 8778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8777
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8779
                MOVE_DOUBLE_TEAM,
                MOVE_TOXIC,
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 8784
    [DIFFICULTY_NORMAL][TRAINER_KOGA_2] =
    {
#line 8785
        .trainerName = _("KOGA"),
#line 8786
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 8787
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .encounterMusic_gender =
#line 8789
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8790
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8791
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8793
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8793
            .heldItem = ITEM_CHESTO_BERRY,
#line 8795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8794
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8796
                MOVE_WATERFALL,
                MOVE_BLIZZARD,
                MOVE_GIGA_DRAIN,
                MOVE_REST,
            },
            },
            {
#line 8801
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .heldItem = ITEM_LEFTOVERS,
#line 8803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8802
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8804
                MOVE_MINIMIZE,
                MOVE_FIRE_BLAST,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
            },
            },
            {
#line 8809
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8810
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8812
                MOVE_SWALLOW,
                MOVE_STOCKPILE,
                MOVE_AMNESIA,
                MOVE_SPIT_UP,
            },
            },
            {
#line 8817
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8817
            .heldItem = ITEM_QUICK_CLAW,
#line 8819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8818
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8820
                MOVE_LOVELY_KISS,
                MOVE_FIRE_BLAST,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 8825
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8825
            .heldItem = ITEM_BRIGHT_POWDER,
#line 8827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8826
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8828
                MOVE_SILVER_WIND,
                MOVE_SIGNAL_BEAM,
                MOVE_PSYCHIC,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 8833
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8833
            .heldItem = ITEM_LEFTOVERS,
#line 8835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8834
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8836
                MOVE_PROTECT,
                MOVE_FLY,
                MOVE_TOXIC,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 8841
    [DIFFICULTY_NORMAL][TRAINER_LANCE_1] =
    {
#line 8842
        .trainerName = _("LANCE"),
#line 8843
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 8844
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .encounterMusic_gender =
#line 8846
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8847
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8848
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8850
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8850
            .heldItem = ITEM_LEFTOVERS,
#line 8852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8851
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8853
                MOVE_SURF,
                MOVE_RAIN_DANCE,
                MOVE_HYPER_BEAM,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 8858
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8858
            .heldItem = ITEM_SITRUS_BERRY,
#line 8860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8859
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8861
                MOVE_BLIZZARD,
                MOVE_FIRE_BLAST,
                MOVE_THUNDER,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 8866
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .heldItem = ITEM_CHARCOAL,
#line 8868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8867
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8869
                MOVE_FLAMETHROWER,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
            {
#line 8874
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8875
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8877
                MOVE_BOUNCE,
                MOVE_DRAGON_CLAW,
                MOVE_WATERFALL,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 8882
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8882
            .heldItem = ITEM_SILK_SCARF,
#line 8884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8883
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8885
                MOVE_WING_ATTACK,
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 8890
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8890
            .heldItem = ITEM_SITRUS_BERRY,
#line 8892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8891
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8893
                MOVE_THUNDER,
                MOVE_SAFEGUARD,
                MOVE_OUTRAGE,
                MOVE_HYPER_BEAM,
            },
            },
        },
    },
#line 8898
    [DIFFICULTY_NORMAL][TRAINER_LANCE_2] =
    {
#line 8899
        .trainerName = _("LANCE"),
#line 8900
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 8901
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .encounterMusic_gender =
#line 8903
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 8904
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 8905
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8907
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8908
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8910
                MOVE_DRAGON_CLAW,
                MOVE_AIR_SLASH,
                MOVE_DOUBLE_EDGE,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 8915
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8915
            .heldItem = ITEM_SITRUS_BERRY,
#line 8917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8916
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8918
                MOVE_BLIZZARD,
                MOVE_EXTREME_SPEED,
                MOVE_THUNDER,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 8923
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8923
            .heldItem = ITEM_QUICK_CLAW,
#line 8925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8924
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8926
                MOVE_HIDDEN_POWER,
                MOVE_HYPER_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 8931
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8931
            .heldItem = ITEM_LEFTOVERS,
#line 8933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8932
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8934
                MOVE_FIRE_BLAST,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 8939
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8939
            .heldItem = ITEM_SCOPE_LENS,
#line 8941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8940
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8942
                MOVE_SKY_ATTACK,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 8947
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8947
            .heldItem = ITEM_SILK_SCARF,
#line 8949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8948
            .lvl = 70,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8950
                MOVE_DRAGON_DANCE,
                MOVE_PLAY_ROUGH,
                MOVE_SAFEGUARD,
                MOVE_SKY_ATTACK,
            },
            },
        },
    },
#line 8955
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_1] =
    {
#line 8956
        .trainerName = _("???"),
#line 8957
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8958
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 8960
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 8961
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8963
            .species = SPECIES_CHIKORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8964
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8967
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_2] =
    {
#line 8968
        .trainerName = _("SILVER"),
#line 8969
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8970
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 8972
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 8973
        .items = { ITEM_POTION },
#line 8974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8976
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8977
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8980
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8981
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8984
            .species = SPECIES_BAYLEEF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8985
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8988
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_3] =
    {
#line 8989
        .trainerName = _("SILVER"),
#line 8990
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8991
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 8993
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 8994
        .items = { ITEM_SUPER_POTION },
#line 8995
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8997
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8998
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9000
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 9004
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9005
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9007
                MOVE_BUBBLE_BEAM,
                MOVE_AURORA_BEAM,
                MOVE_PSYBEAM,
            },
            },
            {
#line 9011
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9012
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9014
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_LEECH_LIFE,
                MOVE_GUST,
            },
            },
            {
#line 9019
            .species = SPECIES_BAYLEEF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9020
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9022
                MOVE_MEGA_DRAIN,
                MOVE_RAZOR_LEAF,
                MOVE_TACKLE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 9027
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_4] =
    {
#line 9028
        .trainerName = _("SILVER"),
#line 9029
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9030
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9032
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9033
        .items = { ITEM_HYPER_POTION },
#line 9034
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9036
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9038
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9037
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9039
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 9044
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9046
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9045
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9047
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_BITE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 9052
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9054
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9053
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9055
                MOVE_OCTAZOOKA,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 9059
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9061
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9060
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9062
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9067
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9069
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9068
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9070
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 9075
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_5] =
    {
#line 9076
        .trainerName = _("SILVER"),
#line 9077
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9078
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9080
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9081
        .items = { ITEM_HYPER_POTION },
#line 9082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9084
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .heldItem = ITEM_CHESTO_BERRY,
#line 9086
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9085
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9087
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 9092
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9094
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9093
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9095
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9100
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9100
            .heldItem = ITEM_QUICK_CLAW,
#line 9102
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9101
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9103
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9108
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9110
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9109
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9111
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 9116
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .heldItem = ITEM_MIRACLE_SEED,
#line 9118
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9117
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9119
                MOVE_SUNNY_DAY,
                MOVE_GIGA_DRAIN,
                MOVE_BODY_SLAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 9124
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9125
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9127
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9132
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_6] =
    {
#line 9133
        .trainerName = _("SILVER"),
#line 9134
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9135
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9137
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9138
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9139
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9141
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9141
            .heldItem = ITEM_SCOPE_LENS,
#line 9143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9142
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9144
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9149
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9149
            .heldItem = ITEM_LEFTOVERS,
#line 9151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9150
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9152
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9157
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9157
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 9159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9158
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9160
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9165
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9165
            .heldItem = ITEM_CHARCOAL,
#line 9167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9166
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9168
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 9173
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9173
            .heldItem = ITEM_MIRACLE_SEED,
#line 9175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9174
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9176
                MOVE_REFLECT,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 9181
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9181
            .heldItem = ITEM_QUICK_CLAW,
#line 9183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9182
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9184
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9189
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_7] =
    {
#line 9190
        .trainerName = _("SILVER"),
#line 9191
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9192
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9194
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9195
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9196
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9198
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .heldItem = ITEM_SCOPE_LENS,
#line 9200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9199
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9201
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9206
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9206
            .heldItem = ITEM_LEFTOVERS,
#line 9208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9207
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9209
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 9214
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9214
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 9216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9215
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9217
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9222
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9222
            .heldItem = ITEM_CHARCOAL,
#line 9224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9223
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9225
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 9230
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9230
            .heldItem = ITEM_MIRACLE_SEED,
#line 9232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9231
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9233
                MOVE_REFLECT,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 9238
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9238
            .heldItem = ITEM_QUICK_CLAW,
#line 9240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9239
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9241
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9246
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_1] =
    {
#line 9247
        .trainerName = _("???"),
#line 9248
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9249
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9251
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9252
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9254
            .species = SPECIES_CYNDAQUIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9255
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9258
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_2] =
    {
#line 9259
        .trainerName = _("SILVER"),
#line 9260
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9261
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9263
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9264
        .items = { ITEM_POTION },
#line 9265
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9267
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9268
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9271
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9272
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9275
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9276
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9279
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_3] =
    {
#line 9280
        .trainerName = _("SILVER"),
#line 9281
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9282
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9284
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9285
        .items = { ITEM_SUPER_POTION },
#line 9286
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9288
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9289
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9291
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 9295
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9296
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9298
                MOVE_RAZOR_LEAF,
                MOVE_GROWTH,
                MOVE_SLEEP_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 9303
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9304
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9306
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_LEECH_LIFE,
                MOVE_GUST,
            },
            },
            {
#line 9311
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9312
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9314
                MOVE_FLAME_WHEEL,
                MOVE_DIG,
                MOVE_QUICK_ATTACK,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 9319
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_4] =
    {
#line 9320
        .trainerName = _("SILVER"),
#line 9321
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9322
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9324
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9325
        .items = { ITEM_SUPER_POTION },
#line 9326
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9328
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9330
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9329
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9331
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 9336
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9338
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9337
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9339
                MOVE_SLUDGE,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9344
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9346
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9345
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9347
                MOVE_OCTAZOOKA,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 9351
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9353
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9352
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9354
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9359
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9361
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9360
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9362
                MOVE_THUNDER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_QUICK_ATTACK,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 9367
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_5] =
    {
#line 9368
        .trainerName = _("SILVER"),
#line 9369
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9370
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9372
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9373
        .items = { ITEM_HYPER_POTION },
#line 9374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9376
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9376
            .heldItem = ITEM_CHESTO_BERRY,
#line 9378
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9377
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9379
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 9384
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9386
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9385
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9387
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9392
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9392
            .heldItem = ITEM_QUICK_CLAW,
#line 9394
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9393
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9395
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9400
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9402
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9401
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9403
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9408
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9408
            .heldItem = ITEM_CHARCOAL,
#line 9410
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9409
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9411
                MOVE_FLAMETHROWER,
                MOVE_QUICK_ATTACK,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9416
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9418
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9417
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9419
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9424
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_6] =
    {
#line 9425
        .trainerName = _("SILVER"),
#line 9426
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9427
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9429
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9430
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9431
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9433
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9433
            .heldItem = ITEM_SILK_SCARF,
#line 9435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9434
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9436
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9441
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9441
            .heldItem = ITEM_LEFTOVERS,
#line 9443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9442
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9444
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9449
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9449
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 9451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9450
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9452
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9457
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9457
            .heldItem = ITEM_SCOPE_LENS,
#line 9459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9458
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9460
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9465
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9465
            .heldItem = ITEM_CHARCOAL,
#line 9467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9466
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9468
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9473
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9473
            .heldItem = ITEM_QUICK_CLAW,
#line 9475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9474
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9476
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9481
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_7] =
    {
#line 9482
        .trainerName = _("SILVER"),
#line 9483
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9484
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9486
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9487
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9488
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9490
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9490
            .heldItem = ITEM_LEFTOVERS,
#line 9492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9491
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9493
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9498
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9498
            .heldItem = ITEM_LEFTOVERS,
#line 9500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9499
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9501
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 9506
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9506
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 9508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9507
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9509
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9514
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9514
            .heldItem = ITEM_SCOPE_LENS,
#line 9516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9515
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9517
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9522
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9522
            .heldItem = ITEM_CHARCOAL,
#line 9524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9523
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9525
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9530
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9530
            .heldItem = ITEM_QUICK_CLAW,
#line 9532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9531
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9533
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9538
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_1] =
    {
#line 9539
        .trainerName = _("???"),
#line 9540
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9541
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9543
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9544
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9546
            .species = SPECIES_TOTODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9547
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9550
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_2] =
    {
#line 9551
        .trainerName = _("SILVER"),
#line 9552
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9553
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9555
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9556
        .items = { ITEM_POTION },
#line 9557
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9559
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9560
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9563
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9564
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9568
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9571
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_3] =
    {
#line 9572
        .trainerName = _("SILVER"),
#line 9573
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9574
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9576
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9577
        .items = { ITEM_SUPER_POTION },
#line 9578
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9580
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9581
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9583
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 9587
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9588
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9590
                MOVE_EMBER,
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
            },
            },
            {
#line 9595
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9596
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9598
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_LEECH_LIFE,
                MOVE_GUST,
            },
            },
            {
#line 9603
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9604
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9606
                MOVE_BITE,
                MOVE_ICE_PUNCH,
                MOVE_WATER_GUN,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 9611
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_4] =
    {
#line 9612
        .trainerName = _("SILVER"),
#line 9613
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9614
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9616
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9617
        .items = { ITEM_SUPER_POTION },
#line 9618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9620
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9622
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9621
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9623
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 9628
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9630
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9629
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9631
                MOVE_SLUDGE,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9636
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9638
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9637
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9639
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_BITE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 9644
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9645
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9647
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9652
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9654
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9653
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9655
                MOVE_ICE_PUNCH,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_BITE,
            },
            },
        },
    },
#line 9660
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_5] =
    {
#line 9661
        .trainerName = _("SILVER"),
#line 9662
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9663
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9665
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9666
        .items = { ITEM_HYPER_POTION },
#line 9667
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9669
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9669
            .heldItem = ITEM_CHESTO_BERRY,
#line 9671
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9670
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9672
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 9677
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9679
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9678
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9680
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9685
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9685
            .heldItem = ITEM_QUICK_CLAW,
#line 9687
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9686
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9688
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9693
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9695
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9694
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9696
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 9701
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9701
            .heldItem = ITEM_MYSTIC_WATER,
#line 9703
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9702
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9704
                MOVE_ICE_PUNCH,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_BITE,
            },
            },
            {
#line 9709
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9711
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9710
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9712
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9717
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_6] =
    {
#line 9718
        .trainerName = _("SILVER"),
#line 9719
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9720
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9722
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9723
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9724
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9726
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9726
            .heldItem = ITEM_SILK_SCARF,
#line 9728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9727
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9729
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9734
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9734
            .heldItem = ITEM_LEFTOVERS,
#line 9736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9735
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9737
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 9742
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9742
            .heldItem = ITEM_SCOPE_LENS,
#line 9744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9743
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9745
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9750
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9750
            .heldItem = ITEM_CHARCOAL,
#line 9752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9751
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9753
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 9758
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9758
            .heldItem = ITEM_SCOPE_LENS,
#line 9760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9759
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9761
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9766
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9766
            .heldItem = ITEM_QUICK_CLAW,
#line 9768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9767
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9769
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9774
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_7] =
    {
#line 9775
        .trainerName = _("SILVER"),
#line 9776
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9777
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 9779
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 9780
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9781
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9783
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9783
            .heldItem = ITEM_SILK_SCARF,
#line 9785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9784
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9786
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 9791
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9791
            .heldItem = ITEM_LEFTOVERS,
#line 9793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9792
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9794
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 9799
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9799
            .heldItem = ITEM_SCOPE_LENS,
#line 9801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9800
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9802
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 9807
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9807
            .heldItem = ITEM_CHARCOAL,
#line 9809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9808
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9810
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 9815
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9815
            .heldItem = ITEM_SCOPE_LENS,
#line 9817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9816
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9818
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9823
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9823
            .heldItem = ITEM_QUICK_CLAW,
#line 9825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9824
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9826
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 9831
    [DIFFICULTY_NORMAL][TRAINER_RED_2] =
    {
#line 9832
        .trainerName = _("RED"),
#line 9833
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 9834
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 9836
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9837
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9838
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9840
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9840
            .heldItem = ITEM_LIGHT_BALL,
#line 9842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9841
            .lvl = 93,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9843
                MOVE_THUNDERBOLT,
                MOVE_SURF,
                MOVE_IRON_TAIL,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 9848
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9848
            .heldItem = ITEM_LEFTOVERS,
#line 9850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9849
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9851
                MOVE_AMNESIA,
                MOVE_CURSE,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9856
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9856
            .heldItem = ITEM_CHARCOAL,
#line 9858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9857
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9859
                MOVE_FIRE_BLAST,
                MOVE_WING_ATTACK,
                MOVE_OUTRAGE,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9864
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9864
            .heldItem = ITEM_MIRACLE_SEED,
#line 9866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9865
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9867
                MOVE_GIGA_DRAIN,
                MOVE_BODY_SLAM,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 9872
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9872
            .heldItem = ITEM_QUICK_CLAW,
#line 9874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9873
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9875
                MOVE_ICE_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9880
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9880
            .heldItem = ITEM_SITRUS_BERRY,
#line 9882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9881
            .lvl = 80,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9883
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_MORNING_SUN,
            },
            },
        },
    },
#line 9888
    [DIFFICULTY_NORMAL][TRAINER_EUSINE] =
    {
#line 9889
        .trainerName = _("EUSINE"),
#line 9890
        .trainerClass = TRAINER_CLASS_MYSTERY_MAN,
#line 9891
        .trainerPic = TRAINER_PIC_EUSINE,
        .encounterMusic_gender =
#line 9893
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9894
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9895
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9897
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9899
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 9898
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9900
                MOVE_BUBBLE_BEAM,
                MOVE_RAIN_DANCE,
                MOVE_HYPNOSIS,
                MOVE_ICY_WIND,
            },
            },
            {
#line 9905
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9907
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 9906
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9908
                MOVE_HYPNOSIS,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 9913
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9915
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 9914
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9916
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
                MOVE_BODY_SLAM,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 9921
    [DIFFICULTY_NORMAL][TRAINER_GIOVANNI] =
    {
#line 9922
        .trainerName = _("GIOVANNI"),
#line 9923
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 9924
        .trainerPic = TRAINER_PIC_GIOVANNI,
        .encounterMusic_gender =
#line 9926
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9927
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9928
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9930
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9931
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9933
                MOVE_DIZZY_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_SAFEGUARD,
                MOVE_MEGA_PUNCH,
            },
            },
            {
#line 9938
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9939
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9941
                MOVE_ICE_PUNCH,
                MOVE_SLUDGE_BOMB,
                MOVE_BUBBLE_BEAM,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 9946
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9947
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9949
                MOVE_FAINT_ATTACK,
                MOVE_SWAGGER,
                MOVE_SCREECH,
                MOVE_SLASH,
            },
            },
            {
#line 9954
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9955
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9957
                MOVE_ROCK_THROW,
                MOVE_SANDSTORM,
                MOVE_DIG,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 9962
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9963
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9965
                MOVE_THUNDER_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_THRASH,
            },
            },
        },
    },
#line 9970
    [DIFFICULTY_NORMAL][TRAINER_PROTON_1] =
    {
#line 9971
        .trainerName = _("PROTON"),
#line 9972
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 9973
        .trainerPic = TRAINER_PIC_PROTON,
        .encounterMusic_gender =
#line 9975
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 9976
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9978
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9979
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9982
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9983
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9986
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9987
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9990
    [DIFFICULTY_NORMAL][TRAINER_PROTON_2] =
    {
#line 9991
        .trainerName = _("PROTON"),
#line 9992
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 9993
        .trainerPic = TRAINER_PIC_PROTON,
        .encounterMusic_gender =
#line 9995
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 9996
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9997
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9999
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10000
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10002
                MOVE_SLUDGE_BOMB,
                MOVE_POUND,
                MOVE_ACID_ARMOR,
                MOVE_MINIMIZE,
            },
            },
            {
#line 10007
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10008
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10010
                MOVE_SLUDGE_BOMB,
                MOVE_DOUBLE_KICK,
                MOVE_THUNDER_PUNCH,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 10015
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10016
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10018
                MOVE_SLUDGE_BOMB,
                MOVE_SELF_DESTRUCT,
                MOVE_HAZE,
                MOVE_TACKLE,
            },
            },
            {
#line 10023
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10024
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10026
                MOVE_SLUDGE_BOMB,
                MOVE_DOUBLE_KICK,
                MOVE_ICE_PUNCH,
                MOVE_THRASH,
            },
            },
            {
#line 10031
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10032
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10034
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_FISSURE,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 10039
    [DIFFICULTY_NORMAL][TRAINER_ARCHER] =
    {
#line 10040
        .trainerName = _("ARCHER"),
#line 10041
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10042
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10044
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10045
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10048
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10049
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10051
                MOVE_SELF_DESTRUCT,
                MOVE_SMOG,
                MOVE_SMOKESCREEN,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 10056
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10057
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10059
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10064
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10066
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10065
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10067
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10072
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10073
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10075
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10080
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10081
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10083
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 10088
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_1] =
    {
#line 10089
        .trainerName = _("ARCHER"),
#line 10090
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10091
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10093
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10094
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10095
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10097
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10098
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10100
                MOVE_SELF_DESTRUCT,
                MOVE_SMOG,
                MOVE_SMOKESCREEN,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 10105
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10106
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10108
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10113
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10114
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10116
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10121
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_4] =
    {
#line 10122
        .trainerName = _("ARCHER"),
#line 10123
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10124
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10126
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10127
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10128
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10130
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10131
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10133
                MOVE_SELF_DESTRUCT,
                MOVE_SMOG,
                MOVE_SMOKESCREEN,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 10138
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10139
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10141
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10146
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10147
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10149
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10154
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10155
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10157
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10162
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10163
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10165
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 10170
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_5] =
    {
#line 10171
        .trainerName = _("ARCHER"),
#line 10172
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10173
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 10175
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10176
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10177
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10179
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10180
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10182
                MOVE_SELF_DESTRUCT,
                MOVE_SMOG,
                MOVE_SMOKESCREEN,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 10187
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10188
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10190
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 10195
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10196
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10198
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10203
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10204
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10206
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10211
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10212
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10214
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 10219
    [DIFFICULTY_NORMAL][TRAINER_PETREL_1] =
    {
#line 10220
        .trainerName = _("PETREL"),
#line 10221
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10222
        .trainerPic = TRAINER_PIC_PETREL,
        .encounterMusic_gender =
#line 10224
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10225
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10226
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10228
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10229
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10231
                MOVE_PIN_MISSILE,
                MOVE_EXPLOSION,
                MOVE_SPIKES,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 10236
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10237
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10239
                MOVE_ROCK_TOMB,
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 10244
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10245
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10247
                MOVE_SMOG,
                MOVE_FLAMETHROWER,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
            },
            },
            {
#line 10252
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10253
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10255
                MOVE_ICE_BEAM,
                MOVE_CLAMP,
                MOVE_SPIKE_CANNON,
                MOVE_SURF,
            },
            },
        },
    },
#line 10260
    [DIFFICULTY_NORMAL][TRAINER_PETREL_2] =
    {
#line 10261
        .trainerName = _("PETREL"),
#line 10262
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10263
        .trainerPic = TRAINER_PIC_PETREL,
        .encounterMusic_gender =
#line 10265
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10266
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10267
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10269
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10270
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10272
                MOVE_PIN_MISSILE,
                MOVE_EXPLOSION,
                MOVE_SPIKES,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 10277
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10278
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10280
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 10285
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10286
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10288
                MOVE_SMOG,
                MOVE_FLAMETHROWER,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
            },
            },
            {
#line 10293
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10294
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10296
                MOVE_ICE_BEAM,
                MOVE_CLAMP,
                MOVE_SPIKE_CANNON,
                MOVE_SURF,
            },
            },
        },
    },
#line 10301
    [DIFFICULTY_NORMAL][TRAINER_ARIANA_1] =
    {
#line 10302
        .trainerName = _("ARIANA"),
#line 10303
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10304
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 10306
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10307
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10308
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10310
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10311
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10313
                MOVE_LEER,
                MOVE_SLUDGE_BOMB,
                MOVE_BITE,
                MOVE_WRAP,
            },
            },
            {
#line 10318
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10319
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10321
                MOVE_FAINT_ATTACK,
                MOVE_PAY_DAY,
                MOVE_MUD_SLAP,
                MOVE_SLASH,
            },
            },
            {
#line 10326
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10327
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10329
                MOVE_SWEET_SCENT,
                MOVE_SLEEP_POWDER,
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
            },
            },
        },
    },
#line 10334
    [DIFFICULTY_NORMAL][TRAINER_ARIANA_2] =
    {
#line 10335
        .trainerName = _("ARIANA"),
#line 10336
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 10337
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 10339
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 10340
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10341
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10343
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10344
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10346
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 10351
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10352
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10354
                MOVE_BITE,
                MOVE_SCREECH,
                MOVE_CHARM,
                MOVE_SLASH,
            },
            },
            {
#line 10359
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10360
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10362
                MOVE_SLEEP_POWDER,
                MOVE_SLUDGE_BOMB,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 10367
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10368
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10370
                MOVE_STRENGTH,
                MOVE_TWISTER,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 10375
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10376
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10378
                MOVE_PURSUIT,
                MOVE_TOXIC,
                MOVE_FAINT_ATTACK,
                MOVE_FLY,
            },
            },
        },
    },
