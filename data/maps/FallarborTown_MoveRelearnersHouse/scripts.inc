# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
.set LOCALID_MOVE_RELEARNER, 1
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearnersKit
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor1, MSGBOX_AUTOCLOSE
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FaceOriginalDirection
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearnersKit::
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_SYS_ENABLE_EGG_AND_TUTOR_MOVES, FallarborTown_MoveRelearnersHouse_EventScript_KitExplain
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_PlayerReceivedMoveKit
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmessage
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_KitExplain, MSGBOX_NPC
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_SYS_ENABLE_EGG_AND_TUTOR_MOVES
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ImTheMoveTutor::
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
    msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_KitExplain::
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
    msgbox FallarborTown_MoveRelearnersHouse_Text_KitExplain, MSGBOX_NPC
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor1:
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the Move Tutor.\p"
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I know all the moves that Pokémon\n"
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "learn--every one of them--and I can\l"
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach Pokémon those moves.\p"
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Ugh…\n"
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm sick.$"
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the Move Tutor.\p"
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I know all the moves that Pokémon\n"
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "learn--every one of them--and I can\l"
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach Pokémon those moves.\p"
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "But, I've grown lethargic after eating\n"
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "all those mushrooms.\p"
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Some might have even poisoned me!\p"
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can let you have my kit.\p"
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "…\n"
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "…\p"
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "For free, of course!\p"
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I've been trying to get rid of it.$"
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_PlayerReceivedMoveKit:
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
    .string "{PLAYER} receieved the Move Relearner's kit!$"
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_KitExplain:
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
    .string "My kit will help you to teach\n"
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "moves your Pokémon would normally\l"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "only learn via breeding or tutoring.$"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness Heart Scale!\p"
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which Pokémon needs tutoring?$"
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that Pokémon.$"
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one Heart Scale\n"
# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your Pokémon need to learn a move,\n"
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a Heart Scale.$"
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an Egg.$"
