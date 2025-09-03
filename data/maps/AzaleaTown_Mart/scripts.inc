AzaleaTown_Mart_MapScripts::
	.byte 0

AzaleaTown_Mart_EventScriptCooltrainerM::
	lock
	faceplayer
	msgbox AzaleaMart_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Mart_EventScriptBugCatcher::
	lock
	faceplayer
	msgbox AzaleaMart_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaMart_Text_CooltrainerM:
	.string "There's no GREAT BALL here.\n"
	.string "POKé BALLS will have to do.\p"
	.string "I wish KURT would make me some\n"
	.string "of his custom BALLS.$"

AzaleaMart_Text_BugCatcher:
	.string "A GREAT BALL is better for catch-\n"
	.string "ing POKéMON than a POKé BALL.\p"
	.string "But KURT's might be better some-\n"
	.string "times.$"

