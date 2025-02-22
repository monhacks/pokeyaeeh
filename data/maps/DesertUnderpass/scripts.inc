
.set LOCALID_FOSSIL, 1

DesertUnderpass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
	.byte 0

DesertUnderpass_OnTransition:
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end

DesertUnderpass_EventScript_Fossil::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_FOSSIL_RECEIVED, DesertUnderpass_EventScript_GiveFossil
	release
	end

DesertUnderpass_EventScript_GiveFossil::
	random 15
	addvar VAR_RESULT, ITEM_HELIX_FOSSIL
	finditem VAR_RESULT
	setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
	waitmessage
	waitfanfare
	release
	end

@ Unused
DesertUnderpass_Text_FoundRootFossil::
	.string "{PLAYER} found the Root Fossil.$"

@ Unused
DesertUnderpass_Text_FoundClawFossil::
	.string "{PLAYER} found the Claw Fossil.$"
