# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my Pokémon ate an\n"
# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Oran Berry, it regained HP!$"
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of Pokémon.\p"
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All types have their strengths and\n"
# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "weaknesses against other types.\p"
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the types of Pokémon,\n"
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "a battle could be easy or hard.$"
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your starter Pokémon\n"
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a Grass type.\p"
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the Water and\n"
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Ground types.\p"
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against Fire-type\n"
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon.$"
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your starter Pokémon\n"
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a Fire type.\p"
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the Grass and\n"
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Bug types.\p"
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against Water-type\n"
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon.$"
# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your starter Pokémon\n"
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a Water type.\p"
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the Fire type.\p"
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against Grass-type\n"
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "and Electric-type Pokémon.$"
