static const struct TrainerMon sParty_WallyPartner[] = {
    {
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_MAGIC_GUARD,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_STEALTH_ROCK, MOVE_LIFE_DEW, MOVE_TOXIC, MOVE_THUNDER_WAVE},
        .lvl = 1
    },
    {
        .species = SPECIES_BAXCALIBUR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SCALE_SHOT, MOVE_GLAIVE_RUSH, MOVE_PROTECT},
        .lvl = 1
    },
    {
        .species = SPECIES_GALLADE,
        .heldItem = ITEM_GALLADITE,
        .ability = ABILITY_SHARPNESS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_AQUA_CUTTER, MOVE_LEAF_BLADE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
};
