Route29_46Gate_MapScripts::
	.byte 0

Route29_46Gate_EventScript_Officer::
	lock
	faceplayer
	msgbox Route29_46Gate_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_46Gate_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route29_46Gate_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_46Gate_Text_Officer:
	.string "You can't climb ledges.\p"
	.string "But you can jump down from\n"
	.string "them to take a shortcut.$"

Route29_46Gate_Text_Youngster:
	.string "Different kinds of POKéMON\n"
	.string "appear past here.\p"
	.string "If you want to catch them all,\p"
	.string "you have to look everywhere.$"
