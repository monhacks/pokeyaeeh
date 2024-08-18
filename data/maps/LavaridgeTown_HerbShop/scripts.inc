# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT 
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT 
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the Mint Shop, home of\n"
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "nature mints, in Hoenn!$"
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Nature mints have different tastes.\p"
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "They can make your Pokémon stronger, or\n"
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "faster, or even bulkier, but they could\l"
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "also become slower, weaker or frailer.$"
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "These mints are really bitter!\p"
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Yes, I ate one.\n"
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Any problem, kid?$"
