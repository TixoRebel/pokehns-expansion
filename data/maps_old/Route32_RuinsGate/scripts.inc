Route32_RuinsGate_MapScripts::
	.byte 0


Route32_RuinsGate_EventScript_PokefanM::
	lock
	faceplayer
	msgbox Route32_RuinsGate_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_RuinsGate_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route32_RuinsGate_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_RuinsGate_Text_PokefanM:
	.string "You're studying the RUINS?\n"
	.string "I see a scientist in the making.$"

Route32_RuinsGate_Text_Youngster:
	.string "There are drawings on stone\n"
	.string "panels.\p"
	.string "I tried moving them.\n"
	.string "I wonder what they are.$"
