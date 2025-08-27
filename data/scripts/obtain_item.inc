.set ITEMID, VAR_0x8000
.set AMOUNT, VAR_0x8001

@ HnS PORT REWORK NOTES
@ - The callable scripts here are 
@	Std_ObtainItem         @ STD_OBTAIN_ITEM		| giveitem macro 
@	Std_FindItem           @ STD_FIND_ITEM			| finditem macro
@	Std_ObtainDecoration   @ STD_OBTAIN_DECORATION	| givedecoration macro
@
@ - all other scripts are self-contained
@

@ HnS PORT TODO - implement randomizer functionality
@ Std_RandomItem::
@ 	special RandomItem
@	return
@ 
@ OBTAIN ITEM LOGIC:
@ 
@ 4 Larger Categories
@ - "Obtained"
@ - "Obtained Decoration"
@ - "Found"
@ - "Found Hidden"
@ 
@ 2 Fanfares
@ - MUS_OBTAIN_ITEM
@ - MUS_OBTAIN_TMHM
@ (I feel like there could be a berries fanfare as well - YEAH THERE IS 
@ 
@ RSE => mus_obtain_item, mus_obtain_berry, mus_obtain_tmhm
@ 
@ RG => mus_rg_obtain_key_item
@ 
@ HG => mus_hg_obtain_egg, mus_hg_obtain_berry, mus_hg_obtain_item, mus_hg_obtain_key_item, mus_hg_obtain_tmhm
@ 
@ 
@ ? Outcomes
@ - Put Item in X Pocket
@ - The Bag is Full
@   - Transferred Item to PC instead
@   - The PC is also Full
@ - Transferred Decoration to PC
@ 
@ {STR_VAR_1} #
@ {STR_VAR_2} <Singular/Plural>
@ {STR_VAR_3} <BAG/Pocket> (can the text include the word POCKET?)
@ 
@ {PLAYER} (Obtained/Found) the [hidden] {STR_VAR_2}!		= gText_ObtainedTheItem, gText_FoundTheItem, gText_ObtainedTheHiddenItem, gText_FoundTheHiddenItem
@ {PLAYER} (Obtained/Found) {STR_VAR_1} [hidden] {STR_VAR_2}!	= gText_ObtainedItems,  gText_FoundItems,    gText_ObtainedHiddenItems,   gText_FoundHiddenItems
@ 
@ {PLAYER} put away the {STR_VAR_2} in the {STR_VAR_3} POCKET.	= gText_PutItemInPocket
@ {PLAYER} transferred the {STR_VAR_2} to the PC.			= gText_SentItemToPC
@ 
@ The BAG is full...						= gText_BagIsFull
@ Too bad! The PC is full...					= gText_PCIsFull
@ Too bad! Both the BAG and the PC are full...			= gText_BagAndPCAreFull



@ NOTE - we expect ITEMID (VAR_0x8000) and AMOUNT (VAR_0x8001) to be set when we get here
Std_ObtainItem::
	@specialvar VAR_RESULT, IsRandomItemsActivated
	@call_if_eq VAR_RESULT, TRUE, Std_RandomItem
	@copyvar VAR_0x8006, ITEMID
	@copyvar VAR_0x8005, AMOUNT @ Maybe this copy (ITEMID and AMOUNT into vars) is because 0x8000 and 0x8001 might be edited? doesn't seem likely though?
	checkitemtype ITEMID
	copyvar VAR_0x8007, VAR_RESULT @ store itemtype in VAR_0x8007
	additem ITEMID, AMOUNT		   @ Attempt to add item(s) to bag. Returns false if insufficient space
	call_if_eq VAR_RESULT, FALSE, EventScript_ObtainItemTryPC @ Couldn't add item to bag, try the PC
	call EventScript_ObtainItemMessage
	return

@ HnS PORT DEBUG - attempts to put an item in your PC
EventScript_ObtainItemTryPC::
	goto_if_eq VAR_0x8007, POCKET_KEY_ITEMS, EventScript_ObtainItemTryPCKey		@ if it's a key item, set VAR_0x8007 8 (PC_KEY_ITEMS)
	addpcitem ITEMID, AMOUNT
	goto_if_eq VAR_RESULT, FALSE, EventScript_ObtainItemTryPCContinue			@ if addpcitem failed, set VAR_0x8007 0 (POCKET_NONE)
	goto_if_eq VAR_0x8007, POCKET_TM_HM, EventScript_ObtainItemTryPCTMHM		@ if addpcitem succeeded, and the item is a TM/HM, set VAR_0x8007 7 (PC_TM_HM)
	setvar VAR_0x8007, 6  														@ otherwise, set VAR_0x8007 6 (PC_ITEMS)
	goto EventScript_ObtainItemTryPCContinue
EventScript_ObtainItemTryPCFail:
	setvar VAR_0x8007, 0 @ 
	goto EventScript_ObtainItemTryPCContinue
EventScript_ObtainItemTryPCTMHM:
	setvar VAR_0x8007, 7 @ add TM/HM to PC with appropriate fanfare
	goto EventScript_ObtainItemTryPCContinue
EventScript_ObtainItemTryPCKey:
	setvar VAR_0x8007, 8 @ can't add key item to PC
EventScript_ObtainItemTryPCContinue:
	return 

EventScript_ObtainItemMessage::
	bufferitemnameplural STR_VAR_2, ITEMID, AMOUNT
	@ checkitemtype ITEMID @ already have the itemtype in VAR_0x8007 at this point
	call EventScript_BufferPocketNameAndTryFanfare
	call_if_eq VAR_RESULT, TRUE, EventScript_ObtainedItem
EventScript_ObtainItemMessageSkip:
	return

EventScript_BufferPocketNameAndTryFanfare::
	switch VAR_0x8007
	case POCKET_NONE,		EventScript_NoRoomForItem			@ 0
	case POCKET_ITEMS,      EventScript_BufferItemsPocket		@ 1
	case POCKET_POKE_BALLS, EventScript_BufferPokeballsPocket	@ 2
	case POCKET_TM_HM,      EventScript_BufferTMHMsPocket		@ 3
	case POCKET_BERRIES,    EventScript_BufferBerriesPocket		@ 4
	case POCKET_KEY_ITEMS,  EventScript_BufferKeyItemsPocket	@ 5
	case 6,					EventScript_BufferPCItems			@ 6 PC_ITEMS
	case 7,					EventScript_BufferPCTMHM			@ 7 PC_TM_HM
	case 8,					EventScript_NoRoomForKeyItem		@ 8 PC_KEY_ITEMS
	end

@ NOTE - does bufferstdstring actually change the value of VAR_0x8007 ? betting on not.
EventScript_BufferItemsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
	call EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferKeyItemsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_KEYITEMS
	call EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferPokeballsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_POKEBALLS
	call EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferTMHMsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_TMHMS
	call EventScript_PlayFanfareObtainedTMHM
	return

EventScript_BufferBerriesPocket::
	bufferstdstring STR_VAR_3, STDSTRING_BERRIES
	call EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferPCItems::
	bufferstdstring STR_VAR_3, STDSTRING_YOURPC
	call EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferPCTMHM::
	bufferstdstring STR_VAR_3, STDSTRING_YOURPC
	call EventScript_PlayFanfareObtainedTMHM
	return

@ IN PROGRESS - 

@ HnS PORT NOTE - Expansion has improved logic here for sure
EventScript_ObtainedItem::
	@ compare AMOUNT, 1 @ what is this syntax??
	goto_if_eq AMOUNT, 1, EventScript_ObtainedItemMessage @ If AMOUNT == 1, use singular grammar
	buffernumberstring STR_VAR_1, AMOUNT
	message gText_ObtainedTheItems
	goto EventScript_ContinueObtainedItem
EventScript_ObtainedItemMessage:
	message gText_ObtainedTheItem
EventScript_ContinueObtainedItem:
	delay 10
	showitemdescription
	waitfanfare
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	hideitemdescription
	setvar VAR_RESULT, TRUE
	return

EventScript_NoRoomForItem::
	setvar VAR_RESULT, FALSE
	return

EventScript_PlayFanfareObtainedItem::
	playfanfare MUS_OBTAIN_ITEM
	return

EventScript_PlayFanfareObtainedTMHM::
	playfanfare MUS_OBTAIN_TMHM
	return

Std_ObtainDecoration::
	adddecoration ITEMID
	copyvar VAR_0x8007, VAR_RESULT
	call EventScript_ObtainDecorationMessage
	return

EventScript_ObtainDecorationMessage::
	bufferdecorationname STR_VAR_2, ITEMID
	call_if_eq VAR_0x8007, TRUE, EventScript_ObtainedDecor
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForDecor
	return

EventScript_ObtainedDecor::
	playfanfare MUS_OBTAIN_ITEM
	message gText_ObtainedTheDecor
	waitfanfare
	msgbox gText_TheDecorWasTransferredToThePC, MSGBOX_DEFAULT
	setvar VAR_RESULT, TRUE
	return

EventScript_NoRoomForDecor::
	setvar VAR_RESULT, FALSE
	return

Std_FindItem::
	lock
	faceplayer
	waitse
	@specialvar VAR_RESULT, IsRandomItemsActivated	@ HnS randomizer
	@call_if_eq VAR_RESULT, TRUE, Std_RandomItem
	copyvar VAR_0x8006, ITEMID
	copyvar VAR_0x8005, AMOUNT
	checkitemspace ITEMID, AMOUNT
	copyvar VAR_0x8007, VAR_RESULT
	@ call_if_eq VAR_0x8007, FALSE, EventScript_CheckPCSpace @ HnS ...improvement? don't want to skip communicating what the item is though...
	bufferitemnameplural STR_VAR_2, ITEMID, AMOUNT
	checkitemtype ITEMID
	call EventScript_BufferPocketNameAndTryFanfare
	call_if_eq VAR_0x8007, TRUE, EventScript_PickUpItem
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomToPickUpItem
	release
	return

@ HnS PORT TODO - take a better approach to this sequence
EventScript_CheckPCSpace::
	checkitemtype VAR_0x8004 @ Don't add if it's a key item
	goto_if_eq VAR_RESULT, POCKET_KEY_ITEMS, EventScript_CheckPCSpaceContinue
	pyramid_inchallenge
	copyvar VAR_0x8004, ITEMID  @ pyramid_inchallenge modifies VAR_0x8004
	goto_if_eq VAR_RESULT, TRUE, EventScript_CheckPCSpaceContinue
	checkpcspace VAR_0x8004, VAR_0x8005
	call_if_eq VAR_RESULT, FALSE, EventScript_CheckPCSpaceContinue
	setvar VAR_0x8007, 2  @ (0= full, 1= in pocket, 2=in PC) 
EventScript_CheckPCSpaceContinue:
	return

EventScript_PickUpItem::
	removeobject VAR_LAST_TALKED
	additem VAR_0x8004, VAR_0x8005
	copyvar VAR_0x8006 VAR_0x8004
	specialvar VAR_RESULT, BufferTMHMMoveName
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, TRUE, EventScript_FoundTMHM
	call_if_eq VAR_0x8008, FALSE, EventScript_FoundItem
	delay 10
	showitemdescription
	waitfanfare
	waitmessage
	bufferitemnameplural STR_VAR_2, VAR_0x8004, VAR_0x8005
	pyramid_getlocation
	goto_if_eq VAR_RESULT, PYRAMID_LOCATION_FLOOR, EventScript_PutBattlePyramidItemInBag
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	hideitemdescription
	return

EventScript_PutBattlePyramidItemInBag::
	msgbox gText_PlayerPutItemInBag, MSGBOX_DEFAULT
	hideitemdescription
	return

EventScript_FoundTMHM::
	bufferitemnameplural STR_VAR_1, VAR_0x8004, VAR_0x8005
	compare VAR_0x8005, 2
	goto_if_lt EventScript_FoundTMHMMessage
	buffernumberstring STR_VAR_3, VAR_0x8005
	message gText_PlayerFoundTMHMs
	goto EventScript_BufferTMHMsPocket
	return
EventScript_FoundTMHMMessage::
	message gText_PlayerFoundOneTMHM
	return

EventScript_FoundItem::
	compare VAR_0x8001, TRUE
	goto_if_eq EventScript_FoundItemMessage
	buffernumberstring STR_VAR_1, VAR_0x8001
	message gText_PlayerFoundItems
	return
EventScript_FoundItemMessage::
	message gText_PlayerFoundOneItem
	return

EventScript_NoRoomToPickUpItem::
	msgbox gText_ObtainedTheItem, MSGBOX_DEFAULT
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	return

EventScript_HiddenItemScript::
	lockall
	waitse
	copyvar VAR_0x8006, VAR_0x8005
	additem VAR_0x8005
	copyvar VAR_0x8007, VAR_RESULT
	bufferitemnameplural STR_VAR_2, VAR_0x8005, 1
	checkitemtype VAR_0x8005
	call EventScript_BufferPocketNameAndTryFanfare
	goto_if_eq VAR_0x8007, TRUE, EventScript_PickUpHiddenItem
	goto_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForHiddenItem
	end

EventScript_PickUpHiddenItem::
	copyvar VAR_0x8008, VAR_0x8004
	copyvar VAR_0x8004, VAR_0x8005
	specialvar VAR_RESULT, BufferTMHMMoveName
	goto_if_eq VAR_RESULT, TRUE, EventScript_FoundHiddenTMHM
	goto_if_eq VAR_RESULT, FALSE, EventScript_FoundHiddenItem
	end

EventScript_FoundHiddenTMHM::
	bufferitemnameplural STR_VAR_1, VAR_0x8004, 1
	message gText_PlayerFoundOneTMHM
	goto EventScript_PutHiddenItemInPocket
	end

EventScript_FoundHiddenItem::
	message gText_PlayerFoundOneItem
	goto EventScript_PutHiddenItemInPocket
	end

EventScript_PutHiddenItemInPocket::
	delay 10
	showitemdescription
	waitmessage
	waitfanfare
	bufferitemnameplural STR_VAR_2, VAR_0x8004, 1
	copyvar VAR_0x8004, VAR_0x8008
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	hideitemdescription
	special TryPutTreasureInvestigatorsOnAir
	special SetHiddenItemFlag
	releaseall
	end

EventScript_NoRoomForHiddenItem::
	msgbox gText_PlayerFoundOneItem, MSGBOX_DEFAULT
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	releaseall
	end
