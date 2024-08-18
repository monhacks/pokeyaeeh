# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"

# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript::
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart 0
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"

# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"

# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"

# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"

# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a Pokémon is weak now,\n"
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your Pokémon!$"
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"

# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use Repel?\n"
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps Pokémon away, so it's\l"
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"

# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any Antidotes with\n"
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Pokémon, it will lose HP until it faints.\l"
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some Antidotes with you.$"
