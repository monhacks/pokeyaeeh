# 1 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 10 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 13 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 28 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1:
# 29 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 31 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 32 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NET_BALL
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NEST_BALL
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 42 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LURE_BALL
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MOON_BALL
# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 46 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 51 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ETHER
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ELIXIR
# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GLITTER_MAIL
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WOOD_MAIL
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SHADOW_MAIL
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TROPIC_MAIL
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FAB_MAIL
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"
