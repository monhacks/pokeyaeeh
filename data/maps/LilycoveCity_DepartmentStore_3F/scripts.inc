LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_TypeCrystals
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_TypeCrystals:
	.2byte ITEM_FIRE_CRYSTAL
	.2byte ITEM_WATER_CRYSTAL
	.2byte ITEM_ELECTRIC_CRYSTAL
	.2byte ITEM_GRASS_CRYSTAL
	.2byte ITEM_ICE_CRYSTAL
	.2byte ITEM_FIGHTING_CRYSTAL
	.2byte ITEM_POISON_CRYSTAL
	.2byte ITEM_GROUND_CRYSTAL
	.2byte ITEM_FLYING_CRYSTAL
	.2byte ITEM_PSYCHIC_CRYSTAL
	.2byte ITEM_BUG_CRYSTAL
	.2byte ITEM_ROCK_CRYSTAL
	.2byte ITEM_GHOST_CRYSTAL
	.2byte ITEM_DRAGON_CRYSTAL
	.2byte ITEM_DARK_CRYSTAL
	.2byte ITEM_STEEL_CRYSTAL
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_TypeGems
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_TypeGems:
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantPokemonToHaveMorePower, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveFireGrystalToChangeHiddenPotential, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
	.string "For quickly toughening up Pokémon,\n"
	.string "items are the best.\p"
	.string "Steel Gem makes your Iron Head\n"
	.string "stronger!$"

LilycoveCity_DepartmentStore_3F_Text_WantPokemonToHaveMorePower:
	.string "I want my Pokémon to have more\n"
	.string "power.\p"
	.string "I'm trying to decide whether to give it\n"
	.string "an Electric Gem or a Steel Gem.$"

LilycoveCity_DepartmentStore_3F_Text_GaveFireGrystalToChangeHiddenPotential:
	.string "I gave my Pokémon a Fire Crystal to\n"
	.string "change its Hidden Potential to Fire-type!$"
