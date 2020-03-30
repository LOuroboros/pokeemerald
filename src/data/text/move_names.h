const u8 gMoveNames[MOVES_COUNT][MOVE_NAME_LENGTH + 1] =
{
    [MOVE_NONE] = _("-$$$$$$"),
    [MOVE_POUND] = _("DESTRUCTOR"),
    [MOVE_KARATE_CHOP] = _("GOLPE KÁRATE"),
    [MOVE_DOUBLE_SLAP] = _("DOBLEBOFETÓN"),
    [MOVE_COMET_PUNCH] = _("PUÑO COMETA"),
    [MOVE_MEGA_PUNCH] = _("MEGAPUÑO"),
    [MOVE_PAY_DAY] = _("DÍA DE PAGO"),
    [MOVE_FIRE_PUNCH] = _("PUÑO FUEGO"),
    [MOVE_ICE_PUNCH] = _("PUÑO HIELO"),
    [MOVE_THUNDER_PUNCH] = _("PUÑO TRUENO"),
    [MOVE_SCRATCH] = _("ARAÑAZO"),
    [MOVE_VICE_GRIP] = _("AGARRE"),
    [MOVE_GUILLOTINE] = _("GUILLOTINA"),
    [MOVE_RAZOR_WIND] = _("V. CORTANTE"),
    [MOVE_SWORDS_DANCE] = _("DANZA ESPADA"),
    [MOVE_CUT] = _("CORTE"),
    [MOVE_GUST] = _("TORNADO"),
    [MOVE_WING_ATTACK] = _("ATAQUE ALA"),
    [MOVE_WHIRLWIND] = _("REMOLINO"),
    [MOVE_FLY] = _("VUELO"),
    [MOVE_BIND] = _("ATADURA"),
    [MOVE_SLAM] = _("ATIZAR"),
    [MOVE_VINE_WHIP] = _("LÁTIGO CEPA"),
    [MOVE_STOMP] = _("PISOTÓN"),
    [MOVE_DOUBLE_KICK] = _("DOBLE PATADA"),
    [MOVE_MEGA_KICK] = _("MEGAPATADA"),
    [MOVE_JUMP_KICK] = _("PATADA SALTO"),
    [MOVE_ROLLING_KICK] = _("PATADA GIRO"),
    [MOVE_SAND_ATTACK] = _("AT. ARENA"),
    [MOVE_HEADBUTT] = _("GOLPE CABEZA"),
    [MOVE_HORN_ATTACK] = _("CORNADA"),
    [MOVE_FURY_ATTACK] = _("ATAQUE FURIA"),
    [MOVE_HORN_DRILL] = _("PERFORADOR"),
    [MOVE_TACKLE] = _("PLACAJE"),
    [MOVE_BODY_SLAM] = _("GOLPE CUERPO"),
    [MOVE_WRAP] = _("REPETICIÓN"),
    [MOVE_TAKE_DOWN] = _("DERRIBO"),
    [MOVE_THRASH] = _("GOLPE"),
    [MOVE_DOUBLE_EDGE] = _("DOBLE FILO"),
    [MOVE_TAIL_WHIP] = _("LÁTIGO"),
    [MOVE_POISON_STING] = _("PICOTAZO VEN"),
    [MOVE_TWINEEDLE] = _("DOBLE ATAQUE"),
    [MOVE_PIN_MISSILE] = _("PIN MISIL"),
    [MOVE_LEER] = _("MALICIOSO"),
    [MOVE_BITE] = _("MORDISCO"),
    [MOVE_GROWL] = _("GRUÑIDO"),
    [MOVE_ROAR] = _("RUGIDO"),
    [MOVE_SING] = _("CANTO"),
    [MOVE_SUPERSONIC] = _("SUPERSÓNICO"),
    [MOVE_SONIC_BOOM] = _("BOMBA SÓNICA"),
    [MOVE_DISABLE] = _("ANULACIÓN"),
    [MOVE_ACID] = _("ÁCIDO"),
    [MOVE_EMBER] = _("ASCUAS"),
    [MOVE_FLAMETHROWER] = _("LANZALLAMAS"),
    [MOVE_MIST] = _("NEBLINA"),
    [MOVE_WATER_GUN] = _("PISTOLA AGUA"),
    [MOVE_HYDRO_PUMP] = _("HIDROBOMBA"),
    [MOVE_SURF] = _("SURF"),
    [MOVE_ICE_BEAM] = _("RAYO HIELO"),
    [MOVE_BLIZZARD] = _("VENTISCA"),
    [MOVE_PSYBEAM] = _("PSICORRAYO"),
    [MOVE_BUBBLE_BEAM] = _("RAYO BURBUJA"),
    [MOVE_AURORA_BEAM] = _("RAYO AURORA"),
    [MOVE_HYPER_BEAM] = _("HYPERRAYO"),
    [MOVE_PECK] = _("PICOTAZO"),
    [MOVE_DRILL_PECK] = _("PICO TALADRO"),
    [MOVE_SUBMISSION] = _("SUMISIÓN"),
    [MOVE_LOW_KICK] = _("PATADA BAJA"),
    [MOVE_COUNTER] = _("CONTRAATAQUE"),
    [MOVE_SEISMIC_TOSS] = _("MOV. SÍSMICO"),
    [MOVE_STRENGTH] = _("FUERZA"),
    [MOVE_ABSORB] = _("ABSORBER"),
    [MOVE_MEGA_DRAIN] = _("MEGAAGOTAR"),
    [MOVE_LEECH_SEED] = _("DRENADORAS"),
    [MOVE_GROWTH] = _("DESARROLLO"),
    [MOVE_RAZOR_LEAF] = _("HOJA AFILADA"),
    [MOVE_SOLAR_BEAM] = _("RAYO SOLAR"),
    [MOVE_POISON_POWDER] = _("POLVO VENENO"),
    [MOVE_STUN_SPORE] = _("PARALIZADOR"),
    [MOVE_SLEEP_POWDER] = _("SOMNÍFERO"),
    [MOVE_PETAL_DANCE] = _("DANZA PÉTALO"),
    [MOVE_STRING_SHOT] = _("DISP. DEMORA"),
    [MOVE_DRAGON_RAGE] = _("FURIA DRAGÓN"),
    [MOVE_FIRE_SPIN] = _("GIRO FUEGO"),
    [MOVE_THUNDER_SHOCK] = _("IMPACTRUENO"),
    [MOVE_THUNDERBOLT] = _("RAYO"),
    [MOVE_THUNDER_WAVE] = _("ONDA TRUENO"),
    [MOVE_THUNDER] = _("TRUENO"),
    [MOVE_ROCK_THROW] = _("LANZARROCAS"),
    [MOVE_EARTHQUAKE] = _("TERREMOTO"),
    [MOVE_FISSURE] = _("FISURA"),
    [MOVE_DIG] = _("EXCAVAR"),
    [MOVE_TOXIC] = _("TOXIC"),
    [MOVE_CONFUSION] = _("CONFUSIÓN"),
    [MOVE_PSYCHIC] = _("PSÍQUICO"),
    [MOVE_HYPNOSIS] = _("HIPNOSIS"),
    [MOVE_MEDITATE] = _("MEDITACIÓN"),
    [MOVE_AGILITY] = _("AGILIDAD"),
    [MOVE_QUICK_ATTACK] = _("AT. RÁPIDO"),
    [MOVE_RAGE] = _("FURIA"),
    [MOVE_TELEPORT] = _("TELETRANSP"),
    [MOVE_NIGHT_SHADE] = _("TINIEBLAS"),
    [MOVE_MIMIC] = _("MIMÉTICO"),
    [MOVE_SCREECH] = _("CHIRRIDO"),
    [MOVE_DOUBLE_TEAM] = _("DOBLE EQUIPO"),
    [MOVE_RECOVER] = _("RECUPERACIÓN"),
    [MOVE_HARDEN] = _("FORTALEZA"),
    [MOVE_MINIMIZE] = _("REDUCCIÓN"),
    [MOVE_SMOKESCREEN] = _("PANTALLAHUMO"),
    [MOVE_CONFUSE_RAY] = _("RAYO CONFUSO"),
    [MOVE_WITHDRAW] = _("REFUGIO"),
    [MOVE_DEFENSE_CURL] = _("RIZO DEFENSA"),
    [MOVE_BARRIER] = _("BARRERA"),
    [MOVE_LIGHT_SCREEN] = _("PANTALLA LUZ"),
    [MOVE_HAZE] = _("NIEBLA"),
    [MOVE_REFLECT] = _("REFLEJO"),
    [MOVE_FOCUS_ENERGY] = _("FOCO ENERGÍA"),
    [MOVE_BIDE] = _("VENGANZA"),
    [MOVE_METRONOME] = _("METRÓNOMO"),
    [MOVE_MIRROR_MOVE] = _("MOV. ESPEJO"),
    [MOVE_SELF_DESTRUCT] = _("AUTODESTRUC"),
    [MOVE_EGG_BOMB] = _("BOMBA HUEVO"),
    [MOVE_LICK] = _("LENGÜETAZO"),
    [MOVE_SMOG] = _("POLUCIÓN"),
    [MOVE_SLUDGE] = _("RESIDUOS"),
    [MOVE_BONE_CLUB] = _("HUESO PALO"),
    [MOVE_FIRE_BLAST] = _("LLAMARADA"),
    [MOVE_WATERFALL] = _("CASCADA"),
    [MOVE_CLAMP] = _("TENAZA"),
    [MOVE_SWIFT] = _("RAPIDEZ"),
    [MOVE_SKULL_BASH] = _("CABEZAZO"),
    [MOVE_SPIKE_CANNON] = _("CLAVO CAÑÓN"),
    [MOVE_CONSTRICT] = _("RESTRICCIÓN"),
    [MOVE_AMNESIA] = _("AMNESIA"),
    [MOVE_KINESIS] = _("KINÉTICO"),
    [MOVE_SOFT_BOILED] = _("AMORTIGUADOR"),
    [MOVE_HI_JUMP_KICK] = _("PAT. S. ALTA"),
    [MOVE_GLARE] = _("DESLUMBRAR"),
    [MOVE_DREAM_EATER] = _("COME SUEÑOS"),
    [MOVE_POISON_GAS] = _("GAS VENENOSO"),
    [MOVE_BARRAGE] = _("PRESA"),
    [MOVE_LEECH_LIFE] = _("CHUPAVIDAS"),
    [MOVE_LOVELY_KISS] = _("BESO AMOROSO"),
    [MOVE_SKY_ATTACK] = _("ATAQUE AÉREO"),
    [MOVE_TRANSFORM] = _("TRANSFORM"),
    [MOVE_BUBBLE] = _("BURBUJA"),
    [MOVE_DIZZY_PUNCH] = _("PUÑO MAREO"),
    [MOVE_SPORE] = _("ESPORA"),
    [MOVE_FLASH] = _("DESTELLO"),
    [MOVE_PSYWAVE] = _("PSICOONDA"),
    [MOVE_SPLASH] = _("SALPICADURA"),
    [MOVE_ACID_ARMOR] = _("ARMAD. ÁCIDA"),
    [MOVE_CRABHAMMER] = _("MARTILLAZO"),
    [MOVE_EXPLOSION] = _("EXPLOSIÓN"),
    [MOVE_FURY_SWIPES] = _("GOLPES FURIA"),
    [MOVE_BONEMERANG] = _("HUESOMERANG"),
    [MOVE_REST] = _("DESCANSO"),
    [MOVE_ROCK_SLIDE] = _("AVALANCHA"),
    [MOVE_HYPER_FANG] = _("HIP.COLMILLO"),
    [MOVE_SHARPEN] = _("AFILAR"),
    [MOVE_CONVERSION] = _("CONVERSIÓN"),
    [MOVE_TRI_ATTACK] = _("TRIATAQUE"),
    [MOVE_SUPER_FANG] = _("SUPERDIENTE"),
    [MOVE_SLASH] = _("CUCHILLADA"),
    [MOVE_SUBSTITUTE] = _("SUSTITUTO"),
    [MOVE_STRUGGLE] = _("FORCEJEO"),
    [MOVE_SKETCH] = _("ESQUEMA"),
    [MOVE_TRIPLE_KICK] = _("TRIPLEPATADA"),
    [MOVE_THIEF] = _("LADRÓN"),
    [MOVE_SPIDER_WEB] = _("TELARAÑA"),
    [MOVE_MIND_READER] = _("TELÉPATA"),
    [MOVE_NIGHTMARE] = _("PESADILLA"),
    [MOVE_FLAME_WHEEL] = _("RUEDA FUEGO"),
    [MOVE_SNORE] = _("RONQUIDO"),
    [MOVE_CURSE] = _("MALDICIÓN"),
    [MOVE_FLAIL] = _("AZOTE"),
    [MOVE_CONVERSION_2] = _("CONVERSIÓN 2"),
    [MOVE_AEROBLAST] = _("AEROCHORRO"),
    [MOVE_COTTON_SPORE] = _("ESPORAGODÓN"),
    [MOVE_REVERSAL] = _("INVERSIÓN"),
    [MOVE_SPITE] = _("RENCOR"),
    [MOVE_POWDER_SNOW] = _("NIEVE POLVO"),
    [MOVE_PROTECT] = _("PROTECCIÓN"),
    [MOVE_MACH_PUNCH] = _("ULTRAPUÑO"),
    [MOVE_SCARY_FACE] = _("CARA SUSTO"),
    [MOVE_FAINT_ATTACK] = _("FINTA"),
    [MOVE_SWEET_KISS] = _("BESO DULCE"),
    [MOVE_BELLY_DRUM] = _("TAMBOR"),
    [MOVE_SLUDGE_BOMB] = _("BOMBA LODO"),
    [MOVE_MUD_SLAP] = _("BOFETÓN LODO"),
    [MOVE_OCTAZOOKA] = _("PULPOCAÑÓN"),
    [MOVE_SPIKES] = _("PÚAS"),
    [MOVE_ZAP_CANNON] = _("ELECTROCAÑÓN"),
    [MOVE_FORESIGHT] = _("PROFECÍA"),
    [MOVE_DESTINY_BOND] = _("MISMODESTINO"),
    [MOVE_PERISH_SONG] = _("CANTO MORTAL"),
    [MOVE_ICY_WIND] = _("VIENTO HIELO"),
    [MOVE_DETECT] = _("DETECCIÓN"),
    [MOVE_BONE_RUSH] = _("ATAQUE ÓSEO"),
    [MOVE_LOCK_ON] = _("FIJAR BLANCO"),
    [MOVE_OUTRAGE] = _("ENFADO"),
    [MOVE_SANDSTORM] = _("TORM. ARENA"),
    [MOVE_GIGA_DRAIN] = _("GIGADRENADO"),
    [MOVE_ENDURE] = _("AGUANTE"),
    [MOVE_CHARM] = _("ENCANTO"),
    [MOVE_ROLLOUT] = _("DESENROLLAR"),
    [MOVE_FALSE_SWIPE] = _("FASLOTORTAZO"),
    [MOVE_SWAGGER] = _("CONTONEO"),
    [MOVE_MILK_DRINK] = _("BATIDO"),
    [MOVE_SPARK] = _("CHISPA"),
    [MOVE_FURY_CUTTER] = _("CORTE FURIA"),
    [MOVE_STEEL_WING] = _("ALA DE ACERO"),
    [MOVE_MEAN_LOOK] = _("MAL DE OJO"),
    [MOVE_ATTRACT] = _("ATRACCIÓN"),
    [MOVE_SLEEP_TALK] = _("SONÁMBULO"),
    [MOVE_HEAL_BELL] = _("CAMPANA CURA"),
    [MOVE_RETURN] = _("RETRIBUCCIÓN"),
    [MOVE_PRESENT] = _("PRESENTE"),
    [MOVE_FRUSTRATION] = _("FRUSTRACIÓN"),
    [MOVE_SAFEGUARD] = _("VELO SAGRADO"),
    [MOVE_PAIN_SPLIT] = _("DIVIDE DOLOR"),
    [MOVE_SACRED_FIRE] = _("FUEGOSAGRADO"),
    [MOVE_MAGNITUDE] = _("MAGNITUD"),
    [MOVE_DYNAMIC_PUNCH] = _("PUÑODINÁMICO"),
    [MOVE_MEGAHORN] = _("MEGACUERNO"),
    [MOVE_DRAGON_BREATH] = _("DRAGOALIENTO"),
    [MOVE_BATON_PASS] = _("RELEVO"),
    [MOVE_ENCORE] = _("OTRA VEZ"),
    [MOVE_PURSUIT] = _("PERSECUCIÓN"),
    [MOVE_RAPID_SPIN] = _("GIRO RÁPIDO"),
    [MOVE_SWEET_SCENT] = _("DULCE AROMA"),
    [MOVE_IRON_TAIL] = _("COLA FÉRREA"),
    [MOVE_METAL_CLAW] = _("GARRA METAL"),
    [MOVE_VITAL_THROW] = _("TIRO VITAL"),
    [MOVE_MORNING_SUN] = _("SOL MATINAL"),
    [MOVE_SYNTHESIS] = _("SÍNTESIS"),
    [MOVE_MOONLIGHT] = _("LUZ LUNAR"),
    [MOVE_HIDDEN_POWER] = _("PODER OCULTO"),
    [MOVE_CROSS_CHOP] = _("TAJO CRUZADO"),
    [MOVE_TWISTER] = _("CICLÓN"),
    [MOVE_RAIN_DANCE] = _("DANZA LLUVIA"),
    [MOVE_SUNNY_DAY] = _("DÍA SOLEADO"),
    [MOVE_CRUNCH] = _("TRITURAR"),
    [MOVE_MIRROR_COAT] = _("MANTO ESPEJO"),
    [MOVE_PSYCH_UP] = _("MÁS PSIQUE"),
    [MOVE_EXTREME_SPEED] = _("VEL. EXTREMA"),
    [MOVE_ANCIENT_POWER] = _("PODER PASADO"),
    [MOVE_SHADOW_BALL] = _("BOLA SOMBRA"),
    [MOVE_FUTURE_SIGHT] = _("PREMONICIÓN"),
    [MOVE_ROCK_SMASH] = _("GOLPE ROCA"),
    [MOVE_WHIRLPOOL] = _("TORBELLINO"),
    [MOVE_BEAT_UP] = _("PALIZA"),
    [MOVE_FAKE_OUT] = _("SORPRESA"),
    [MOVE_UPROAR] = _("ALBOROTO"),
    [MOVE_STOCKPILE] = _("RESERVA"),
    [MOVE_SPIT_UP] = _("ESCUPIR"),
    [MOVE_SWALLOW] = _("TRAGAR"),
    [MOVE_HEAT_WAVE] = _("ONDA ÍGNEA"),
    [MOVE_HAIL] = _("GRANIZO"),
    [MOVE_TORMENT] = _("TORMENTO"),
    [MOVE_FLATTER] = _("CAMELO"),
    [MOVE_WILL_O_WISP] = _("FUEGO FATUO"),
    [MOVE_MEMENTO] = _("LEGADO"),
    [MOVE_FACADE] = _("IMAGEN"),
    [MOVE_FOCUS_PUNCH] = _("PUÑO CERTERO"),
    [MOVE_SMELLING_SALT] = _("ESTÍMULO"),
    [MOVE_FOLLOW_ME] = _("SEÑUELO"),
    [MOVE_NATURE_POWER] = _("ADAPTACIÓN"),
    [MOVE_CHARGE] = _("CARGA"),
    [MOVE_TAUNT] = _("MOFA"),
    [MOVE_HELPING_HAND] = _("REFUERZO"),
    [MOVE_TRICK] = _("TRUCO"),
    [MOVE_ROLE_PLAY] = _("IMITACIÓN"),
    [MOVE_WISH] = _("DESEO"),
    [MOVE_ASSIST] = _("AYUDA"),
    [MOVE_INGRAIN] = _("ARRAIGO"),
    [MOVE_SUPERPOWER] = _("FUERZA BRUTA"),
    [MOVE_MAGIC_COAT] = _("CAPA MÁGICA"),
    [MOVE_RECYCLE] = _("RECICLAJE"),
    [MOVE_REVENGE] = _("DESQUITE"),
    [MOVE_BRICK_BREAK] = _("DEMOLICIÓN"),
    [MOVE_YAWN] = _("BOSTEZO"),
    [MOVE_KNOCK_OFF] = _("DESARME"),
    [MOVE_ENDEAVOR] = _("ESFUERZO"),
    [MOVE_ERUPTION] = _("ESTALLIDO"),
    [MOVE_SKILL_SWAP] = _("INTERCAMBIO"),
    [MOVE_IMPRISON] = _("CERCA"),
    [MOVE_REFRESH] = _("ALIVIO"),
    [MOVE_GRUDGE] = _("RABIA"),
    [MOVE_SNATCH] = _("ROBO"),
    [MOVE_SECRET_POWER] = _("DAÑO SECRETO"),
    [MOVE_DIVE] = _("BUCEO"),
    [MOVE_ARM_THRUST] = _("EMPUJÓN"),
    [MOVE_CAMOUFLAGE] = _("CAMUFLAJE"),
    [MOVE_TAIL_GLOW] = _("RÁFAGA"),
    [MOVE_LUSTER_PURGE] = _("RESPLANDOR"),
    [MOVE_MIST_BALL] = _("BOLA NEBLINA"),
    [MOVE_FEATHER_DANCE] = _("DANZA PLUMA"),
    [MOVE_TEETER_DANCE] = _("DANZA CAOS"),
    [MOVE_BLAZE_KICK] = _("PATADA ÍGNEA"),
    [MOVE_MUD_SPORT] = _("CHAPOTEOLODO"),
    [MOVE_ICE_BALL] = _("BOLA HIELO"),
    [MOVE_NEEDLE_ARM] = _("BRAZO PINCHO"),
    [MOVE_SLACK_OFF] = _("RELAJO"),
    [MOVE_HYPER_VOICE] = _("VOZARRÓN"),
    [MOVE_POISON_FANG] = _("COLM. VENENO"),
    [MOVE_CRUSH_CLAW] = _("GARRA BRUTAL"),
    [MOVE_BLAST_BURN] = _("ANILLO ÍGNEO"),
    [MOVE_HYDRO_CANNON] = _("HIDROCAÑÓN"),
    [MOVE_METEOR_MASH] = _("PUÑO METEORO"),
    [MOVE_ASTONISH] = _("IMPRESIONAR"),
    [MOVE_WEATHER_BALL] = _("METEOROBOLA"),
    [MOVE_AROMATHERAPY] = _("AROMATERAPIA"),
    [MOVE_FAKE_TEARS] = _("LLANTO FALSO"),
    [MOVE_AIR_CUTTER] = _("AIRE AFILADO"),
    [MOVE_OVERHEAT] = _("SOFOCO"),
    [MOVE_ODOR_SLEUTH] = _("RASTREO"),
    [MOVE_ROCK_TOMB] = _("TUMBA ROCAS"),
    [MOVE_SILVER_WIND] = _("VIENTO PLATA"),
    [MOVE_METAL_SOUND] = _("ECO METÁLICO"),
    [MOVE_GRASS_WHISTLE] = _("SILBATO"),
    [MOVE_TICKLE] = _("COSQUILLAS"),
    [MOVE_COSMIC_POWER] = _("MASA CÓSMICA"),
    [MOVE_WATER_SPOUT] = _("SALPICAR"),
    [MOVE_SIGNAL_BEAM] = _("DOBLE RAYO"),
    [MOVE_SHADOW_PUNCH] = _("PUÑO SOMBRA"),
    [MOVE_EXTRASENSORY] = _("PARANORMAL"),
    [MOVE_SKY_UPPERCUT] = _("GANCHO ALTO"),
    [MOVE_SAND_TOMB] = _("BUCLE ARENA"),
    [MOVE_SHEER_COLD] = _("FRÍO POLAR"),
    [MOVE_MUDDY_WATER] = _("AGUA LODOSA"),
    [MOVE_BULLET_SEED] = _("RECURRENTE"),
    [MOVE_AERIAL_ACE] = _("GOLPE AÉREO"),
    [MOVE_ICICLE_SPEAR] = _("CARÁMBANO"),
    [MOVE_IRON_DEFENSE] = _("DEF. FÉRREA"),
    [MOVE_BLOCK] = _("BLOQUEO"),
    [MOVE_HOWL] = _("AULLIDO"),
    [MOVE_DRAGON_CLAW] = _("GARRA DRAGÓN"),
    [MOVE_FRENZY_PLANT] = _("PLANTA FEROZ"),
    [MOVE_BULK_UP] = _("CORPULENCIA"),
    [MOVE_BOUNCE] = _("BOTE"),
    [MOVE_MUD_SHOT] = _("DISPARO LODO"),
    [MOVE_POISON_TAIL] = _("COLA VENENO"),
    [MOVE_COVET] = _("ANTOJO"),
    [MOVE_VOLT_TACKLE] = _("PLACAJE ELÉC"),
    [MOVE_MAGICAL_LEAF] = _("HOJA MÁGICA"),
    [MOVE_WATER_SPORT] = _("HIDROCHORRO"),
    [MOVE_CALM_MIND] = _("PAZ MENTAL"),
    [MOVE_LEAF_BLADE] = _("HOJA AGUDA"),
    [MOVE_DRAGON_DANCE] = _("DANZA DRAGÓN"),
    [MOVE_ROCK_BLAST] = _("PEDRADA"),
    [MOVE_SHOCK_WAVE] = _("ONDA VOLTIO"),
    [MOVE_WATER_PULSE] = _("HIDROPULSO"),
    [MOVE_DOOM_DESIRE] = _("DESEO OCULTO"),
    [MOVE_PSYCHO_BOOST] = _("PSICOATAQUE"),
};
