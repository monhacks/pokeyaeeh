# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 18 "data/maps/SlateportCity_Mart/scripts.pory"

# 19 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 22 "data/maps/SlateportCity_Mart/scripts.pory"

# 23 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The Market does have some interesting\n"
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "merchandise.\p"
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "But there are some items you can only\n"
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "get at a Pokémon Mart.$"
# 28 "data/maps/SlateportCity_Mart/scripts.pory"

# 29 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter:
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A Great Ball is better than a Poké Ball\n"
# 31 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "at catching Pokémon.\p"
# 32 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "With this, I should be able to get that\n"
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "elusive Pokémon…$"
