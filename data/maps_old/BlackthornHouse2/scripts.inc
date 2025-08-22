BlackthornHouse2_MapScripts::
	.byte 0

BlackthornHouse2_EventScript_Emy::
	lock
	faceplayer
	goto_if_set FLAG_BLACKTHORN_NPC_TRADE_COMPLETED, BlackthornHouse2_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MR_MIME
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox BlackthornHouse2_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BlackthornHouse2_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BlackthornHouse2_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, BlackthornHouse2_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BlackthornHouse2_Text_MonYouTakeCare, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_BLACKTHORN_NPC_TRADE_COMPLETED
	releaseall
	end

BlackthornHouse2_EventScript_DeclineTrade::
	msgbox BlackthornHouse2_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

BlackthornHouse2_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BlackthornHouse2_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

BlackthornHouse2_EventScript_TradeCompleted::
	msgbox BlackthornHouse2_Text_After, MSGBOX_DEFAULT
	release
	end

BlackthornHouse2_Text_YouWillTradeWontYou:
	.string "I collect POKéMON!\n"
	.string "Do you have a {STR_VAR_1}?\p"
	.string "Want to trade it for my\n"
	.string "{STR_VAR_2}?$"

BlackthornHouse2_Text_MonYouTakeCare:
	.string "Yay! I got myself {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, you take care!$"

BlackthornHouse2_Text_ThisIsntAMon:
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"

BlackthornHouse2_Text_YouWontTradeMe:
	.string "You don't want to trade? Aww...$"

BlackthornHouse2_Text_After:
	.string "Hi, how's my old MR MIME doing?$"
