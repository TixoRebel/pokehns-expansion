GoldenrodGameCorner_MapScripts::
	.byte 0

GoldenrodGameCorner_PrizeRoom_EventScript_PrizeClerkMons::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
	goto GoldenrodGameCorner_PrizeRoom_EventScript_ChoosePrizeMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
	showcoinsbox 1, 1
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	multichoice 20, 0, MULTI_PRIZE_MONS, FALSE
	switch VAR_RESULT
	case 0, GoldenrodGameCorner_PrizeRoom_EventScript_Abra
	case 1, GoldenrodGameCorner_PrizeRoom_EventScript_Clefairy
	case 2, GoldenrodGameCorner_PrizeRoom_EventScript_Munchlax
	case 3, GoldenrodGameCorner_PrizeRoom_EventScript_Dratini
	case 4, GoldenrodGameCorner_PrizeRoom_EventScript_Porygon
	case 5, GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange
	case 127, GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange::
	hidecoinsbox 0, 0
	closemessage
	release
	end

GoldenrodGameCorner_PrizeRoom_EventScript_Abra::
	setvar VAR_TEMP_1, SPECIES_ABRA
	setvar VAR_TEMP_2, 120
	goto GoldenrodGameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_Clefairy::
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
	setvar VAR_TEMP_2, 500
	goto GoldenrodGameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_Munchlax::
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	setvar VAR_TEMP_2, 2800
	goto GoldenrodGameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_Dratini::
	setvar VAR_TEMP_1, SPECIES_DRATINI
	setvar VAR_TEMP_2, 5500
	goto GoldenrodGameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_Porygon::
	setvar VAR_TEMP_1, SPECIES_PORYGON
	setvar VAR_TEMP_2, 6500
	goto GoldenrodGameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	msgbox GoldenrodGameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange
	checkcoins VAR_RESULT
	goto_if_lt VAR_RESULT, VAR_TEMP_2, GoldenrodGameCorner_PrizeRoom_EventScript_NotEnoughCoins
	switch VAR_TEMP_1
	updatecoinsbox 1, 1
	playse SE_SHOP
	case SPECIES_ABRA,     GoldenrodGameCorner_PrizeRoom_EventScript_GiveAbra
	case SPECIES_CLEFAIRY, GoldenrodGameCorner_PrizeRoom_EventScript_GiveClefairy
	case SPECIES_DRATINI,  GoldenrodGameCorner_PrizeRoom_EventScript_GiveDratini
	case SPECIES_MUNCHLAX,  GoldenrodGameCorner_PrizeRoom_EventScript_GiveMunchlax
	case SPECIES_PORYGON,  GoldenrodGameCorner_PrizeRoom_EventScript_GivePorygon
	case SPECIES_PINSIR,   GoldenrodGameCorner_PrizeRoom_EventScript_GivePinsir
	end

GoldenrodGameCorner_PrizeRoom_EventScript_GiveAbra::
	givemon VAR_TEMP_1, 15
	goto GoldenrodGameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_GiveClefairy::
	givemon VAR_TEMP_1, 15
	goto GoldenrodGameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_GiveDratini::
	givemon VAR_TEMP_1, 15
	goto GoldenrodGameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_GiveMunchlax::
	givemon VAR_TEMP_1, 15
	goto GoldenrodGameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_GivePorygon::
	givemon VAR_TEMP_1, 15
	goto GoldenrodGameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_GivePinsir::
	givemon VAR_TEMP_1, 15
	goto GoldenrodGameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodGameCorner_PrizeRoom_EventScript_CheckReceivedMon::
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	goto_if_eq VAR_RESULT, 0, GoldenrodGameCorner_PrizeRoom_EventScript_ReceivedMonParty
	goto_if_eq VAR_RESULT, 1, GoldenrodGameCorner_PrizeRoom_EventScript_ReceivedMonPC
	goto_if_eq VAR_RESULT, 2, GoldenrodGameCorner_PrizeRoom_EventScript_PartyFull
	end

GoldenrodGameCorner_PrizeRoom_EventScript_PartyFull::
	msgbox Route119_WeatherInstitute_2F_Text_NoRoomForPokemon
	hidecoinsbox 0, 0
	closemessage
	release
	end

GoldenrodGameCorner_PrizeRoom_EventScript_NicknamePartyMon::
	getpartysize
	subvar VAR_RESULT, 1
	copyvar VAR_0x8004, VAR_RESULT
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodGameCorner_PrizeRoom_EventScript_NeedCoinCase::
	msgbox GoldenrodGameCorner_Text_PrizeVendorNoCoinCase
	release
	end

GoldenrodGameCorner_PrizeRoom_EventScript_NotEnoughCoins::
	msgbox GoldenrodGameCorner_Text_PrizeVendorNeedMoreCoins
	goto GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodGameCorner_PrizeRoom_EventScript_ReceivedMonParty::
	removecoins VAR_TEMP_2
	playse SE_SHOP
	updatecoinsbox 1, 1
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message GoldenrodGameCorner_Text_PlayerObtainedTheMon
	waitmessage
	waitfanfare
	msgbox GoldenrodGamecorner_Text_GiveNicknameToThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, GoldenrodGameCorner_PrizeRoom_EventScript_NicknamePartyMon
	goto GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodGameCorner_PrizeRoom_EventScript_ReceivedMonPC::
	removecoins VAR_TEMP_2
	playse SE_SHOP
	updatecoinsbox 1, 1
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message GoldenrodGameCorner_Text_PlayerObtainedTheMon
	waitmessage
	waitfanfare
	goto GoldenrodGameCorner_PrizeRoom_EventScript_TransferredToPC
	end

GoldenrodGameCorner_PrizeRoom_EventScript_TransferredToPC::
	call Common_EventScript_TransferredToPC
	goto GoldenrodGameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodGameCorner_PrizeRoom_EventScript_PartyMon::
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	end
	
GoldenrodGameCorner_PrizeRoom_EventScript_PcMon::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodGameCorner_EventScript_SendMon
	call Common_EventScript_NameReceivedBoxMon
	goto GoldenrodGameCorner_EventScript_SendMon
	closemessage
	hidecoinsbox 0, 0
	release
	end

GoldenrodGameCorner_EventScript_SendMon::
	call Common_EventScript_TransferredToPC
	closemessage
	hidecoinsbox 0, 0
	release
	end

GoldenrodGameCorner_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_PokefanM1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_EventScript_Hiker::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_MoveTutorInside, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_EventScript_Gentleman::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_EventScript_PokefanM2::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_PokefanM2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_EventScript_CooltrainerM::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_EventScript_Pharmacist::
	lock
	faceplayer
	msgbox GoldenrodGameCorner_Text_Pharmacist, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodGameCorner_PrizeRoom_Text_YouWantPrize:
	.string "{STR_VAR_1} is what you want?$"

GoldenrodGameCorner_Text_PlayerObtainedTheMon:
	.string "{PLAYER} got {STR_VAR_1}!$"

GoldenrodGamecorner_Text_GiveNicknameToThisMon:
	.string "Nickname {STR_VAR_1}?$"

GoldenrodGameCorner_Text_PrizeVendorIntro:
    .string "Welcome!\p"
    .string "We exchange your game coins for\n"
    .string "fabulous prizes!$"

GoldenrodGameCorner_Text_PrizeVendorWhichPrize:
    .string "Which prize would you like?$"

GoldenrodGameCorner_Text_PrizeVendorHereYouGo:
    .string "Here you go!$"

GoldenrodGameCorner_Text_PrizeVendorNeedMoreCoins:
    .string "Sorry! You need more coins.$"

GoldenrodGameCorner_Text_PrizeVendorNoMoreRoom:
    .string "Sorry. You can't carry any more.$"

GoldenrodGameCorner_Text_PrizeVendorQuit:
    .string "OK. Please save your coins and come\n"
    .string "again!$"

GoldenrodGameCorner_Text_PrizeVendorNoCoinCase:
    .string "Oh? You don't have a COIN CASE.$"

GoldenrodGameCorner_Text_Pharmacist:
    .string "I always play this slot machine.\n"
    .string "It pays out more than others,\l"
    .string "I think.$"

GoldenrodGameCorner_Text_Woman:
    .string "I can't stop winning!$"

GoldenrodGameCorner_Text_PokefanM1:
    .string "I just love this new slot machine.\p"
    .string "It's more of a challenge than the\n"
    .string "ones in CELADON.$"

GoldenrodGameCorner_Text_CooltrainerM:
    .string "Life is a gamble. I'm going to pull\n"
    .string "till I drop!$"

GoldenrodGameCorner_Text_PokefanF:
    .string "Roulette…\p"
    .string "I prefer it over the slots because\n"
    .string "it's easier to figure the odds.\p"
    .string "But the payout is much lower.$"

GoldenrodGameCorner_Text_CooltrainerF:
    .string "I won't quit until I win!$"

GoldenrodGameCorner_Text_Gentleman:
    .string "I taught BLIZZARD to my POKéMON.\p"
    .string "It was hard to get enough coins for\n"
    .string "it, but it was worth it.$"

GoldenrodGameCorner_Text_PokefanM2:
    .string "I couldn't win at the slots, and I\n"
    .string "blew it on roulette.\p"
    .string "I got so furious, I tossed out my\n"
    .string "COIN CASE in the UNDERGROUND.$"

GoldenrodGameCorner_Text_MoveTutorInside:
    .string "Wahahah! The coins keep rolling in!$"

GoldenrodGameCorner_Text_LeftTheirDrink:
    .string "Someone left their drink.\p"
    .string "It smells sweet.$"
