
SeafloorCavern_Room3_MapScripts::
	.byte 0

SeafloorCavern_Room3_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, SeafloorCavern_Room3_Text_Grunt5Intro, SeafloorCavern_Room3_Text_Grunt5Defeat
	msgbox SeafloorCavern_Room3_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_6, SeafloorCavern_Room3_Text_Grunt6Intro, SeafloorCavern_Room3_Text_Grunt6Defeat
	msgbox SeafloorCavern_Room3_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_Text_Grunt5Intro:
	.string "For our dream to become real, we need\n"
	.string "the power of Pokémon.\p"
	.string "But meddlers like you use the power of\n"
	.string "Pokémon to mess with us even at\l"
	.string "a place like this!\p"
	.string "Life just doesn't work the way we\n"
	.string "need it to!$"

SeafloorCavern_Room3_Text_Grunt5Defeat:
	.string "Gwah!$"

SeafloorCavern_Room3_Text_Grunt5PostBattle:
	.string "You know, we don't dare question\n"
	.string "the motives of our leader.\p"
	.string "But here you are, just some punk,\n"
	.string "going up against our Boss.\p"
	.string "Maybe…\n"
	.string "You must be something…$"

SeafloorCavern_Room3_Text_Grunt6Intro:
	.string "You Trainers will perish when we\n"
	.string "achieve our goals!$"

SeafloorCavern_Room3_Text_Grunt6Defeat:
	.string "Why won't you let us win for once?$"

SeafloorCavern_Room3_Text_Grunt6PostBattle:
	.string "Sometimes I think whether we're\n"
	.string "right or wrong…\p"
	.string "Then, twerps like you show up and\n"
	.string "motivate me to work towards our goal!$"
