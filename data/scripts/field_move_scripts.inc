@ HnS PORT NOTE - IsFollowerFieldMoveUser is implemented (all lowercase) in event.inc
@ HnS PORT TODO - Is party learnset being checked at all??

@ HnS PORT TODO - make HM use logic depend on a flag (build or user option?)

@ .macro IsFollowerFieldMoveUser var:req
@ callfunc ScrFunc_IsFollowerFieldMoveUser
@ .2byte \var
@ .endm

@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	goto_if_unset FLAG_BADGE02_GET, EventScript_CheckTreeCantCut
	goto_if_unset FLAG_RECEIVED_HM_CUT, EventScript_CheckTreeCantCut @ HnS PORT NOTE - checks for badge and access to move, not party movesets
	checkfieldmove FIELD_MOVE_CUT, TRUE @ HnS PORT TODO - maybe replace with "checkpartylearnsets" or modify behavior? @@ Expansion 1.13.0
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
	@setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT	@ loads the lead pokemon's nickname into STR_VAR_1
	buffermovename STR_VAR_2, MOVE_CUT			@ loads the HM name Cut into STR_VAR_2
	@msgbox Text_WantToCut, MSGBOX_YESNO
	@goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
EventScript_CutTreeCommon: @ fallthrough
	isfollowerfieldmoveuser VAR_0x8004
	@setfieldeffectargument 3, VAR_0x8004 @ skip pose if so	@
	@dofieldeffect FLDEFF_USE_CUT_ON_TREE					@ HnS PORT NOTE - these three lines were commented out in HnS, why?
	@waitstate												@
EventScript_CutTreeDown:: @ fallthrough
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	playse SE_M_CUT
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	goto EventScript_CutTreeCommon

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!\p"
	.string "Would you like to CUT it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_CantCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!$"

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	goto EventScript_RockSmashCommon

@ HnS PORT TODO - make HM use logic depend on a flag (build or user option?)
@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CantSmashRock
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, EventScript_CantSmashRock
	checkfieldmove FIELD_MOVE_ROCK_SMASH, TRUE
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
	@setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	@msgbox Text_WantToSmash, MSGBOX_YESNO
	@goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
EventScript_RockSmashCommon: @ fallthrough
	@ check if follower should use the field move
	isfollowerfieldmoveuser VAR_0x8004
	@setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
	@dofieldeffect FLDEFF_USE_ROCK_SMASH
	@waitstate
EventScript_SmashRock:: @ fallthrough
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	playse SE_M_ROCK_THROW
	waitmovement 0
	removeobject VAR_LAST_TALKED
	@ specialvar VAR_RESULT, TryUpdateRusturfTunnelState @ HnS NOTE - not relevant to HnS
	goto_if_eq VAR_RESULT, TRUE, EventScript_EndSmash
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
	waitstate
	releaseall
	end

@ Interact with headbutt tree
EventScript_Headbutt::
	lockall
	goto_if_unset FLAG_GET_HEADBUTT, EventScript_CantHeadbuttTree
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantHeadbuttTree
	@setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_HEADBUTT
	@msgbox Text_WantToHeadbutt, MSGBOX_YESNO
	@goto_if_eq VAR_RESULT, NO, EventScript_CancelHeadbutt
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
EventScript_HeadbuttCommon:
	@ check if follower should use the field move
	Isfollowerfieldmoveuser VAR_0x8004
	@setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
	@dofieldeffect FLDEFF_USE_ROCK_SMASH
	@waitstate
EventScript_HeadbuttTree:: @ fallthrough
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
	applymovement VAR_LAST_TALKED, Movement_HeadbuttTree
	playse SE_M_HEADBUTT
	waitmovement 0
	special RockSmashWildEncounter	@ HnS PORT TODO - implement a separate Headbutt encounter path
	goto EventScript_EndHeadbutt
	waitstate
	releaseall
	end

Movement_HeadbuttTree:
	rock_smash_break
	step_end

EventScript_CantHeadbuttTree::
	msgbox Text_CantHeadbutt, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelHeadbutt::
	closemessage
	releaseall
	end


EventScript_EndHeadbutt::
	releaseall
	end

EventScript_FollowerFieldMove:
	getdirectiontoface VAR_0x8005, OBJ_EVENT_ID_FOLLOWER, LOCALID_PLAYER @ HnS PORT NOTE - Expansion defines a macro in event.inc rather than a func to call
	specialvar VAR_0x8006, GetPlayerFacingDirection
	goto_if_eq VAR_0x8005, DIR_NONE, EventScript_FollowerFieldMoveEnd
	@ Swap follower and player
	call EventScript_FollowerSwap
	@ Face follower in direction and jump
	switch VAR_0x8006
	case DIR_NORTH, EventScript_FollowerJumpNorth
	case DIR_EAST, EventScript_FollowerJumpEast
	case DIR_SOUTH, EventScript_FollowerJumpSouth
	case DIR_WEST, EventScript_FollowerJumpWest
EventScript_FollowerFieldMoveEnd:
	return

EventScript_FollowerSwap:
	switch VAR_0x8005
	case DIR_NORTH, EventScript_FollowerMoveNorth
	case DIR_EAST, EventScript_FollowerMoveEast
	case DIR_SOUTH, EventScript_FollowerMoveSouth
	case DIR_WEST, EventScript_FollowerMoveWest
	return

@ HnS PORT NOTE - why does follower move north, but player south?
EventScript_FollowerMoveNorth:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkUp
	applymovement LOCALID_PLAYER, Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

EventScript_FollowerMoveEast:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkRight
	applymovement LOCALID_PLAYER, Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

EventScript_FollowerMoveSouth:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkDown
	applymovement LOCALID_PLAYER, Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

EventScript_FollowerMoveWest:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkLeft
	applymovement LOCALID_PLAYER, Movement_WalkRight
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

EventScript_FollowerJumpNorth:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpUp
	waitmovement 0
	return

EventScript_FollowerJumpEast:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpRight
	waitmovement 0
	return

EventScript_FollowerJumpSouth:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpDown
	waitmovement 0
	return

EventScript_FollowerJumpWest:
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpLeft
	waitmovement 0
	return

@ HnS PORT TODO - make this pull from a table like w/ wild encounters, or even change "RockSmashWildEncounter" to "RockSmashSecondaryEvents"
EventScript_EndSmash::
	random 20
	call_if_eq VAR_RESULT, 1, EventScript_RockSmashHeartscale
	call_if_eq VAR_RESULT, 2, EventScript_RockSmashBlueShard
	call_if_eq VAR_RESULT, 3, EventScript_RockSmashRedShard
	call_if_eq VAR_RESULT, 4, EventScript_RockSmashGreenShard
	call_if_eq VAR_RESULT, 5, EventScript_RockSmashYellowShard
	releaseall
	end

EventScript_RockSmashHeartscale::
	giveitem ITEM_HEART_SCALE
	return

EventScript_RockSmashBlueShard::
	giveitem ITEM_BLUE_SHARD
	return

EventScript_RockSmashRedShard::
	giveitem ITEM_RED_SHARD
	return

EventScript_RockSmashGreenShard::
	giveitem ITEM_GREEN_SHARD
	return

EventScript_RockSmashYellowShard::
	giveitem ITEM_YELLOW_SHARD
	return

Movement_WalkUp:
	walk_up
	step_end

Movement_JumpUp:
	jump_in_place_up
	step_end

Movement_WalkRight:
	walk_right
	step_end

Movement_JumpRight:
	jump_in_place_right
	step_end

Movement_WalkDown:
	walk_down
	step_end

Movement_JumpDown:
	jump_in_place_down
	step_end

Movement_WalkLeft:
	walk_left
	step_end

Movement_JumpLeft:
	jump_in_place_left
	step_end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"

Text_CantSmash:
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"

Text_WantToHeadbutt:
	.string "This tree may house POKéMON.\n"
	.string "Would you like to use HEADBUTT?$"

Text_CantHeadbutt:
	.string "It's a small tree, but a wild\n"
	.string "POKéMON may be living within.$"

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder @ NOTE - checks if Strength is already active
	checkfieldmove FIELD_MOVE_STRENGTH, TRUE
	@checkitem ITEM_HM_STRENGTH @ HnS PORT NOTE - why checkitem and not FLAG_RECEIVED_HM_STRENGTH?
	@goto_if_eq VAR_RESULT, FALSE, EventScript_CantStrength
	goto_if_unset FLAG_RECEIVED_HM_STRENGTH, EventScript_CantStrength
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	@msgbox Text_WantToStrength, MSGBOX_YESNO
	@goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	@closemessage
	@dofieldeffect FLDEFF_USE_STRENGTH
	@waitstate
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	@dofieldeffect FLDEFF_USE_STRENGTH
	@waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT @ TEST - more standardized practice
	@ buffermovename STR_VAR_2, MOVE_STRENGTH
	@ msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	@ msgbox Text_StrengthActivated, MSGBOX_DEFAULT @ TEST - can this be reused instead?
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Text_WantToStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_CantStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.$"

Text_StrengthActivated:
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"

@ HnS PORT TODO - make waterfall like strength - only interact with "a" once, then just movement
EventScript_UseWaterfall::
	lockall
	goto_if_unset FLAG_BADGE08_GET, EventScript_CantWaterfall @ badge 8
	goto_if_unset FLAG_RECEIVED_HM_WATERFALL, EventScript_CantWaterfall
	@goto_if_set FLAG_SYS_USE_WATERFALL, EventScript_CheckActivatedWaterfall @ NOTE - checks if Waterfall is already active
	checkfieldmove FIELD_MOVE_WATERFALL
	@checkitem ITEM_HM_WATERFALL @ HnS PORT NOTE - why checkitem and not FLAG_RECEIVED_HM_WATERFALL?
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	@msgbox Text_WantToWaterfall, MSGBOX_YESNO
	@goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	@msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	buffermovename STR_VAR_2, MOVE_WATERFALL
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	hidefollowernpc @ HnS PORT NOTE - why not in HnS?
	dofieldeffect FLDEFF_USE_WATERFALL @ HnS PORT NOTE - why other calls to "dofieldeffect" removed, but not this one?
	callnative FollowerNPC_WarpSetEnd @ HnS PORT NOTE - seems to move follower to player's end destination?
	goto EventScript_EndWaterfall

@ NOTE - Why does this exist??
EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} used WATERFALL.$"

@ HnS PORT NOTE - this is just Expansion's version of dive
EventScript_UseDive::
	lockall
	checkfieldmove FIELD_MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
	copyvar 0x8004 VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
	@msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	buffermovename STR_VAR_2, MOVE_DIVE
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	hidefollowernpc
	setfieldeffectargument 0, VAR_0x8004
	setfieldeffectargument 1, 1
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	checkfieldmove FIELD_MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_NoSurface
	@msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	buffermovename STR_VAR_2, MOVE_DIVE
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	hidefollowernpc
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	callnative SetFollowerNPCSurfSpriteAfterDive
EventScript_NoSurface::
	releaseall
	end
	
@ HnS PORT NOTE - seems potentially oversimplified?
EventScript_Whirlpool::
	lockall
	goto_if_unset FLAG_BADGE07_GET, EventScript_CantWhirlpool
	goto_if_unset FLAG_RECEIVED_HM_WHIRLPOOL, EventScript_CantWhirlpool
	@checkitem ITEM_HM_WHIRLPOOL @ HnS PORT NOTE - why not FLAG_RECEIVED_HM_WHIRLPOOL?
	goto_if_eq VAR_RESULT, FALSE, EventScript_CantWhirlpool
	playse SE_M_WHIRLPOOL
	buffermovename STR_VAR_2, MOVE_WHIRLPOOL
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	@ msgbox Text_MonUsedWhirlpool, MSGBOX_DEFAULT @ why not in HnS?
	goto_if_eq VAR_FACING, DIR_NORTH, EventScript_WhirlpoolGoNorth
	goto_if_eq VAR_FACING, DIR_SOUTH, EventScript_WhirlpoolGoSouth
	goto_if_eq VAR_FACING, DIR_EAST, EventScript_WhirlpoolGoEast
	goto_if_eq VAR_FACING, DIR_WEST, EventScript_WhirlpoolGoWest
	releaseall
	end

EventScript_WhirlpoolGoNorth::
	applymovement LOCALID_PLAYER, Movement_WhirlpoolNorth
	waitmovement 0
	releaseall
	end

EventScript_WhirlpoolGoSouth::
	applymovement LOCALID_PLAYER, Movement_WhirlpoolSouth
	waitmovement 0
	releaseall
	end

EventScript_WhirlpoolGoEast::
	applymovement LOCALID_PLAYER, Movement_WhirlpoolEast
	waitmovement 0
	releaseall
	end

EventScript_WhirlpoolGoWest::
	applymovement LOCALID_PLAYER, Movement_WhirlpoolWest
	waitmovement 0
	releaseall
	end

EventScript_CantWhirlpool::
	msgbox Text_CantWhirlpool, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

Movement_WhirlpoolNorth:
	slide_up
	slide_up
	slide_up
	step_end

Movement_WhirlpoolSouth:
	slide_down
	slide_down
	slide_down
	step_end

Movement_WhirlpoolEast:
	slide_right
	slide_right
	slide_right
	step_end

Movement_WhirlpoolWest:
	slide_left
	slide_left
	slide_left
	step_end

EventScript_DigCommon:
	isfollowerfieldmoveuser VAR_0x8004
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if true
	dofieldeffect FLDEFF_USE_DIG
	waitstate
EventScript_DigSealedChamber:: @ fallthrough
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
	callnative DoBrailleDigEffect
	releaseall
	end

@ Use Dig from party menu
EventScript_UseDig::
	lockall
	goto EventScript_DigCommon

@ HnS PORT NOTE - Expansion implemented the Cut Grass mechanic!
@ HnS PORT TODO - Make reusing Cut Grass way easier/faster
EventScript_CutGrassCommon:
	isfollowerfieldmoveuser VAR_0x8004
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if true
	dofieldeffect FLDEFF_USE_CUT_ON_GRASS
	waitstate

@ Use Cut grass from party menu
EventScript_UseCutGrass::
	lockall
	goto EventScript_CutGrassCommon

Text_CantWhirlpool:
	.string "The water is swirling and spinning\n"
	.string "around with a mighty roar.$"

Text_MonUsedWhirlpool:
	.string "{STR_VAR_1} used WHIRLPOOL.$"

Text_CantDive:
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} used DIVE.$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"

SetTimeEncounters::
	callnative SetTimeBasedEncounters
	return

EventScript_Defog::
	lockall
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_DEFOG
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	isfollowerfieldmoveuser VAR_0x8004
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
	waitmovement 0
	setfieldeffectargument 0, VAR_RESULT
	dofieldeffect FLDEFF_DEFOG
	waitstate
	releaseall
	end

EventScript_UseRockClimb::
	lockall
	checkfieldmove FIELD_MOVE_ROCK_CLIMB
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantRockClimb
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndRockClimb
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
	waitstate
	goto EventScript_EndRockClimb
	end

EventScript_CantRockClimb::
	msgbox Text_CantRockClimb, MSGBOX_DEFAULT

EventScript_EndRockClimb::
	releaseall
	end

Text_WantToRockClimb:
    .string "The cliff is steep.\n"
    .string "Would you like to use Rock Climb?$"

Text_MonUsedRockClimb:
    .string "{STR_VAR_1} used Rock Climb!$"

Text_CantRockClimb:
    .string "The cliff is steep.\n"
    .string "A Pokémon may be able to climb it.$"
