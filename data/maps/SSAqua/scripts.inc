.set LOCALID_SSAQUA_SLEEPYSAILOR, 1

SSAqua_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, SSAquaRoomNW_OnTransition
	.byte 0

SSAquaRoomNW_OnTransition::
    goto_if_ge VAR_SSAQUA_STATE, 3, SSAquaRoomNW_SetTrainerPos
    end

SSAquaRoomNW_SetTrainerPos::
    setobjectxyperm 2, 2, 6
    setobjectxyperm 3, 4, 3
    end

SSAquaRoomNW_EventScript_Stanly::
    lock
    faceplayer
    msgbox SSAquaRoomNW_Text_SailorStanlySeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_STANLY, SSAquaRoomNW_Text_SailorStanlyBeaten
	msgbox SSAquaRoomNW_Text_SailorStanlyAfterBattle, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    delay 60
    playse SE_DOOR
    removeobject LOCALID_SSAQUA_SLEEPYSAILOR
    fadescreenswapbuffers FADE_FROM_BLACK
    setvar VAR_SSAQUA_STATE, 3
	end

SSAquaRoomNW_EventScript_Edward::
    trainerbattle_single TRAINER_EDWARD SSAquaRoomNW_Text_GentlemanEdwardSeen, SSAquaRoomNW_Text_GentlemanEdwardBeaten
	msgbox SSAquaRoomNW_Text_GentlemanEdwardAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomNW_EventScript_Corey::
    trainerbattle_single TRAINER_COREY SSAquaRoomNW_Text_BurglarCoreySeen, SSAquaRoomNW_Text_BurglarCoreyBeaten
	msgbox SSAquaRoomNW_Text_BurglarCoreyAfterBattle, MSGBOX_AUTOCLOSE
	end


SSAquaRoomNW_Text_SailorStanlySeen:
	.string "Yeah, I'm a sailor, all right.\p"
	.string "I wasn't goofing off!\p"
	.string "This cabin was vacant, so I\n"
	.string "just took a quick nap!\p"
	.string "Ah, forget it! Let's battle!$"

SSAquaRoomNW_Text_SailorStanlyBeaten:
	.string "Sorry! It's all my fault!$"

SSAquaRoomNW_Text_SailorStanlyAfterBattle:
	.string "Being a sailor, I have to do\n"
	.string "physical labor. It's exhausting!$"

SSAquaRoomNW_Text_GentlemanEdwardSeen:
	.string "Oh, no. I've lost something\n"
	.string "that's very important.$"

SSAquaRoomNW_Text_GentlemanEdwardBeaten:
	.string "I… I can't find it…$"

SSAquaRoomNW_Text_GentlemanEdwardAfterBattle:
	.string "I give up. You don't have to\n"
	.string "look.\p"
	.string "Just forget about it!$"

SSAquaRoomNW_Text_BurglarCoreySeen:
	.string "Yeehaw! Lucky!$"

SSAquaRoomNW_Text_BurglarCoreyBeaten:
	.string "How unlucky! I lost!$"

SSAquaRoomNW_Text_BurglarCoreyAfterBattle:
	.string "I found a pretty coin here.\p"
	.string "Someone must have lost it…$"
