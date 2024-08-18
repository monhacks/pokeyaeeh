# 1 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_TypeCrystals
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_TypeCrystals:
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FIRE_CRYSTAL
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WATER_CRYSTAL
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ELECTRIC_CRYSTAL
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GRASS_CRYSTAL
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ICE_CRYSTAL
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FIGHTING_CRYSTAL
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POISON_CRYSTAL
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GROUND_CRYSTAL
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLYING_CRYSTAL
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PSYCHIC_CRYSTAL
# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BUG_CRYSTAL
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ROCK_CRYSTAL
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GHOST_CRYSTAL
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRAGON_CRYSTAL
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DARK_CRYSTAL
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_STEEL_CRYSTAL
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_TypeGems
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_TypeGems:
# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WATER_GEM
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ICE_GEM
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POISON_GEM
# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BUG_GEM
# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DARK_GEM
# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FAIRY_GEM
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkBottomRight::
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 76 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_TypeBoostItems
# 77 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 78 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_TypeBoostItems:
# 83 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 84 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHARCOAL
# 85 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 86 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MAGNET
# 87 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 88 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 89 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 90 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POISON_BARB
# 91 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 92 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 93 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 94 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 95 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HARD_STONE
# 96 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 97 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 98 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 99 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 100 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 101 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 102 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 103 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 104 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 105 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkBottomLeft::
# 106 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 107 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 108 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 109 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 110 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_TypePlates
# 111 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 112 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 113 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 114 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 115 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 116 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_TypePlates:
# 117 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 118 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 119 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 120 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 121 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 122 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 123 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 124 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 125 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 126 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 127 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 128 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 129 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 130 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 131 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 132 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 133 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 134 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 135 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 136 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 137 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 138 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 139 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 140 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 141 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 142 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 143 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantPokemonToHaveMorePower, MSGBOX_NPC
# 144 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 145 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 146 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 147 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveFireGrystalToChangeHiddenPotential, MSGBOX_NPC
# 148 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 149 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 150 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 151 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up Pokémon,\n"
# 152 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 153 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Steel Gem makes your Iron Head\n"
# 154 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "stronger!$"
# 155 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 156 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantPokemonToHaveMorePower:
# 157 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my Pokémon to have more\n"
# 158 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "power.\p"
# 159 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to give it\n"
# 160 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "an Electric Gem or a Steel Gem.$"
# 161 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 162 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveFireGrystalToChangeHiddenPotential:
# 163 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave my Pokémon a Fire Crystal to\n"
# 164 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "change its Hidden Potential to Fire-type!$"
