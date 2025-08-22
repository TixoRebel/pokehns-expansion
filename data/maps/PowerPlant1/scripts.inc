.set LOCALID_POWERPLANT_COP, 1
.set LOCALID_POWERPLANT_ENGINEER, 2

PowerPlant1_MapScripts::
	.byte 0

PowerPlant1_EventScript_Cop::
	lock
	faceplayer
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 2, PowerPlant1_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 3, PowerPlant1_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 4, PowerPlant1_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 5, PowerPlant1_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 6, PowerPlant1_EventScript_CopDuringRocket
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 3, PowerPlant1_EventScript_CopAfterDone
	msgbox PowerPlant1_Text_Officer1AThiefBrokeIn, MSGBOX_DEFAULT
	closemessage
	end

PowerPlant1_EventScript_CopDuringRocket::
	lock
	faceplayer
	msgbox PowerPlant1_Text_Officer1CeruleanShadyCharacter, MSGBOX_DEFAULT
	msgbox PowerPlant1_Text_Officer1CouldIAskForYourCooperation, MSGBOX_DEFAULT
	closemessage
	end

PowerPlant1_EventScript_CopAfterDone::
	lock
	faceplayer
	msgbox PowerPlant1_Text_Officer1HaveToBeefUpSecurity, MSGBOX_DEFAULT
	closemessage
	end

PowerPlant1_EventScript_Engineer1::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, PowerPlant1_EventScript_Engineer1Done
	msgbox PowerPlant1_Text_Engineer1SomeoneStoleAPart, MSGBOX_NPC
	end

PowerPlant1_EventScript_Engineer1Done::
	msgbox PowerPlant1_Text_Engineer1GeneratorUpAndRunning, MSGBOX_NPC
	end

PowerPlant1_EventScript_Engineer2::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, PowerPlant1_EventScript_Engineer2Done
	msgbox PowerPlant1_Text_Engineer2PowerPlantUpAndRunning, MSGBOX_NPC
	end

PowerPlant1_EventScript_Engineer2Done::
	msgbox PowerPlant1_Text_Engineer2GeneratorIsRunningAgain, MSGBOX_NPC
	end

PowerPlant1_EventScript_Cop2::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, PowerPlant1_EventScript_Cop2Done
	msgbox PowerPlant1_Text_Officer2ManagerHasBeenSadAndFurious, MSGBOX_NPC
	end
PowerPlant1_EventScript_Cop2Done::
	msgbox PowerPlant1_Text_Officer2ManagerHasBeenCheerful, MSGBOX_NPC
	end

PowerPlant1_EventScript_Engineer3::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, PowerPlant1_EventScript_Engineer3Done
	msgbox PowerPlant1_Text_Engineer4MagnetTrainConsumesElectricity, MSGBOX_NPC
	end

PowerPlant1_EventScript_Engineer3Done::
	msgbox PowerPlant1_Text_Engineer4WeCanGetMagnetTrainRunning, MSGBOX_NPC
	end

PowerPlant1_Trigger_Cop::
	lock
	playse SE_POKENAV_CALL
	applymovement2 LOCALID_POWERPLANT_COP, Common_Movement_ExclamationMark
	waitse
	applymovement2 LOCALID_POWERPLANT_COP, PowerPlant1_Movement_WalkToPlayer
	waitmovement 0
	turnobject LOCALID_POWERPLANT_ENGINEER, DIR_SOUTH
	msgbox PowerPlant1_Text_Officer1CeruleanShadyCharacter, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_POWERPLANT_COP, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 30
	msgbox PowerPlant1_Text_Officer1CouldIAskForYourCooperation, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_POWERPLANT_COP, PowerPlant1_Movement_WalkBack
	waitmovement 0
	setvar VAR_KANTO_ROCKET_STORY_STATE, 2
	clearflag FLAG_HIDE_CERULEAN_GYM_ROCKET
	release
	end

PowerPlant1_Movement_WalkToPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

PowerPlant1_Movement_WalkBack:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	face_down
	step_end

PowerPlant1_Text_Officer1AThiefBrokeIn:
	.string "A thief broke into the POWER\n"
	.string "PLANT…\p"
	.string "What is the world coming to?$"

PowerPlant1_Text_Officer1CeruleanShadyCharacter:
	.string "I just got word from CERULEAN.\p"
	.string "It appears that a shady\n"
	.string "character has been loitering\l"
	.string "around.$"

PowerPlant1_Text_Officer1CouldIAskForYourCooperation:
	.string "Could I ask for your\n"
	.string "cooperation?$"

PowerPlant1_Text_Officer1HaveToBeefUpSecurity:
	.string "We'll have to beef up our\n"
	.string "security presence.$"

PowerPlant1_Text_Engineer1SomeoneStoleAPart:
	.string "Someone made off with a part\n"
	.string "that's essential for the\l"
	.string "generator.\p"
	.string "Without it, the new generator's\n"
	.string "useless!$"

PowerPlant1_Text_Engineer1GeneratorUpAndRunning:
	.string "The generator's up and running.\n"
	.string "It's making electricity to spare.$"

PowerPlant1_Text_Engineer2PowerPlantUpAndRunning:
	.string "This POWER PLANT had been\n"
	.string "abandoned in the past.\p"
	.string "We got it back up and running to\n"
	.string "provide power to the MAGNET\l"
	.string "TRAIN.$"

PowerPlant1_Text_Engineer2GeneratorIsRunningAgain:
	.string "The generator's running again!$"

PowerPlant1_Text_Officer2ManagerHasBeenSadAndFurious:
	.string "The POWER PLANT's MANAGER is in\n"
	.string "the back room with the generator.\p"
	.string "But since someone wrecked the\n"
	.string "generator, he's been both sad and\l"
	.string "furious…$"

PowerPlant1_Text_Officer2ManagerHasBeenCheerful:
	.string "Since the generator's been fixed,\n"
	.string "the MANAGER has been cheerful.$"

PowerPlant1_Text_Engineer4MagnetTrainConsumesElectricity:
	.string "The MAGNET TRAIN consumes a lot\n"
	.string "of electricity.\p"
	.string "It can't move if the new\n"
	.string "generator isn't operating.$"

PowerPlant1_Text_Engineer4WeCanGetMagnetTrainRunning:
	.string "All right! We can finally get the\n"
	.string "MAGNET TRAIN running again.$"
