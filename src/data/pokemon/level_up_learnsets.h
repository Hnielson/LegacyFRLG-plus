#define LEVEL_UP_MOVE(lvl, move) ((lvl << 9) | move)
#define LEVEL_UP_END 0xFFFF

// --------------------------------------------------------
// I'M ATTEMPTING TO MODIFY LEARNSETS BY GEN 4
// -- SLIGHT MODIFICATION BY LATEST GEN POKEMON IS FOUND IN
// --------------------------------------------------------

// IDEAS IN COMMENTS
// SO MANY UNUSED/RARE MOVES
// MOST MOVES SHOULD MAKE SENSE
// -- EXCEPTIONS FOR "NECESSARY" TYPE COVERAGE
// SAVE BROKEN MOVES FOR TYPES TO LAST LEVELS
// -- (ex. Voltorb ELEC using ICE BALL)
// -- -- Voltorb MAKES SENSE FOR "BALL" MOVES IMO

// TOTAL 321 TYPES USED AMONG ALL POKEMON (pokemon counted twice for dual-types)
// POKEMON TYPES (counted twice for dual type)
// __GEN_1__
// 22 normal    11.5%
// 12 fire      6.9%
// 32 water     15.6%
// 9 electric   5.3%
// 14 grass     7.5%
// 5 ice        3.1%
// 8 fighting   3.4%
// 33 poison    11.5%
// 14 ground    7.5%
// 19 flying    11.8%
// 14 psychic   7.5%
// 12 bug       6.9%
// 11 rock      5.6%
// 3 ghost      1.2%
// 3 dragon     1.2%
// 0 dark       1.9%
// 2 steel      1.9%

// __GEN_2__
// 15 normal
// 10 fire
// 18 water
// 8 electric
// 10 grass
// 5 ice
// 3 fighting
// 4 poison
// 10 ground
// 19 flying
// 10 psychic
// 10 bug
// 7 rock
// 1 ghost
// 1 dragon
// 6 dark
// 4 steel

// FAVORITE MOVE MIGHT BE CRUNCH, I WANT TO PUT IT ON EVERYTHING

static const u16 sBulbasaurLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(6, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(6, MOVE_GROWTH),
    LEVEL_UP_MOVE(9, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(12, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
    // 18 seed bomb? sludge
    LEVEL_UP_MOVE(18, MOVE_TAKE_DOWN), // 21
    LEVEL_UP_MOVE(21, MOVE_SWEET_SCENT), // 24
    LEVEL_UP_MOVE(24, MOVE_SYNTHESIS), // 27
    // 30 worry seed?
    LEVEL_UP_MOVE(27, MOVE_DOUBLE_EDGE), // 33
    LEVEL_UP_MOVE(30, MOVE_SOLAR_BEAM), // 36
    LEVEL_UP_END

    // grass knot
    // magical leaf
};

static const u16 sIvysaurLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(3, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(6, MOVE_GROWTH),
    LEVEL_UP_MOVE(9, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(12, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
    // 20 seed bomb? sludge
    LEVEL_UP_MOVE(20, MOVE_TAKE_DOWN), // 25
    LEVEL_UP_MOVE(25, MOVE_SWEET_SCENT), // 30
    LEVEL_UP_MOVE(30, MOVE_SYNTHESIS), // 35
    // 40 worry seed?
    LEVEL_UP_MOVE(35, MOVE_DOUBLE_EDGE), // 45
    LEVEL_UP_MOVE(40, MOVE_SOLAR_BEAM), // 50
    LEVEL_UP_END
};

static const u16 sVenusaurLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(1, MOVE_GROWTH),
    LEVEL_UP_MOVE(9, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(12, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
    // 20 seed bomb? sludge
    LEVEL_UP_MOVE(20, MOVE_TAKE_DOWN), // 25
    LEVEL_UP_MOVE(25, MOVE_SWEET_SCENT), // 30
    LEVEL_UP_MOVE(32, MOVE_PETAL_DANCE),
    LEVEL_UP_MOVE(37, MOVE_SYNTHESIS),
    // 44 worry seed?
    LEVEL_UP_MOVE(44, MOVE_DOUBLE_EDGE), // 51
    LEVEL_UP_MOVE(51, MOVE_SOLAR_BEAM), // 58
    LEVEL_UP_END

    // outrage
};

static const u16 sCharmanderLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(6, MOVE_EMBER),
    LEVEL_UP_MOVE(8, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(12, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(17, MOVE_FIRE_PUNCH),
    // 17 fire fang?
    LEVEL_UP_MOVE(20, MOVE_SLASH),
    LEVEL_UP_MOVE(24, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(28, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(32, MOVE_FIRE_SPIN),
    // 36 inferno? (always burn)
    // 40 flare blitz?
    LEVEL_UP_END
};

static const u16 sCharmeleonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(12, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(19, MOVE_FIRE_PUNCH),
    // 19 fire fang?
    LEVEL_UP_MOVE(24, MOVE_SLASH),
    LEVEL_UP_MOVE(30, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(37, MOVE_SCARY_FACE),
    // 48 inferno? (always burn)
    // 54 flare blitz?
    LEVEL_UP_END
};

static const u16 sCharizardLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(12, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(19, MOVE_FIRE_PUNCH),
    // 19 fire fang?
    LEVEL_UP_MOVE(24, MOVE_SLASH),
    LEVEL_UP_MOVE(30, MOVE_FLAMETHROWER),
    // 36 air slash? air cutter
    LEVEL_UP_MOVE(39, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(46, MOVE_FIRE_SPIN),
    // 54 inferno? (always burn)
    // 62 flare blitz?
    LEVEL_UP_END

    // dragon rush?
    // roost?
    // ominous wind?
    // twister
    // weather ball
    // meteor mash
    // hurricane
};

static const u16 sSquirtleLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(6, MOVE_BUBBLE),
    LEVEL_UP_MOVE(6, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(9, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(12, MOVE_BITE),
    LEVEL_UP_MOVE(15, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(18, MOVE_PROTECT),
    LEVEL_UP_MOVE(21, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(24, MOVE_CRUNCH),
    // 24 aqua tail? crunch
    // 27 shell smash?
    LEVEL_UP_MOVE(27, MOVE_IRON_DEFENSE), // 30
    LEVEL_UP_MOVE(30, MOVE_HYDRO_PUMP), // 33
    LEVEL_UP_MOVE(33, MOVE_SKULL_BASH), // 36
    LEVEL_UP_END
};

static const u16 sWartortleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(9, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(12, MOVE_BITE),
    LEVEL_UP_MOVE(15, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(20, MOVE_PROTECT),
    LEVEL_UP_MOVE(25, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(30, MOVE_CRUNCH),
    // 30 aqua tail? crunch
    // 35 shell smash?
    LEVEL_UP_MOVE(35, MOVE_IRON_DEFENSE), // 40
    LEVEL_UP_MOVE(40, MOVE_HYDRO_PUMP), // 45
    LEVEL_UP_MOVE(45, MOVE_SKULL_BASH), // 50
    LEVEL_UP_END
};

static const u16 sBlastoiseLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(9, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(12, MOVE_BITE),
    LEVEL_UP_MOVE(15, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(20, MOVE_PROTECT),
    LEVEL_UP_MOVE(25, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(30, MOVE_CRUNCH),
    // 30 aqua tail? crunch
    // 35 shell smash?
    // 36 flash cannon?
    LEVEL_UP_MOVE(35, MOVE_IRON_DEFENSE), // 42
    LEVEL_UP_MOVE(42, MOVE_HYDRO_PUMP), // 49
    LEVEL_UP_MOVE(49, MOVE_SKULL_BASH), // 56
    LEVEL_UP_END

    // outrage
    // curse
    // signal beam
    // aura sphere?
};

static const u16 sCaterpieLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
    LEVEL_UP_MOVE(9, MOVE_SIGNAL_BEAM),
    LEVEL_UP_END

    // electroweb?
    // bugbite?
};

static const u16 sMetapodLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_END

    // iron defense
};

static const u16 sButterfreeLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_GUST),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(10, MOVE_GUST),
    LEVEL_UP_MOVE(10, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(10, MOVE_CONFUSION),
    LEVEL_UP_MOVE(12, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(12, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(12, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(16, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(20, MOVE_WHIRLWIND),
    // 24 air slash? air cutter
    LEVEL_UP_MOVE(24, MOVE_SAFEGUARD), // 28
    LEVEL_UP_MOVE(28, MOVE_SILVER_WIND), // 32
    // 32 bugbuzz? signal beam
    // 36 tailwind? agility
    // 40 captivate/rage powder?
    LEVEL_UP_MOVE(32, MOVE_TAIL_GLOW), // 44
    // 44 quiver dance? tail glow
    LEVEL_UP_END

    // electroweb?
    // ominous wind?
    // twister
    // swagger
    // struggle bug?
    // hurricane
    // pollen puff?
    // dual wingbeat?
    // roost? recover
};

static const u16 sWeedleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
    LEVEL_UP_MOVE(9, MOVE_FURY_CUTTER),
    LEVEL_UP_END

    // electroweb?
    // bugbite?
};

static const u16 sKakunaLevelUpLearnset[] = { // metapod clone
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_END
};

static const u16 sBeedrillLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(11, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(14, MOVE_RAGE), // 14
    // 14 laser focus?
    LEVEL_UP_MOVE(17, MOVE_TWINEEDLE), // 17
    // 17 poison sting? twin needle
    LEVEL_UP_MOVE(20, MOVE_FOCUS_ENERGY), // 20
    // 23 venoshock? sludge
    LEVEL_UP_MOVE(23, MOVE_PURSUIT), // 26
    // 26 assurance? pursuit
    // 29 toxic spikes? spikes
    LEVEL_UP_MOVE(26, MOVE_PIN_MISSILE), // 32
    LEVEL_UP_MOVE(29, MOVE_POISON_TAIL), // 35
    // 35 poison jab? poison tail
    LEVEL_UP_MOVE(32, MOVE_AGILITY), // 38
    LEVEL_UP_MOVE(35, MOVE_ENDEAVOR), // 41
    // 44 fell stinger?
    LEVEL_UP_END

    // x-scissor?
    // roost? recover
    // drill run?
    // air cutter
    // silver wind
    // outrage
};

static const u16 sPidgeyLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(9, MOVE_GUST),
    LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(21, MOVE_TWISTER),
    LEVEL_UP_MOVE(25, MOVE_FEATHER_DANCE),
    LEVEL_UP_MOVE(29, MOVE_AGILITY),
    LEVEL_UP_MOVE(33, MOVE_WING_ATTACK),
    // 37 roost? recover
    // 41 tailwind? agility already--
    LEVEL_UP_MOVE(37, MOVE_AERIAL_ACE), // 45
    // 49 air slash?
    // 53 hurricane
    LEVEL_UP_END

    // u-turn?
    // heatwave
    // uproar
    // razor wind
    // ominous wind?
    // take down
    // detect
    // mud slap
};

static const u16 sPidgeottoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(9, MOVE_GUST),
    LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(22, MOVE_TWISTER),
    LEVEL_UP_MOVE(27, MOVE_FEATHER_DANCE),
    LEVEL_UP_MOVE(32, MOVE_AGILITY),
    LEVEL_UP_MOVE(37, MOVE_WING_ATTACK),
    // 42 roost? recover
    // 47 tailwind? agility already--
    LEVEL_UP_MOVE(42, MOVE_AERIAL_ACE), // 52
    // 57 air slash?
    // 62 hurricane
    LEVEL_UP_END
};

static const u16 sPidgeotLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(9, MOVE_GUST),
    LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(22, MOVE_TWISTER),
    LEVEL_UP_MOVE(27, MOVE_FEATHER_DANCE),
    LEVEL_UP_MOVE(32, MOVE_AGILITY),
    LEVEL_UP_MOVE(38, MOVE_WING_ATTACK),
    // 44 roost? recover
    // 50 tailwind? agility already--
    LEVEL_UP_MOVE(44, MOVE_AERIAL_ACE), // 56
    // 62 air slash?
    // 68 hurricane
    LEVEL_UP_END
};

static const u16 sRattataLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(4, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(13, MOVE_PURSUIT),
    // 13 laser focus?
    LEVEL_UP_MOVE(16, MOVE_HYPER_FANG),
    LEVEL_UP_MOVE(19, MOVE_TAKE_DOWN), // 16
    // 19 assurance?
    LEVEL_UP_MOVE(22, MOVE_CRUNCH), // 22
    // 25 sucker punch?
    LEVEL_UP_MOVE(25, MOVE_SUPER_FANG), // 28
    LEVEL_UP_MOVE(28, MOVE_DOUBLE_EDGE), // 31
    LEVEL_UP_MOVE(31, MOVE_ENDEAVOR), // 34
    LEVEL_UP_END

    // sludgebomb
    // charge beam?
    // grass knot?
    // mud-slap
    // wild charge?
    // work up?
    // skull bash
    // headbutt
};

static const u16 sRaticateLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(4, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(13, MOVE_PURSUIT),
    // 13 laser focus?
    LEVEL_UP_MOVE(16, MOVE_HYPER_FANG),
    LEVEL_UP_MOVE(19, MOVE_TAKE_DOWN), // 16
    // 19 assurance?
    LEVEL_UP_MOVE(20, MOVE_SCARY_FACE), // 20
    LEVEL_UP_MOVE(24, MOVE_CRUNCH), // 24
    // 29 sucker punch?
    LEVEL_UP_MOVE(29, MOVE_SUPER_FANG), // 34
    LEVEL_UP_MOVE(34, MOVE_DOUBLE_EDGE), // 39
    LEVEL_UP_MOVE(39, MOVE_ENDEAVOR), // 44
    LEVEL_UP_END
};

static const u16 sSpearowLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(4, MOVE_LEER),
    LEVEL_UP_MOVE(8, MOVE_PURSUIT),
    // 8 assurance?
    LEVEL_UP_MOVE(11, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_AERIAL_ACE),
    LEVEL_UP_MOVE(18, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(22, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(25, MOVE_AGILITY),
    LEVEL_UP_MOVE(29, MOVE_FOCUS_ENERGY),
    // 32 roost? recover
    LEVEL_UP_MOVE(32, MOVE_DRILL_PECK), // 36
    LEVEL_UP_END

    // u-turn?
    // twister
    // ominous winds?
    // heatwave
    // echoed voice?
    // drill run?
    // mud-slap
};

static const u16 sFearowLevelUpLearnset[] = {
    // 1 drill run?
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(4, MOVE_LEER),
    LEVEL_UP_MOVE(8, MOVE_PURSUIT),
    // 8 assurance?
    LEVEL_UP_MOVE(11, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_AERIAL_ACE),
    LEVEL_UP_MOVE(18, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(23, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(27, MOVE_AGILITY),
    LEVEL_UP_MOVE(32, MOVE_FOCUS_ENERGY),
    // 36 roost? recover
    LEVEL_UP_MOVE(36, MOVE_DRILL_PECK), // 41
    // 45 drill run?
    LEVEL_UP_END
};

static const u16 sEkansLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(4, MOVE_POISON_STING),
    LEVEL_UP_MOVE(9, MOVE_BITE),
    LEVEL_UP_MOVE(12, MOVE_GLARE),
    LEVEL_UP_MOVE(17, MOVE_SCREECH),
    LEVEL_UP_MOVE(20, MOVE_ACID),
    LEVEL_UP_MOVE(25, MOVE_SHARPEN),
    // 25 stockpile, swallow, spit up? sharpen
    LEVEL_UP_MOVE(28, MOVE_MUD_SHOT),
    // 28 mud bomb/acid spray? mud shot
    LEVEL_UP_MOVE(33, MOVE_SLUDGE_BOMB),
    // 36 gastro acid?
    // 38 belch?
    LEVEL_UP_MOVE(36, MOVE_HAZE), // 41
    LEVEL_UP_MOVE(38, MOVE_LEECH_LIFE),
    // 44 coil? bulk up
    // 49 gunk shot?
    LEVEL_UP_END

    // aqua tail?
    // seed bomb?
    // scale shot?
    // leech life
    // mud-slap
    // constrict
    // infestation
    // dragon tail?
};

static const u16 sArbokLevelUpLearnset[] = {
    // 1 crunch, fire-thunder-ice fang
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(4, MOVE_POISON_STING),
    LEVEL_UP_MOVE(9, MOVE_BITE),
    LEVEL_UP_MOVE(12, MOVE_GLARE),
    LEVEL_UP_MOVE(17, MOVE_SCREECH),
    LEVEL_UP_MOVE(20, MOVE_ACID),
    LEVEL_UP_MOVE(22, MOVE_CRUNCH),
    LEVEL_UP_MOVE(27, MOVE_SHARPEN),
    // 27 stockpile, swallow, spit up? sharpen
    LEVEL_UP_MOVE(32, MOVE_MUD_SHOT),
    // 32 mud bomb/acid spray? mud shot
    LEVEL_UP_MOVE(39, MOVE_SLUDGE_BOMB),
    // 44 gastro acid?
    // 48 belch?
    LEVEL_UP_MOVE(44, MOVE_HAZE), // 51
    LEVEL_UP_MOVE(48, MOVE_LEECH_LIFE),
    // 56 coil? bulk up
    // 63 gunk shot?
    LEVEL_UP_END
};

static const u16 sPikachuLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(8, MOVE_DOUBLE_TEAM),
    // 12 electro ball?
    // 16 feint?
    LEVEL_UP_MOVE(20, MOVE_SPARK), // 20
    LEVEL_UP_MOVE(24, MOVE_AGILITY), // 24
    LEVEL_UP_MOVE(28, MOVE_IRON_TAIL), // 28
    LEVEL_UP_MOVE(32, MOVE_CHARGE), // 32
    // 32 discharge?
    LEVEL_UP_MOVE(36, MOVE_THUNDERBOLT), // 36
    LEVEL_UP_MOVE(40, MOVE_LIGHT_SCREEN), // 40
    LEVEL_UP_MOVE(44, MOVE_THUNDER), // 44
    LEVEL_UP_END

    // grass knot
    // charge beam
    // signal beam
    // rollout
    // mud-slap
    // trailblaze?
    // surf
    // fly
    // nasty plot? tail glow
    // calm mind
    // teeter dance
};

static const u16 sRaichuLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE(1, MOVE_THUNDERBOLT),
    LEVEL_UP_END
};

static const u16 sSandshrewLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(3, MOVE_POISON_STING),
    LEVEL_UP_MOVE(6, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(9, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(12, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(15, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(18, MOVE_MUD_SHOT),
    // 18 bulldoze? mud_shot
    LEVEL_UP_MOVE(21, MOVE_SWIFT),
    LEVEL_UP_MOVE(24, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(27, MOVE_AGILITY),
    LEVEL_UP_MOVE(30, MOVE_SLASH),
    LEVEL_UP_MOVE(33, MOVE_DIG),
    // 36 gyro ball?
    LEVEL_UP_MOVE(36, MOVE_SWORDS_DANCE), // 39
    LEVEL_UP_MOVE(39, MOVE_SANDSTORM), // 42
    LEVEL_UP_MOVE(42, MOVE_EARTHQUAKE), // 45
    LEVEL_UP_END

    // crush claw
    // leech life
    // poison jab?
    // low kick
    // night slash?
    // scorching sands?
    // covet
    // amnesia
    // stone edge?
    // drill run?
};

static const u16 sSandslashLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(3, MOVE_POISON_STING),
    LEVEL_UP_MOVE(6, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(9, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(12, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(15, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(18, MOVE_MUD_SHOT),
    // 18 bulldoze? mud_shot
    LEVEL_UP_MOVE(21, MOVE_SWIFT),
    LEVEL_UP_MOVE(26, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(31, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(36, MOVE_SLASH),
    LEVEL_UP_MOVE(41, MOVE_DIG),
    // 46 gyro ball?
    LEVEL_UP_MOVE(46, MOVE_SWORDS_DANCE), // 51
    LEVEL_UP_MOVE(51, MOVE_SANDSTORM), // 56
    LEVEL_UP_MOVE(56, MOVE_EARTHQUAKE), // 61
    LEVEL_UP_END

    // pin missile
    // drill run?
};

static const u16 sNidoranFLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(7, MOVE_SCRATCH),
    LEVEL_UP_MOVE(9, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(13, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(19, MOVE_SPIKES),
    // 19 toxic spikes? spikes
    LEVEL_UP_MOVE(21, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(25, MOVE_BITE),
    LEVEL_UP_MOVE(31, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(33, MOVE_TOXIC),
    LEVEL_UP_MOVE(37, MOVE_FLATTER),
    LEVEL_UP_MOVE(43, MOVE_CRUNCH),
    LEVEL_UP_MOVE(45, MOVE_POISON_FANG),
    LEVEL_UP_END
};

static const u16 sNidorinaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(13, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(20, MOVE_SPIKES),
    // 20 toxic spikes? spikes
    LEVEL_UP_MOVE(23, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(28, MOVE_BITE),
    LEVEL_UP_MOVE(35, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(38, MOVE_TOXIC),
    LEVEL_UP_MOVE(43, MOVE_FLATTER),
    LEVEL_UP_MOVE(50, MOVE_CRUNCH),
    LEVEL_UP_MOVE(58, MOVE_POISON_FANG),
    LEVEL_UP_END
};

static const u16 sNidoqueenLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(23, MOVE_CRUSH_CLAW),
    // 23 chip away? crush claw
    LEVEL_UP_MOVE(35, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(43, MOVE_EARTHQUAKE),
    // 43 earth power? earthquake
    LEVEL_UP_MOVE(58, MOVE_SUPERPOWER),
    LEVEL_UP_END

    // outrage
    // drill run?
    // scorching sands?
};

static const u16 sNidoranMLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(7, MOVE_PECK),
    LEVEL_UP_MOVE(9, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(19, MOVE_SPIKES),
    // 19 toxic spikes? spikes
    LEVEL_UP_MOVE(21, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(25, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(33, MOVE_TOXIC),
    LEVEL_UP_MOVE(37, MOVE_FLATTER),
    LEVEL_UP_MOVE(43, MOVE_POISON_FANG),
    // 43 poison jab? poison fang
    LEVEL_UP_MOVE(45, MOVE_EARTHQUAKE),
    LEVEL_UP_END

    // head smash?
    // drill run?
    // pin missile
};

static const u16 sNidorinoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_SPIKES),
    // 20 toxic spikes? spikes
    LEVEL_UP_MOVE(23, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(28, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(35, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(38, MOVE_TOXIC),
    LEVEL_UP_MOVE(43, MOVE_FLATTER),
    LEVEL_UP_MOVE(50, MOVE_POISON_FANG),
    // 50 poison jab? poison fang
    LEVEL_UP_MOVE(58, MOVE_EARTHQUAKE),
    LEVEL_UP_END
};

static const u16 sNidokingLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MEGAHORN),
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(23, MOVE_CRUSH_CLAW),
    // 23 chip away? crush claw
    LEVEL_UP_MOVE(35, MOVE_THRASH),
    LEVEL_UP_MOVE(43, MOVE_EARTHQUAKE),
    // 43 earth power? earthquake
    LEVEL_UP_MOVE(58, MOVE_MEGAHORN),
    LEVEL_UP_END

    // scorching sands?
    // outrage
};

static const u16 sClefairyLevelUpLearnset[] = { // incomplete*
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    // 4 stored power?
    LEVEL_UP_MOVE(8, MOVE_ENCORE),
    // 12 after you?
    // 16 life dew?
    // LEVEL_UP_MOVE(10, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(16, MOVE_FOLLOW_ME),
    // LEVEL_UP_MOVE(19, MOVE_MINIMIZE),
    // 22 wake-up slap?
    LEVEL_UP_MOVE(22, MOVE_COSMIC_POWER), // 25
    // 28 lucky chant?
    LEVEL_UP_MOVE(25, MOVE_METRONOME), // 31
    // 34 gravity?
    LEVEL_UP_MOVE(28, MOVE_MOONLIGHT), // 37
    LEVEL_UP_MOVE(31, MOVE_LIGHT_SCREEN), // 40
    LEVEL_UP_MOVE(34, MOVE_METEOR_MASH), // 43
    LEVEL_UP_MOVE(37, MOVE_WISH),
    // 48 healing wish? wish
    LEVEL_UP_END

    // fake tears
    // aromatherapy
    // dual wingbeat?
    // signal beam
    // charge beam?
    // zap cannon
    // magic coat
    // heal bell
    // echoed voice?
    // tri attack
    // covet
    // extrasensory
    // bounce
};

static const u16 sClefableLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(1, MOVE_MINIMIZE),
    LEVEL_UP_MOVE(1, MOVE_METRONOME),
    LEVEL_UP_END
};

static const u16 sVulpixLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(4, MOVE_DISABLE),
    LEVEL_UP_MOVE(8, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(12, MOVE_SPITE),
    LEVEL_UP_MOVE(16, MOVE_FLAME_WHEEL),
    // 16 incinerate? flame wheel
    LEVEL_UP_MOVE(20, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(24, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(28, MOVE_EXTRASENSORY),
    LEVEL_UP_MOVE(32, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(36, MOVE_IMPRISON),
    LEVEL_UP_MOVE(40, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(44, MOVE_SAFEGUARD),
    // 48 inferno? sacred fire
    LEVEL_UP_MOVE(48, MOVE_FIRE_BLAST), // 52
    LEVEL_UP_END

    // heatwave
    // charm
    // nasty plot (tail glow)
    // weather ball
    // energy ball?
    // ominous wind?
    // faint attack?
    // hypnosis
    // swagger
    // psyche up
    // flatter
    // calm mind
    // scorching sands
};

static const u16 sNinetalesLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(1, MOVE_SAFEGUARD),
    LEVEL_UP_END
};

static const u16 sJigglypuffLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(1, MOVE_CHARM),
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    // 4 echoed voice?
    LEVEL_UP_MOVE(8, MOVE_COVET),
    // 12 stockpile, swallow, spit up
    LEVEL_UP_MOVE(16, MOVE_ROLLOUT),
    // 16 round? rollout
    LEVEL_UP_MOVE(20, MOVE_REST),
    LEVEL_UP_MOVE(24, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(28, MOVE_MIMIC), // 28
    // 32 gyro ball?
    LEVEL_UP_MOVE(36, MOVE_HYPER_VOICE), // 36
    LEVEL_UP_MOVE(44, MOVE_DOUBLE_EDGE), // 44
    LEVEL_UP_END

    // trailblaze?
    // magical leaf
    // grass knot?
    // uproar
    // tri attack
    // calm mind
    // bounce
};

static const u16 sWigglytuffLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(1, MOVE_ROLLOUT),
    LEVEL_UP_END
};

static const u16 sZubatLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(7, MOVE_ASTONISH),
    LEVEL_UP_MOVE(11, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(13, MOVE_POISON_FANG),
    // 17 quick guard?
    LEVEL_UP_MOVE(19, MOVE_AIR_CUTTER),
    LEVEL_UP_MOVE(23, MOVE_BITE),
    LEVEL_UP_MOVE(25, MOVE_HAZE),
    // 29 venoshock?
    LEVEL_UP_MOVE(31, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(35, MOVE_FLY),
    // 35 air slash? fly
    LEVEL_UP_MOVE(37, MOVE_LEECH_LIFE),
    // 41
    // 43
    LEVEL_UP_END

    // crunch
    // fly
    // heatwave
    // u-turn?
    // dual wingbeat?
    // ominous wind?
    // roost? recover
    // twister
    // super fang
};

static const u16 sGolbatLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(7, MOVE_ASTONISH),
    LEVEL_UP_MOVE(11, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(13, MOVE_POISON_FANG),
    // 17 quick guard?
    LEVEL_UP_MOVE(19, MOVE_AIR_CUTTER),
    LEVEL_UP_MOVE(24, MOVE_BITE),
    LEVEL_UP_MOVE(27, MOVE_HAZE),
    // 32 venoshock?
    LEVEL_UP_MOVE(35, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(40, MOVE_FLY),
    // 40 air slash? fly
    LEVEL_UP_MOVE(43, MOVE_LEECH_LIFE),
    // 48
    // 51
    LEVEL_UP_END
};

static const u16 sOddishLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_GROWTH),
    LEVEL_UP_MOVE(4, MOVE_ACID),
    LEVEL_UP_MOVE(8, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(12, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(14, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(16, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(18, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(20, MOVE_GIGA_DRAIN),
    LEVEL_UP_MOVE(24, MOVE_TOXIC),
    // 28 moonblast?
    // 32 grassy terrain?
    LEVEL_UP_MOVE(28, MOVE_MOONLIGHT), // 36
    LEVEL_UP_MOVE(32, MOVE_PETAL_DANCE), // 40
    LEVEL_UP_END

    // teeter dance
    // nature power
    // charm
    // infestation
    // drain punch?
    // grass knot?
    // energy ball?
};

static const u16 sGloomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_GROWTH),
    LEVEL_UP_MOVE(4, MOVE_ACID),
    LEVEL_UP_MOVE(8, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(12, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(14, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(16, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(18, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(20, MOVE_GIGA_DRAIN),
    LEVEL_UP_MOVE(26, MOVE_TOXIC),
    // 32 moonblast?
    // 38 grassy terrain?
    LEVEL_UP_MOVE(32, MOVE_MOONLIGHT), // 44
    LEVEL_UP_MOVE(38, MOVE_PETAL_DANCE), // 50
    LEVEL_UP_END
};

static const u16 sVileplumeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(1, MOVE_AROMATHERAPY),
    LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(1, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(59, MOVE_SOLAR_BEAM),
    LEVEL_UP_END
};

static const u16 sParasLevelUpLearnset[] = { // good
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(6, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(6, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(11, MOVE_ABSORB),
    LEVEL_UP_MOVE(17, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(22, MOVE_SPORE),
    LEVEL_UP_MOVE(27, MOVE_SLASH),
    LEVEL_UP_MOVE(33, MOVE_GROWTH),
    LEVEL_UP_MOVE(38, MOVE_GIGA_DRAIN),
    LEVEL_UP_MOVE(43, MOVE_AROMATHERAPY),
    // 49 rage powder?
    LEVEL_UP_MOVE(49, MOVE_LEECH_LIFE), // 54
    // 54 x-scissor? leech life
    LEVEL_UP_END

    // brick break
    // grass knot?
    // fell stinger?
    // metal claw
    // sharpen
    // struggle bug?
    // cross poison? poison tail
};

static const u16 sParasectLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(1, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(17, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(22, MOVE_SPORE),
    LEVEL_UP_MOVE(29, MOVE_SLASH),
    LEVEL_UP_MOVE(37, MOVE_GROWTH),
    LEVEL_UP_MOVE(44, MOVE_GIGA_DRAIN),
    LEVEL_UP_MOVE(51, MOVE_AROMATHERAPY),
    // 59 rage powder?
    LEVEL_UP_MOVE(59, MOVE_LEECH_LIFE), // 66
    // 66 x-scissor? leech life
    LEVEL_UP_END
};

static const u16 sVenonatLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(1, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(11, MOVE_CONFUSION),
    LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(17, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(23, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(25, MOVE_SIGNAL_BEAM),
    // 25 bug buzz? signal beam
    LEVEL_UP_MOVE(29, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(35, MOVE_LEECH_LIFE),
    // 37 zen headbutt?
    LEVEL_UP_MOVE(37, MOVE_POISON_FANG), // 41
    LEVEL_UP_MOVE(41, MOVE_PSYCHIC), // 47
    LEVEL_UP_END

    // acid/acid spray?
    // struggle bug?
    // pounce?
    // lunge?
    // energy ball?
    // infestation?
    // mega drain?
    // confuse ray
};

static const u16 sVenomothLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(1, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(11, MOVE_CONFUSION),
    LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(17, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(23, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(25, MOVE_SIGNAL_BEAM),
    // 25 bug buzz? signal beam
    LEVEL_UP_MOVE(29, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(31, MOVE_GUST),
    // 31 air slash? gust
    LEVEL_UP_MOVE(37, MOVE_LEECH_LIFE),
    // 41 zen headbutt?
    LEVEL_UP_MOVE(37, MOVE_POISON_FANG), // 47
    LEVEL_UP_MOVE(41, MOVE_PSYCHIC), // 55
    LEVEL_UP_END

    // twister
    // ominous wind?
    // air cutter?
    // razor wind
};

static const u16 sDiglettLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(4, MOVE_GROWL),
    LEVEL_UP_MOVE(8, MOVE_ASTONISH),
    LEVEL_UP_MOVE(12, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(16, MOVE_MAGNITUDE),
    // 16 bulldoze? magnitude
    LEVEL_UP_MOVE(20, MOVE_MUD_SHOT),
    // 20 sucker punch? mud shot
    LEVEL_UP_MOVE(24, MOVE_SLASH), // 24
    LEVEL_UP_MOVE(28, MOVE_SANDSTORM), // 28
    LEVEL_UP_MOVE(32, MOVE_DIG),
    // 36 earth power?
    LEVEL_UP_MOVE(36, MOVE_EARTHQUAKE), // 40
    // LEVEL_UP_MOVE(44, MOVE_FISSURE),
    LEVEL_UP_END

    // rock blast
    // charm
    // shadow claw?
    // reversal
    // stone edge?
    // uproar
    // ancient power
    // sharpen
    // scorching sand?
    // pursuit
    // faint attack
    // echoed voice?
};

static const u16 sDugtrioLevelUpLearnset[] = {
    // 1 night slash
    LEVEL_UP_MOVE(1, MOVE_TRI_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(12, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(16, MOVE_MAGNITUDE),
    // 16 bulldoze? magnitude
    LEVEL_UP_MOVE(20, MOVE_MUD_SHOT),
    // 20 sucker punch? mud shot
    LEVEL_UP_MOVE(24, MOVE_SLASH),
    LEVEL_UP_MOVE(26, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(30, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(36, MOVE_DIG),
    // 42 earth power?
    LEVEL_UP_MOVE(42, MOVE_EARTHQUAKE), // 48
    // LEVEL_UP_MOVE(54, MOVE_FISSURE),
    LEVEL_UP_END
};

static const u16 sMeowthLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    // 4 feint?
    LEVEL_UP_MOVE(8, MOVE_SCRATCH),
    LEVEL_UP_MOVE(12, MOVE_PAY_DAY),
    LEVEL_UP_MOVE(16, MOVE_BITE),
    LEVEL_UP_MOVE(20, MOVE_TAUNT),
    // 24 assurance?
    LEVEL_UP_MOVE(24, MOVE_FURY_SWIPES), // 29
    LEVEL_UP_MOVE(29, MOVE_SCREECH), // 32
    // LEVEL_UP_MOVE(22, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(32, MOVE_SLASH), // 36
    // 40 nasty plot(tail glow)?
    // 44 play rough?
    LEVEL_UP_END

    // trailblaze?
    // metal claw
    // charm
    // chilling water?
    // u-turn?
    // fake tears
    // snarl?
    // hyper voice
    // seed bomb?
    // amnesia
    // gunk shot?
    // hypnosis?
    // flatter
    // night slash?
    // sharpen
    // echoed voice?
    // skitter smack?
    // petal dance?
};

static const u16 sPersianLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    // 4 feint?
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(12, MOVE_PAY_DAY),
    LEVEL_UP_MOVE(16, MOVE_BITE),
    LEVEL_UP_MOVE(20, MOVE_TAUNT),
    // 24 assurance?
    LEVEL_UP_MOVE(24, MOVE_FURY_SWIPES), // 31
    // 28 power gem? ancient power
    LEVEL_UP_MOVE(29, MOVE_SCREECH), // 36
    // LEVEL_UP_MOVE(22, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(32, MOVE_SLASH), // 42
    // 48 nasty plot(tail glow)?
    // 54 play rough?
    LEVEL_UP_END
};

static const u16 sPsyduckLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(3, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(6, MOVE_CONFUSION),
    LEVEL_UP_MOVE(9, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(12, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(15, MOVE_DISABLE),
    // 18 zen headbutt?
    LEVEL_UP_MOVE(18, MOVE_SCREECH), // 21
    // 24 aqua tail?
    // 27 soak?
    LEVEL_UP_MOVE(21, MOVE_PSYCH_UP), // 30
    LEVEL_UP_MOVE(24, MOVE_AMNESIA), // 34
    // 39 wonder room?
    LEVEL_UP_END

    // trailblaze?
    // mudshot
    // low kick
    // liquidation?
    // nasty plot(tail glow)
    // vacuum wave?
    // hypnosis
    // psybeam
    // shadow claw
    // signal beam
    // aqua jet?
};

static const u16 sGolduckLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(9, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(12, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(15, MOVE_DISABLE),
    // 18 zen headbutt?
    LEVEL_UP_MOVE(18, MOVE_SCREECH), // 21
    // 24 aqua tail?
    // 27 soak?
    LEVEL_UP_MOVE(21, MOVE_PSYCH_UP), // 30
    LEVEL_UP_MOVE(24, MOVE_AMNESIA), // 36
    LEVEL_UP_MOVE(27, MOVE_HYDRO_PUMP), // 40
    // 45 wonder room?
    LEVEL_UP_END

    // confuse ray
    // grass knot?
    // pay day
    // future sight
    // fury cutter
    // sharpen
};

static const u16 sMankeyLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_COVET),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(5, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(8, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(12, MOVE_KARATE_CHOP),
    // 12 seismic toss? karate chop
    LEVEL_UP_MOVE(17, MOVE_SWAGGER), // 17
    LEVEL_UP_MOVE(22, MOVE_CROSS_CHOP), // 22
    // 26 assurance?
    LEVEL_UP_MOVE(26, MOVE_THRASH), // 29
    // 33 close combat? super power
    LEVEL_UP_MOVE(29, MOVE_SCREECH), // 36
    // 40 stomping tantrum?
    LEVEL_UP_MOVE(33, MOVE_OUTRAGE), // 44
    // 48 final gambit?
    LEVEL_UP_END

    // arm thrust
    // skull bash
    // mud slap
    // acrobatics?
    // mudshot
    // u-turn?
    // shadow claw?
    // gunk shot?
    // reversal
    // curse
    // night slash?
    // poison jab? poison tail
    // dual chop?
    // seed bomb?
    // uproar
    // covet
    // payday
    // stone edge
    // psyche up
};

static const u16 sPrimeapeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_COVET),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(5, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(8, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(12, MOVE_KARATE_CHOP),
    // 12 seismic toss? karate chop
    LEVEL_UP_MOVE(17, MOVE_SWAGGER),
    LEVEL_UP_MOVE(22, MOVE_CROSS_CHOP),
    // 26 assurance?
    LEVEL_UP_MOVE(26, MOVE_THRASH), // 30
    // 35 rage fist?
    // 39 close combat? super power
    LEVEL_UP_MOVE(30, MOVE_SCREECH), // 44
    // 48 stomping tantrum?
    LEVEL_UP_MOVE(35, MOVE_OUTRAGE), // 53
    // 57 final gambit?
    LEVEL_UP_END
};

static const u16 sGrowlitheLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(4, MOVE_HOWL),
    LEVEL_UP_MOVE(8, MOVE_BITE),
    LEVEL_UP_MOVE(12, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(16, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    // 24 fire fang?
    // 28 retaliate?
    LEVEL_UP_MOVE(24, MOVE_CRUNCH), // 32
    LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN), // 36
    LEVEL_UP_MOVE(32, MOVE_FLAMETHROWER), // 40
    LEVEL_UP_MOVE(36, MOVE_ROAR), // 44
    // 48 play rough?
    LEVEL_UP_MOVE(40, MOVE_REVERSAL), // 52
    // 56 flare blitz?
    LEVEL_UP_END

    // thunder fang?
    // psychic fangs?
    // charm
    // heatwave
    // outrage
    // close combat? superpower
    // wild charge?
    // covet
    // curse
    // dragon breath
};

static const u16 sArcanineLevelUpLearnset[] = {
    // 1 thunder fang?
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_ROAR),
    LEVEL_UP_MOVE(1, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(34, MOVE_EXTREME_SPEED),
    LEVEL_UP_END

    // scorching sands?
    // superpower
};

static const u16 sPoliwagLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(6, MOVE_POUND),
    LEVEL_UP_MOVE(12, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(18, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(24, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(30, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(36, MOVE_EARTHQUAKE),
    // 36 earth power? earthquake
    LEVEL_UP_MOVE(42, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(48, MOVE_BELLY_DRUM),
    LEVEL_UP_MOVE(54, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END

    // muddy water
    // jump kick
    // low kick
    // mudshot
    // liquidation?
    // amnesia
    // psychic
    // weather ball
    // ice ball
    // defense curl
    // skull bash
};

static const u16 sPoliwhirlLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(6, MOVE_POUND),
    LEVEL_UP_MOVE(12, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(18, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(24, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(32, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(40, MOVE_EARTHQUAKE),
    // 40 earth power? earthquake
    LEVEL_UP_MOVE(48, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(56, MOVE_BELLY_DRUM),
    LEVEL_UP_MOVE(66, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sPoliwrathLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(1, MOVE_SUBMISSION),
    LEVEL_UP_MOVE(43, MOVE_DYNAMIC_PUNCH),
    LEVEL_UP_MOVE(53, MOVE_MIND_READER),
    LEVEL_UP_END

    // poison jab?
    // dual chop?
    // circle throw?
};

static const u16 sAbraLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TELEPORT),
    LEVEL_UP_END
};

static const u16 sKadabraLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TELEPORT),
    LEVEL_UP_MOVE(1, MOVE_KINESIS),
    LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(5, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(10, MOVE_REFLECT),
    // 15 ally switch?
    LEVEL_UP_MOVE(16, MOVE_CONFUSION),
    // 20 psycho cut?
    LEVEL_UP_MOVE(20, MOVE_RECOVER), // 25
    // 30 psyshock?
    LEVEL_UP_MOVE(25, MOVE_PSYCHIC), // 35
    LEVEL_UP_MOVE(30, MOVE_ROLE_PLAY), // 40
    LEVEL_UP_MOVE(35, MOVE_FUTURE_SIGHT), // 45
    LEVEL_UP_MOVE(40, MOVE_CALM_MIND), // 50
    LEVEL_UP_END

    // energy ball?
    // grass knot?
    // charge beam?
    // barrier
    // signal beam
    // zap cannon
};

static const u16 sAlakazamLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TELEPORT),
    LEVEL_UP_MOVE(1, MOVE_KINESIS),
    LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(5, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(10, MOVE_REFLECT),
    // 15 ally switch?
    LEVEL_UP_MOVE(16, MOVE_CONFUSION),
    // 20 psycho cut?
    LEVEL_UP_MOVE(20, MOVE_RECOVER), // 25
    // 30 psyshock?
    LEVEL_UP_MOVE(25, MOVE_PSYCHIC), // 35
    LEVEL_UP_MOVE(30, MOVE_ROLE_PLAY), // 40
    LEVEL_UP_MOVE(35, MOVE_FUTURE_SIGHT), // 45
    LEVEL_UP_MOVE(40, MOVE_CALM_MIND), // 50
    LEVEL_UP_END
};

static const u16 sMachopLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(4, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(8, MOVE_REVENGE),
    LEVEL_UP_MOVE(12, MOVE_KARATE_CHOP),
    // 12 low sweep? karate chop
    LEVEL_UP_MOVE(16, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(20, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(24, MOVE_VITAL_THROW),
    LEVEL_UP_MOVE(29, MOVE_STRENGTH),
    // 32 dual chop?
    LEVEL_UP_MOVE(32, MOVE_BULK_UP), // 36
    LEVEL_UP_MOVE(36, MOVE_SEISMIC_TOSS), // 40
    LEVEL_UP_MOVE(40, MOVE_DYNAMIC_PUNCH), // 44
    LEVEL_UP_MOVE(44, MOVE_CROSS_CHOP), // 48
    LEVEL_UP_MOVE(48, MOVE_DOUBLE_EDGE), // 52
    LEVEL_UP_END

    // bullet punch?
    // mach punch
    // double hit?
    // close combat? superpower
    // poison jab?
    // medidate
    // stone edge?
};

static const u16 sMachokeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_REVENGE),
    LEVEL_UP_MOVE(12, MOVE_KARATE_CHOP),
    // 12 low sweep? karate chop
    LEVEL_UP_MOVE(16, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(20, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(24, MOVE_VITAL_THROW),
    LEVEL_UP_MOVE(31, MOVE_STRENGTH),
    // 36 dual chop?
    LEVEL_UP_MOVE(36, MOVE_BULK_UP), // 42
    LEVEL_UP_MOVE(42, MOVE_SEISMIC_TOSS), // 48
    LEVEL_UP_MOVE(48, MOVE_DYNAMIC_PUNCH), // 54
    LEVEL_UP_MOVE(54, MOVE_CROSS_CHOP), // 60
    LEVEL_UP_MOVE(60, MOVE_DOUBLE_EDGE), // 66
    LEVEL_UP_END    
};

static const u16 sMachampLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_REVENGE),
    LEVEL_UP_MOVE(12, MOVE_KARATE_CHOP),
    // 12 low sweep? karate chop
    LEVEL_UP_MOVE(16, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(20, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(24, MOVE_VITAL_THROW),
    LEVEL_UP_MOVE(31, MOVE_STRENGTH),
    // 36 dual chop?
    LEVEL_UP_MOVE(36, MOVE_BULK_UP), // 42
    LEVEL_UP_MOVE(42, MOVE_SEISMIC_TOSS), // 48
    LEVEL_UP_MOVE(48, MOVE_DYNAMIC_PUNCH), // 54
    LEVEL_UP_MOVE(54, MOVE_CROSS_CHOP), // 60
    LEVEL_UP_MOVE(60, MOVE_DOUBLE_EDGE), // 66
    LEVEL_UP_END
};

static const u16 sBellsproutLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(7, MOVE_GROWTH),
    LEVEL_UP_MOVE(11, MOVE_WRAP),
    LEVEL_UP_MOVE(13, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(17, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(23, MOVE_ACID),
    LEVEL_UP_MOVE(27, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(29, MOVE_SWEET_SCENT),
    // 35 gastro acid?
    LEVEL_UP_MOVE(35, MOVE_RAZOR_LEAF), // 39
    LEVEL_UP_MOVE(39, MOVE_POISON_TAIL), // 41
    // 41 poison jab? poison tail
    LEVEL_UP_MOVE(41, MOVE_SLAM), // 47
    LEVEL_UP_MOVE(47, MOVE_LEECH_LIFE), // 52
    // 52 power whip? leech life
    LEVEL_UP_END

    // pounce?
    // magical leaf
    // trailblaze?
    // leech life
    // seed bomb?
    // lunge?
    // weather ball
    // infestation?
    // teeter dance
    // headbutt
};

static const u16 sWeepinbellLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(7, MOVE_GROWTH),
    LEVEL_UP_MOVE(11, MOVE_WRAP),
    LEVEL_UP_MOVE(13, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(17, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(24, MOVE_ACID),
    LEVEL_UP_MOVE(29, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(32, MOVE_SWEET_SCENT),
    // 39 gastro acid?
    LEVEL_UP_MOVE(39, MOVE_RAZOR_LEAF), // 44
    LEVEL_UP_MOVE(44, MOVE_POISON_TAIL), // 47
    // 47 poison jab? poison tail
    LEVEL_UP_MOVE(47, MOVE_SLAM), // 54
    LEVEL_UP_MOVE(54, MOVE_LEECH_LIFE), // 58
    // 58 power whip? leech life
    LEVEL_UP_END
};

static const u16 sVictreebelLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_STOCKPILE),
    LEVEL_UP_MOVE(1, MOVE_SPIT_UP),
    LEVEL_UP_MOVE(1, MOVE_SWALLOW),
    LEVEL_UP_MOVE(1, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(1, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(1, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(1, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(1, MOVE_PETAL_DANCE),
    LEVEL_UP_MOVE(44, MOVE_LEAF_BLADE),
    LEVEL_UP_END
};

static const u16 sTentacoolLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(4, MOVE_ACID),
    LEVEL_UP_MOVE(8, MOVE_WRAP),
    LEVEL_UP_MOVE(12, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(16, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(20, MOVE_SCREECH),
    LEVEL_UP_MOVE(24, MOVE_BUBBLE_BEAM),
    // 28 hex?
    LEVEL_UP_MOVE(28, MOVE_ACID_ARMOR), // 32
    LEVEL_UP_MOVE(32, MOVE_POISON_TAIL), // 36
    // 36 poison jab? poison tail
    LEVEL_UP_MOVE(36, MOVE_SURF), // 40
    LEVEL_UP_MOVE(40, MOVE_SLUDGE_BOMB), // 44
    // 44 sludge wave? sludge bomb
    LEVEL_UP_MOVE(44, MOVE_HYDRO_PUMP), // 48
    LEVEL_UP_END

    // constrict
    // confuse ray
    // infestation?
    // skull bash
};

static const u16 sTentacruelLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_ACID),
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(12, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(16, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(20, MOVE_SCREECH),
    LEVEL_UP_MOVE(24, MOVE_BUBBLE_BEAM),
    // 28 hex?
    LEVEL_UP_MOVE(28, MOVE_ACID_ARMOR), // 34
    LEVEL_UP_MOVE(34, MOVE_POISON_TAIL), // 40
    // 40 poison jab? poison tail
    LEVEL_UP_MOVE(40, MOVE_SURF), // 46
    LEVEL_UP_MOVE(46, MOVE_SLUDGE_BOMB), // 52
    // 52 sludge wave? sludge bomb
    LEVEL_UP_MOVE(52, MOVE_HYDRO_PUMP), // 58
    LEVEL_UP_END
};

static const u16 sGeodudeLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(6, MOVE_AGILITY),
    // 6 rock polish? agility
    LEVEL_UP_MOVE(10, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(12, MOVE_MAGNITUDE),
    // 12 bulldoze? magnitude
    LEVEL_UP_MOVE(16, MOVE_ROCK_THROW),
    // 18 smack down?
    LEVEL_UP_MOVE(24, MOVE_SELF_DESTRUCT), // 24
    // 28 stealth rock? spikes
    LEVEL_UP_MOVE(30, MOVE_ROCK_BLAST), // 30
    LEVEL_UP_MOVE(34, MOVE_EARTHQUAKE), // 34
    LEVEL_UP_MOVE(36, MOVE_EXPLOSION), // 36
    LEVEL_UP_MOVE(40, MOVE_DOUBLE_EDGE), // 40
    // 42 stone edge? 
    LEVEL_UP_END

     // mud slap
     // iron defense
     // hammer arm
     // curse
     // ancient power
     // superpower
     // heavy slam?
     // steamroller?
     // incinerate?
};

static const u16 sGravelerLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(6, MOVE_AGILITY),
    // 6 rock polish? agility
    LEVEL_UP_MOVE(10, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(12, MOVE_MAGNITUDE),
    // 12 bulldoze? magnitude
    LEVEL_UP_MOVE(16, MOVE_ROCK_THROW),
    // 18 smack down?
    LEVEL_UP_MOVE(24, MOVE_SELF_DESTRUCT), // 24
    // 30 stealth rock? spikes
    LEVEL_UP_MOVE(34, MOVE_ROCK_BLAST), // 34
    LEVEL_UP_MOVE(40, MOVE_EARTHQUAKE), // 40
    LEVEL_UP_MOVE(44, MOVE_EXPLOSION), // 44
    LEVEL_UP_MOVE(50, MOVE_DOUBLE_EDGE), // 50
    // 54 stone edge? 
    LEVEL_UP_END
};

static const u16 sGolemLevelUpLearnset[] = { // reformat backwards
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(6, MOVE_AGILITY),
    // 6 rock polish? agility
    LEVEL_UP_MOVE(10, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(12, MOVE_MAGNITUDE),
    // 12 bulldoze? magnitude
    LEVEL_UP_MOVE(16, MOVE_ROCK_THROW),
    // 18 smack down?
    LEVEL_UP_MOVE(24, MOVE_SELF_DESTRUCT), // 24
    // 30 stealth rock? spikes
    LEVEL_UP_MOVE(34, MOVE_ROCK_BLAST), // 34
    LEVEL_UP_MOVE(40, MOVE_EARTHQUAKE), // 40
    LEVEL_UP_MOVE(44, MOVE_EXPLOSION), // 44
    LEVEL_UP_MOVE(50, MOVE_DOUBLE_EDGE), // 50
    // 54 stone edge? 
    LEVEL_UP_END

    // fury cutter
};

static const u16 sPonytaLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_EMBER),
    // 10 flame charge?
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(30, MOVE_STOMP),
    LEVEL_UP_MOVE(35, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(41, MOVE_TAKE_DOWN),
    // 45 inferno?
    LEVEL_UP_MOVE(50, MOVE_FIRE_BLAST),
    // LEVEL_UP_MOVE(45, MOVE_BOUNCE), keep
    // 55 flare blitz? megahorn
    LEVEL_UP_END

    // bounce
    // hypnosis
    // double hit?
    // charm
    // will-o-wisp
    // low kick
    // thrash
    // wild charge?
    // morning sun
    // echoed voice?
};

static const u16 sRapidashLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MEGAHORN),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_EMBER),
    // 10 flame charge?
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(30, MOVE_STOMP),
    LEVEL_UP_MOVE(35, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(41, MOVE_TAKE_DOWN),
    // 45 inferno?
    LEVEL_UP_MOVE(50, MOVE_FIRE_BLAST),
    // LEVEL_UP_MOVE(45, MOVE_BOUNCE), keep
    // 55 flare blitz? megahorn
    LEVEL_UP_END
    
    // megahorn
    // poison jab?
    // drill run?
};

static const u16 sSlowpokeLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_CURSE),
    LEVEL_UP_MOVE(3, MOVE_GROWL),
    LEVEL_UP_MOVE(6, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(9, MOVE_YAWN),
    LEVEL_UP_MOVE(12, MOVE_CONFUSION),
    LEVEL_UP_MOVE(15, MOVE_DISABLE),
    LEVEL_UP_MOVE(18, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(21, MOVE_HEADBUTT),
    // 24 zen headbutt?
    LEVEL_UP_MOVE(27, MOVE_AMNESIA),
    LEVEL_UP_MOVE(30, MOVE_SURF),
    LEVEL_UP_MOVE(33, MOVE_RECOVER),
    // 33 slack off? recover
    LEVEL_UP_MOVE(36, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(39, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(42, MOVE_RAIN_DANCE),
    // 45 heal pulse?
    LEVEL_UP_END

    // signal beam
    // psych up
    // mud shot
    // weather ball
    // payday
};

static const u16 sSlowbroLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_CURSE),
    LEVEL_UP_MOVE(3, MOVE_GROWL),
    LEVEL_UP_MOVE(6, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(9, MOVE_YAWN),
    LEVEL_UP_MOVE(12, MOVE_CONFUSION),
    LEVEL_UP_MOVE(15, MOVE_DISABLE),
    LEVEL_UP_MOVE(18, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(21, MOVE_HEADBUTT),
    // 24 zen headbutt?
    LEVEL_UP_MOVE(27, MOVE_AMNESIA),
    LEVEL_UP_MOVE(30, MOVE_SURF),
    LEVEL_UP_MOVE(33, MOVE_RECOVER),
    // 33 slack off? recover
    LEVEL_UP_MOVE(36, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(37, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(41, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(46, MOVE_RAIN_DANCE),
    // 51 heal pulse?
    LEVEL_UP_END

    // drain punch?
    // iron defense
    // nasty plot (tail glow)
    // zap cannon
};

static const u16 sMagnemiteLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_METAL_SOUND),
    LEVEL_UP_MOVE(4, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE),
    // LEVEL_UP_MOVE(12, MOVE_THUNDER_SHOCK),
    // 12 electro ball?
    // LEVEL_UP_MOVE(16, MOVE_SPIKE_CANNON),
    // 16 gyro ball?
    LEVEL_UP_MOVE(20, MOVE_SPARK),
    LEVEL_UP_MOVE(24, MOVE_SCREECH),
    // LEVEL_UP_MOVE(28, MOVE_SONIC_BOOM),
    // 28 magnet rise?
    // 32 flash cannon?
    LEVEL_UP_MOVE(36, MOVE_THUNDERBOLT),
    // 36 discharge? thunderbolt
    LEVEL_UP_MOVE(40, MOVE_METAL_SOUND),
    LEVEL_UP_MOVE(44, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(48, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(52, MOVE_ZAP_CANNON),
    LEVEL_UP_END

    // charge beam?
    // wild charge?
    // electroweb?
    // signal beam
    // rollout
    // headbutt
    // iron defense
    // magnet bomb?
};

static const u16 sMagnetonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_METAL_SOUND),
    LEVEL_UP_MOVE(4, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE),
    // LEVEL_UP_MOVE(12, MOVE_THUNDER_SHOCK),
    // 12 electro ball?
    // LEVEL_UP_MOVE(16, MOVE_SPIKE_CANNON),
    // 16 gyro ball?
    LEVEL_UP_MOVE(20, MOVE_SPARK),
    LEVEL_UP_MOVE(24, MOVE_SCREECH),
    // LEVEL_UP_MOVE(28, MOVE_SONIC_BOOM),
    // 28 magnet rise?
    LEVEL_UP_MOVE(30, MOVE_TRI_ATTACK),
    // 34 flash cannon?
    LEVEL_UP_MOVE(40, MOVE_THUNDERBOLT),
    // 40 discharge? thunderbolt
    LEVEL_UP_MOVE(46, MOVE_METAL_SOUND),
    LEVEL_UP_MOVE(52, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(58, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(64, MOVE_ZAP_CANNON),
    LEVEL_UP_END
};

static const u16 sFarfetchdLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(5, MOVE_LEER),
    LEVEL_UP_MOVE(10, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(15, MOVE_CUT),
    LEVEL_UP_MOVE(20, MOVE_AERIAL_ACE),
    LEVEL_UP_MOVE(25, MOVE_AIR_CUTTER),
    LEVEL_UP_MOVE(30, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(35, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(40, MOVE_SLASH),
    LEVEL_UP_MOVE(45, MOVE_SWORDS_DANCE),
    // 50 air slash?
    LEVEL_UP_MOVE(55, MOVE_LEAF_BLADE),
    LEVEL_UP_MOVE(60, MOVE_AGILITY),
    // 65 brave bird?
    LEVEL_UP_END

    // u-turn?
    // solar blade?
    // heatwave
    // poison jab? poison tail
    // close combat? superpower
    // work up?
    // roost? recover
    // night slash?
    // dual wingbeat?
    // ominous wind?
    // razor leaf?
    // twister
};

static const u16 sDoduoLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(5, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(8, MOVE_RAGE),
    LEVEL_UP_MOVE(12, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_PURSUIT),
    LEVEL_UP_MOVE(19, MOVE_WING_ATTACK),
    // 19 pluck? wing attack
    // 22 double hit?
    LEVEL_UP_MOVE(26, MOVE_AGILITY),
    LEVEL_UP_MOVE(29, MOVE_UPROAR),
    // 33 accupressure?
    LEVEL_UP_MOVE(36, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(40, MOVE_JUMP_KICK),
    // 40 lunge? jump kick
    LEVEL_UP_MOVE(43, MOVE_DRILL_PECK),
    LEVEL_UP_MOVE(47, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(50, MOVE_THRASH),
    LEVEL_UP_END

    // roost? recover
    // echoed voice?
    // tri attack
};

static const u16 sDodrioLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(5, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(8, MOVE_RAGE),
    LEVEL_UP_MOVE(12, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_PURSUIT),
    LEVEL_UP_MOVE(19, MOVE_WING_ATTACK),
    // 19 pluck? wing attack
    // 22 double hit?
    LEVEL_UP_MOVE(26, MOVE_AGILITY),
    LEVEL_UP_MOVE(29, MOVE_UPROAR),
    LEVEL_UP_MOVE(31, MOVE_TRI_ATTACK),
    // 34 accupressure?
    LEVEL_UP_MOVE(38, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(43, MOVE_JUMP_KICK),
    // 43 lunge? jump kick
    LEVEL_UP_MOVE(47, MOVE_DRILL_PECK),
    LEVEL_UP_MOVE(52, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(56, MOVE_THRASH),
    LEVEL_UP_END

    // stomping tantrum?
};

static const u16 sSeelLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(3, MOVE_GROWL),
    LEVEL_UP_MOVE(7, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(11, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(13, MOVE_ENCORE),
    // 17 ice shard?
    LEVEL_UP_MOVE(21, MOVE_REST),
    // 23 aqua ring?
    LEVEL_UP_MOVE(27, MOVE_AURORA_BEAM),
    // 31 aqua jet?
    // 33 brine?
    LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(41, MOVE_DIVE),
    LEVEL_UP_MOVE(43, MOVE_WATERFALL),
    // 43 aqua tail?
    LEVEL_UP_MOVE(47, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(51, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(53, MOVE_HAIL),
    LEVEL_UP_END

    // icicle spear
    // lick
    // belch?
    // echoed voice?
    // smart strike?
    // drill run?
    // whirlpool?
    // peck?
    // megahorn
};

static const u16 sDewgongLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(3, MOVE_GROWL),
    LEVEL_UP_MOVE(7, MOVE_SIGNAL_BEAM),
    LEVEL_UP_MOVE(11, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(13, MOVE_ENCORE),
    // 17 ice shard?
    LEVEL_UP_MOVE(21, MOVE_REST),
    // 23 aqua ring?
    LEVEL_UP_MOVE(27, MOVE_AURORA_BEAM),
    // 31 aqua jet?
    // 33 brine?
    LEVEL_UP_MOVE(39, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(45, MOVE_DIVE),
    LEVEL_UP_MOVE(49, MOVE_WATERFALL),
    // 49 aqua tail?
    LEVEL_UP_MOVE(55, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(61, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(65, MOVE_HAIL),
    LEVEL_UP_END
};

static const u16 sGrimerLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(4, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(12, MOVE_DISABLE),
    LEVEL_UP_MOVE(15, MOVE_SLUDGE),
    LEVEL_UP_MOVE(18, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(21, MOVE_MINIMIZE),
    LEVEL_UP_MOVE(26, MOVE_TOXIC),
    LEVEL_UP_MOVE(29, MOVE_SLUDGE_BOMB),
    // 32 sludge wave?
    LEVEL_UP_MOVE(37, MOVE_SCREECH),
    // 40 gunk shot?
    LEVEL_UP_MOVE(43, MOVE_ACID_ARMOR),
    // 46 belch?
    LEVEL_UP_MOVE(48, MOVE_MEMENTO),
    LEVEL_UP_END

    // confuse ray
    // acid
    // drain punch?
    // infestation?
    // shadow sneak?
    // zap cannon?
    // crunch?
};

static const u16 sMukLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(12, MOVE_DISABLE),
    LEVEL_UP_MOVE(15, MOVE_SLUDGE),
    LEVEL_UP_MOVE(18, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(21, MOVE_MINIMIZE),
    LEVEL_UP_MOVE(26, MOVE_TOXIC),
    LEVEL_UP_MOVE(29, MOVE_SLUDGE_BOMB),
    // 32 sludge wave?
    LEVEL_UP_MOVE(37, MOVE_SCREECH),
    // 40 gunk shot?
    LEVEL_UP_MOVE(46, MOVE_ACID_ARMOR),
    // 52 belch?
    LEVEL_UP_MOVE(57, MOVE_MEMENTO),
    LEVEL_UP_END

    // lunge?
};

static const u16 sShellderLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(4, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(8, MOVE_ICICLE_SPEAR),
    // 8 ice shard? icicle spear
    LEVEL_UP_MOVE(12, MOVE_LEER),
    LEVEL_UP_MOVE(16, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE(20, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(24, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(28, MOVE_PROTECT),
    // 28 razor shell?
    LEVEL_UP_MOVE(37, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(44, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(44, MOVE_CLAMP),
    // 44 shell smash? clamp
    LEVEL_UP_MOVE(48, MOVE_HYDRO_PUMP),
    LEVEL_UP_END

    // mud shot
    // rock blast
    // twineedle
    // rapid spin
    // take down
    // tri attack
    // spikes?
};

static const u16 sCloysterLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPIKES),
    LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(1, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(1, MOVE_PROTECT),
    LEVEL_UP_MOVE(28, MOVE_SPIKES),
    LEVEL_UP_MOVE(40, MOVE_SPIKE_CANNON),
    LEVEL_UP_END
    
    // signal beam
    // pin missile
    // smart strike
    // poison jab? poison tail
    // weather ball
    // drill run?
    // icicle spear
    // clamp
    // take down
    // rapid spin
    // headbutt
};

static const u16 sGastlyLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(4, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(8, MOVE_MEAN_LOOK),
    // 12 payback?
    LEVEL_UP_MOVE(16, MOVE_SPITE),
    LEVEL_UP_MOVE(20, MOVE_CURSE),
    // 24 hex?
    LEVEL_UP_MOVE(28, MOVE_NIGHT_SHADE),
    // 32 sucker punch?
    // 36 dark pulse?
    // LEVEL_UP_MOVE(22, MOVE_PURSUIT),
    LEVEL_UP_MOVE(40, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(44, MOVE_DESTINY_BOND),
    LEVEL_UP_MOVE(48, MOVE_DREAM_EATER),
    LEVEL_UP_END

    // poison jab? poison tail
    // imprison
    // gunk shot?
    // will-o-wisp
    // energy ball?
    // reflect type?
    // skitter smack?
    // ominous wind?
    // infestation?
};

static const u16 sHaunterLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(1, MOVE_MEAN_LOOK),
    // 12 payback?
    LEVEL_UP_MOVE(16, MOVE_SPITE),
    LEVEL_UP_MOVE(20, MOVE_CURSE),
    // 24 hex?
    LEVEL_UP_MOVE(25, MOVE_SHADOW_PUNCH),
    LEVEL_UP_MOVE(30, MOVE_NIGHT_SHADE),
    // 36 sucker punch?
    // 42 dark pulse?
    // LEVEL_UP_MOVE(22, MOVE_PURSUIT),
    LEVEL_UP_MOVE(48, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(54, MOVE_DESTINY_BOND),
    LEVEL_UP_MOVE(60, MOVE_DREAM_EATER),
    LEVEL_UP_END

    // shadow claw
};

static const u16 sGengarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(1, MOVE_MEAN_LOOK),
    // 12 payback?
    LEVEL_UP_MOVE(16, MOVE_SPITE),
    LEVEL_UP_MOVE(20, MOVE_CURSE),
    // 24 hex?
    LEVEL_UP_MOVE(25, MOVE_SHADOW_PUNCH),
    LEVEL_UP_MOVE(30, MOVE_NIGHT_SHADE),
    // 36 sucker punch?
    // 42 dark pulse?
    // LEVEL_UP_MOVE(22, MOVE_PURSUIT),
    LEVEL_UP_MOVE(48, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(54, MOVE_DESTINY_BOND),
    LEVEL_UP_MOVE(60, MOVE_DREAM_EATER),
    LEVEL_UP_END
};

static const u16 sOnixLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_BIND),
    LEVEL_UP_MOVE(1, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(4, MOVE_RAGE),
    // 4 smack down? rage
    LEVEL_UP_MOVE(8, MOVE_AGILITY),
    // 8 rock polish? agility
    LEVEL_UP_MOVE(12, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(16, MOVE_CURSE),
    LEVEL_UP_MOVE(20, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(24, MOVE_SCREECH),
    LEVEL_UP_MOVE(28, MOVE_SAND_TOMB),
    // 32 stealth rock? spikes
    LEVEL_UP_MOVE(36, MOVE_SLAM),
    LEVEL_UP_MOVE(40, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(44, MOVE_DIG),
    LEVEL_UP_MOVE(48, MOVE_IRON_TAIL),
    // 52 stone edge?
    LEVEL_UP_MOVE(56, MOVE_DOUBLE_EDGE),
    // LEVEL_UP_MOVE(17, MOVE_ROCK_TOMB),
    LEVEL_UP_END

    // stomping tantrum?
    // breaking swipe?
    // dragon dance
    // dragon pulse?
    // drill run?
    // body press?
    // head smash?
    // rock blast?
    // scorching sands?
    // meteor beam?
    // ancient power
    // twister
};

static const u16 sDrowzeeLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(7, MOVE_DISABLE),
    LEVEL_UP_MOVE(9, MOVE_CONFUSION),
    LEVEL_UP_MOVE(15, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(18, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(21, MOVE_MEDITATE),
    LEVEL_UP_MOVE(26, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(29, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(32, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(37, MOVE_SWAGGER),
    LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(43, MOVE_TAIL_GLOW),
    LEVEL_UP_MOVE(50, MOVE_SHADOW_PUNCH),
    LEVEL_UP_MOVE(53, MOVE_FUTURE_SIGHT),
    LEVEL_UP_END
};

static const u16 sHypnoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_NIGHTMARE),
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(7, MOVE_DISABLE),
    LEVEL_UP_MOVE(9, MOVE_CONFUSION),
    LEVEL_UP_MOVE(15, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(18, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(21, MOVE_MEDITATE),
    LEVEL_UP_MOVE(28, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(33, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(38, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(45, MOVE_SWAGGER),
    LEVEL_UP_MOVE(50, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(55, MOVE_TAIL_GLOW),
    LEVEL_UP_MOVE(64, MOVE_SHADOW_PUNCH),
    LEVEL_UP_MOVE(69, MOVE_FUTURE_SIGHT),
    LEVEL_UP_END
};

static const u16 sKrabbyLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(5, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_HARDEN),
    LEVEL_UP_MOVE(15, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(19, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(21, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(25, MOVE_STOMP),
    LEVEL_UP_MOVE(29, MOVE_PROTECT),
    LEVEL_UP_MOVE(31, MOVE_CRUSH_CLAW),
    LEVEL_UP_MOVE(35, MOVE_SPIKE_CANNON),
    LEVEL_UP_MOVE(39, MOVE_WATERFALL),
    LEVEL_UP_MOVE(41, MOVE_CRABHAMMER),
    LEVEL_UP_MOVE(45, MOVE_FLAIL),
    LEVEL_UP_END

    // crush claw
    // meteor mash
};

static const u16 sKinglerLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(1, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(5, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_HARDEN),
    LEVEL_UP_MOVE(15, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(19, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(21, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(25, MOVE_STOMP),
    LEVEL_UP_MOVE(32, MOVE_PROTECT),
    LEVEL_UP_MOVE(37, MOVE_CRUSH_CLAW),
    LEVEL_UP_MOVE(44, MOVE_SPIKE_CANNON),
    LEVEL_UP_MOVE(51, MOVE_WATERFALL),
    LEVEL_UP_MOVE(56, MOVE_CRABHAMMER),
    LEVEL_UP_MOVE(63, MOVE_FLAIL),
    LEVEL_UP_END
};

static const u16 sVoltorbLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_CHARGE),
    LEVEL_UP_MOVE(5, MOVE_TACKLE),
    LEVEL_UP_MOVE(8, MOVE_SONIC_BOOM),
    LEVEL_UP_MOVE(12, MOVE_SPARK),
    LEVEL_UP_MOVE(15, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(19, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(26, MOVE_CHARGE),
    LEVEL_UP_MOVE(29, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(33, MOVE_SWIFT),
    LEVEL_UP_MOVE(36, MOVE_SPIKE_CANNON),
    LEVEL_UP_MOVE(40, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(43, MOVE_MIRROR_COAT),
    LEVEL_UP_END
};

static const u16 sElectrodeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CHARGE),
    LEVEL_UP_MOVE(1, MOVE_SCREECH),
    LEVEL_UP_MOVE(5, MOVE_TACKLE),
    LEVEL_UP_MOVE(8, MOVE_SONIC_BOOM),
    LEVEL_UP_MOVE(12, MOVE_SPARK),
    LEVEL_UP_MOVE(15, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(19, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(26, MOVE_CHARGE),
    LEVEL_UP_MOVE(29, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(35, MOVE_SWIFT),
    LEVEL_UP_MOVE(40, MOVE_SPIKE_CANNON),
    LEVEL_UP_MOVE(46, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(51, MOVE_MIRROR_COAT),
    LEVEL_UP_END
};

static const u16 sExeggcuteLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_BARRAGE),
    LEVEL_UP_MOVE(1, MOVE_UPROAR),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(7, MOVE_REFLECT),
    LEVEL_UP_MOVE(11, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(17, MOVE_BULLET_SEED),
    LEVEL_UP_MOVE(19, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(21, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(23, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(27, MOVE_CONFUSION),
    LEVEL_UP_MOVE(33, MOVE_GROWTH),
    LEVEL_UP_MOVE(37, MOVE_SOLAR_BEAM),
    LEVEL_UP_MOVE(43, MOVE_PSYCHIC),
    LEVEL_UP_END
};

static const u16 sExeggutorLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BARRAGE),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(17, MOVE_STOMP),
    LEVEL_UP_MOVE(27, MOVE_EGG_BOMB),
    LEVEL_UP_MOVE(37, MOVE_PETAL_DANCE),
    LEVEL_UP_END
};

static const u16 sCuboneLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(3, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(7, MOVE_BONE_CLUB),
    LEVEL_UP_MOVE(11, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_LEER),
    LEVEL_UP_MOVE(17, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(21, MOVE_BONEMERANG),
    LEVEL_UP_MOVE(23, MOVE_RAGE),
    LEVEL_UP_MOVE(27, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(31, MOVE_THRASH),
    LEVEL_UP_MOVE(33, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(37, MOVE_BONE_RUSH),
    LEVEL_UP_MOVE(41, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(43, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sMarowakLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_BONE_CLUB),
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(3, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(7, MOVE_BONE_CLUB),
    LEVEL_UP_MOVE(11, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_LEER),
    LEVEL_UP_MOVE(17, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(21, MOVE_BONEMERANG),
    LEVEL_UP_MOVE(23, MOVE_RAGE),
    LEVEL_UP_MOVE(27, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(33, MOVE_THRASH),
    LEVEL_UP_MOVE(37, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(43, MOVE_BONE_RUSH),
    LEVEL_UP_MOVE(49, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(53, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sHitmonleeLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_REVENGE),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(5, MOVE_MEDITATE),
    LEVEL_UP_MOVE(9, MOVE_ROLLING_KICK),
    LEVEL_UP_MOVE(13, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(17, MOVE_BRICK_BREAK),
    LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(25, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(29, MOVE_JUMP_KICK),
    LEVEL_UP_MOVE(33, MOVE_MIND_READER),
    LEVEL_UP_MOVE(37, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(41, MOVE_BLAZE_KICK),
    LEVEL_UP_MOVE(45, MOVE_ENDURE),
    LEVEL_UP_MOVE(49, MOVE_MEGA_KICK),
    LEVEL_UP_MOVE(53, MOVE_REVERSAL),
    LEVEL_UP_MOVE(57, MOVE_HI_JUMP_KICK),
    LEVEL_UP_END
};

static const u16 sHitmonchanLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_REVENGE),
    LEVEL_UP_MOVE(1, MOVE_COMET_PUNCH),
    LEVEL_UP_MOVE(6, MOVE_AGILITY),
    LEVEL_UP_MOVE(11, MOVE_PURSUIT),
    LEVEL_UP_MOVE(16, MOVE_MACH_PUNCH),
    LEVEL_UP_MOVE(21, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(26, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE(26, MOVE_ICE_PUNCH),
    LEVEL_UP_MOVE(26, MOVE_FIRE_PUNCH),
    LEVEL_UP_MOVE(36, MOVE_SKY_UPPERCUT),
    LEVEL_UP_MOVE(41, MOVE_MEGA_PUNCH),
    LEVEL_UP_MOVE(46, MOVE_DETECT),
    LEVEL_UP_MOVE(51, MOVE_COUNTER),
    LEVEL_UP_MOVE(56, MOVE_SUPERPOWER),
    LEVEL_UP_END
};

static const u16 sLickitungLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(9, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(13, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(17, MOVE_WRAP),
    LEVEL_UP_MOVE(21, MOVE_STOMP),
    LEVEL_UP_MOVE(25, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(29, MOVE_DISABLE),
    LEVEL_UP_MOVE(33, MOVE_SLAM),
    LEVEL_UP_MOVE(37, MOVE_POISON_TAIL),
    LEVEL_UP_MOVE(41, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(45, MOVE_REFRESH),
    LEVEL_UP_MOVE(49, MOVE_SCREECH),
    LEVEL_UP_END
};

static const u16 sKoffingLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(6, MOVE_SMOG),
    LEVEL_UP_MOVE(10, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(15, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(19, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(24, MOVE_SLUDGE),
    LEVEL_UP_MOVE(28, MOVE_HAZE),
    LEVEL_UP_MOVE(33, MOVE_TOXIC),
    LEVEL_UP_MOVE(37, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(42, MOVE_SLUDGE_BOMB),
    LEVEL_UP_MOVE(46, MOVE_DESTINY_BOND),
    LEVEL_UP_MOVE(51, MOVE_MEMENTO),
    LEVEL_UP_END
};

static const u16 sWeezingLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(6, MOVE_SMOG),
    LEVEL_UP_MOVE(10, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(15, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(19, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(24, MOVE_SLUDGE),
    LEVEL_UP_MOVE(28, MOVE_HAZE),
    LEVEL_UP_MOVE(33, MOVE_TOXIC),
    LEVEL_UP_MOVE(40, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(48, MOVE_SLUDGE_BOMB),
    LEVEL_UP_MOVE(55, MOVE_DESTINY_BOND),
    LEVEL_UP_MOVE(63, MOVE_MEMENTO),
    LEVEL_UP_END
};

static const u16 sRhyhornLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(9, MOVE_STOMP),
    LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(25, MOVE_ROCK_BLAST),
    LEVEL_UP_MOVE(33, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(37, MOVE_HORN_DRILL),
    LEVEL_UP_MOVE(45, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(49, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(57, MOVE_MEGAHORN),
    LEVEL_UP_END
};

static const u16 sRhydonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(9, MOVE_STOMP),
    LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(25, MOVE_ROCK_BLAST),
    LEVEL_UP_MOVE(33, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(37, MOVE_HORN_DRILL),
    LEVEL_UP_MOVE(42, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(45, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(49, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(57, MOVE_MEGAHORN),
    LEVEL_UP_END
};

static const u16 sChanseyLevelUpLearnset[] = { // good
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(9, MOVE_REFRESH),
    LEVEL_UP_MOVE(12, MOVE_SOFT_BOILED),
    LEVEL_UP_MOVE(16, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(20, MOVE_MINIMIZE),
    LEVEL_UP_MOVE(23, MOVE_SING),
    LEVEL_UP_MOVE(27, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(31, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(34, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(38, MOVE_EGG_BOMB),
    LEVEL_UP_MOVE(41, MOVE_AROMATHERAPY),
    LEVEL_UP_MOVE(46, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sTangelaLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_INGRAIN),
    LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(5, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(8, MOVE_ABSORB),
    LEVEL_UP_MOVE(12, MOVE_GROWTH),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(19, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(22, MOVE_BIND),
    LEVEL_UP_MOVE(26, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(29, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(36, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(40, MOVE_SLAM),
    LEVEL_UP_MOVE(43, MOVE_TICKLE),
    LEVEL_UP_MOVE(47, MOVE_PETAL_DANCE),
    LEVEL_UP_END
};

static const u16 sKangaskhanLevelUpLearnset[] = { // almost
    LEVEL_UP_MOVE(1, MOVE_COMET_PUNCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(7, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(10, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(13, MOVE_BITE),
    LEVEL_UP_MOVE(19, MOVE_MEGA_PUNCH),
    LEVEL_UP_MOVE(22, MOVE_RAGE),
    LEVEL_UP_MOVE(25, MOVE_DIZZY_PUNCH),
    LEVEL_UP_MOVE(31, MOVE_CRUNCH),
    LEVEL_UP_MOVE(34, MOVE_ENDURE),
    LEVEL_UP_MOVE(37, MOVE_OUTRAGE),
    LEVEL_UP_MOVE(43, MOVE_CRUSH_CLAW),
    LEVEL_UP_MOVE(46, MOVE_REVERSAL),
    LEVEL_UP_END
};

static const u16 sHorseaLevelUpLearnset[] = { // signal beam?
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(4, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(8, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(14, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(18, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(23, MOVE_AGILITY),
    LEVEL_UP_MOVE(26, MOVE_TWISTER),
    LEVEL_UP_MOVE(30, MOVE_WATERFALL),
    LEVEL_UP_MOVE(35, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(38, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(42, MOVE_DRAGON_BREATH),
    LEVEL_UP_END
};

static const u16 sSeadraLevelUpLearnset[] = { // bounce?
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(4, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(8, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(14, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(18, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(23, MOVE_AGILITY),
    LEVEL_UP_MOVE(26, MOVE_TWISTER),
    LEVEL_UP_MOVE(30, MOVE_WATERFALL),
    LEVEL_UP_MOVE(40, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(48, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(57, MOVE_DRAGON_BREATH),
    LEVEL_UP_END
};

static const u16 sGoldeenLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(7, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(11, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_FLAIL),
    LEVEL_UP_MOVE(27, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(31, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(37, MOVE_WATERFALL),
    LEVEL_UP_MOVE(41, MOVE_HORN_DRILL),
    LEVEL_UP_MOVE(47, MOVE_AGILITY),
    LEVEL_UP_MOVE(51, MOVE_MEGAHORN),
    LEVEL_UP_END
};

static const u16 sSeakingLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_TAIL),
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(7, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(11, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_FLAIL),
    LEVEL_UP_MOVE(27, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(31, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(40, MOVE_WATERFALL),
    LEVEL_UP_MOVE(47, MOVE_HORN_DRILL),
    LEVEL_UP_MOVE(65, MOVE_AGILITY),
    LEVEL_UP_MOVE(63, MOVE_MEGAHORN),
    LEVEL_UP_END
};

static const u16 sStaryuLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(6, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(10, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(15, MOVE_RECOVER),
    LEVEL_UP_MOVE(19, MOVE_CAMOUFLAGE),
    LEVEL_UP_MOVE(24, MOVE_SWIFT),
    LEVEL_UP_MOVE(28, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(33, MOVE_MINIMIZE),
    LEVEL_UP_MOVE(37, MOVE_SPIKE_CANNON),
    LEVEL_UP_MOVE(42, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(46, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(51, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(55, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sStarmieLevelUpLearnset[] = { // redo this and back
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(1, MOVE_RECOVER),
    LEVEL_UP_MOVE(1, MOVE_SWIFT),
    LEVEL_UP_MOVE(28, MOVE_CONFUSE_RAY),
    LEVEL_UP_END
};

static const u16 sMrMimeLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_BARRIER),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(4, MOVE_MAGICAL_LEAF),
    // 4 copycat?
    LEVEL_UP_MOVE(8, MOVE_MEDITATE),
    LEVEL_UP_MOVE(11, MOVE_ENCORE),
    LEVEL_UP_MOVE(15, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(18, MOVE_MIMIC),
    LEVEL_UP_MOVE(22, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(22, MOVE_REFLECT),
    LEVEL_UP_MOVE(25, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(29, MOVE_SUBSTITUTE),
    LEVEL_UP_MOVE(32, MOVE_RECYCLE),
    LEVEL_UP_MOVE(36, MOVE_TRICK),
    LEVEL_UP_MOVE(39, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(43, MOVE_ROLE_PLAY),
    LEVEL_UP_MOVE(46, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(50, MOVE_SAFEGUARD),
    LEVEL_UP_END
};

static const u16 sScytherLevelUpLearnset[] = { // best format
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(5, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(9, MOVE_PURSUIT),
    LEVEL_UP_MOVE(13, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(17, MOVE_AGILITY),
    LEVEL_UP_MOVE(21, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(29, MOVE_SLASH),
    LEVEL_UP_MOVE(33, MOVE_RAZOR_WIND),
    LEVEL_UP_MOVE(37, MOVE_DOUBLE_TEAM),
    // 41 x-scissor?
    // 45 night slash?
    // 49 double hit?
    // 53 air slash?
    LEVEL_UP_MOVE(41, MOVE_SWORDS_DANCE), // 57
    LEVEL_UP_END
};

static const u16 sJynxLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_LOVELY_KISS),
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(8, MOVE_LOVELY_KISS),
    LEVEL_UP_MOVE(11, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(15, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(18, MOVE_ICE_PUNCH),
    LEVEL_UP_MOVE(21, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(25, MOVE_FAKE_TEARS),
    // 28 wake-up slap?
    // 33 avalanche?
    LEVEL_UP_MOVE(28, MOVE_BODY_SLAM), // 39
    // 44 wring out?
    LEVEL_UP_MOVE(33, MOVE_PERISH_SONG), // 49
    LEVEL_UP_MOVE(39, MOVE_BLIZZARD), // 55
    LEVEL_UP_END
};

static const u16 sElectabuzzLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(7, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(10, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(16, MOVE_SWIFT),
    LEVEL_UP_MOVE(19, MOVE_SHOCK_WAVE),
    LEVEL_UP_MOVE(25, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(28, MOVE_THUNDER_PUNCH),
    // 37 discharge?
    LEVEL_UP_MOVE(37, MOVE_THUNDERBOLT), // 43
    LEVEL_UP_MOVE(43, MOVE_SCREECH), // 52
    LEVEL_UP_MOVE(52, MOVE_THUNDER), // 58
    LEVEL_UP_END
};

static const u16 sMagmarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_SMOG),
    LEVEL_UP_MOVE(1, MOVE_FIRE_PUNCH),
    LEVEL_UP_MOVE(7, MOVE_EMBER),
    LEVEL_UP_MOVE(10, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(16, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(19, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(25, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(28, MOVE_FIRE_PUNCH),
    // 36 lava plume?
    LEVEL_UP_MOVE(36, MOVE_FLAMETHROWER), // 41
    LEVEL_UP_MOVE(41, MOVE_SUNNY_DAY), // 49
    LEVEL_UP_MOVE(49, MOVE_FIRE_BLAST), // 54
    LEVEL_UP_END
};

static const u16 sPinsirLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(4, MOVE_BIND),
    LEVEL_UP_MOVE(8, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(13, MOVE_HARDEN),
    LEVEL_UP_MOVE(18, MOVE_REVENGE),
    LEVEL_UP_MOVE(21, MOVE_BRICK_BREAK),
    LEVEL_UP_MOVE(25, MOVE_VITAL_THROW),
    // 30 x-scissor?
    LEVEL_UP_MOVE(30, MOVE_THRASH), // 35
    LEVEL_UP_MOVE(35, MOVE_SWORDS_DANCE), // 38
    LEVEL_UP_MOVE(38, MOVE_SUBMISSION), // 42
    // LEVEL_UP_MOVE(47, MOVE_GUILLOTINE),
    LEVEL_UP_MOVE(42, MOVE_SUPERPOWER), // 52
    LEVEL_UP_END
};

static const u16 sTaurosLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(3, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(5, MOVE_RAGE),
    LEVEL_UP_MOVE(8, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(11, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(15, MOVE_PURSUIT),
    LEVEL_UP_MOVE(19, MOVE_REST),
    // 24 payback?
    // 29 zen headbutt?
    LEVEL_UP_MOVE(24, MOVE_TAKE_DOWN), // 35
    LEVEL_UP_MOVE(29, MOVE_SWAGGER), // 41
    LEVEL_UP_MOVE(35, MOVE_THRASH), // 48
    LEVEL_UP_MOVE(41, MOVE_HYPER_BEAM), // 55
    LEVEL_UP_END
};

static const u16 sMagikarpLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(15, MOVE_TACKLE),
    LEVEL_UP_MOVE(25, MOVE_FLAIL),
    LEVEL_UP_END
};

static const u16 sGyaradosLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_FLAIL),
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_TWISTER),
    LEVEL_UP_MOVE(20, MOVE_BITE),
    LEVEL_UP_MOVE(23, MOVE_DRAGON_RAGE),
    LEVEL_UP_MOVE(26, MOVE_LEER),
    LEVEL_UP_MOVE(29, MOVE_TWISTER),
    LEVEL_UP_MOVE(32, MOVE_CRUNCH),
    // 35 aqua tail?
    LEVEL_UP_MOVE(35, MOVE_RAIN_DANCE), // 38
    LEVEL_UP_MOVE(38, MOVE_HYDRO_PUMP), // 41
    LEVEL_UP_MOVE(41, MOVE_DRAGON_DANCE), // 44
    // 44 hurricane
    LEVEL_UP_MOVE(44, MOVE_THRASH), // 47
    LEVEL_UP_MOVE(47, MOVE_HYPER_BEAM), // 50
    LEVEL_UP_END
};

static const u16 sLaprasLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(4, MOVE_MIST),
    LEVEL_UP_MOVE(7, MOVE_CONFUSE_RAY),
    // 10 ice shard?
    LEVEL_UP_MOVE(10, MOVE_WATER_PULSE), // 14
    LEVEL_UP_MOVE(14, MOVE_BODY_SLAM), // 18
    LEVEL_UP_MOVE(18, MOVE_RAIN_DANCE), // 22
    LEVEL_UP_MOVE(22, MOVE_PERISH_SONG), // 27
    LEVEL_UP_MOVE(27, MOVE_ICE_BEAM), // 32
    // 37 brine?
    LEVEL_UP_MOVE(32, MOVE_SAFEGUARD), // 43
    LEVEL_UP_MOVE(37, MOVE_HYDRO_PUMP), // 49
    // LEVEL_UP_MOVE(55, MOVE_SHEER_COLD),
    LEVEL_UP_END
};

static const u16 sDittoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TRANSFORM),
    LEVEL_UP_END
};

static const u16 sEeveeLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_COVET),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_GROWL),
    // 15 baby-doll eyes?
    LEVEL_UP_MOVE(20, MOVE_SWIFT),
    LEVEL_UP_MOVE(25, MOVE_BITE),
    LEVEL_UP_MOVE(30, MOVE_BATON_PASS), // 35
    // 30 copycat?
    LEVEL_UP_MOVE(35, MOVE_TAKE_DOWN), // 40
    LEVEL_UP_MOVE(40, MOVE_CHARM), // 45
    LEVEL_UP_MOVE(45, MOVE_DOUBLE_EDGE), // 50
    // 50 last resort?
    // 57 trump card?
    LEVEL_UP_END
};

static const u16 sVaporeonLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_GROWL),
    LEVEL_UP_MOVE(20, MOVE_HAZE),
    LEVEL_UP_MOVE(25, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(30, MOVE_AURORA_BEAM),
    // LEVEL_UP_MOVE(35, MOVE_CRUNCH),
    // 35 aqua ring?
    LEVEL_UP_MOVE(35, MOVE_MUDDY_WATER), // 40
    LEVEL_UP_MOVE(40, MOVE_ACID_ARMOR), // 45
    LEVEL_UP_MOVE(45, MOVE_HYDRO_PUMP), // 50
    // 55 last resort?
    LEVEL_UP_END

    // muddy water
};

static const u16 sJolteonLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_GROWL),
    LEVEL_UP_MOVE(20, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(25, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(30, MOVE_DOUBLE_KICK),
    // 30 thunder fang?
    LEVEL_UP_MOVE(35, MOVE_PIN_MISSILE),
    // 40 discharge?
    LEVEL_UP_MOVE(40, MOVE_AGILITY), // 45
    LEVEL_UP_MOVE(45, MOVE_THUNDER), // 50
    // 55 last resort?
    LEVEL_UP_END
};

static const u16 sFlareonLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_GROWL),
    LEVEL_UP_MOVE(20, MOVE_SMOG),
    LEVEL_UP_MOVE(25, MOVE_EMBER),
    LEVEL_UP_MOVE(30, MOVE_BITE), // 25
    // 30 fire fang?
    LEVEL_UP_MOVE(35, MOVE_FIRE_SPIN),
    // 40 lava plume?
    LEVEL_UP_MOVE(40, MOVE_SCARY_FACE), // 45
    LEVEL_UP_MOVE(45, MOVE_FIRE_BLAST), // 50
    // 50 flare blitz?
    // 55 last resort?
    LEVEL_UP_END
};

static const u16 sPorygonLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_SHARPEN),
    LEVEL_UP_MOVE(1, MOVE_CONVERSION),
    LEVEL_UP_MOVE(5, MOVE_RECYCLE),
    LEVEL_UP_MOVE(10, MOVE_THUNDER_SHOCK), // 15
    // 10 magnet rise?
    LEVEL_UP_MOVE(15, MOVE_PSYBEAM), // 20
    LEVEL_UP_MOVE(20, MOVE_CONVERSION_2), // 25
    LEVEL_UP_MOVE(25, MOVE_AGILITY), // 30
    LEVEL_UP_MOVE(30, MOVE_RECOVER), // 35
    LEVEL_UP_MOVE(35, MOVE_SIGNAL_BEAM), // 40
    // 40 discharge?
    LEVEL_UP_MOVE(40, MOVE_TRI_ATTACK), // 45
    LEVEL_UP_MOVE(45, MOVE_MAGIC_COAT), // 50
    LEVEL_UP_MOVE(50, MOVE_LOCK_ON), // 55
    LEVEL_UP_MOVE(55, MOVE_ZAP_CANNON), // 62
    LEVEL_UP_END
};

static const u16 sOmanyteLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(1, MOVE_BIND),
    LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(5, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(10, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(20, MOVE_LEER),
    LEVEL_UP_MOVE(25, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(30, MOVE_ANCIENT_POWER),
    // 35 brine?
    LEVEL_UP_MOVE(35, MOVE_TICKLE),
    LEVEL_UP_MOVE(41, MOVE_PROTECT),
    LEVEL_UP_MOVE(45, MOVE_ROCK_BLAST),
    LEVEL_UP_MOVE(50, MOVE_SURF),
    // 55 shell smash?
    LEVEL_UP_MOVE(55, MOVE_HYDRO_PUMP), // 60
    LEVEL_UP_END

    // pin missile
    // spikes
    // iron defense
    // stone edge
    // whirlpool
};

static const u16 sOmastarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(1, MOVE_BIND),
    LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(1, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(20, MOVE_LEER),
    LEVEL_UP_MOVE(25, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(30, MOVE_ANCIENT_POWER),
    // 35 brine?
    LEVEL_UP_MOVE(35, MOVE_TICKLE), // incomplete
    LEVEL_UP_MOVE(40, MOVE_CRUNCH),
    LEVEL_UP_MOVE(43, MOVE_PROTECT),
    LEVEL_UP_MOVE(49, MOVE_ROCK_BLAST),
    LEVEL_UP_MOVE(56, MOVE_SURF),
    // 63 shell smash?
    LEVEL_UP_MOVE(63, MOVE_HYDRO_PUMP), // 70
    LEVEL_UP_END
};

static const u16 sKabutoLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(5, MOVE_SCRATCH),
    LEVEL_UP_MOVE(10, MOVE_SAND_ATTACK),
    // 15 aqua jet?
    LEVEL_UP_MOVE(15, MOVE_LEER), // 20
    LEVEL_UP_MOVE(20, MOVE_MUD_SHOT), // 25
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER), // 30
    LEVEL_UP_MOVE(30, MOVE_ENDURE), // 35 incomplete
    // 35 brine?
    LEVEL_UP_MOVE(35, MOVE_LEECH_LIFE), // 45
    LEVEL_UP_MOVE(41, MOVE_PROTECT),
    // 50 liquidation?
    LEVEL_UP_MOVE(45, MOVE_METAL_SOUND), // 55
    // 60 stone edge?
    LEVEL_UP_END

    // rockblast
    // iron defense
    // psycho cut?
    // cross poison?
    // razor shell?
    // x-scissor?
};

static const u16 sKabutopsLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_FURY_CUTTER),
    // 1 night slash?
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    // 15 aqua jet?
    LEVEL_UP_MOVE(15, MOVE_LEER), // 20
    LEVEL_UP_MOVE(20, MOVE_MUD_SHOT), // 25
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER), // 30
    LEVEL_UP_MOVE(30, MOVE_ENDURE), // 35
    // 35 brine?
    LEVEL_UP_MOVE(35, MOVE_LEECH_LIFE), // 49
    LEVEL_UP_MOVE(40, MOVE_SLASH),
    LEVEL_UP_MOVE(43, MOVE_PROTECT),
    // 56 liquidation?
    LEVEL_UP_MOVE(49, MOVE_METAL_SOUND), // 63
    // 70 stone edge?
    LEVEL_UP_END
};

static const u16 sAerodactylLevelUpLearnset[] = { // incomplete
    // 1 fire, thunder, ice fang
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(10, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(20, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(25, MOVE_ROAR),
    LEVEL_UP_MOVE(30, MOVE_CRUNCH),
    // 35 iron head?
    LEVEL_UP_MOVE(40, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(45, MOVE_ROCK_SLIDE), // incomplete
    // 45 stone edge?
    LEVEL_UP_MOVE(50, MOVE_AGILITY),
    LEVEL_UP_MOVE(55, MOVE_HYPER_BEAM),
    LEVEL_UP_END

    // rock blast
    // bulldoze?
    // dragon dance
    // psychic fangs (brick break effect)
    // hurricane
};

static const u16 sSnorlaxLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_COVET),
    LEVEL_UP_MOVE(1, MOVE_RECYCLE),
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_BLOCK),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(12, MOVE_YAWN),
    LEVEL_UP_MOVE(16, MOVE_BITE),
    LEVEL_UP_MOVE(20, MOVE_SNORE),
    LEVEL_UP_MOVE(20, MOVE_SLEEP_TALK),
    LEVEL_UP_MOVE(20, MOVE_REST),
    LEVEL_UP_MOVE(24, MOVE_CRUNCH),
    LEVEL_UP_MOVE(28, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(32, MOVE_ROLLOUT),
    // 32 heavy slam?
    LEVEL_UP_MOVE(36, MOVE_AMNESIA),
    // 40 high horsepower?
    // 44 hammer arm?
    LEVEL_UP_MOVE(40, MOVE_BELLY_DRUM), // 48
    // 52 belch?
    LEVEL_UP_MOVE(44, MOVE_HYPER_BEAM), // 56
    LEVEL_UP_END

    // gunk shot
    // outrage
    // work up
    // wild charge
};

static const u16 sArticunoLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_GUST),
    LEVEL_UP_MOVE(1, MOVE_MIST),
    LEVEL_UP_MOVE(5, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(10, MOVE_REFLECT),
    LEVEL_UP_MOVE(15, MOVE_ICY_WIND),
    // 15 ice shard?
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(30, MOVE_MIND_READER),
    // 30 tailwind?
    // 35 freeze-dry?
    LEVEL_UP_MOVE(35, MOVE_RECOVER), // 40
    // 40 roost?
    LEVEL_UP_MOVE(40, MOVE_ICE_BEAM), // 45
    LEVEL_UP_MOVE(45, MOVE_HAIL), // 50
    LEVEL_UP_MOVE(50, MOVE_AIR_CUTTER), // 55
    // 55 hurricane?
    LEVEL_UP_MOVE(55, MOVE_HAZE),
    LEVEL_UP_MOVE(60, MOVE_BLIZZARD),
    // LEVEL_UP_MOVE(78, MOVE_SHEER_COLD),
    LEVEL_UP_END
};

static const u16 sZapdosLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(5, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(10, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(15, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(30, MOVE_CHARGE),
    LEVEL_UP_MOVE(35, MOVE_DRILL_PECK),
    LEVEL_UP_MOVE(40, MOVE_RECOVER),
    // 40 roost?
    LEVEL_UP_MOVE(45, MOVE_SPARK),
    // 45 discharge?
    LEVEL_UP_MOVE(50, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(55, MOVE_THUNDER),
    LEVEL_UP_MOVE(60, MOVE_DETECT),
    LEVEL_UP_MOVE(65, MOVE_COSMIC_POWER),
    // 65 magnetic flux? cosmic power like
    LEVEL_UP_MOVE(70, MOVE_ZAP_CANNON),
    LEVEL_UP_END
};

static const u16 sMoltresLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(5, MOVE_EMBER),
    LEVEL_UP_MOVE(10, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(15, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(30, MOVE_FLAMETHROWER),
    // 30 incinerate?
    LEVEL_UP_MOVE(35, MOVE_AIR_CUTTER),
    // 35 air slash? air cutter
    LEVEL_UP_MOVE(40, MOVE_RECOVER),
    // 40 roost?
    LEVEL_UP_MOVE(45, MOVE_HEAT_WAVE),
    LEVEL_UP_MOVE(50, MOVE_SUNNY_DAY),
    // 55 hurricane?
    LEVEL_UP_MOVE(60, MOVE_ENDURE),
    LEVEL_UP_MOVE(65, MOVE_OVERHEAT),
    LEVEL_UP_MOVE(70, MOVE_SKY_ATTACK),
    LEVEL_UP_END
};

static const u16 sDratiniLevelUpLearnset[] = { // incomplete
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(5, MOVE_TWISTER),
    LEVEL_UP_MOVE(10, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(15, MOVE_DRAGON_RAGE),
    // 15 dragon tail?
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_SLAM),
    LEVEL_UP_MOVE(31, MOVE_WATERFALL),
    // 31 aqua tail?
    LEVEL_UP_MOVE(35, MOVE_DRAGON_BREATH),
    // 35 dragon rush?
    LEVEL_UP_MOVE(40, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(45, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(50, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(55, MOVE_OUTRAGE),
    LEVEL_UP_MOVE(60, MOVE_HYPER_BEAM),
    LEVEL_UP_END

    // scale shot
};

static const u16 sDragonairLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_TWISTER),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(15, MOVE_DRAGON_RAGE),
    // 15 dragon tail?
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_SLAM),
    LEVEL_UP_MOVE(33, MOVE_WATERFALL),
    // 33 aqua tail?
    LEVEL_UP_MOVE(39, MOVE_DRAGON_BREATH),
    // 39 dragon rush?
    LEVEL_UP_MOVE(46, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(53, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(60, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(67, MOVE_OUTRAGE),
    LEVEL_UP_MOVE(74, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sDragoniteLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_TWISTER),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(15, MOVE_DRAGON_RAGE),
    // 15 dragon tail?
    LEVEL_UP_MOVE(20, MOVE_AGILITY),
    LEVEL_UP_MOVE(25, MOVE_SLAM),
    LEVEL_UP_MOVE(33, MOVE_WATERFALL),
    // 33 aqua tail?
    LEVEL_UP_MOVE(39, MOVE_DRAGON_BREATH),
    // 39 dragon rush?
    LEVEL_UP_MOVE(46, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(53, MOVE_RAIN_DANCE),
    // 55 hurricane?
    LEVEL_UP_MOVE(62, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(71, MOVE_OUTRAGE),
    LEVEL_UP_MOVE(80, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sMewtwoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(11, MOVE_BARRIER),
    LEVEL_UP_MOVE(22, MOVE_MIST),
    LEVEL_UP_MOVE(33, MOVE_SWIFT),
    LEVEL_UP_MOVE(44, MOVE_RECOVER),
    LEVEL_UP_MOVE(55, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(66, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(77, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(88, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(99, MOVE_AMNESIA),
    LEVEL_UP_END
};

static const u16 sMewLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(10, MOVE_TRANSFORM),
    LEVEL_UP_MOVE(20, MOVE_MEGA_PUNCH),
    LEVEL_UP_MOVE(30, MOVE_METRONOME),
    LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(50, MOVE_ANCIENT_POWER),
    LEVEL_UP_END
};

static const u16 sChikoritaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(8, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(12, MOVE_REFLECT),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(22, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(29, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(36, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(43, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(50, MOVE_SOLAR_BEAM),
    LEVEL_UP_END
};

static const u16 sBayleefLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(1, MOVE_REFLECT),
    LEVEL_UP_MOVE(8, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(12, MOVE_REFLECT),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(23, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(31, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(39, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(47, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(55, MOVE_SOLAR_BEAM),
    LEVEL_UP_END
};

static const u16 sMeganiumLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(1, MOVE_REFLECT),
    LEVEL_UP_MOVE(8, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(12, MOVE_REFLECT),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(23, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(31, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(41, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(51, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(61, MOVE_SOLAR_BEAM),
    LEVEL_UP_END
};

static const u16 sCyndaquilLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(6, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(12, MOVE_EMBER),
    LEVEL_UP_MOVE(19, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(27, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(36, MOVE_SWIFT),
    LEVEL_UP_MOVE(46, MOVE_FLAMETHROWER),
    LEVEL_UP_END
};

static const u16 sQuilavaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(6, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(12, MOVE_EMBER),
    LEVEL_UP_MOVE(21, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(42, MOVE_SWIFT),
    LEVEL_UP_MOVE(54, MOVE_FLAMETHROWER),
    LEVEL_UP_END
};

static const u16 sTyphlosionLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(6, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(12, MOVE_EMBER),
    LEVEL_UP_MOVE(21, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(45, MOVE_SWIFT),
    LEVEL_UP_MOVE(60, MOVE_FLAMETHROWER),
    LEVEL_UP_END
};

static const u16 sTotodileLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(7, MOVE_RAGE),
    LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(20, MOVE_BITE),
    LEVEL_UP_MOVE(27, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(35, MOVE_SLASH),
    LEVEL_UP_MOVE(43, MOVE_SCREECH),
    LEVEL_UP_MOVE(52, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sCroconawLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(7, MOVE_RAGE),
    LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(21, MOVE_BITE),
    LEVEL_UP_MOVE(28, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(37, MOVE_SLASH),
    LEVEL_UP_MOVE(45, MOVE_SCREECH),
    LEVEL_UP_MOVE(55, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sFeraligatrLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_RAGE),
    LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(21, MOVE_BITE),
    LEVEL_UP_MOVE(28, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(38, MOVE_SLASH),
    LEVEL_UP_MOVE(47, MOVE_SCREECH),
    LEVEL_UP_MOVE(58, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sSentretLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(12, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(17, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(24, MOVE_SLAM),
    LEVEL_UP_MOVE(31, MOVE_FOLLOW_ME),
    LEVEL_UP_MOVE(40, MOVE_REST),
    LEVEL_UP_MOVE(49, MOVE_AMNESIA),
    LEVEL_UP_END

    // hyper voice
};

static const u16 sFurretLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(12, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(19, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(28, MOVE_SLAM),
    LEVEL_UP_MOVE(37, MOVE_FOLLOW_ME),
    LEVEL_UP_MOVE(48, MOVE_REST),
    LEVEL_UP_MOVE(59, MOVE_AMNESIA),
    LEVEL_UP_END
};

static const u16 sHoothootLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(6, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(11, MOVE_PECK),
    LEVEL_UP_MOVE(16, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(22, MOVE_REFLECT),
    LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(34, MOVE_CONFUSION),
    LEVEL_UP_MOVE(48, MOVE_DREAM_EATER),
    LEVEL_UP_END
};

static const u16 sNoctowlLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(6, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(11, MOVE_PECK),
    LEVEL_UP_MOVE(16, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(25, MOVE_REFLECT),
    LEVEL_UP_MOVE(33, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(41, MOVE_CONFUSION),
    LEVEL_UP_MOVE(57, MOVE_DREAM_EATER),
    LEVEL_UP_END
};

static const u16 sLedybaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(8, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(15, MOVE_COMET_PUNCH),
    LEVEL_UP_MOVE(22, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(22, MOVE_REFLECT),
    LEVEL_UP_MOVE(22, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(29, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(36, MOVE_SWIFT),
    LEVEL_UP_MOVE(43, MOVE_AGILITY),
    LEVEL_UP_MOVE(50, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sLedianLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(8, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(15, MOVE_COMET_PUNCH),
    LEVEL_UP_MOVE(24, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(24, MOVE_REFLECT),
    LEVEL_UP_MOVE(24, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(33, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(42, MOVE_SWIFT),
    LEVEL_UP_MOVE(51, MOVE_AGILITY),
    LEVEL_UP_MOVE(60, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sSpinarakLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
    LEVEL_UP_MOVE(6, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(11, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(17, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(23, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(30, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(37, MOVE_SPIDER_WEB),
    LEVEL_UP_MOVE(45, MOVE_AGILITY),
    LEVEL_UP_MOVE(53, MOVE_PSYCHIC),
    LEVEL_UP_END
};

static const u16 sAriadosLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
    LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(6, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(11, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(17, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(25, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(34, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(43, MOVE_SPIDER_WEB),
    LEVEL_UP_MOVE(53, MOVE_AGILITY),
    LEVEL_UP_MOVE(63, MOVE_PSYCHIC),
    LEVEL_UP_END
};

static const u16 sCrobatLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCREECH),
    LEVEL_UP_MOVE(1, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(6, MOVE_ASTONISH),
    LEVEL_UP_MOVE(11, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(16, MOVE_BITE),
    LEVEL_UP_MOVE(21, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(28, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(35, MOVE_AIR_CUTTER),
    LEVEL_UP_MOVE(42, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(49, MOVE_POISON_FANG),
    LEVEL_UP_MOVE(56, MOVE_HAZE),
    LEVEL_UP_END
};

static const u16 sChinchouLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(13, MOVE_FLAIL),
    LEVEL_UP_MOVE(17, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(25, MOVE_SPARK),
    LEVEL_UP_MOVE(29, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(41, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(49, MOVE_CHARGE),
    LEVEL_UP_END
};

static const u16 sLanturnLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(13, MOVE_FLAIL),
    LEVEL_UP_MOVE(17, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(25, MOVE_SPARK),
    LEVEL_UP_MOVE(32, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(43, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(61, MOVE_CHARGE),
    LEVEL_UP_END
};

static const u16 sPichuLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(1, MOVE_CHARM),
    LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(11, MOVE_SWEET_KISS),
    LEVEL_UP_END
};

static const u16 sCleffaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_CHARM),
    LEVEL_UP_MOVE(4, MOVE_ENCORE),
    LEVEL_UP_MOVE(8, MOVE_SING),
    LEVEL_UP_MOVE(13, MOVE_SWEET_KISS),
    LEVEL_UP_MOVE(17, MOVE_MAGICAL_LEAF),
    LEVEL_UP_END
};

static const u16 sIgglybuffLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(1, MOVE_CHARM),
    LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(9, MOVE_POUND),
    LEVEL_UP_MOVE(14, MOVE_SWEET_KISS),
    LEVEL_UP_END
};

static const u16 sTogepiLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_CHARM),
    LEVEL_UP_MOVE(4, MOVE_METRONOME),
    LEVEL_UP_MOVE(9, MOVE_SWEET_KISS),
    LEVEL_UP_MOVE(13, MOVE_YAWN),
    LEVEL_UP_MOVE(17, MOVE_ENCORE),
    LEVEL_UP_MOVE(21, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(25, MOVE_FOLLOW_ME),
    LEVEL_UP_MOVE(29, MOVE_WISH),
    LEVEL_UP_MOVE(33, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(37, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(41, MOVE_BATON_PASS),
    LEVEL_UP_END
};

static const u16 sTogeticLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MAGICAL_LEAF),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_CHARM),
    LEVEL_UP_MOVE(1, MOVE_METRONOME),
    LEVEL_UP_MOVE(1, MOVE_SWEET_KISS),
    LEVEL_UP_MOVE(4, MOVE_METRONOME),
    LEVEL_UP_MOVE(9, MOVE_SWEET_KISS),
    LEVEL_UP_MOVE(13, MOVE_YAWN),
    LEVEL_UP_MOVE(17, MOVE_ENCORE),
    LEVEL_UP_MOVE(21, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(25, MOVE_FOLLOW_ME),
    LEVEL_UP_MOVE(29, MOVE_WISH),
    LEVEL_UP_MOVE(33, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(37, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(41, MOVE_BATON_PASS),
    LEVEL_UP_END
};

static const u16 sNatuLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(10, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(20, MOVE_TELEPORT),
    LEVEL_UP_MOVE(30, MOVE_WISH),
    LEVEL_UP_MOVE(30, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(40, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(50, MOVE_PSYCHIC),
    LEVEL_UP_END
};

static const u16 sXatuLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(10, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(20, MOVE_TELEPORT),
    LEVEL_UP_MOVE(35, MOVE_WISH),
    LEVEL_UP_MOVE(35, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(50, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(65, MOVE_PSYCHIC),
    LEVEL_UP_END
};

static const u16 sMareepLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(9, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(16, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(23, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(30, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(37, MOVE_THUNDER),
    LEVEL_UP_END
};

static const u16 sFlaaffyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(9, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(18, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(27, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(36, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(45, MOVE_THUNDER),
    LEVEL_UP_END
};

static const u16 sAmpharosLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(9, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(18, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(27, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(30, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE(42, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(57, MOVE_THUNDER),
    LEVEL_UP_END

    // fire punch
};

static const u16 sBellossomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(1, MOVE_MAGICAL_LEAF),
    LEVEL_UP_MOVE(44, MOVE_PETAL_DANCE),
    LEVEL_UP_MOVE(55, MOVE_SOLAR_BEAM),
    LEVEL_UP_END
};

static const u16 sMarillLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(3, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(15, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(21, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(28, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(36, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(45, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sAzumarillLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(3, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(15, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(24, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(34, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(45, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(57, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sSudowoodoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(1, MOVE_MIMIC),
    LEVEL_UP_MOVE(9, MOVE_FLAIL),
    LEVEL_UP_MOVE(17, MOVE_LOW_KICK),
    LEVEL_UP_MOVE(25, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(33, MOVE_BLOCK),
    LEVEL_UP_MOVE(41, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(49, MOVE_SLAM),
    LEVEL_UP_MOVE(57, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sPolitoedLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(1, MOVE_PERISH_SONG),
    LEVEL_UP_MOVE(35, MOVE_PERISH_SONG),
    LEVEL_UP_MOVE(51, MOVE_SWAGGER),
    LEVEL_UP_END
};

static const u16 sHoppipLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(5, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_TACKLE),
    LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(17, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(20, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(25, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(30, MOVE_MEGA_DRAIN),
    LEVEL_UP_END
};

static const u16 sSkiploomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(1, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_TACKLE),
    LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(17, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(22, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(29, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(36, MOVE_MEGA_DRAIN),
    LEVEL_UP_END
};

static const u16 sJumpluffLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(1, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_TACKLE),
    LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(17, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(22, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(33, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(44, MOVE_MEGA_DRAIN),
    LEVEL_UP_END
};

static const u16 sAipomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(6, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_ASTONISH),
    LEVEL_UP_MOVE(18, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(25, MOVE_TICKLE),
    LEVEL_UP_MOVE(31, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(38, MOVE_SWIFT),
    LEVEL_UP_MOVE(43, MOVE_SCREECH),
    LEVEL_UP_MOVE(50, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sSunkernLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(6, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(18, MOVE_INGRAIN),
    LEVEL_UP_MOVE(25, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(30, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(37, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(42, MOVE_GIGA_DRAIN),
    LEVEL_UP_END
};

static const u16 sSunfloraLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(6, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(18, MOVE_INGRAIN),
    LEVEL_UP_MOVE(25, MOVE_BULLET_SEED),
    LEVEL_UP_MOVE(30, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(37, MOVE_PETAL_DANCE),
    LEVEL_UP_MOVE(42, MOVE_SOLAR_BEAM),
    LEVEL_UP_END
};

static const u16 sYanmaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(6, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(12, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(17, MOVE_SONIC_BOOM),
    LEVEL_UP_MOVE(23, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(28, MOVE_DETECT),
    LEVEL_UP_MOVE(34, MOVE_UPROAR),
    LEVEL_UP_MOVE(39, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(45, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(50, MOVE_SCREECH),
    LEVEL_UP_END
};

static const u16 sWooperLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(11, MOVE_SLAM),
    LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(21, MOVE_AMNESIA),
    LEVEL_UP_MOVE(31, MOVE_YAWN),
    LEVEL_UP_MOVE(36, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(41, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(51, MOVE_MIST),
    LEVEL_UP_MOVE(51, MOVE_HAZE),
    LEVEL_UP_END

    // muddy water
};

static const u16 sQuagsireLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(11, MOVE_SLAM),
    LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(23, MOVE_AMNESIA),
    LEVEL_UP_MOVE(35, MOVE_YAWN),
    LEVEL_UP_MOVE(42, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(49, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(61, MOVE_MIST),
    LEVEL_UP_MOVE(61, MOVE_HAZE),
    LEVEL_UP_END
};

static const u16 sEspeonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_CONFUSION),
    LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(30, MOVE_SWIFT),
    LEVEL_UP_MOVE(36, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(42, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(47, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(52, MOVE_MORNING_SUN),
    LEVEL_UP_END
};

static const u16 sUmbreonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_PURSUIT),
    LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(30, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(36, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(42, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(47, MOVE_SCREECH),
    LEVEL_UP_MOVE(52, MOVE_MOONLIGHT),
    LEVEL_UP_END
};

static const u16 sMurkrowLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(9, MOVE_ASTONISH),
    LEVEL_UP_MOVE(14, MOVE_PURSUIT),
    LEVEL_UP_MOVE(22, MOVE_HAZE),
    LEVEL_UP_MOVE(27, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(35, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(40, MOVE_TAUNT),
    LEVEL_UP_MOVE(48, MOVE_MEAN_LOOK),
    LEVEL_UP_END
};

static const u16 sSlowkingLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CURSE),
    LEVEL_UP_MOVE(1, MOVE_YAWN),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(6, MOVE_GROWL),
    LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(17, MOVE_CONFUSION),
    LEVEL_UP_MOVE(24, MOVE_DISABLE),
    LEVEL_UP_MOVE(29, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(36, MOVE_SWAGGER),
    LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(47, MOVE_PSYCH_UP),
    LEVEL_UP_END
};

static const u16 sMisdreavusLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(6, MOVE_SPITE),
    LEVEL_UP_MOVE(11, MOVE_ASTONISH),
    LEVEL_UP_MOVE(17, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(23, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(30, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(37, MOVE_PAIN_SPLIT),
    LEVEL_UP_MOVE(45, MOVE_PERISH_SONG),
    LEVEL_UP_MOVE(53, MOVE_GRUDGE),
    LEVEL_UP_END
};

static const u16 sUnownLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HIDDEN_POWER),
    LEVEL_UP_END
};

static const u16 sWobbuffetLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_COUNTER),
    LEVEL_UP_MOVE(1, MOVE_MIRROR_COAT),
    LEVEL_UP_MOVE(1, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(1, MOVE_DESTINY_BOND),
    LEVEL_UP_END
};

static const u16 sGirafarigLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(7, MOVE_ASTONISH),
    LEVEL_UP_MOVE(13, MOVE_CONFUSION),
    LEVEL_UP_MOVE(19, MOVE_STOMP),
    LEVEL_UP_MOVE(25, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(31, MOVE_AGILITY),
    LEVEL_UP_MOVE(37, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(43, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(49, MOVE_CRUNCH),
    LEVEL_UP_END
};

static const u16 sPinecoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_PROTECT),
    LEVEL_UP_MOVE(8, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(15, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(22, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(29, MOVE_BIDE),
    LEVEL_UP_MOVE(36, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(43, MOVE_SPIKES),
    LEVEL_UP_MOVE(50, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
    // rock blast
    // spike cannon
    // pin missile
};

static const u16 sForretressLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_PROTECT),
    LEVEL_UP_MOVE(1, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(8, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(15, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(22, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(29, MOVE_BIDE),
    LEVEL_UP_MOVE(31, MOVE_ZAP_CANNON),
    LEVEL_UP_MOVE(39, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(49, MOVE_SPIKES),
    LEVEL_UP_MOVE(59, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sDunsparceLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(11, MOVE_YAWN),
    LEVEL_UP_MOVE(14, MOVE_GLARE),
    LEVEL_UP_MOVE(21, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(24, MOVE_SPITE),
    LEVEL_UP_MOVE(31, MOVE_PURSUIT),
    LEVEL_UP_MOVE(34, MOVE_SCREECH),
    LEVEL_UP_MOVE(41, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(44, MOVE_FLAIL),
    LEVEL_UP_MOVE(51, MOVE_ENDEAVOR),
    LEVEL_UP_END

    // poison tail
    // ancient power
};

static const u16 sGligarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(6, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_HARDEN),
    LEVEL_UP_MOVE(20, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(28, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(36, MOVE_SLASH),
    LEVEL_UP_MOVE(44, MOVE_SCREECH),
    LEVEL_UP_MOVE(52, MOVE_GUILLOTINE),
    LEVEL_UP_END
};

static const u16 sSteelixLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_SCREECH),
    LEVEL_UP_MOVE(8, MOVE_BIND),
    LEVEL_UP_MOVE(12, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(19, MOVE_HARDEN),
    LEVEL_UP_MOVE(23, MOVE_RAGE),
    LEVEL_UP_MOVE(30, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(34, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(41, MOVE_SLAM),
    LEVEL_UP_MOVE(45, MOVE_IRON_TAIL),
    LEVEL_UP_MOVE(52, MOVE_CRUNCH),
    LEVEL_UP_MOVE(56, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sSnubbullLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(8, MOVE_CHARM),
    LEVEL_UP_MOVE(13, MOVE_BITE),
    LEVEL_UP_MOVE(19, MOVE_LICK),
    LEVEL_UP_MOVE(26, MOVE_ROAR),
    LEVEL_UP_MOVE(34, MOVE_RAGE),
    LEVEL_UP_MOVE(43, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(53, MOVE_CRUNCH),
    LEVEL_UP_END
};

static const u16 sGranbullLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(8, MOVE_CHARM),
    LEVEL_UP_MOVE(13, MOVE_BITE),
    LEVEL_UP_MOVE(19, MOVE_LICK),
    LEVEL_UP_MOVE(28, MOVE_ROAR),
    LEVEL_UP_MOVE(38, MOVE_RAGE),
    LEVEL_UP_MOVE(49, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(61, MOVE_CRUNCH),
    LEVEL_UP_END
};

static const u16 sQwilfishLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPIKES),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(9, MOVE_HARDEN),
    LEVEL_UP_MOVE(9, MOVE_MINIMIZE),
    LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(21, MOVE_PIN_MISSILE),
    LEVEL_UP_MOVE(25, MOVE_REVENGE),
    LEVEL_UP_MOVE(33, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(37, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(45, MOVE_DESTINY_BOND),
    LEVEL_UP_END
};

static const u16 sScizorLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(6, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(11, MOVE_PURSUIT),
    LEVEL_UP_MOVE(16, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(21, MOVE_AGILITY),
    LEVEL_UP_MOVE(26, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(31, MOVE_SLASH),
    LEVEL_UP_MOVE(36, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(41, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(46, MOVE_FURY_CUTTER),
    LEVEL_UP_END
};

static const u16 sShuckleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
    LEVEL_UP_MOVE(9, MOVE_WRAP),
    LEVEL_UP_MOVE(14, MOVE_ENCORE),
    LEVEL_UP_MOVE(23, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(28, MOVE_BIDE),
    LEVEL_UP_MOVE(37, MOVE_REST),
    LEVEL_UP_END
};

static const u16 sHeracrossLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(6, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(11, MOVE_ENDURE),
    LEVEL_UP_MOVE(17, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(23, MOVE_BRICK_BREAK),
    LEVEL_UP_MOVE(30, MOVE_COUNTER),
    LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(45, MOVE_REVERSAL),
    LEVEL_UP_MOVE(53, MOVE_MEGAHORN),
    LEVEL_UP_END
};

static const u16 sSneaselLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_TAUNT),
    LEVEL_UP_MOVE(8, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(29, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(36, MOVE_AGILITY),
    LEVEL_UP_MOVE(43, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(50, MOVE_SLASH),
    LEVEL_UP_MOVE(57, MOVE_BEAT_UP),
    LEVEL_UP_MOVE(64, MOVE_METAL_CLAW),
    LEVEL_UP_END
};

static const u16 sTeddiursaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(7, MOVE_LICK),
    LEVEL_UP_MOVE(13, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(19, MOVE_FAKE_TEARS),
    LEVEL_UP_MOVE(25, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_REST),
    LEVEL_UP_MOVE(37, MOVE_SLASH),
    LEVEL_UP_MOVE(43, MOVE_SNORE),
    LEVEL_UP_MOVE(49, MOVE_THRASH),
    LEVEL_UP_END
};

static const u16 sUrsaringLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(7, MOVE_LICK),
    LEVEL_UP_MOVE(13, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(19, MOVE_FAKE_TEARS),
    LEVEL_UP_MOVE(25, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_REST),
    LEVEL_UP_MOVE(37, MOVE_SLASH),
    LEVEL_UP_MOVE(43, MOVE_SNORE),
    LEVEL_UP_MOVE(49, MOVE_THRASH),
    LEVEL_UP_END
};

static const u16 sSlugmaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_YAWN),
    LEVEL_UP_MOVE(1, MOVE_SMOG),
    LEVEL_UP_MOVE(8, MOVE_EMBER),
    LEVEL_UP_MOVE(15, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(22, MOVE_HARDEN),
    LEVEL_UP_MOVE(29, MOVE_AMNESIA),
    LEVEL_UP_MOVE(36, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(43, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(50, MOVE_BODY_SLAM),
    LEVEL_UP_END
};

static const u16 sMagcargoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_YAWN),
    LEVEL_UP_MOVE(1, MOVE_SMOG),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(8, MOVE_EMBER),
    LEVEL_UP_MOVE(15, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(22, MOVE_HARDEN),
    LEVEL_UP_MOVE(29, MOVE_AMNESIA),
    LEVEL_UP_MOVE(36, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(48, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(60, MOVE_BODY_SLAM),
    LEVEL_UP_END
};

static const u16 sSwinubLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(10, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(19, MOVE_ENDURE),
    LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(37, MOVE_MIST),
    LEVEL_UP_MOVE(46, MOVE_BLIZZARD),
    LEVEL_UP_MOVE(55, MOVE_AMNESIA),
    LEVEL_UP_END
};

static const u16 sPiloswineLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(1, MOVE_ENDURE),
    LEVEL_UP_MOVE(10, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(19, MOVE_ENDURE),
    LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(33, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(42, MOVE_MIST),
    LEVEL_UP_MOVE(56, MOVE_BLIZZARD),
    LEVEL_UP_MOVE(70, MOVE_AMNESIA),
    LEVEL_UP_END
};

static const u16 sCorsolaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(6, MOVE_HARDEN),
    LEVEL_UP_MOVE(12, MOVE_BUBBLE),
    LEVEL_UP_MOVE(17, MOVE_RECOVER),
    LEVEL_UP_MOVE(17, MOVE_REFRESH),
    LEVEL_UP_MOVE(23, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(28, MOVE_SPIKE_CANNON),
    LEVEL_UP_MOVE(34, MOVE_ROCK_BLAST),
    LEVEL_UP_MOVE(39, MOVE_MIRROR_COAT),
    LEVEL_UP_MOVE(45, MOVE_ANCIENT_POWER),
    LEVEL_UP_END
};

static const u16 sRemoraidLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(11, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(22, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(22, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(22, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(33, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(44, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(55, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sOctilleryLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(11, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(22, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(22, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(22, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(25, MOVE_OCTAZOOKA),
    LEVEL_UP_MOVE(38, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(54, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(70, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sDelibirdLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PRESENT),
    LEVEL_UP_END
};

static const u16 sMantineLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(8, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(15, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(22, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(29, MOVE_AGILITY),
    LEVEL_UP_MOVE(36, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(43, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(50, MOVE_CONFUSE_RAY),
    LEVEL_UP_END
    
    // rock blast
};

static const u16 sSkarmoryLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(10, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_SWIFT),
    LEVEL_UP_MOVE(16, MOVE_AGILITY),
    LEVEL_UP_MOVE(26, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(29, MOVE_AIR_CUTTER),
    LEVEL_UP_MOVE(32, MOVE_STEEL_WING),
    LEVEL_UP_MOVE(42, MOVE_SPIKES),
    LEVEL_UP_MOVE(45, MOVE_METAL_SOUND),
    LEVEL_UP_END
};

static const u16 sHoundourLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(7, MOVE_HOWL),
    LEVEL_UP_MOVE(13, MOVE_SMOG),
    LEVEL_UP_MOVE(19, MOVE_ROAR),
    LEVEL_UP_MOVE(25, MOVE_BITE),
    LEVEL_UP_MOVE(31, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(37, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(43, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(49, MOVE_CRUNCH),
    LEVEL_UP_END
};

static const u16 sHoundoomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_HOWL),
    LEVEL_UP_MOVE(7, MOVE_HOWL),
    LEVEL_UP_MOVE(13, MOVE_SMOG),
    LEVEL_UP_MOVE(19, MOVE_ROAR),
    LEVEL_UP_MOVE(27, MOVE_BITE),
    LEVEL_UP_MOVE(35, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(43, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(51, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(59, MOVE_CRUNCH),
    LEVEL_UP_END
};

static const u16 sKingdraLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(8, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(15, MOVE_LEER),
    LEVEL_UP_MOVE(22, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(29, MOVE_TWISTER),
    LEVEL_UP_MOVE(40, MOVE_AGILITY),
    LEVEL_UP_MOVE(51, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(62, MOVE_DRAGON_DANCE),
    LEVEL_UP_END
};

static const u16 sPhanpyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(9, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(17, MOVE_FLAIL),
    LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(33, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(41, MOVE_ENDURE),
    LEVEL_UP_MOVE(49, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sDonphanLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(9, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(17, MOVE_FLAIL),
    LEVEL_UP_MOVE(25, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(33, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(41, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(49, MOVE_EARTHQUAKE),
    LEVEL_UP_END
};

static const u16 sPorygon2LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONVERSION_2),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_CONVERSION),
    LEVEL_UP_MOVE(9, MOVE_AGILITY),
    LEVEL_UP_MOVE(12, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(20, MOVE_RECOVER),
    LEVEL_UP_MOVE(24, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(32, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(36, MOVE_TRI_ATTACK),
    LEVEL_UP_MOVE(44, MOVE_RECYCLE),
    LEVEL_UP_MOVE(48, MOVE_ZAP_CANNON),
    LEVEL_UP_END
};

static const u16 sStantlerLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(7, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_ASTONISH),
    LEVEL_UP_MOVE(17, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(21, MOVE_STOMP),
    LEVEL_UP_MOVE(27, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_ROLE_PLAY),
    LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(41, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(47, MOVE_CALM_MIND),
    LEVEL_UP_END
};

static const u16 sSmeargleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SKETCH),
    LEVEL_UP_MOVE(11, MOVE_SKETCH),
    LEVEL_UP_MOVE(21, MOVE_SKETCH),
    LEVEL_UP_MOVE(31, MOVE_SKETCH),
    LEVEL_UP_MOVE(41, MOVE_SKETCH),
    LEVEL_UP_MOVE(51, MOVE_SKETCH),
    LEVEL_UP_MOVE(61, MOVE_SKETCH),
    LEVEL_UP_MOVE(71, MOVE_SKETCH),
    LEVEL_UP_MOVE(81, MOVE_SKETCH),
    LEVEL_UP_MOVE(91, MOVE_SKETCH),
    LEVEL_UP_END
};

static const u16 sTyrogueLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sHitmontopLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_REVENGE),
    LEVEL_UP_MOVE(1, MOVE_ROLLING_KICK),
    LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_PURSUIT),
    LEVEL_UP_MOVE(19, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_TRIPLE_KICK),
    LEVEL_UP_MOVE(25, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(31, MOVE_COUNTER),
    LEVEL_UP_MOVE(37, MOVE_AGILITY),
    LEVEL_UP_MOVE(43, MOVE_DETECT),
    LEVEL_UP_MOVE(49, MOVE_ENDEAVOR),
    LEVEL_UP_END
    
    // blaze kick
};

static const u16 sSmoochumLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(9, MOVE_SWEET_KISS),
    LEVEL_UP_MOVE(13, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(21, MOVE_CONFUSION),
    LEVEL_UP_MOVE(25, MOVE_SING),
    LEVEL_UP_MOVE(33, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(37, MOVE_FAKE_TEARS),
    LEVEL_UP_MOVE(45, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(49, MOVE_PERISH_SONG),
    LEVEL_UP_MOVE(57, MOVE_BLIZZARD),
    LEVEL_UP_END
};

static const u16 sElekidLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(9, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE(17, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(25, MOVE_SWIFT),
    LEVEL_UP_MOVE(33, MOVE_SCREECH),
    LEVEL_UP_MOVE(41, MOVE_THUNDERBOLT),
    LEVEL_UP_MOVE(49, MOVE_THUNDER),
    LEVEL_UP_END
};

static const u16 sMagbyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(7, MOVE_LEER),
    LEVEL_UP_MOVE(13, MOVE_SMOG),
    LEVEL_UP_MOVE(19, MOVE_FIRE_PUNCH),
    LEVEL_UP_MOVE(25, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(31, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(37, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(43, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(49, MOVE_FIRE_BLAST),
    LEVEL_UP_END
};

static const u16 sMiltankLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(4, MOVE_GROWL),
    LEVEL_UP_MOVE(8, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(13, MOVE_STOMP),
    LEVEL_UP_MOVE(19, MOVE_MILK_DRINK),
    LEVEL_UP_MOVE(26, MOVE_BIDE),
    LEVEL_UP_MOVE(34, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(43, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(53, MOVE_HEAL_BELL),
    LEVEL_UP_END
};

static const u16 sBlisseyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(7, MOVE_REFRESH),
    LEVEL_UP_MOVE(10, MOVE_SOFT_BOILED),
    LEVEL_UP_MOVE(13, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(18, MOVE_MINIMIZE),
    LEVEL_UP_MOVE(23, MOVE_SING),
    LEVEL_UP_MOVE(28, MOVE_EGG_BOMB),
    LEVEL_UP_MOVE(33, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(40, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(47, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sRaikouLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(21, MOVE_ROAR),
    LEVEL_UP_MOVE(31, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(41, MOVE_SPARK),
    LEVEL_UP_MOVE(51, MOVE_REFLECT),
    LEVEL_UP_MOVE(61, MOVE_CRUNCH),
    LEVEL_UP_MOVE(71, MOVE_THUNDER),
    LEVEL_UP_MOVE(81, MOVE_CALM_MIND),
    LEVEL_UP_END
};

static const u16 sEnteiLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_EMBER),
    LEVEL_UP_MOVE(21, MOVE_ROAR),
    LEVEL_UP_MOVE(31, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(41, MOVE_STOMP),
    LEVEL_UP_MOVE(51, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(61, MOVE_SWAGGER),
    LEVEL_UP_MOVE(71, MOVE_FIRE_BLAST),
    LEVEL_UP_MOVE(81, MOVE_CALM_MIND),
    LEVEL_UP_END
};

static const u16 sSuicuneLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(21, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(31, MOVE_GUST),
    LEVEL_UP_MOVE(41, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(51, MOVE_MIST),
    LEVEL_UP_MOVE(61, MOVE_MIRROR_COAT),
    LEVEL_UP_MOVE(71, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(81, MOVE_CALM_MIND),
    LEVEL_UP_END
};

static const u16 sLarvitarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(8, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(15, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(29, MOVE_THRASH),
    LEVEL_UP_MOVE(36, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(43, MOVE_CRUNCH),
    LEVEL_UP_MOVE(50, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(57, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sPupitarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(1, MOVE_SCREECH),
    LEVEL_UP_MOVE(8, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(15, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(29, MOVE_THRASH),
    LEVEL_UP_MOVE(38, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(47, MOVE_CRUNCH),
    LEVEL_UP_MOVE(56, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sTyranitarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(1, MOVE_SCREECH),
    LEVEL_UP_MOVE(8, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(15, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(29, MOVE_THRASH),
    LEVEL_UP_MOVE(38, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(47, MOVE_CRUNCH),
    LEVEL_UP_MOVE(61, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(75, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sLugiaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(11, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(22, MOVE_GUST),
    LEVEL_UP_MOVE(33, MOVE_RECOVER),
    LEVEL_UP_MOVE(44, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(55, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(66, MOVE_SWIFT),
    LEVEL_UP_MOVE(77, MOVE_AEROBLAST),
    LEVEL_UP_MOVE(88, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(99, MOVE_FUTURE_SIGHT),
    LEVEL_UP_END
};

static const u16 sHoOhLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(11, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(22, MOVE_GUST),
    LEVEL_UP_MOVE(33, MOVE_RECOVER),
    LEVEL_UP_MOVE(44, MOVE_FIRE_BLAST),
    LEVEL_UP_MOVE(55, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(66, MOVE_SWIFT),
    LEVEL_UP_MOVE(77, MOVE_SACRED_FIRE),
    LEVEL_UP_MOVE(88, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(99, MOVE_FUTURE_SIGHT),
    LEVEL_UP_END
};

static const u16 sCelebiLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_RECOVER),
    LEVEL_UP_MOVE(1, MOVE_HEAL_BELL),
    LEVEL_UP_MOVE(10, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(20, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(30, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(40, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(50, MOVE_PERISH_SONG),
    LEVEL_UP_END
};

static const u16 sSpecies252LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies253LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies254LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies255LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies256LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies257LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies258LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies259LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies260LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies261LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies262LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies263LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies264LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies265LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies266LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies267LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies268LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies269LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies270LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies271LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies272LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies273LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies274LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies275LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sSpecies276LevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_END
};

static const u16 sTreeckoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(6, MOVE_ABSORB),
    LEVEL_UP_MOVE(11, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_PURSUIT),
    LEVEL_UP_MOVE(21, MOVE_SCREECH),
    LEVEL_UP_MOVE(26, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(31, MOVE_AGILITY),
    LEVEL_UP_MOVE(36, MOVE_SLAM),
    LEVEL_UP_MOVE(41, MOVE_DETECT),
    LEVEL_UP_MOVE(46, MOVE_GIGA_DRAIN),
    LEVEL_UP_END
};

static const u16 sGrovyleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(6, MOVE_ABSORB),
    LEVEL_UP_MOVE(11, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(17, MOVE_PURSUIT),
    LEVEL_UP_MOVE(23, MOVE_SCREECH),
    LEVEL_UP_MOVE(29, MOVE_LEAF_BLADE),
    LEVEL_UP_MOVE(35, MOVE_AGILITY),
    LEVEL_UP_MOVE(41, MOVE_SLAM),
    LEVEL_UP_MOVE(47, MOVE_DETECT),
    LEVEL_UP_MOVE(53, MOVE_FALSE_SWIPE),
    LEVEL_UP_END
};

static const u16 sSceptileLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(6, MOVE_ABSORB),
    LEVEL_UP_MOVE(11, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(17, MOVE_PURSUIT),
    LEVEL_UP_MOVE(23, MOVE_SCREECH),
    LEVEL_UP_MOVE(29, MOVE_LEAF_BLADE),
    LEVEL_UP_MOVE(35, MOVE_AGILITY),
    LEVEL_UP_MOVE(43, MOVE_SLAM),
    LEVEL_UP_MOVE(51, MOVE_DETECT),
    LEVEL_UP_MOVE(59, MOVE_FALSE_SWIPE),
    LEVEL_UP_END
};

static const u16 sTorchicLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(10, MOVE_EMBER),
    LEVEL_UP_MOVE(16, MOVE_PECK),
    LEVEL_UP_MOVE(19, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(28, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(34, MOVE_SLASH),
    LEVEL_UP_MOVE(37, MOVE_MIRROR_MOVE),
    LEVEL_UP_MOVE(43, MOVE_FLAMETHROWER),
    LEVEL_UP_END
};

static const u16 sCombuskenLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_EMBER),
    LEVEL_UP_MOVE(16, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(17, MOVE_PECK),
    LEVEL_UP_MOVE(21, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(28, MOVE_BULK_UP),
    LEVEL_UP_MOVE(32, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(39, MOVE_SLASH),
    LEVEL_UP_MOVE(43, MOVE_MIRROR_MOVE),
    LEVEL_UP_MOVE(50, MOVE_SKY_UPPERCUT),
    LEVEL_UP_END
};

static const u16 sBlazikenLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_FIRE_PUNCH),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_EMBER),
    LEVEL_UP_MOVE(16, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(17, MOVE_PECK),
    LEVEL_UP_MOVE(21, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(28, MOVE_BULK_UP),
    LEVEL_UP_MOVE(32, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(36, MOVE_BLAZE_KICK),
    LEVEL_UP_MOVE(42, MOVE_SLASH),
    LEVEL_UP_MOVE(49, MOVE_MIRROR_MOVE),
    LEVEL_UP_MOVE(59, MOVE_SKY_UPPERCUT),
    LEVEL_UP_END
};

static const u16 sMudkipLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(6, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(15, MOVE_BIDE),
    LEVEL_UP_MOVE(19, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(24, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(33, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE(37, MOVE_PROTECT),
    LEVEL_UP_MOVE(42, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(46, MOVE_ENDEAVOR),
    LEVEL_UP_END
};

static const u16 sMarshtompLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(6, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(15, MOVE_BIDE),
    LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(20, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(25, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(37, MOVE_MUDDY_WATER),
    LEVEL_UP_MOVE(42, MOVE_PROTECT),
    LEVEL_UP_MOVE(46, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(53, MOVE_ENDEAVOR),
    LEVEL_UP_END
};

static const u16 sSwampertLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(6, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(15, MOVE_BIDE),
    LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(20, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(25, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(39, MOVE_MUDDY_WATER),
    LEVEL_UP_MOVE(46, MOVE_PROTECT),
    LEVEL_UP_MOVE(52, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(61, MOVE_ENDEAVOR),
    LEVEL_UP_END
};

static const u16 sPoochyenaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_HOWL),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_BITE),
    LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(21, MOVE_ROAR),
    LEVEL_UP_MOVE(25, MOVE_SWAGGER),
    LEVEL_UP_MOVE(29, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(33, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(37, MOVE_TAUNT),
    LEVEL_UP_MOVE(41, MOVE_CRUNCH),
    LEVEL_UP_MOVE(45, MOVE_THIEF),
    LEVEL_UP_END
};

static const u16 sMightyenaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HOWL),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(5, MOVE_HOWL),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_BITE),
    LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(22, MOVE_ROAR),
    LEVEL_UP_MOVE(27, MOVE_SWAGGER),
    LEVEL_UP_MOVE(32, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(42, MOVE_TAUNT),
    LEVEL_UP_MOVE(47, MOVE_CRUNCH),
    LEVEL_UP_MOVE(52, MOVE_THIEF),
    LEVEL_UP_END
};

static const u16 sZigzagoonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(9, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(21, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(25, MOVE_PIN_MISSILE),
    LEVEL_UP_MOVE(29, MOVE_COVET),
    LEVEL_UP_MOVE(33, MOVE_FLAIL),
    LEVEL_UP_MOVE(37, MOVE_REST),
    LEVEL_UP_MOVE(41, MOVE_BELLY_DRUM),
    LEVEL_UP_END
};

static const u16 sLinooneLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(9, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(23, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(29, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(35, MOVE_COVET),
    LEVEL_UP_MOVE(41, MOVE_SLASH),
    LEVEL_UP_MOVE(47, MOVE_REST),
    LEVEL_UP_MOVE(53, MOVE_BELLY_DRUM),
    LEVEL_UP_END
};

static const u16 sWurmpleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
    LEVEL_UP_MOVE(5, MOVE_POISON_STING),
    LEVEL_UP_END
};

static const u16 sSilcoonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_END
};

static const u16 sBeautiflyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(10, MOVE_ABSORB),
    LEVEL_UP_MOVE(13, MOVE_GUST),
    LEVEL_UP_MOVE(17, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(20, MOVE_MORNING_SUN),
    LEVEL_UP_MOVE(24, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(27, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(31, MOVE_ATTRACT),
    LEVEL_UP_MOVE(34, MOVE_SILVER_WIND),
    LEVEL_UP_MOVE(38, MOVE_GIGA_DRAIN),
    LEVEL_UP_END
};

static const u16 sCascoonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_END
};

static const u16 sDustoxLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(10, MOVE_CONFUSION),
    LEVEL_UP_MOVE(13, MOVE_GUST),
    LEVEL_UP_MOVE(17, MOVE_PROTECT),
    LEVEL_UP_MOVE(20, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE(24, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(27, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(31, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(34, MOVE_SILVER_WIND),
    LEVEL_UP_MOVE(38, MOVE_TOXIC),
    LEVEL_UP_END
};

static const u16 sLotadLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(3, MOVE_GROWL),
    LEVEL_UP_MOVE(7, MOVE_ABSORB),
    LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
    LEVEL_UP_MOVE(21, MOVE_MIST),
    LEVEL_UP_MOVE(31, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(43, MOVE_MEGA_DRAIN),
    LEVEL_UP_END
};

static const u16 sLombreLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(3, MOVE_GROWL),
    LEVEL_UP_MOVE(7, MOVE_ABSORB),
    LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
    LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(25, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(31, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(37, MOVE_THIEF),
    LEVEL_UP_MOVE(43, MOVE_UPROAR),
    LEVEL_UP_MOVE(49, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sLudicoloLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_NATURE_POWER),
    LEVEL_UP_END
};

static const u16 sSeedotLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BIDE),
    LEVEL_UP_MOVE(3, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
    LEVEL_UP_MOVE(21, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(31, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(43, MOVE_EXPLOSION),
    LEVEL_UP_END
};

static const u16 sNuzleafLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(3, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
    LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(25, MOVE_TORMENT),
    LEVEL_UP_MOVE(31, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(37, MOVE_RAZOR_WIND),
    LEVEL_UP_MOVE(43, MOVE_SWAGGER),
    LEVEL_UP_MOVE(49, MOVE_EXTRASENSORY),
    LEVEL_UP_END
};

static const u16 sShiftryLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_GROWTH),
    LEVEL_UP_MOVE(1, MOVE_NATURE_POWER),
    LEVEL_UP_END
};

static const u16 sNincadaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(5, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(14, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(19, MOVE_MIND_READER),
    LEVEL_UP_MOVE(25, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(31, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(38, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(45, MOVE_DIG),
    LEVEL_UP_END
};

static const u16 sNinjaskLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(5, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(14, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(19, MOVE_MIND_READER),
    LEVEL_UP_MOVE(20, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(20, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(20, MOVE_SCREECH),
    LEVEL_UP_MOVE(25, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(31, MOVE_SLASH),
    LEVEL_UP_MOVE(38, MOVE_AGILITY),
    LEVEL_UP_MOVE(45, MOVE_BATON_PASS),
    LEVEL_UP_END
};

static const u16 sShedinjaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(5, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(14, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(19, MOVE_MIND_READER),
    LEVEL_UP_MOVE(25, MOVE_SPITE),
    LEVEL_UP_MOVE(31, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(38, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(45, MOVE_GRUDGE),
    LEVEL_UP_END
};

static const u16 sTaillowLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(4, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(8, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(19, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(26, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(34, MOVE_AERIAL_ACE),
    LEVEL_UP_MOVE(43, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sSwellowLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(4, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(8, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(19, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(28, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(38, MOVE_AERIAL_ACE),
    LEVEL_UP_MOVE(49, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sShroomishLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(4, MOVE_TACKLE),
    LEVEL_UP_MOVE(7, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(10, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(16, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(22, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(28, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(36, MOVE_GROWTH),
    LEVEL_UP_MOVE(45, MOVE_GIGA_DRAIN),
    LEVEL_UP_MOVE(54, MOVE_SPORE),
    LEVEL_UP_END
};

static const u16 sBreloomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(1, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(4, MOVE_TACKLE),
    LEVEL_UP_MOVE(7, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(10, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(16, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(22, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(23, MOVE_MACH_PUNCH),
    LEVEL_UP_MOVE(28, MOVE_COUNTER),
    LEVEL_UP_MOVE(36, MOVE_SKY_UPPERCUT),
    LEVEL_UP_MOVE(45, MOVE_MIND_READER),
    LEVEL_UP_MOVE(54, MOVE_DYNAMIC_PUNCH),
    LEVEL_UP_END
};

static const u16 sSpindaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_UPROAR),
    LEVEL_UP_MOVE(12, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(23, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(27, MOVE_DIZZY_PUNCH),
    LEVEL_UP_MOVE(34, MOVE_TEETER_DANCE),
    LEVEL_UP_MOVE(38, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(45, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(49, MOVE_FLAIL),
    LEVEL_UP_MOVE(56, MOVE_THRASH),
    LEVEL_UP_END
};

static const u16 sWingullLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(13, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_MIST),
    LEVEL_UP_MOVE(31, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(43, MOVE_PURSUIT),
    LEVEL_UP_MOVE(55, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sPelipperLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(1, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(3, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(13, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_MIST),
    LEVEL_UP_MOVE(25, MOVE_PROTECT),
    LEVEL_UP_MOVE(33, MOVE_STOCKPILE),
    LEVEL_UP_MOVE(33, MOVE_SWALLOW),
    LEVEL_UP_MOVE(47, MOVE_SPIT_UP),
    LEVEL_UP_MOVE(61, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sSurskitLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(19, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(25, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(31, MOVE_AGILITY),
    LEVEL_UP_MOVE(37, MOVE_MIST),
    LEVEL_UP_MOVE(37, MOVE_HAZE),
    LEVEL_UP_END
};

static const u16 sMasquerainLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(19, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(26, MOVE_GUST),
    LEVEL_UP_MOVE(33, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(40, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(47, MOVE_SILVER_WIND),
    LEVEL_UP_MOVE(53, MOVE_WHIRLWIND),
    LEVEL_UP_END
};

static const u16 sWailmerLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(5, MOVE_GROWL),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(14, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(19, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE(23, MOVE_ASTONISH),
    LEVEL_UP_MOVE(28, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(32, MOVE_MIST),
    LEVEL_UP_MOVE(37, MOVE_REST),
    LEVEL_UP_MOVE(41, MOVE_WATER_SPOUT),
    LEVEL_UP_MOVE(46, MOVE_AMNESIA),
    LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sWailordLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(5, MOVE_GROWL),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(14, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(19, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE(23, MOVE_ASTONISH),
    LEVEL_UP_MOVE(28, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(32, MOVE_MIST),
    LEVEL_UP_MOVE(37, MOVE_REST),
    LEVEL_UP_MOVE(44, MOVE_WATER_SPOUT),
    LEVEL_UP_MOVE(52, MOVE_AMNESIA),
    LEVEL_UP_MOVE(59, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sSkittyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(3, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(7, MOVE_ATTRACT),
    LEVEL_UP_MOVE(13, MOVE_SING),
    LEVEL_UP_MOVE(15, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(19, MOVE_ASSIST),
    LEVEL_UP_MOVE(25, MOVE_CHARM),
    LEVEL_UP_MOVE(27, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_COVET),
    LEVEL_UP_MOVE(37, MOVE_HEAL_BELL),
    LEVEL_UP_MOVE(39, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sDelcattyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_ATTRACT),
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
    LEVEL_UP_END
};

static const u16 sKecleonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_THIEF),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(4, MOVE_BIND),
    LEVEL_UP_MOVE(7, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(12, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(17, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(24, MOVE_SCREECH),
    LEVEL_UP_MOVE(31, MOVE_SLASH),
    LEVEL_UP_MOVE(40, MOVE_SUBSTITUTE),
    LEVEL_UP_MOVE(49, MOVE_ANCIENT_POWER),
    LEVEL_UP_END
};

static const u16 sBaltoyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(3, MOVE_HARDEN),
    LEVEL_UP_MOVE(5, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(11, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(15, MOVE_ROCK_TOMB),
    LEVEL_UP_MOVE(19, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(31, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(37, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(45, MOVE_EXPLOSION),
    LEVEL_UP_END
};

static const u16 sClaydolLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TELEPORT),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(3, MOVE_HARDEN),
    LEVEL_UP_MOVE(5, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(11, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(15, MOVE_ROCK_TOMB),
    LEVEL_UP_MOVE(19, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(31, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(36, MOVE_HYPER_BEAM),
    LEVEL_UP_MOVE(42, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(55, MOVE_EXPLOSION),
    LEVEL_UP_END
};

static const u16 sNosepassLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(16, MOVE_BLOCK),
    LEVEL_UP_MOVE(22, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(28, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(31, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(37, MOVE_REST),
    LEVEL_UP_MOVE(43, MOVE_ZAP_CANNON),
    LEVEL_UP_MOVE(46, MOVE_LOCK_ON),
    LEVEL_UP_END
};

static const u16 sTorkoalLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(4, MOVE_SMOG),
    LEVEL_UP_MOVE(7, MOVE_CURSE),
    LEVEL_UP_MOVE(14, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(17, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(20, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(27, MOVE_PROTECT),
    LEVEL_UP_MOVE(30, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(33, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(40, MOVE_AMNESIA),
    LEVEL_UP_MOVE(43, MOVE_FLAIL),
    LEVEL_UP_MOVE(46, MOVE_HEAT_WAVE),
    LEVEL_UP_END
};

static const u16 sSableyeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(5, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(9, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(13, MOVE_ASTONISH),
    LEVEL_UP_MOVE(17, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(21, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(25, MOVE_DETECT),
    LEVEL_UP_MOVE(29, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(33, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(37, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(41, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(45, MOVE_MEAN_LOOK),
    LEVEL_UP_END
};

static const u16 sBarboachLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(6, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(6, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(11, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(16, MOVE_MAGNITUDE),
    LEVEL_UP_MOVE(21, MOVE_AMNESIA),
    LEVEL_UP_MOVE(26, MOVE_REST),
    LEVEL_UP_MOVE(26, MOVE_SNORE),
    LEVEL_UP_MOVE(31, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(36, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(41, MOVE_FISSURE),
    LEVEL_UP_END
};

static const u16 sWhiscashLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TICKLE),
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(6, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(6, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(11, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(16, MOVE_MAGNITUDE),
    LEVEL_UP_MOVE(21, MOVE_AMNESIA),
    LEVEL_UP_MOVE(26, MOVE_REST),
    LEVEL_UP_MOVE(26, MOVE_SNORE),
    LEVEL_UP_MOVE(36, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(46, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(56, MOVE_FISSURE),
    LEVEL_UP_END
};

static const u16 sLuvdiscLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(4, MOVE_CHARM),
    LEVEL_UP_MOVE(12, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(16, MOVE_AGILITY),
    LEVEL_UP_MOVE(24, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(28, MOVE_ATTRACT),
    LEVEL_UP_MOVE(36, MOVE_SWEET_KISS),
    LEVEL_UP_MOVE(40, MOVE_FLAIL),
    LEVEL_UP_MOVE(48, MOVE_SAFEGUARD),
    LEVEL_UP_END
};

static const u16 sCorphishLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_MOVE(10, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(13, MOVE_LEER),
    LEVEL_UP_MOVE(19, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(22, MOVE_PROTECT),
    LEVEL_UP_MOVE(25, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(31, MOVE_TAUNT),
    LEVEL_UP_MOVE(34, MOVE_CRABHAMMER),
    LEVEL_UP_MOVE(37, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(43, MOVE_CRUNCH),
    LEVEL_UP_MOVE(46, MOVE_GUILLOTINE),
    LEVEL_UP_END
};

static const u16 sCrawdauntLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_MOVE(10, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(13, MOVE_LEER),
    LEVEL_UP_MOVE(19, MOVE_BUBBLE_BEAM),
    LEVEL_UP_MOVE(22, MOVE_PROTECT),
    LEVEL_UP_MOVE(25, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(33, MOVE_TAUNT),
    LEVEL_UP_MOVE(38, MOVE_CRABHAMMER),
    LEVEL_UP_MOVE(43, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(51, MOVE_CRUNCH),
    LEVEL_UP_MOVE(56, MOVE_GUILLOTINE),
    LEVEL_UP_END
};

static const u16 sFeebasLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(15, MOVE_TACKLE),
    LEVEL_UP_MOVE(30, MOVE_FLAIL),
    LEVEL_UP_END
};

static const u16 sMiloticLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(5, MOVE_WRAP),
    LEVEL_UP_MOVE(10, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(15, MOVE_REFRESH),
    LEVEL_UP_MOVE(20, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(25, MOVE_TWISTER),
    LEVEL_UP_MOVE(30, MOVE_RECOVER),
    LEVEL_UP_MOVE(35, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(40, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(45, MOVE_ATTRACT),
    LEVEL_UP_MOVE(50, MOVE_SAFEGUARD),
    LEVEL_UP_END
};

static const u16 sCarvanhaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(7, MOVE_RAGE),
    LEVEL_UP_MOVE(13, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(16, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(22, MOVE_CRUNCH),
    LEVEL_UP_MOVE(28, MOVE_SCREECH),
    LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(37, MOVE_SWAGGER),
    LEVEL_UP_MOVE(43, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sSharpedoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(7, MOVE_RAGE),
    LEVEL_UP_MOVE(13, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(16, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(22, MOVE_CRUNCH),
    LEVEL_UP_MOVE(28, MOVE_SCREECH),
    LEVEL_UP_MOVE(33, MOVE_SLASH),
    LEVEL_UP_MOVE(38, MOVE_TAUNT),
    LEVEL_UP_MOVE(43, MOVE_SWAGGER),
    LEVEL_UP_MOVE(48, MOVE_SKULL_BASH),
    LEVEL_UP_MOVE(53, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sTrapinchLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(33, MOVE_CRUNCH),
    LEVEL_UP_MOVE(41, MOVE_DIG),
    LEVEL_UP_MOVE(49, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(57, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sVibravaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(33, MOVE_CRUNCH),
    LEVEL_UP_MOVE(35, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(41, MOVE_SCREECH),
    LEVEL_UP_MOVE(49, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(57, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sFlygonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(33, MOVE_CRUNCH),
    LEVEL_UP_MOVE(35, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(41, MOVE_SCREECH),
    LEVEL_UP_MOVE(53, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sMakuhitaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(4, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_ARM_THRUST),
    LEVEL_UP_MOVE(13, MOVE_VITAL_THROW),
    LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(22, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(28, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(31, MOVE_SMELLING_SALT),
    LEVEL_UP_MOVE(37, MOVE_BELLY_DRUM),
    LEVEL_UP_MOVE(40, MOVE_ENDURE),
    LEVEL_UP_MOVE(46, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(49, MOVE_REVERSAL),
    LEVEL_UP_END
};

static const u16 sHariyamaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(1, MOVE_ARM_THRUST),
    LEVEL_UP_MOVE(4, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_ARM_THRUST),
    LEVEL_UP_MOVE(13, MOVE_VITAL_THROW),
    LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(22, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(29, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(33, MOVE_SMELLING_SALT),
    LEVEL_UP_MOVE(40, MOVE_BELLY_DRUM),
    LEVEL_UP_MOVE(44, MOVE_ENDURE),
    LEVEL_UP_MOVE(51, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(55, MOVE_REVERSAL),
    LEVEL_UP_END
};

static const u16 sElectrikeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(12, MOVE_HOWL),
    LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_SPARK),
    LEVEL_UP_MOVE(25, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(28, MOVE_ROAR),
    LEVEL_UP_MOVE(33, MOVE_BITE),
    LEVEL_UP_MOVE(36, MOVE_THUNDER),
    LEVEL_UP_MOVE(41, MOVE_CHARGE),
    LEVEL_UP_END
};

static const u16 sManectricLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_HOWL),
    LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(12, MOVE_HOWL),
    LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_SPARK),
    LEVEL_UP_MOVE(25, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(31, MOVE_ROAR),
    LEVEL_UP_MOVE(39, MOVE_BITE),
    LEVEL_UP_MOVE(45, MOVE_THUNDER),
    LEVEL_UP_MOVE(53, MOVE_CHARGE),
    LEVEL_UP_END
};

static const u16 sNumelLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(11, MOVE_EMBER),
    LEVEL_UP_MOVE(19, MOVE_MAGNITUDE),
    LEVEL_UP_MOVE(25, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(29, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(31, MOVE_AMNESIA),
    LEVEL_UP_MOVE(35, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(41, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(49, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sCameruptLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_MAGNITUDE),
    LEVEL_UP_MOVE(11, MOVE_EMBER),
    LEVEL_UP_MOVE(19, MOVE_MAGNITUDE),
    LEVEL_UP_MOVE(25, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(29, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(31, MOVE_AMNESIA),
    LEVEL_UP_MOVE(33, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(37, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(45, MOVE_ERUPTION),
    LEVEL_UP_MOVE(55, MOVE_FISSURE),
    LEVEL_UP_END
};

static const u16 sSphealLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_ENCORE),
    LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
    LEVEL_UP_MOVE(19, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(25, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(31, MOVE_HAIL),
    LEVEL_UP_MOVE(37, MOVE_REST),
    LEVEL_UP_MOVE(37, MOVE_SNORE),
    LEVEL_UP_MOVE(43, MOVE_BLIZZARD),
    LEVEL_UP_MOVE(49, MOVE_SHEER_COLD),
    LEVEL_UP_END
};

static const u16 sSealeoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_ENCORE),
    LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
    LEVEL_UP_MOVE(19, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(25, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(31, MOVE_HAIL),
    LEVEL_UP_MOVE(39, MOVE_REST),
    LEVEL_UP_MOVE(39, MOVE_SNORE),
    LEVEL_UP_MOVE(47, MOVE_BLIZZARD),
    LEVEL_UP_MOVE(55, MOVE_SHEER_COLD),
    LEVEL_UP_END
};

static const u16 sWalreinLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_ENCORE),
    LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
    LEVEL_UP_MOVE(19, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(25, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(31, MOVE_HAIL),
    LEVEL_UP_MOVE(39, MOVE_REST),
    LEVEL_UP_MOVE(39, MOVE_SNORE),
    LEVEL_UP_MOVE(50, MOVE_BLIZZARD),
    LEVEL_UP_MOVE(61, MOVE_SHEER_COLD),
    LEVEL_UP_END
};

static const u16 sCacneaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(5, MOVE_ABSORB),
    LEVEL_UP_MOVE(9, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(17, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_PIN_MISSILE),
    LEVEL_UP_MOVE(25, MOVE_INGRAIN),
    LEVEL_UP_MOVE(29, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(33, MOVE_SPIKES),
    LEVEL_UP_MOVE(37, MOVE_NEEDLE_ARM),
    LEVEL_UP_MOVE(41, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(45, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(49, MOVE_DESTINY_BOND),
    LEVEL_UP_END
};

static const u16 sCacturneLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_REVENGE),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_GROWTH),
    LEVEL_UP_MOVE(5, MOVE_ABSORB),
    LEVEL_UP_MOVE(9, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(17, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_PIN_MISSILE),
    LEVEL_UP_MOVE(25, MOVE_INGRAIN),
    LEVEL_UP_MOVE(29, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(35, MOVE_SPIKES),
    LEVEL_UP_MOVE(41, MOVE_NEEDLE_ARM),
    LEVEL_UP_MOVE(47, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(53, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(59, MOVE_DESTINY_BOND),
    LEVEL_UP_END
};

static const u16 sSnoruntLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(7, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(16, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(19, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(25, MOVE_PROTECT),
    LEVEL_UP_MOVE(28, MOVE_CRUNCH),
    LEVEL_UP_MOVE(34, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(37, MOVE_HAIL),
    LEVEL_UP_MOVE(43, MOVE_BLIZZARD),
    LEVEL_UP_END
};

static const u16 sGlalieLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(7, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(16, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(19, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(25, MOVE_PROTECT),
    LEVEL_UP_MOVE(28, MOVE_CRUNCH),
    LEVEL_UP_MOVE(34, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(42, MOVE_HAIL),
    LEVEL_UP_MOVE(53, MOVE_BLIZZARD),
    LEVEL_UP_MOVE(61, MOVE_SHEER_COLD),
    LEVEL_UP_END
};

static const u16 sLunatoneLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_CONFUSION),
    LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(19, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(25, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(31, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(37, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(43, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(49, MOVE_EXPLOSION),
    LEVEL_UP_END
};

static const u16 sSolrockLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_CONFUSION),
    LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(19, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(25, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(31, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(37, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(43, MOVE_SOLAR_BEAM),
    LEVEL_UP_MOVE(49, MOVE_EXPLOSION),
    LEVEL_UP_END
};

static const u16 sAzurillLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(3, MOVE_CHARM),
    LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_BUBBLE),
    LEVEL_UP_MOVE(15, MOVE_SLAM),
    LEVEL_UP_MOVE(21, MOVE_WATER_GUN),
    LEVEL_UP_END
};

static const u16 sSpoinkLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(7, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(10, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(16, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(19, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(25, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(28, MOVE_MAGIC_COAT),
    LEVEL_UP_MOVE(34, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(37, MOVE_REST),
    LEVEL_UP_MOVE(37, MOVE_SNORE),
    LEVEL_UP_MOVE(43, MOVE_BOUNCE),
    LEVEL_UP_END
};

static const u16 sGrumpigLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(1, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(1, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(7, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(10, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(16, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(19, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(25, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(28, MOVE_MAGIC_COAT),
    LEVEL_UP_MOVE(37, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(43, MOVE_REST),
    LEVEL_UP_MOVE(43, MOVE_SNORE),
    LEVEL_UP_MOVE(55, MOVE_BOUNCE),
    LEVEL_UP_END
};

static const u16 sPlusleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(19, MOVE_SPARK),
    LEVEL_UP_MOVE(22, MOVE_ENCORE),
    LEVEL_UP_MOVE(28, MOVE_FAKE_TEARS),
    LEVEL_UP_MOVE(31, MOVE_CHARGE),
    LEVEL_UP_MOVE(37, MOVE_THUNDER),
    LEVEL_UP_MOVE(40, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(47, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sMinunLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(19, MOVE_SPARK),
    LEVEL_UP_MOVE(22, MOVE_ENCORE),
    LEVEL_UP_MOVE(28, MOVE_CHARM),
    LEVEL_UP_MOVE(31, MOVE_CHARGE),
    LEVEL_UP_MOVE(37, MOVE_THUNDER),
    LEVEL_UP_MOVE(40, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(47, MOVE_AGILITY),
    LEVEL_UP_END
};

static const u16 sMawileLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(6, MOVE_FAKE_TEARS),
    LEVEL_UP_MOVE(11, MOVE_BITE),
    LEVEL_UP_MOVE(16, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(21, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(26, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(36, MOVE_CRUNCH),
    LEVEL_UP_MOVE(41, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(46, MOVE_STOCKPILE),
    LEVEL_UP_MOVE(46, MOVE_SWALLOW),
    LEVEL_UP_MOVE(46, MOVE_SPIT_UP),
    LEVEL_UP_END
};

static const u16 sMedititeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BIDE),
    LEVEL_UP_MOVE(4, MOVE_MEDITATE),
    LEVEL_UP_MOVE(9, MOVE_CONFUSION),
    LEVEL_UP_MOVE(12, MOVE_DETECT),
    LEVEL_UP_MOVE(17, MOVE_HIDDEN_POWER),
    LEVEL_UP_MOVE(20, MOVE_SWAGGER),
    LEVEL_UP_MOVE(25, MOVE_MIND_READER),
    LEVEL_UP_MOVE(28, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(33, MOVE_HI_JUMP_KICK),
    LEVEL_UP_MOVE(36, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(41, MOVE_REVERSAL),
    LEVEL_UP_MOVE(44, MOVE_RECOVER),
    LEVEL_UP_END
};

static const u16 sMedichamLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_FIRE_PUNCH),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE(1, MOVE_ICE_PUNCH),
    LEVEL_UP_MOVE(1, MOVE_BIDE),
    LEVEL_UP_MOVE(1, MOVE_MEDITATE),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_DETECT),
    LEVEL_UP_MOVE(4, MOVE_MEDITATE),
    LEVEL_UP_MOVE(9, MOVE_CONFUSION),
    LEVEL_UP_MOVE(12, MOVE_DETECT),
    LEVEL_UP_MOVE(17, MOVE_HIDDEN_POWER),
    LEVEL_UP_MOVE(20, MOVE_SWAGGER),
    LEVEL_UP_MOVE(25, MOVE_MIND_READER),
    LEVEL_UP_MOVE(28, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(33, MOVE_HI_JUMP_KICK),
    LEVEL_UP_MOVE(36, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(47, MOVE_REVERSAL),
    LEVEL_UP_MOVE(56, MOVE_RECOVER),
    LEVEL_UP_END
};

static const u16 sSwabluLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(8, MOVE_ASTONISH),
    LEVEL_UP_MOVE(11, MOVE_SING),
    LEVEL_UP_MOVE(18, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(28, MOVE_MIST),
    LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(38, MOVE_MIRROR_MOVE),
    LEVEL_UP_MOVE(41, MOVE_REFRESH),
    LEVEL_UP_MOVE(48, MOVE_PERISH_SONG),
    LEVEL_UP_END
};

static const u16 sAltariaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(8, MOVE_ASTONISH),
    LEVEL_UP_MOVE(11, MOVE_SING),
    LEVEL_UP_MOVE(18, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(28, MOVE_MIST),
    LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(35, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(40, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(45, MOVE_REFRESH),
    LEVEL_UP_MOVE(54, MOVE_PERISH_SONG),
    LEVEL_UP_MOVE(59, MOVE_SKY_ATTACK),
    LEVEL_UP_END
};

static const u16 sWynautLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),
    LEVEL_UP_MOVE(1, MOVE_CHARM),
    LEVEL_UP_MOVE(1, MOVE_ENCORE),
    LEVEL_UP_MOVE(15, MOVE_COUNTER),
    LEVEL_UP_MOVE(15, MOVE_MIRROR_COAT),
    LEVEL_UP_MOVE(15, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(15, MOVE_DESTINY_BOND),
    LEVEL_UP_END
};

static const u16 sDuskullLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(5, MOVE_DISABLE),
    LEVEL_UP_MOVE(12, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(16, MOVE_ASTONISH),
    LEVEL_UP_MOVE(23, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(27, MOVE_PURSUIT),
    LEVEL_UP_MOVE(34, MOVE_CURSE),
    LEVEL_UP_MOVE(38, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(45, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(49, MOVE_FUTURE_SIGHT),
    LEVEL_UP_END
};

static const u16 sDusclopsLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BIND),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(5, MOVE_DISABLE),
    LEVEL_UP_MOVE(12, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(16, MOVE_ASTONISH),
    LEVEL_UP_MOVE(23, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(27, MOVE_PURSUIT),
    LEVEL_UP_MOVE(34, MOVE_CURSE),
    LEVEL_UP_MOVE(37, MOVE_SHADOW_PUNCH),
    LEVEL_UP_MOVE(41, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(51, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(58, MOVE_FUTURE_SIGHT),
    LEVEL_UP_END
};

static const u16 sRoseliaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(5, MOVE_GROWTH),
    LEVEL_UP_MOVE(9, MOVE_POISON_STING),
    LEVEL_UP_MOVE(13, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(17, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(21, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(25, MOVE_MAGICAL_LEAF),
    LEVEL_UP_MOVE(29, MOVE_GRASS_WHISTLE),
    LEVEL_UP_MOVE(33, MOVE_GIGA_DRAIN),
    LEVEL_UP_MOVE(37, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(41, MOVE_INGRAIN),
    LEVEL_UP_MOVE(45, MOVE_TOXIC),
    LEVEL_UP_MOVE(49, MOVE_PETAL_DANCE),
    LEVEL_UP_MOVE(53, MOVE_AROMATHERAPY),
    LEVEL_UP_MOVE(57, MOVE_SYNTHESIS),
    LEVEL_UP_END
};

static const u16 sSlakothLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_YAWN),
    LEVEL_UP_MOVE(7, MOVE_ENCORE),
    LEVEL_UP_MOVE(13, MOVE_SLACK_OFF),
    LEVEL_UP_MOVE(19, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_AMNESIA),
    LEVEL_UP_MOVE(31, MOVE_COVET),
    LEVEL_UP_MOVE(37, MOVE_COUNTER),
    LEVEL_UP_MOVE(43, MOVE_FLAIL),
    LEVEL_UP_END
};

static const u16 sVigorothLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_ENCORE),
    LEVEL_UP_MOVE(1, MOVE_UPROAR),
    LEVEL_UP_MOVE(7, MOVE_ENCORE),
    LEVEL_UP_MOVE(13, MOVE_UPROAR),
    LEVEL_UP_MOVE(19, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(25, MOVE_ENDURE),
    LEVEL_UP_MOVE(31, MOVE_SLASH),
    LEVEL_UP_MOVE(37, MOVE_COUNTER),
    LEVEL_UP_MOVE(43, MOVE_FOCUS_PUNCH),
    LEVEL_UP_MOVE(49, MOVE_REVERSAL),
    LEVEL_UP_END
};

static const u16 sSlakingLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_YAWN),
    LEVEL_UP_MOVE(1, MOVE_ENCORE),
    LEVEL_UP_MOVE(1, MOVE_SLACK_OFF),
    LEVEL_UP_MOVE(7, MOVE_ENCORE),
    LEVEL_UP_MOVE(13, MOVE_SLACK_OFF),
    LEVEL_UP_MOVE(19, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_AMNESIA),
    LEVEL_UP_MOVE(31, MOVE_COVET),
    LEVEL_UP_MOVE(36, MOVE_SWAGGER),
    LEVEL_UP_MOVE(37, MOVE_COUNTER),
    LEVEL_UP_MOVE(43, MOVE_FLAIL),
    LEVEL_UP_END
};

static const u16 sGulpinLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(6, MOVE_YAWN),
    LEVEL_UP_MOVE(9, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(14, MOVE_SLUDGE),
    LEVEL_UP_MOVE(17, MOVE_AMNESIA),
    LEVEL_UP_MOVE(23, MOVE_ENCORE),
    LEVEL_UP_MOVE(28, MOVE_TOXIC),
    LEVEL_UP_MOVE(34, MOVE_STOCKPILE),
    LEVEL_UP_MOVE(34, MOVE_SPIT_UP),
    LEVEL_UP_MOVE(34, MOVE_SWALLOW),
    LEVEL_UP_MOVE(39, MOVE_SLUDGE_BOMB),
    LEVEL_UP_END
};

static const u16 sSwalotLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_YAWN),
    LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(1, MOVE_SLUDGE),
    LEVEL_UP_MOVE(6, MOVE_YAWN),
    LEVEL_UP_MOVE(9, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(14, MOVE_SLUDGE),
    LEVEL_UP_MOVE(17, MOVE_AMNESIA),
    LEVEL_UP_MOVE(23, MOVE_ENCORE),
    LEVEL_UP_MOVE(26, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(31, MOVE_TOXIC),
    LEVEL_UP_MOVE(40, MOVE_STOCKPILE),
    LEVEL_UP_MOVE(40, MOVE_SPIT_UP),
    LEVEL_UP_MOVE(40, MOVE_SWALLOW),
    LEVEL_UP_MOVE(48, MOVE_SLUDGE_BOMB),
    LEVEL_UP_END
};

static const u16 sTropiusLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_GUST),
    LEVEL_UP_MOVE(7, MOVE_GROWTH),
    LEVEL_UP_MOVE(11, MOVE_RAZOR_LEAF),
    LEVEL_UP_MOVE(17, MOVE_STOMP),
    LEVEL_UP_MOVE(21, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(27, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE(31, MOVE_MAGICAL_LEAF),
    LEVEL_UP_MOVE(37, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(41, MOVE_SOLAR_BEAM),
    LEVEL_UP_MOVE(47, MOVE_SYNTHESIS),
    LEVEL_UP_END
};

static const u16 sWhismurLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(5, MOVE_UPROAR),
    LEVEL_UP_MOVE(11, MOVE_ASTONISH),
    LEVEL_UP_MOVE(15, MOVE_HOWL),
    LEVEL_UP_MOVE(21, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(25, MOVE_STOMP),
    LEVEL_UP_MOVE(31, MOVE_SCREECH),
    LEVEL_UP_MOVE(35, MOVE_ROAR),
    LEVEL_UP_MOVE(41, MOVE_REST),
    LEVEL_UP_MOVE(41, MOVE_SLEEP_TALK),
    LEVEL_UP_MOVE(45, MOVE_HYPER_VOICE),
    LEVEL_UP_END
};

static const u16 sLoudredLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_UPROAR),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_HOWL),
    LEVEL_UP_MOVE(5, MOVE_UPROAR),
    LEVEL_UP_MOVE(11, MOVE_ASTONISH),
    LEVEL_UP_MOVE(15, MOVE_HOWL),
    LEVEL_UP_MOVE(23, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(29, MOVE_STOMP),
    LEVEL_UP_MOVE(37, MOVE_SCREECH),
    LEVEL_UP_MOVE(43, MOVE_ROAR),
    LEVEL_UP_MOVE(51, MOVE_REST),
    LEVEL_UP_MOVE(51, MOVE_SLEEP_TALK),
    LEVEL_UP_MOVE(57, MOVE_HYPER_VOICE),
    LEVEL_UP_END
};

static const u16 sExploudLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),
    LEVEL_UP_MOVE(1, MOVE_UPROAR),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_HOWL),
    LEVEL_UP_MOVE(5, MOVE_UPROAR),
    LEVEL_UP_MOVE(11, MOVE_ASTONISH),
    LEVEL_UP_MOVE(15, MOVE_HOWL),
    LEVEL_UP_MOVE(23, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(29, MOVE_STOMP),
    LEVEL_UP_MOVE(37, MOVE_SCREECH),
    LEVEL_UP_MOVE(40, MOVE_HYPER_BEAM),
    LEVEL_UP_MOVE(45, MOVE_ROAR),
    LEVEL_UP_MOVE(55, MOVE_REST),
    LEVEL_UP_MOVE(55, MOVE_SLEEP_TALK),
    LEVEL_UP_MOVE(63, MOVE_HYPER_VOICE),
    LEVEL_UP_END
};

static const u16 sClamperlLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CLAMP),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(1, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE(1, MOVE_IRON_DEFENSE),
    LEVEL_UP_END
};

static const u16 sHuntailLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE(8, MOVE_BITE),
    LEVEL_UP_MOVE(15, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(29, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(36, MOVE_CRUNCH),
    LEVEL_UP_MOVE(43, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sGorebyssLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WHIRLPOOL),
    LEVEL_UP_MOVE(8, MOVE_CONFUSION),
    LEVEL_UP_MOVE(15, MOVE_AGILITY),
    LEVEL_UP_MOVE(22, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(29, MOVE_AMNESIA),
    LEVEL_UP_MOVE(36, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(43, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sAbsolLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(5, MOVE_LEER),
    LEVEL_UP_MOVE(9, MOVE_TAUNT),
    LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_RAZOR_WIND),
    LEVEL_UP_MOVE(21, MOVE_BITE),
    LEVEL_UP_MOVE(26, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(31, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(36, MOVE_SLASH),
    LEVEL_UP_MOVE(41, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(46, MOVE_PERISH_SONG),
    LEVEL_UP_END
};

static const u16 sShuppetLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(8, MOVE_SCREECH),
    LEVEL_UP_MOVE(13, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(20, MOVE_CURSE),
    LEVEL_UP_MOVE(25, MOVE_SPITE),
    LEVEL_UP_MOVE(32, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(37, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(44, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(49, MOVE_SNATCH),
    LEVEL_UP_MOVE(56, MOVE_GRUDGE),
    LEVEL_UP_END
};

static const u16 sBanetteLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(1, MOVE_SCREECH),
    LEVEL_UP_MOVE(1, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(1, MOVE_CURSE),
    LEVEL_UP_MOVE(8, MOVE_SCREECH),
    LEVEL_UP_MOVE(13, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(20, MOVE_CURSE),
    LEVEL_UP_MOVE(25, MOVE_SPITE),
    LEVEL_UP_MOVE(32, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(39, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(48, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(55, MOVE_SNATCH),
    LEVEL_UP_MOVE(64, MOVE_GRUDGE),
    LEVEL_UP_END
};

static const u16 sSeviperLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(7, MOVE_LICK),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(16, MOVE_POISON_TAIL),
    LEVEL_UP_MOVE(19, MOVE_SCREECH),
    LEVEL_UP_MOVE(25, MOVE_GLARE),
    LEVEL_UP_MOVE(28, MOVE_CRUNCH),
    LEVEL_UP_MOVE(34, MOVE_POISON_FANG),
    LEVEL_UP_MOVE(37, MOVE_SWAGGER),
    LEVEL_UP_MOVE(43, MOVE_HAZE),
    LEVEL_UP_END
};

static const u16 sZangooseLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(4, MOVE_LEER),
    LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(13, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(19, MOVE_SLASH),
    LEVEL_UP_MOVE(25, MOVE_PURSUIT),
    LEVEL_UP_MOVE(31, MOVE_CRUSH_CLAW),
    LEVEL_UP_MOVE(37, MOVE_TAUNT),
    LEVEL_UP_MOVE(46, MOVE_DETECT),
    LEVEL_UP_MOVE(55, MOVE_FALSE_SWIPE),
    LEVEL_UP_END
};

static const u16 sRelicanthLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(8, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(15, MOVE_ROCK_TOMB),
    LEVEL_UP_MOVE(22, MOVE_YAWN),
    LEVEL_UP_MOVE(29, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(36, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(43, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(50, MOVE_REST),
    LEVEL_UP_MOVE(57, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(64, MOVE_HYDRO_PUMP),
    LEVEL_UP_END
};

static const u16 sAronLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(4, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(21, MOVE_ROAR),
    LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(29, MOVE_IRON_TAIL),
    LEVEL_UP_MOVE(34, MOVE_PROTECT),
    LEVEL_UP_MOVE(39, MOVE_METAL_SOUND),
    LEVEL_UP_MOVE(44, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sLaironLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(4, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(21, MOVE_ROAR),
    LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(29, MOVE_IRON_TAIL),
    LEVEL_UP_MOVE(37, MOVE_PROTECT),
    LEVEL_UP_MOVE(45, MOVE_METAL_SOUND),
    LEVEL_UP_MOVE(53, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sAggronLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(4, MOVE_HARDEN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(21, MOVE_ROAR),
    LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(29, MOVE_IRON_TAIL),
    LEVEL_UP_MOVE(37, MOVE_PROTECT),
    LEVEL_UP_MOVE(50, MOVE_METAL_SOUND),
    LEVEL_UP_MOVE(63, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sCastformLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(10, MOVE_EMBER),
    LEVEL_UP_MOVE(10, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(20, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(20, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(20, MOVE_HAIL),
    LEVEL_UP_MOVE(30, MOVE_WEATHER_BALL),
    LEVEL_UP_END
};

static const u16 sVolbeatLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(9, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(13, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_TAIL_GLOW),
    LEVEL_UP_MOVE(25, MOVE_SIGNAL_BEAM),
    LEVEL_UP_MOVE(29, MOVE_PROTECT),
    LEVEL_UP_MOVE(33, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(37, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sIllumiseLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(9, MOVE_CHARM),
    LEVEL_UP_MOVE(13, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_WISH),
    LEVEL_UP_MOVE(25, MOVE_ENCORE),
    LEVEL_UP_MOVE(29, MOVE_FLATTER),
    LEVEL_UP_MOVE(33, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(37, MOVE_COVET),
    LEVEL_UP_END
};

static const u16 sLileepLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(8, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(15, MOVE_ACID),
    LEVEL_UP_MOVE(22, MOVE_INGRAIN),
    LEVEL_UP_MOVE(29, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(36, MOVE_AMNESIA),
    LEVEL_UP_MOVE(43, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(50, MOVE_STOCKPILE),
    LEVEL_UP_MOVE(50, MOVE_SPIT_UP),
    LEVEL_UP_MOVE(50, MOVE_SWALLOW),
    LEVEL_UP_END
};

static const u16 sCradilyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(1, MOVE_ACID),
    LEVEL_UP_MOVE(1, MOVE_INGRAIN),
    LEVEL_UP_MOVE(8, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(15, MOVE_ACID),
    LEVEL_UP_MOVE(22, MOVE_INGRAIN),
    LEVEL_UP_MOVE(29, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(36, MOVE_AMNESIA),
    LEVEL_UP_MOVE(48, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(60, MOVE_STOCKPILE),
    LEVEL_UP_MOVE(60, MOVE_SPIT_UP),
    LEVEL_UP_MOVE(60, MOVE_SWALLOW),
    LEVEL_UP_END
};

static const u16 sAnorithLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_MOVE(13, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(19, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(25, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(31, MOVE_PROTECT),
    LEVEL_UP_MOVE(37, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(43, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(49, MOVE_SLASH),
    LEVEL_UP_MOVE(55, MOVE_ROCK_BLAST),
    LEVEL_UP_END
};

static const u16 sArmaldoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),
    LEVEL_UP_MOVE(13, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(19, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(25, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(31, MOVE_PROTECT),
    LEVEL_UP_MOVE(37, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(46, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(55, MOVE_SLASH),
    LEVEL_UP_MOVE(64, MOVE_ROCK_BLAST),
    LEVEL_UP_END
};

static const u16 sRaltsLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(6, MOVE_CONFUSION),
    LEVEL_UP_MOVE(11, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(16, MOVE_TELEPORT),
    LEVEL_UP_MOVE(21, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(26, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(31, MOVE_IMPRISON),
    LEVEL_UP_MOVE(36, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(41, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(46, MOVE_DREAM_EATER),
    LEVEL_UP_END
};

static const u16 sKirliaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MAGICAL_LEAF),
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(1, MOVE_TELEPORT),
    LEVEL_UP_MOVE(6, MOVE_CONFUSION),
    LEVEL_UP_MOVE(11, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(16, MOVE_TELEPORT),
    LEVEL_UP_MOVE(21, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(26, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(33, MOVE_IMPRISON),
    LEVEL_UP_MOVE(40, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(47, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(54, MOVE_DREAM_EATER),
    LEVEL_UP_END
};

static const u16 sGardevoirLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(1, MOVE_TELEPORT),
    LEVEL_UP_MOVE(6, MOVE_CONFUSION),
    LEVEL_UP_MOVE(11, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(16, MOVE_TELEPORT),
    LEVEL_UP_MOVE(21, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(26, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(33, MOVE_IMPRISON),
    LEVEL_UP_MOVE(42, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(51, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(60, MOVE_DREAM_EATER),
    LEVEL_UP_END
};

static const u16 sBagonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(5, MOVE_BITE),
    LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(17, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(25, MOVE_EMBER),
    LEVEL_UP_MOVE(33, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(37, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(41, MOVE_CRUNCH),
    LEVEL_UP_MOVE(49, MOVE_DRAGON_CLAW),
    LEVEL_UP_MOVE(53, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sShelgonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(5, MOVE_BITE),
    LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(17, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(25, MOVE_EMBER),
    LEVEL_UP_MOVE(30, MOVE_PROTECT),
    LEVEL_UP_MOVE(38, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(47, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(56, MOVE_CRUNCH),
    LEVEL_UP_MOVE(69, MOVE_DRAGON_CLAW),
    LEVEL_UP_MOVE(78, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sSalamenceLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(5, MOVE_BITE),
    LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(17, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(25, MOVE_EMBER),
    LEVEL_UP_MOVE(30, MOVE_PROTECT),
    LEVEL_UP_MOVE(38, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(47, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(50, MOVE_FLY),
    LEVEL_UP_MOVE(61, MOVE_CRUNCH),
    LEVEL_UP_MOVE(79, MOVE_DRAGON_CLAW),
    LEVEL_UP_MOVE(93, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const u16 sBeldumLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TAKE_DOWN),
    LEVEL_UP_END
};

static const u16 sMetangLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(20, MOVE_CONFUSION),
    LEVEL_UP_MOVE(20, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(26, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(32, MOVE_PURSUIT),
    LEVEL_UP_MOVE(38, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(44, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(50, MOVE_METEOR_MASH),
    LEVEL_UP_MOVE(56, MOVE_AGILITY),
    LEVEL_UP_MOVE(62, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sMetagrossLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(20, MOVE_CONFUSION),
    LEVEL_UP_MOVE(20, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(26, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(32, MOVE_PURSUIT),
    LEVEL_UP_MOVE(38, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(44, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(55, MOVE_METEOR_MASH),
    LEVEL_UP_MOVE(66, MOVE_AGILITY),
    LEVEL_UP_MOVE(77, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sRegirockLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(9, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(17, MOVE_CURSE),
    LEVEL_UP_MOVE(25, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(41, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(49, MOVE_ZAP_CANNON),
    LEVEL_UP_MOVE(57, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sRegiceLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(9, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(17, MOVE_CURSE),
    LEVEL_UP_MOVE(25, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(41, MOVE_AMNESIA),
    LEVEL_UP_MOVE(49, MOVE_ZAP_CANNON),
    LEVEL_UP_MOVE(57, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sRegisteelLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(9, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(17, MOVE_CURSE),
    LEVEL_UP_MOVE(25, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(41, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(41, MOVE_AMNESIA),
    LEVEL_UP_MOVE(49, MOVE_ZAP_CANNON),
    LEVEL_UP_MOVE(57, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sKyogreLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(5, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(15, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(20, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(30, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(35, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(45, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(50, MOVE_REST),
    LEVEL_UP_MOVE(60, MOVE_SHEER_COLD),
    LEVEL_UP_MOVE(65, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(75, MOVE_WATER_SPOUT),
    LEVEL_UP_END
};

static const u16 sGroudonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(5, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(15, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(20, MOVE_SLASH),
    LEVEL_UP_MOVE(30, MOVE_BULK_UP),
    LEVEL_UP_MOVE(35, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(45, MOVE_FIRE_BLAST),
    LEVEL_UP_MOVE(50, MOVE_REST),
    LEVEL_UP_MOVE(60, MOVE_FISSURE),
    LEVEL_UP_MOVE(65, MOVE_SOLAR_BEAM),
    LEVEL_UP_MOVE(75, MOVE_ERUPTION),
    LEVEL_UP_END
};

static const u16 sRayquazaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TWISTER),
    LEVEL_UP_MOVE(5, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(15, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(20, MOVE_DRAGON_CLAW),
    LEVEL_UP_MOVE(30, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(35, MOVE_CRUNCH),
    LEVEL_UP_MOVE(45, MOVE_FLY),
    LEVEL_UP_MOVE(50, MOVE_REST),
    LEVEL_UP_MOVE(60, MOVE_EXTREME_SPEED),
    LEVEL_UP_MOVE(65, MOVE_OUTRAGE),
    LEVEL_UP_MOVE(75, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sLatiasLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(5, MOVE_WISH),
    LEVEL_UP_MOVE(10, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(15, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(20, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(25, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(30, MOVE_REFRESH),
    LEVEL_UP_MOVE(35, MOVE_MIST_BALL),
    LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(45, MOVE_RECOVER),
    LEVEL_UP_MOVE(50, MOVE_CHARM),
    LEVEL_UP_END
};

static const u16 sLatiosLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(5, MOVE_MEMENTO),
    LEVEL_UP_MOVE(10, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(15, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(20, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(25, MOVE_PROTECT),
    LEVEL_UP_MOVE(30, MOVE_REFRESH),
    LEVEL_UP_MOVE(35, MOVE_LUSTER_PURGE),
    LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(45, MOVE_RECOVER),
    LEVEL_UP_MOVE(50, MOVE_DRAGON_DANCE),
    LEVEL_UP_END
};

static const u16 sJirachiLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WISH),
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(5, MOVE_REST),
    LEVEL_UP_MOVE(10, MOVE_SWIFT),
    LEVEL_UP_MOVE(15, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(20, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(25, MOVE_REFRESH),
    LEVEL_UP_MOVE(30, MOVE_REST),
    LEVEL_UP_MOVE(35, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(40, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(45, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(50, MOVE_DOOM_DESIRE),
    LEVEL_UP_END
};
// overwritten in pokemon.c where formes are handled.
static const u16 sDeoxysLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(5, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(10, MOVE_TELEPORT),
    LEVEL_UP_MOVE(15, MOVE_TAUNT),
    LEVEL_UP_MOVE(20, MOVE_PURSUIT),
    LEVEL_UP_MOVE(25, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(30, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(35, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(40, MOVE_ZAP_CANNON),
    LEVEL_UP_MOVE(45, MOVE_PSYCHO_BOOST),
    LEVEL_UP_MOVE(50, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const u16 sChimechoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WRAP),
    LEVEL_UP_MOVE(6, MOVE_GROWL),
    LEVEL_UP_MOVE(9, MOVE_ASTONISH),
    LEVEL_UP_MOVE(14, MOVE_CONFUSION),
    LEVEL_UP_MOVE(17, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(22, MOVE_UPROAR),
    LEVEL_UP_MOVE(25, MOVE_YAWN),
    LEVEL_UP_MOVE(30, MOVE_PSYWAVE),
    LEVEL_UP_MOVE(33, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(38, MOVE_HEAL_BELL),
    LEVEL_UP_MOVE(41, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(46, MOVE_PSYCHIC),
    LEVEL_UP_END
};
