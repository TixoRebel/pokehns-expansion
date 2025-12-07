#ifndef GUARD_CONSTANTS_FIELD_MOVE_H
#define GUARD_CONSTANTS_FIELD_MOVE_H


// HnS PORT NOTE - redid logic for field move requirements. See CanMonUseFieldMove()
enum FieldMove
{
    FIELD_MOVE_CUT,
    FIELD_MOVE_FLASH, // cannot be triggered from overworld
    FIELD_MOVE_ROCK_SMASH,
    FIELD_MOVE_STRENGTH,
    FIELD_MOVE_SURF,
    FIELD_MOVE_FLY, // cannot be triggered from overworld
#if OW_DIVE_FIELD_MOVE == TRUE
    FIELD_MOVE_DIVE,
#endif
#if OW_WHIRLPOOL_FIELD_MOVE == TRUE
    FIELD_MOVE_WHIRLPOOL,
#endif
    FIELD_MOVE_WATERFALL,
    FIELD_MOVE_TELEPORT, // cannot be triggered from overworld
    FIELD_MOVE_HM_END = FIELD_MOVE_TELEPORT,
    FIELD_MOVE_DIG, // cannot be triggered from overworld
    FIELD_MOVE_MILK_DRINK, // cannot be triggered from overworld
    FIELD_MOVE_SOFT_BOILED, // cannot be triggered from overworld
    FIELD_MOVE_SWEET_SCENT, // cannot be triggered from overworld
#if OW_HEADBUTT_FIELD_MOVE == TRUE
    FIELD_MOVE_HEADBUTT,
#endif
#if OW_SECRET_POWER_FIELD_MOVE == TRUE
    FIELD_MOVE_SECRET_POWER,
#endif
#if OW_DEFOG_FIELD_MOVE == TRUE
    FIELD_MOVE_DEFOG, // cannot be triggered from overworld
#endif
#if OW_ROCK_CLIMB_FIELD_MOVE == TRUE
    FIELD_MOVE_ROCK_CLIMB,
#endif
    FIELD_MOVES_COUNT
};

#endif //GUARD_CONSTANTS_FIELD_MOVE_H
