
MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_SuperRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_House3_EventScript_SuperheroesAreAwesome
	msgbox MossdeepCity_House3_Text_MeetMeWhenYouAreCool, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_SuperheroesAreAwesome::
	goto_if_set FLAG_RECEIVED_PALAFIN MossdeepCity_House3_EventScript_SuperheroesAreAwesome2
	goto MossdeepCity_House3_EventScript_ReceivedPalafin
	return

MossdeepCity_House3_EventScript_ReceivedPalafin::
	msgbox MossdeepCity_House3_Text_WantPalafin, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_DeclineSuperhero
	msgbox MossdeepCity_House3_Text_SuperheroIsSuper, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_PALAFIN
	givemon SPECIES_PALAFIN_ZERO, 0, ITEM_CHOICE_BAND, ITEM_CHERISH_BALL, NATURE_JOLLY, 0, MON_MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 0, 31, MOVE_JET_PUNCH, MOVE_FLIP_TURN, MOVE_FISHIOUS_REND, MOVE_CLOSE_COMBAT, TRUE
	playfanfare MUS_OBTAIN_ITEM
	message MossdeepCity_House3_Text_ReceivedPalafin
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_PALAFIN_ZERO
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PALAFIN_ZERO
	call Common_EventScript_Nickname
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_SuperheroesAreAwesome2
	msgbox MossdeepCity_House3_Text_SuperheroesAreAwesome, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_SuperheroesAreAwesome2::
	msgbox MossdeepCity_House3_Text_SuperheroesAreAwesome, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_DeclineSuperhero::
	msgbox MossdeepCity_House3_Text_WhatALoser, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_Text_WantPalafin:
	.string "Hehe! Welcome junior!\p"
	.string "You seem mighty fine- I mean strong!\p"
	.string "Do you like superheroes?!$"

MossdeepCity_House3_Text_SuperheroIsSuper:
	.string "You bet, you bet!\p"
	.string "After all, a superhero is really super!$"

MossdeepCity_House3_Text_WhatALoser:
	.string "Hunh?\p"
	.string "What a loser!$"

MossdeepCity_House3_Text_SuperheroesAreAwesome:
	.string "Once you switch out in a battle\n"
	.string "this cute little critter is\l"
	.string "gonna bite!$"

MossdeepCity_House3_Text_MeetMeWhenYouAreCool:
	.string "I love superheroes!\p"
	.string "When you are cool enough,\n"
	.string "I'll give you a superhero!$"

MossdeepCity_House3_Text_ReceivedPalafin:
    .string "{PLAYER} received Palafin!$"
