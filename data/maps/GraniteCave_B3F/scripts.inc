GraniteCave_B3F_MapScripts::
# 2 "data/maps/GraniteCave_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_B3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

GraniteCave_B3F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/GraniteCave_B3F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, GraniteCave_B3F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

GraniteCave_B3F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/GraniteCave_B3F/scripts.pory"
	setmetatile 21, 3, METATILE_Cave_GraniteCave3BF_DownstairsLadder, FALSE
# 5 "data/maps/GraniteCave_B3F/scripts.pory"
	special DrawWholeMapView
	return

