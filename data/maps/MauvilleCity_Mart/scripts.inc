# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"

# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"

# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"

# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "elevate the stats of Pokémon.\p"
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The ones I know you use in battle\n"
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "are X Attack and X Defend…\p"
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "I do believe that there are others\n"
# 29 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "like them.$"
# 30 "data/maps/MauvilleCity_Mart/scripts.pory"

# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle:
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "instead…\p"
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The Trainer's decisions determine how\n"
# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "battles turn out, I think.$"
