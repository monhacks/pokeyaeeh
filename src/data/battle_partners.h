const struct Trainer gBattlePartners[] = {
    [PARTNER_NONE] =
    {
        .party = NULL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
    },

    [PARTNER_WALLY] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_WALLY,
        .trainerName = _("Wally"),
        .party = TRAINER_PARTY(sParty_WallyPartner),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_STATUS_MOVES,
    },

};
