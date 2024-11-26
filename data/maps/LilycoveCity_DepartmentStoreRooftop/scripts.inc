
.set LOCALID_CYNTHIA, 5
.set LOCALID_LANCE, 6

LilycoveCity_DepartmentStoreRooftop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
	.byte 0

LilycoveCity_DepartmentStoreRooftop_OnTransition:
	getpokenewsactive POKENEWS_LILYCOVE
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
	special ShowHideObjectsBasedOnDay
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:
	.2byte DECOR_MUD_BALL
	.2byte DECOR_FENCE_LENGTH
	.2byte DECOR_FENCE_WIDTH
	.2byte DECOR_TIRE
	.2byte DECOR_BREAKABLE_DOOR
	.2byte DECOR_SOLID_BOARD
	.2byte DECOR_SAND_ORNAMENT
	.2byte DECOR_STAND
	.2byte DECOR_SLIDE
	.2byte DECOR_TV
	.2byte DECOR_ROUND_TV
	.2byte DECOR_CUTE_TV
	.2byte DECOR_WAILMER_DOLL
	.2byte DECOR_RHYDON_DOLL
	.2byte 0
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
	lock
	faceplayer
	getpokenewsactive POKENEWS_LILYCOVE
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
	lockall
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
	waitmessage
	showmoneybox 0, 0
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
	copyvar VAR_TEMP_1, VAR_RESULT
	switch VAR_TEMP_1
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
	setvar VAR_TEMP_0, ITEM_SODA_POP
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
	setvar VAR_TEMP_0, ITEM_LEMONADE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
	checkmoney 200
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
	checkmoney 300
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
	checkmoney 350
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
	removemoney 200
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
	removemoney 300
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
	removemoney 350
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
	checkitemspace VAR_TEMP_0
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
	updatemoneybox
	bufferitemname STR_VAR_1, VAR_TEMP_0
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname STR_VAR_2, VAR_TEMP_0
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	random 64  @ 1/64 chance of an additional drink dropping
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname STR_VAR_2, VAR_TEMP_0
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	random 64  @ 1/64 * the prev 1/64 chance of a third additional drink dropping, ~ 0.02% chance
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0
	goto_if_eq VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname STR_VAR_2, VAR_TEMP_0
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
	waitmessage
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
	hidemoneybox
	releaseall
	end

LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales:
	.string "Don't they have set dates for their\n"
	.string "clear-out sales?\p"
	.string "I watch TV, but they never show any\n"
	.string "commercials.$"

LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale:
	.string "Yes! I've been waiting a long time for\n"
	.string "this clear-out sale.\p"
	.string "They have items that you can only get\n"
	.string "here. I'm going to load up, that I am!$"

LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty:
	.string "Ohh… I'm bone-dry thirsty!$"

LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike:
	.string "It's a Vending Machine.\n"
	.string "Which drink would you like?$"

LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown:
	.string "Clang!\p"
	.string "A can of {STR_VAR_1} dropped down.$"

LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown:
	.string "Clang!\p"
	.string "Score! An extra can of {STR_VAR_1}\n"
	.string "dropped down!$"

LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney:
	.string "Not enough money…$"

LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink:
	.string "Decided against buying a drink.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance::
	lockall
	goto_if_unset FLAG_DEFEATED_LANCE, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_4
LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_3:
	faceplayer
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_7
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_6, MSGBOX_NPC
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_1:
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LANCE
	fadescreen FADE_FROM_BLACK
	releaseall
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_2:
	faceplayer
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_0, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_LANCE, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_1
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_2, MSGBOX_AUTOCLOSE
	setflag FLAG_DEFEATED_LANCE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_1

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_4:
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_2
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_3

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_7:
	trainerbattle_no_intro TRAINER_LANCE, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_4
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_5, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_1


LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia::
	lockall
	goto_if_unset FLAG_DEFEATED_CYNTHIA, LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_4
LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_3:
	faceplayer
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_7
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_6, MSGBOX_NPC
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_1:
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_CYNTHIA
	fadescreen FADE_FROM_BLACK
	releaseall
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_2:
	faceplayer
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_0, MSGBOX_AUTOCLOSE
	trainerbattle_no_intro TRAINER_CYNTHIA, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_1
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_2, MSGBOX_AUTOCLOSE
	setflag FLAG_DEFEATED_CYNTHIA
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_1

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_4:
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_2
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_3

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_7:
	trainerbattle_no_intro TRAINER_CYNTHIA, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_4
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_1, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_1


LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_0:
	.string "Hello, there!\p"
	.string "You're the new Champion of Hoenn,\n"
	.string "{PLAYER}, I hear!\p"
	.string "My name is Lance!\n"
	.string "I am the Champion of Kanto and Johto!\p"
	.string "Now, let's duel, shall we?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_1:
	.string "You really are the strongest!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_2:
	.string "You fought well, young Trainer!\p"
	.string "Let's meet again, sometime!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_3:
	.string "Would you like another battle,\n"
	.string "{PLAYER}?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_4:
	.string "That was fun!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_5:
	.string "Let's battle again, next Friday!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_6:
	.string "That's fine.\n"
	.string "I'll be here til midnight.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_0:
	.string "Hello, there!\p"
	.string "You're the new Champion of Hoenn,\n"
	.string "{PLAYER}, I hear!\p"
	.string "My name is Cynthia!\n"
	.string "I am the Champion of Sinnoh!\p"
	.string "Now, let's dance, shall we?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_1:
	.string "Let's battle again, next Saturday!$"
