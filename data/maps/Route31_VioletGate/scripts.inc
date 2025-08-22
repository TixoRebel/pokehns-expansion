Route31_VioletGate_MapScripts::
	.byte 0

Route31_VioletGate_EventScript_Policeman::
	lock
	faceplayer
	msgbox Route31_VioletGate_Text_Policeman, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_VioletGate_EventScript_CooltrainerF::
	lock
	faceplayer
	msgbox Route31_VioletGate_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_VioletGate_Text_Policeman:
	.string "Hi there! Did you visit\n"
	.string "SPROUT TOWER?$"

Route31_VioletGate_Text_CooltrainerF:
	.string "I saw the cutest POKéMON out\n"
	.string "there.\p"
	.string "It looked a lot like PIKACHU!$"
