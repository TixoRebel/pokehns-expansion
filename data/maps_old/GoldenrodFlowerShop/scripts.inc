GoldenrodFlowerShop_MapScripts::
	.byte 0

GoldenrodFlowerShop_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, GoldenrodFlowerShop_EventScript_Normal
	goto_if_set FLAG_RECEIVED_SQUIRTBOTTLE, GoldenrodFlowerShop_EventScript_GotSquirtBottle
	goto_if_set FLAG_BADGE03_GET, GoldenrodFlowerShop_EventScript_GiveSquirtBottle
	msgbox GoldenrodFlowerShop_Text_Owner1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodFlowerShop_EventScript_GiveSquirtBottle::
	lock
	faceplayer
	msgbox GoldenrodFlowerShop_Text_Owner2, MSGBOX_DEFAULT
	giveitem ITEM_SQUIRT_BOTTLE
	setflag FLAG_RECEIVED_SQUIRTBOTTLE
	closemessage
	release
	end

GoldenrodFlowerShop_EventScript_GotSquirtBottle::
	lock
	faceplayer
	msgbox GoldenrodFlowerShop_Text_Owner3, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodFlowerShop_EventScript_Normal::
	lock
	faceplayer
	msgbox GoldenrodFlowerShop_Text_Owner4, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodFlowerShop_EventScript_Floria1::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, GoldenrodFlowerShop_EventScript_Floria3
	goto_if_set FLAG_BADGE03_GET, GoldenrodFlowerShop_EventScript_Floria2
	msgbox GoldenrodFlowerShop_Text_Floria, MSGBOX_DEFAULT
	closemessage
	release
	end
	
GoldenrodFlowerShop_EventScript_Floria2::
	msgbox GoldenrodFlowerShop_Text_FloriaYouBeatWhitney, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodFlowerShop_EventScript_Floria3::
	msgbox GoldenrodFlowerShop_Text_FloriaItWasAMon, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodFlowerShop_Text_Floria:
	.string "When I told my sis about the jigg-\n"
	.string "-ly tree, she said it's dangerous.\p"
	.string "If I beat WHITNEY, I wonder if\n"
	.string "she'll lend me her water bottle…$"

GoldenrodFlowerShop_Text_Owner1:
.string "Apparently, there is an odd tree\n"
.string "on Route 36.\p"
.string "They say it dances when you water\n"
.string "it...\p"
.string "Oh of course not!\p"
.string "This is a flower shop, so we do\n"
.string "have watering cans...\p"
.string "But I cannot let you have one!\n"
.string "It's too dangerous!\p"
.string "Well, maybe if you manage to\n"
.string "defeat gym leader WHITNEY, it\l"
.string "might be okay.$"

GoldenrodFlowerShop_Text_Owner2:
.string "Apparently, there is an odd tree\n"
.string "on Route 36.\p"
.string "They say it dances when you water\n"
.string "it...\p"
.string "Oh that's a Plain Badge from\p"
.string "The GOLDENROD GYM!\n"
.string "Did you defeat WHITNEY?!\p"
.string "Well, then there's nothing to worry\n"
.string "about, is there?\p"
.string "I'll let you use this SQUIRTBOTTLE\n"
.string "for a while then.. Oh never mind,\l"
.string "Keep it!$"

GoldenrodFlowerShop_Text_Owner3:
.string "The odd tree is on ROUTE 36.\n"
.string "Please be careful!$"

GoldenrodFlowerShop_Text_Owner4:
    .string "Lalala lalalala. Have plenty of\n"
    .string "water, my lovely!$"

GoldenrodFlowerShop_Text_FloriaYouBeatWhitney:
    .string "Wow, you beat WHITNEY? Cool!$"

GoldenrodFlowerShop_Text_FloriaItWasAMon:
    .string "So it really was a POKéMON!$"
