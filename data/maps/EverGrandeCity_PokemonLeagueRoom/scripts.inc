EverGrandeCity_PokemonLeagueRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PokemonLeagueRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

EverGrandeCity_PokemonLeagueRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	map_script_2 VAR_UNUSED_0x40B8, 0, EverGrandeCity_PokemonLeagueRoom_EventScript_PlayerTurnNorth
# 4 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 4, EverGrandeCity_PokemonLeagueRoom_EventScript_OpenDoors
	return


EverGrandeCity_PokemonLeagueRoom_EventScript_PlayerTurnNorth::
# 9 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


EverGrandeCity_PokemonLeagueRoom_EventScript_OpenDoors::
# 14 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	playse SE_DOOR
# 15 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	setmetatile 13, 5, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 16 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	setmetatile 13, 6, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 17 "data/maps/EverGrandeCity_PokemonLeagueRoom/scripts.pory"
	special DrawWholeMapView
	end

