static const struct TrainerMon sParty_WallyPartner[] = {
    {
        .species = SPECIES_GALLADE,
        .heldItem = ITEM_GALLADITE,
        .lvl = 50,
        .ability = ABILITY_SHARPNESS,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 6, 0),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_PROTECT}
    },
    {
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_LIFE_ORB,
        .lvl = 50,
        .ability = ABILITY_SHEER_FORCE,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_TALONFLAME,
        .heldItem = ITEM_EXPERT_BELT,
        .lvl = 50,
        .ability = ABILITY_GALE_WINGS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 6, 0),
        .moves = {MOVE_TAILWIND, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD}
    }
};
