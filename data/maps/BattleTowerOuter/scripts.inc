BattleTowerOuter_MapScripts::
	.byte 0

BattleTowerOuter_EventScript_BattleTowerSign::
	lock
	msgbox BattleTowerOutsideSignText, MSGBOX_SIGN	
	closemessage	
	release
	end
	
BattleTowerOuter_EventScript_Engineer::
	lock
	faceplayer
	msgbox BattleTowerOutsideText_Closed, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOuter_EventScript_Youngster::
	lock
	faceplayer
	msgbox BattleTowerOutsideYoungsterText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOuter_EventScript_Beauty::
	lock
	faceplayer
	msgbox BattleTowerOutsideBeautyText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOuter_EventScript_Sailor::
	lock
	faceplayer
	msgbox BattleTowerOutsideSailorText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOutsideYoungsterText:
	.string "Wow, the BATTLE TOWER is huge!\p"
	.string "There must be many kinds of\n"
	.string "POKéMON in there!$"

BattleTowerOutsideBeautyText:
	.string "You can use only three POKéMON.\p"
	.string "It's so hard to decide which\n"
	.string "three should go into battle…$"

BattleTowerOutsideSailorText:
	.string "Hehehe, I snuck out from work.\p"
	.string "I can't bail out until I've won!\p"
	.string "I have to win it all. That I must!$"

BattleTowerOutsideSignText:
	.string "BATTLE TOWER\p"
	.string "Take the Ultimate Trainer\n"
	.string "Challenge!$"

BattleTowerOutsideText_Closed:
	.string "The BATTLE TOWER's is currently\n"
	.string "closed for repairs$"
