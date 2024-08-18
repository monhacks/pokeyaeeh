# 1 "data/maps/MossdeepCity_House3/scripts.pory"

# 2 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_MapScripts::
# 3 "data/maps/MossdeepCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House3/scripts.pory"

# 5 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman::
# 6 "data/maps/MossdeepCity_House3/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_House3_EventScript_SuperheroesAreAwesome
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_MeetMeWhenYouAreCool, MSGBOX_DEFAULT
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 12 "data/maps/MossdeepCity_House3/scripts.pory"

# 13 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperheroesAreAwesome::
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_PALAFIN MossdeepCity_House3_EventScript_SuperheroesAreAwesome2
# 15 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_ReceivedPalafin
# 16 "data/maps/MossdeepCity_House3/scripts.pory"
	return
# 17 "data/maps/MossdeepCity_House3/scripts.pory"

# 18 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_ReceivedPalafin::
# 19 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_WantPalafin, MSGBOX_YESNO
# 20 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_DeclineSuperhero
# 21 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_SuperheroIsSuper, MSGBOX_DEFAULT
# 22 "data/maps/MossdeepCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_PALAFIN
# 23 "data/maps/MossdeepCity_House3/scripts.pory"
	givemon SPECIES_PALAFIN_ZERO, 0, ITEM_CHOICE_BAND, ITEM_CHERISH_BALL, NATURE_JOLLY, 0, MON_MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 0, 31, MOVE_JET_PUNCH, MOVE_FLIP_TURN, MOVE_FISHIOUS_REND, MOVE_CLOSE_COMBAT, TRUE
# 24 "data/maps/MossdeepCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/MossdeepCity_House3/scripts.pory"
	message MossdeepCity_House3_Text_ReceivedPalafin
# 26 "data/maps/MossdeepCity_House3/scripts.pory"
	waitmessage
# 27 "data/maps/MossdeepCity_House3/scripts.pory"
	waitfanfare
# 28 "data/maps/MossdeepCity_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PALAFIN_ZERO
# 29 "data/maps/MossdeepCity_House3/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PALAFIN_ZERO
# 30 "data/maps/MossdeepCity_House3/scripts.pory"
	call Common_EventScript_Nickname
# 31 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_SuperheroesAreAwesome2
# 32 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_SuperheroesAreAwesome, MSGBOX_DEFAULT
# 33 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 34 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 35 "data/maps/MossdeepCity_House3/scripts.pory"

# 36 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperheroesAreAwesome2::
# 37 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_SuperheroesAreAwesome, MSGBOX_DEFAULT
# 38 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 39 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 40 "data/maps/MossdeepCity_House3/scripts.pory"

# 41 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_DeclineSuperhero::
# 42 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_WhatALoser, MSGBOX_DEFAULT
# 43 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 44 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 45 "data/maps/MossdeepCity_House3/scripts.pory"

# 46 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_WantPalafin:
# 47 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Hehe! Welcome junior!\p"
# 48 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "You seem mighty fine- I mean strong!\p"
# 49 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Do you like superheroes?!$"
# 50 "data/maps/MossdeepCity_House3/scripts.pory"

# 51 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_SuperheroIsSuper:
# 52 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "You bet, you bet!\p"
# 53 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "After all, a superhero is really super!$"
# 54 "data/maps/MossdeepCity_House3/scripts.pory"

# 55 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_WhatALoser:
# 56 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Hunh?\p"
# 57 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "What a loser!$"
# 58 "data/maps/MossdeepCity_House3/scripts.pory"

# 59 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_SuperheroesAreAwesome:
# 60 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Once you switch out in a battle\n"
# 61 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "this cute little critter is\l"
# 62 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "gonna bite!$"
# 63 "data/maps/MossdeepCity_House3/scripts.pory"

# 64 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_MeetMeWhenYouAreCool:
# 65 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "I love superheroes!\p"
# 66 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "When you are cool enough,\n"
# 67 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "I'll give you a superhero!$"
# 68 "data/maps/MossdeepCity_House3/scripts.pory"

# 69 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_ReceivedPalafin:
# 70 "data/maps/MossdeepCity_House3/scripts.pory"
    .string "{PLAYER} received Palafin!$"
