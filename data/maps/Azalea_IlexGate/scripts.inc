Azalea_IlexGate_MapScripts::
	.byte 0

Azalea_IlexGate_EventScript_Officer::
	lock
	faceplayer
	msgbox Azalea_IlexGate_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Azalea_IlexGate_EventScript_Granny::
	lock
	faceplayer
	msgbox Azalea_IlexGate_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

Azalea_IlexGate_Text_Officer:
	.string "ILEX FOREST is big.\n"
	.string "Be careful!\n"
	.string "Don't get lost.$"

Azalea_IlexGate_Text_Granny:
	.string "The FOREST is watched\n"
	.string "over by its protector.\p"
	.string "Stay out of mischief!$"
