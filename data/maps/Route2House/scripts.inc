Route2House_MapScripts::
	.byte 0

Route2House_EventScript_Man::
	goto_if_set FLAG_GOT_ROUTE2_NUGGET, Route2House_EventScript_ManAfter
	msgbox Route2House_Text_Fisher, MSGBOX_NPC 
	giveitem ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route2House_EventScript_ManAfter, MSGBOX_NPC
	setflag FLAG_GOT_ROUTE2_NUGGET
	end

Route2House_EventScript_ManAfter::
	msgbox Route2House_Text_Fisher_GotNugget, MSGBOX_NPC
	end

Route2House_Text_Fisher:
	.string "Hi! Wow, I'm glad to see you.\p"
	.string "You're the first visitor I've had in a\n"
	.string "long time.\p"
	.string "I'm super-happy! Let me give you a\n"
	.string "little present.$"

Route2House_Text_Fisher_GotNugget:
	.string "That's a NUGGET.\p"
	.string "I can't give you any nuggets of\n"
	.string "wisdom, so that'll have to do!$"
