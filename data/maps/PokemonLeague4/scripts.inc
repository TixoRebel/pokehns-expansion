PokemonLeague4_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague4_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

PokemonLeague4_OnResume::
	setvar VAR_0x8004, 3
	special DoPokemonLeagueLightingEffect
	end

PokemonLeague4_EventScript_Karen::
	lock 
	faceplayer
	goto_if_ge VAR_LEAGUE_STATE, 5, PokemonLeague4_EventScript_KarenDefeated
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague4_EventScript_KarenRematch
	msgbox PokemonLeague4_Text_Before, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KAREN_1, PokemonLeague4_Text_Beaten
	goto PokemonLeague4_EventScript_KarenOnDefeat

PokemonLeague4_EventScript_KarenRematch::
	msgbox PokemonLeague4_Text_RematchBefore, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KAREN_2, PokemonLeague4_Text_Beaten
	goto PokemonLeague4_EventScript_KarenOnDefeat

PokemonLeague4_EventScript_KarenOnDefeat::
    clearflag FLAG_TEMP_5
	msgbox PokemonLeague4_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x28E, FALSE
	setmetatile 6, 2, 0x296, FALSE	
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	setvar VAR_LEAGUE_STATE, 5
	release
	end

PokemonLeague4_EventScript_KarenDefeated::
	msgbox PokemonLeague4_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague4_Text_RematchBefore:
    .string "KAREN: Ah, it's you again.\p"
    .string "I trust you haven't forgotten\n"
    .string "my belief:\p"
    .string "True strength arises from trust\n"
    .string "in one's POKéMON.\p"
    .string "Since our last encounter, my\n"
    .string "bond with my POKéMON has\l"
    .string "deepened further.\p"
    .string "Are you ready to face a team\n"
    .string "united by an unbreakable bond?\p"
    .string "Show me the power of the bond\n"
    .string "with your POKéMON.$"

PokemonLeague4_Text_Before:
    .string "I am KAREN of the ELITE FOUR.\p"
    .string "You're {PLAYER}? How amusing.\p"
    .string "I love DARK-type POKéMON.\p"
    .string "I find their wild, tough image\n"
    .string "to be so appealing. And they're\l"
    .string "so strong.\p"
    .string "Think you can take them? Just try\n"
    .string "to entertain me.\p"
    .string "Let's go.$"

PokemonLeague4_Text_Beaten:
    .string "Well, aren't you good. I like that\n"
    .string "in a trainer.$"

PokemonLeague4_Text_Defeat:
    .string "Strong POKéMON.\p"
    .string "Weak POKéMON.\p"
    .string "That is only the selfish\n"
    .string "perception of people.\p"
    .string "Truly skilled trainers should\n"
    .string "try to win with their favorites.\p"
    .string "I like your style. You understand\n"
    .string "what's important.\p"
    .string "Go on--the CHAMPION is waiting.$"

