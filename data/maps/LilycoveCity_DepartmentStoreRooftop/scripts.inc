# 1 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
.set LOCALID_CYNTHIA, 5
# 3 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
.set LOCALID_LANCE, 6
# 4 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_MapScripts::
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
# 7 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition:
# 10 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
# 12 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
# 13 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	special ShowHideObjectsBasedOnDay
# 14 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 16 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 18 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 19 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 20 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
# 21 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 22 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 23 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
# 25 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 26 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 27 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message gText_HowMayIServeYou
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 29 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
# 30 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.align 2
# 35 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:
# 36 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_MUD_BALL
# 37 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_LENGTH
# 38 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 39 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TIRE
# 40 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SOLID_BOARD
# 42 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SAND_ORNAMENT
# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_STAND
# 44 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SLIDE
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TV
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_ROUND_TV
# 47 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_CUTE_TV
# 48 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_WAILMER_DOLL
# 49 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_RHYDON_DOLL
# 50 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte 0
# 51 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 52 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 54 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
# 55 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 57 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 58 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
# 59 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 61 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 62 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 63 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
# 64 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
# 65 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 67 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 72 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
# 73 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 74 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmoneybox 0, 0
# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 79 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 83 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_1
# 84 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
# 85 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
# 87 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 89 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 91 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
# 92 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 93 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 94 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 96 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 99 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 101 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
# 102 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 103 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 105 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 106 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
# 107 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 200
# 108 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 110 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
# 111 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 300
# 112 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 113 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
# 115 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 350
# 116 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 117 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 118 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
# 119 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 200
# 120 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 121 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 122 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
# 123 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 300
# 124 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 126 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
# 127 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 350
# 128 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 129 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 130 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
# 131 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
# 132 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
# 133 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
# 134 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
# 135 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 136 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 137 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
# 138 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
# 140 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	updatemoneybox
# 141 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 142 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 144 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 145 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 146 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 147 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 148 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 chance of an additional drink dropping
# 149 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 150 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 152 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 153 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 154 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 155 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 156 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 157 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 158 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 * the prev 1/64 chance of a third additional drink dropping, ~ 0.02% chance
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 160 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 161 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 162 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 163 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 164 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 165 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 166 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 167 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 169 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 170 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 171 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
# 172 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 173 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 175 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 176 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 177 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
# 178 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 180 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 182 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
# 183 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 184 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 186 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 187 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
# 188 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemoneybox
# 189 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
# 190 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 191 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 192 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales:
# 193 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Don't they have set dates for their\n"
# 194 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "clear-out sales?\p"
# 195 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "I watch TV, but they never show any\n"
# 196 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "commercials.$"
# 197 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 198 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale:
# 199 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Yes! I've been waiting a long time for\n"
# 200 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "this clear-out sale.\p"
# 201 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "They have items that you can only get\n"
# 202 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "here. I'm going to load up, that I am!$"
# 203 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 204 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty:
# 205 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Ohh… I'm bone-dry thirsty!$"
# 206 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 207 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike:
# 208 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "It's a Vending Machine.\n"
# 209 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Which drink would you like?$"
# 210 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 211 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown:
# 212 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 213 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "A can of {STR_VAR_1} dropped down.$"
# 214 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 215 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown:
# 216 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 217 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Score! An extra can of {STR_VAR_1}\n"
# 218 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "dropped down!$"
# 219 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 220 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney:
# 221 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Not enough money…$"
# 222 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 223 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink:
# 224 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Decided against buying a drink.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance::
# 227 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 228 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LANCE, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_4
LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_3:
# 242 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_3, MSGBOX_YESNO
# 245 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_7
# 250 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_6, MSGBOX_NPC
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_1:
# 255 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 256 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removeobject LOCALID_LANCE
# 257 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 258 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_2:
# 229 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 230 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_0, MSGBOX_AUTOCLOSE
# 236 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	trainerbattle_no_intro TRAINER_LANCE, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_1
# 237 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_2, MSGBOX_AUTOCLOSE
# 239 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_DEFEATED_LANCE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_1

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_4:
# 228 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_2
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_3

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_7:
# 246 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	trainerbattle_no_intro TRAINER_LANCE, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_4
# 247 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_5, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_1


LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia::
# 262 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_unset FLAG_DEFEATED_CYNTHIA, LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_4
LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_3:
# 277 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 278 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_3, MSGBOX_YESNO
# 280 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_7
# 285 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_6, MSGBOX_NPC
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_1:
# 290 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 291 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removeobject LOCALID_CYNTHIA
# 292 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 293 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_2:
# 264 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 265 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_0, MSGBOX_AUTOCLOSE
# 271 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_1
# 272 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_2, MSGBOX_AUTOCLOSE
# 274 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_DEFEATED_CYNTHIA
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_1

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_4:
# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_2
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_3

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_7:
# 281 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_4
# 282 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_1, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_1


LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_0:
# 230 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Hello, there!\p"
	.string "You're the new Champion of Hoenn,\n"
	.string "{PLAYER}, I hear!\p"
	.string "My name is Lance!\n"
	.string "I am the Champion of Kanto and Johto!\p"
	.string "Now, let's duel, shall we?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_1:
# 236 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "You really are the strongest!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_2:
# 237 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "You fought well, young Trainer!\p"
	.string "Let's meet again, sometime!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_3:
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Would you like another battle,\n"
	.string "{PLAYER}?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_4:
# 246 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "That was fun!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_5:
# 247 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Let's battle again, next Friday!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Lance_Text_6:
# 250 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "That's fine.\n"
	.string "I'll be here til midnight.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_0:
# 265 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Hello, there!\p"
	.string "You're the new Champion of Hoenn,\n"
	.string "{PLAYER}, I hear!\p"
	.string "My name is Cynthia!\n"
	.string "I am the Champion of Sinnoh!\p"
	.string "Now, let's dance, shall we?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Cynthia_Text_1:
# 282 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Let's battle again, next Saturday!$"
