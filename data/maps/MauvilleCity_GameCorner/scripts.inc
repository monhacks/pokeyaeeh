# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    @ Game Corner prices
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set PORYGON_COINS,  	2500
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set MUNCHLAX_COINS,  	2000
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set GIMMIGHOUL_COINS,  10000
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set RARE_MON_COINS,  	1000
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set STARTER_COINS, 	500
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS,  		1000
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  500
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 5000
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPokemon, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChoosePokemonPrizeMessage
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerPokemon::
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPokemon, MSGBOX_DEFAULT
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChoosePokemonPrizeMessage
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChoosePokemonPrizeMessage::
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPokemon
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChoosePokemonPrize
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChoosePokemonPrize::
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_POKEMON
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special ShowScrollableMultichoice
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Porygon
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Munchlax
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Eevee
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_Farfetchd
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_Honedge
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_Hawlucha
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_Mimikyu
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_Toxel
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_Gimmighoul
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Porygon::
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, PORYGON_COINS
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Munchlax::
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, MUNCHLAX_COINS
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Eevee::
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EEVEE
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, RARE_MON_COINS
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Farfetchd::
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FARFETCHD_GALARIAN
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, RARE_MON_COINS
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Honedge::
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HONEDGE
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, RARE_MON_COINS
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Hawlucha::
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HAWLUCHA
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, RARE_MON_COINS
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Mimikyu::
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MIMIKYU
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, RARE_MON_COINS
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Toxel::
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOXEL
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_NONE
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, RARE_MON_COINS
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gimmighoul::
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GIMMIGHOUL_ROAMING
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_GIMMIGHOUL_COIN
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, GIMMIGHOUL_COINS
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize::
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsThePokemonX, MSGBOX_YESNO
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8007
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_0x8007, VAR_0x8006
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPokemon
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivePokemon
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelPokemonSelect::
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPokemon::
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChoosePokemonPrizeMessage
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivePokemon::
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins VAR_0x8006
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_1, 0, VAR_TEMP_2, ITEM_CHERISH_BALL
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReceivePokemonParty
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReceivePokemonPC
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivePokemonParty::
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_ReceivedPokemonFanfare
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivePokemonPC::
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_ReceivedPokemonFanfare
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SendPokemonToPC
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SendPokemonToPC
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SendPokemonToPC::
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_TransferredToPC
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedPokemonFanfare::
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_PlayerReceivedPokemon
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitfanfare
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon::
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_TakeCareOfPokemon, MSGBOX_DEFAULT
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerStarter::
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPokemon, MSGBOX_DEFAULT
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChooseStarterPrizeMessage
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseStarterPrizeMessage::
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichStarterType
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 0, 0, MULTI_GRASS_FIRE_WATER, 0
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseGrassStarter
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseFireStarter
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseWaterStarter
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseGrassStarter::
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_GRASS_STARTERS
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, STARTER_COINS
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special ShowScrollableMultichoice
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Bulbasaur
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Chikorita
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Treecko
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_Turtwig
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_Snivy
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_Chespin
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_Rowlet
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_Grookey
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_Sprigatito
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseFireStarter::
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_FIRE_STARTERS
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, STARTER_COINS
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special ShowScrollableMultichoice
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Charmander
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Cyndaquil
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Torchic
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_Chimchar
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_Tepig
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_Fennekin
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_Litten
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_Scorbunny
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_Fuecoco
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseWaterStarter::
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_WATER_STARTERS
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, STARTER_COINS
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special ShowScrollableMultichoice
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Squirtle
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Totodile
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Mudkip
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_Piplup
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_Oshawott
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_Froakie
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_Popplio
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_Sobble
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_Quaxly
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Bulbasaur::
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Chikorita::
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Treecko::
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TREECKO
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Turtwig::
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TURTWIG
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Snivy::
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SNIVY
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Chespin::
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHESPIN
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Rowlet::
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ROWLET
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Grookey::
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GROOKEY
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Sprigatito::
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPRIGATITO
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MIRACLE_SEED
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Charmander::
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHARMANDER
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cyndaquil::
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Torchic::
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TORCHIC
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Chimchar::
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIMCHAR
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Tepig::
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TEPIG
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Fennekin::
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FENNEKIN
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Litten::
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITTEN
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Scorbunny::
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SCORBUNNY
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Fuecoco::
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FUECOCO
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CHARCOAL
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Squirtle::
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUIRTLE
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Totodile::
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOTODILE
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Mudkip::
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MUDKIP
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Piplup::
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PIPLUP
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Oshawott::
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OSHAWOTT
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Froakie::
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FROAKIE
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Popplio::
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_POPPLIO
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Sobble::
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SOBBLE
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Quaxly::
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_QUAXLY
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, ITEM_MYSTIC_WATER
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize::
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsThePokemonX, MSGBOX_YESNO
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8007
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_0x8007, VAR_0x8006
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForStarter
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivePokemon
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForStarter::
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseStarterPrizeMessage
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is Mauville Game Corner.$"
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some Coins for\n"
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a Coin Case for\n"
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the Coins.$"
# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for Coins?\p"
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥500 for 50 Coins.\n"
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your Coins!$"
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your Coin Case is full.$"
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need Coins, then?\n"
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your Coins for\n"
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough Coins.$"
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPokemon:
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your Coins for\n"
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rare Pokémon here.$"
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPokemon:
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Pokémon would you like?$"
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsThePokemonX:
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThanksPleaseTakePokemon:
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\p"
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Please take your new Pokémon.$"
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_PlayerReceivedPokemon:
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_TakeCareOfPokemon:
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Take good care of {STR_VAR_1}!$"
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichStarterType:
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Type of Pokémon would you like?$"
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some Coins before\l"
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same Dolls.\p"
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a Coin Case.\p"
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some Coins!$"
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mauville has something for\n"
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the Game Corner.$"
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The Roulette tables have different\n"
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your Coins if you're going to\n"
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Coins are needed to play here\n"
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the Game Corner.$"
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This Roulette thing…\n"
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three Coins can be used to play\n"
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the Slots.$"
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the Reel Time\n"
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra Coins.$"
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the Slots.\p"
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more Reel Time chances you get.\p"
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Reel Time chances…\p"
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 Coins, but it's\n"
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a Coin Case.$"
