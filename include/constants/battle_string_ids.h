#ifndef GUARD_CONSTANTS_BATTLE_STRING_IDS_H
#define GUARD_CONSTANTS_BATTLE_STRING_IDS_H

#define BATTLESTRINGS_COUNT     370

#define BATTLESTRINGS_ID_ADDER  12 // all battlestrings have its ID + 12, because first 5 are reserved

#define STRINGID_INTROMSG       0
#define STRINGID_INTROSENDOUT   1
#define STRINGID_RETURNMON      2
#define STRINGID_SWITCHINMON    3
#define STRINGID_USEDMOVE       4
#define STRINGID_BATTLEEND      5

// todo: make some of those names less vague: attacker/target vs pkmn, etc.
#define STRINGID_TRAINER1LOSETEXT           12
#define STRINGID_PKMNGAINEDEXP              13
#define STRINGID_PKMNGREWTOLV               14
#define STRINGID_PKMNLEARNEDMOVE            15
#define STRINGID_TRYTOLEARNMOVE1            16
#define STRINGID_TRYTOLEARNMOVE2            17
#define STRINGID_TRYTOLEARNMOVE3            18
#define STRINGID_PKMNFORGOTMOVE             19
#define STRINGID_STOPLEARNINGMOVE           20
#define STRINGID_DIDNOTLEARNMOVE            21
#define STRINGID_PKMNLEARNEDMOVE2           22
#define STRINGID_ATTACKMISSED               23
#define STRINGID_PKMNPROTECTEDITSELF        24
#define STRINGID_STATSWONTINCREASE2         25
#define STRINGID_AVOIDEDDAMAGE              26
#define STRINGID_ITDOESNTAFFECT             27
#define STRINGID_ATTACKERFAINTED            28
#define STRINGID_TARGETFAINTED              29
#define STRINGID_PLAYERGOTMONEY             30
#define STRINGID_PLAYERWHITEOUT             31
#define STRINGID_PLAYERWHITEOUT2            32
#define STRINGID_PREVENTSESCAPE             33
#define STRINGID_HITXTIMES                  34
#define STRINGID_PKMNFELLASLEEP             35
#define STRINGID_PKMNMADESLEEP              36
#define STRINGID_PKMNALREADYASLEEP          37
#define STRINGID_PKMNALREADYASLEEP2         38
#define STRINGID_PKMNWASNTAFFECTED          39
#define STRINGID_PKMNWASPOISONED            40
#define STRINGID_PKMNPOISONEDBY             41
#define STRINGID_PKMNHURTBYPOISON           42
#define STRINGID_PKMNALREADYPOISONED        43
#define STRINGID_PKMNBADLYPOISONED          44
#define STRINGID_PKMNENERGYDRAINED          45
#define STRINGID_PKMNWASBURNED              46
#define STRINGID_PKMNBURNEDBY               47
#define STRINGID_PKMNHURTBYBURN             48
#define STRINGID_PKMNWASFROZEN              49
#define STRINGID_PKMNFROZENBY               50
#define STRINGID_PKMNISFROZEN               51
#define STRINGID_PKMNWASDEFROSTED           52
#define STRINGID_PKMNWASDEFROSTED2          53
#define STRINGID_PKMNWASDEFROSTEDBY         54
#define STRINGID_PKMNWASPARALYZED           55
#define STRINGID_PKMNWASPARALYZEDBY         56
#define STRINGID_PKMNISPARALYZED            57
#define STRINGID_PKMNISALREADYPARALYZED     58
#define STRINGID_PKMNHEALEDPARALYSIS        59
#define STRINGID_PKMNDREAMEATEN             60
#define STRINGID_STATSWONTINCREASE          61
#define STRINGID_STATSWONTDECREASE          62
#define STRINGID_TEAMSTOPPEDWORKING         63
#define STRINGID_FOESTOPPEDWORKING          64
#define STRINGID_PKMNISCONFUSED             65
#define STRINGID_PKMNHEALEDCONFUSION        66
#define STRINGID_PKMNWASCONFUSED            67
#define STRINGID_PKMNALREADYCONFUSED        68
#define STRINGID_PKMNFELLINLOVE             69
#define STRINGID_PKMNINLOVE                 70
#define STRINGID_PKMNIMMOBILIZEDBYLOVE      71
#define STRINGID_PKMNBLOWNAWAY              72
#define STRINGID_PKMNCHANGEDTYPE            73
#define STRINGID_PKMNFLINCHED               74
#define STRINGID_PKMNREGAINEDHEALTH         75
#define STRINGID_PKMNHPFULL                 76
#define STRINGID_PKMNRAISEDSPDEF            77
#define STRINGID_PKMNRAISEDDEF              78
#define STRINGID_PKMNCOVEREDBYVEIL          79
#define STRINGID_PKMNUSEDSAFEGUARD          80
#define STRINGID_PKMNSAFEGUARDEXPIRED       81
#define STRINGID_PKMNWENTTOSLEEP            82
#define STRINGID_PKMNSLEPTHEALTHY           83
#define STRINGID_PKMNWHIPPEDWHIRLWIND       84
#define STRINGID_PKMNTOOKSUNLIGHT           85
#define STRINGID_PKMNLOWEREDHEAD            86
#define STRINGID_PKMNISGLOWING              87
#define STRINGID_PKMNFLEWHIGH               88
#define STRINGID_PKMNDUGHOLE                89
#define STRINGID_PKMNSQUEEZEDBYBIND         90
#define STRINGID_PKMNTRAPPEDINVORTEX        91
#define STRINGID_PKMNWRAPPEDBY              92
#define STRINGID_PKMNCLAMPED                93
#define STRINGID_PKMNHURTBY                 94
#define STRINGID_PKMNFREEDFROM              95
#define STRINGID_PKMNCRASHED                96
#define STRINGID_PKMNSHROUDEDINMIST         97
#define STRINGID_PKMNPROTECTEDBYMIST        98
#define STRINGID_PKMNGETTINGPUMPED          99
#define STRINGID_PKMNHITWITHRECOIL          100
#define STRINGID_PKMNPROTECTEDITSELF2       101
#define STRINGID_PKMNBUFFETEDBYSANDSTORM    102
#define STRINGID_PKMNPELTEDBYHAIL           103
#define STRINGID_PKMNSEEDED                 104
#define STRINGID_PKMNEVADEDATTACK           105
#define STRINGID_PKMNSAPPEDBYLEECHSEED      106
#define STRINGID_PKMNFASTASLEEP             107
#define STRINGID_PKMNWOKEUP                 108
#define STRINGID_PKMNUPROARKEPTAWAKE        109
#define STRINGID_PKMNWOKEUPINUPROAR         110
#define STRINGID_PKMNCAUSEDUPROAR           111
#define STRINGID_PKMNMAKINGUPROAR           112
#define STRINGID_PKMNCALMEDDOWN             113
#define STRINGID_PKMNCANTSLEEPINUPROAR      114
#define STRINGID_PKMNSTOCKPILED             115
#define STRINGID_PKMNCANTSTOCKPILE          116
#define STRINGID_PKMNCANTSLEEPINUPROAR2     117
#define STRINGID_UPROARKEPTPKMNAWAKE        118
#define STRINGID_PKMNSTAYEDAWAKEUSING       119
#define STRINGID_PKMNSTORINGENERGY          120
#define STRINGID_PKMNUNLEASHEDENERGY        121
#define STRINGID_PKMNFATIGUECONFUSION       122
#define STRINGID_PLAYERPICKEDUPMONEY        123
#define STRINGID_PKMNUNAFFECTED             124
#define STRINGID_PKMNTRANSFORMEDINTO        125
#define STRINGID_PKMNMADESUBSTITUTE         126
#define STRINGID_PKMNHASSUBSTITUTE          127
#define STRINGID_SUBSTITUTEDAMAGED          128
#define STRINGID_PKMNSUBSTITUTEFADED        129
#define STRINGID_PKMNMUSTRECHARGE           130
#define STRINGID_PKMNRAGEBUILDING           131
#define STRINGID_PKMNMOVEWASDISABLED        132
#define STRINGID_PKMNMOVEISDISABLED         133
#define STRINGID_PKMNMOVEDISABLEDNOMORE     134
#define STRINGID_PKMNGOTENCORE              135
#define STRINGID_PKMNENCOREENDED            136
#define STRINGID_PKMNTOOKAIM                137
#define STRINGID_PKMNSKETCHEDMOVE           138
#define STRINGID_PKMNTRYINGTOTAKEFOE        139
#define STRINGID_PKMNTOOKFOE                140
#define STRINGID_PKMNREDUCEDPP              141
#define STRINGID_PKMNSTOLEITEM              142
#define STRINGID_TARGETCANTESCAPENOW        143
#define STRINGID_PKMNFELLINTONIGHTMARE      144
#define STRINGID_PKMNLOCKEDINNIGHTMARE      145
#define STRINGID_PKMNLAIDCURSE              146
#define STRINGID_PKMNAFFLICTEDBYCURSE       147
#define STRINGID_SPIKESSCATTERED            148
#define STRINGID_PKMNHURTBYSPIKES           149
#define STRINGID_PKMNIDENTIFIED             150
#define STRINGID_PKMNPERISHCOUNTFELL        151
#define STRINGID_PKMNBRACEDITSELF           152
#define STRINGID_PKMNENDUREDHIT             153
#define STRINGID_MAGNITUDESTRENGTH          154
#define STRINGID_PKMNCUTHPMAXEDATTACK       155
#define STRINGID_PKMNCOPIEDSTATCHANGES      156
#define STRINGID_PKMNGOTFREE                157
#define STRINGID_PKMNSHEDLEECHSEED          158
#define STRINGID_PKMNBLEWAWAYSPIKES         159
#define STRINGID_PKMNFLEDFROMBATTLE         160
#define STRINGID_PKMNFORESAWATTACK          161
#define STRINGID_PKMNTOOKATTACK             162
#define STRINGID_PKMNATTACK                 163
#define STRINGID_PKMNCENTERATTENTION        164
#define STRINGID_PKMNCHARGINGPOWER          165
#define STRINGID_NATUREPOWERTURNEDINTO      166
#define STRINGID_PKMNSTATUSNORMAL           167
#define STRINGID_PKMNHASNOMOVESLEFT         168
#define STRINGID_PKMNSUBJECTEDTOTORMENT     169
#define STRINGID_PKMNCANTUSEMOVETORMENT     170
#define STRINGID_PKMNTIGHTENINGFOCUS        171
#define STRINGID_PKMNFELLFORTAUNT           172
#define STRINGID_PKMNCANTUSEMOVETAUNT       173
#define STRINGID_PKMNREADYTOHELP            174
#define STRINGID_PKMNSWITCHEDITEMS          175
#define STRINGID_PKMNCOPIEDFOE              176
#define STRINGID_PKMNMADEWISH               177
#define STRINGID_PKMNWISHCAMETRUE           178
#define STRINGID_PKMNPLANTEDROOTS           179
#define STRINGID_PKMNABSORBEDNUTRIENTS      180
#define STRINGID_PKMNANCHOREDITSELF         181
#define STRINGID_PKMNWASMADEDROWSY          182
#define STRINGID_PKMNKNOCKEDOFF             183
#define STRINGID_PKMNSWAPPEDABILITIES       184
#define STRINGID_PKMNSEALEDOPPONENTMOVE     185
#define STRINGID_PKMNCANTUSEMOVESEALED      186
#define STRINGID_PKMNWANTSGRUDGE            187
#define STRINGID_PKMNLOSTPPGRUDGE           188
#define STRINGID_PKMNSHROUDEDITSELF         189
#define STRINGID_PKMNMOVEBOUNCED            190
#define STRINGID_PKMNWAITSFORTARGET         191
#define STRINGID_PKMNSNATCHEDMOVE           192
#define STRINGID_PKMNMADEITRAIN             193
#define STRINGID_PKMNRAISEDSPEED            194
#define STRINGID_PKMNPROTECTEDBY            195
#define STRINGID_PKMNPREVENTSUSAGE          196
#define STRINGID_PKMNRESTOREDHPUSING        197
#define STRINGID_PKMNCHANGEDTYPEWITH        198
#define STRINGID_PKMNPREVENTSPARALYSISWITH  199
#define STRINGID_PKMNPREVENTSROMANCEWITH    200
#define STRINGID_PKMNPREVENTSPOISONINGWITH  201
#define STRINGID_PKMNPREVENTSCONFUSIONWITH  202
#define STRINGID_PKMNRAISEDFIREPOWERWITH    203
#define STRINGID_PKMNANCHORSITSELFWITH      204
#define STRINGID_PKMNCUTSATTACKWITH         205
#define STRINGID_PKMNPREVENTSSTATLOSSWITH   206
#define STRINGID_PKMNHURTSWITH              207
#define STRINGID_PKMNTRACED                 208
#define STRINGID_STATSHARPLY                209
#define STRINGID_STATROSE                   210
#define STRINGID_STATHARSHLY                211
#define STRINGID_STATFELL                   212
#define STRINGID_PKMNSSTATCHANGED           213
#define STRINGID_PKMNSSTATCHANGED2          214
#define STRINGID_PKMNSSTATCHANGED3          215
#define STRINGID_PKMNSSTATCHANGED4          216
#define STRINGID_CRITICALHIT                217
#define STRINGID_ONEHITKO                   218
#define STRINGID_123POOF                    219
#define STRINGID_ANDELLIPSIS                220
#define STRINGID_NOTVERYEFFECTIVE           221
#define STRINGID_SUPEREFFECTIVE             222
#define STRINGID_GOTAWAYSAFELY              223
#define STRINGID_WILDPKMNFLED               224
#define STRINGID_NORUNNINGFROMTRAINERS      225
#define STRINGID_CANTESCAPE                 226
#define STRINGID_DONTLEAVEBIRCH             227
#define STRINGID_BUTNOTHINGHAPPENED         228
#define STRINGID_BUTITFAILED                229
#define STRINGID_ITHURTCONFUSION            230
#define STRINGID_MIRRORMOVEFAILED           231
#define STRINGID_STARTEDTORAIN              232
#define STRINGID_DOWNPOURSTARTED            233
#define STRINGID_RAINCONTINUES              234
#define STRINGID_DOWNPOURCONTINUES          235
#define STRINGID_RAINSTOPPED                236
#define STRINGID_SANDSTORMBREWED            237
#define STRINGID_SANDSTORMRAGES             238
#define STRINGID_SANDSTORMSUBSIDED          239
#define STRINGID_SUNLIGHTGOTBRIGHT          240
#define STRINGID_SUNLIGHTSTRONG             241
#define STRINGID_SUNLIGHTFADED              242
#define STRINGID_STARTEDHAIL                243
#define STRINGID_HAILCONTINUES              244
#define STRINGID_HAILSTOPPED                245
#define STRINGID_FAILEDTOSPITUP             246
#define STRINGID_FAILEDTOSWALLOW            247
#define STRINGID_WINDBECAMEHEATWAVE         248
#define STRINGID_STATCHANGESGONE            249
#define STRINGID_COINSSCATTERED             250
#define STRINGID_TOOWEAKFORSUBSTITUTE       251
#define STRINGID_SHAREDPAIN                 252
#define STRINGID_BELLCHIMED                 253
#define STRINGID_FAINTINTHREE               254
#define STRINGID_NOPPLEFT                   255
#define STRINGID_BUTNOPPLEFT                256
#define STRINGID_PLAYERUSEDITEM             257
#define STRINGID_WALLYUSEDITEM              258
#define STRINGID_TRAINERBLOCKEDBALL         259
#define STRINGID_DONTBEATHIEF               260
#define STRINGID_ITDODGEDBALL               261
#define STRINGID_YOUMISSEDPKMN              262
#define STRINGID_PKMNBROKEFREE              263
#define STRINGID_ITAPPEAREDCAUGHT           264
#define STRINGID_AARGHALMOSTHADIT           265
#define STRINGID_SHOOTSOCLOSE               266
#define STRINGID_GOTCHAPKMNCAUGHT           267
#define STRINGID_GOTCHAPKMNCAUGHT2          268
#define STRINGID_GIVENICKNAMECAPTURED       269
#define STRINGID_PKMNSENTTOPC               270
#define STRINGID_PKMNDATAADDEDTODEX         271
#define STRINGID_ITISRAINING                272
#define STRINGID_SANDSTORMISRAGING          273
#define STRINGID_CANTESCAPE2                274
#define STRINGID_PKMNIGNORESASLEEP          275
#define STRINGID_PKMNIGNOREDORDERS          276
#define STRINGID_PKMNBEGANTONAP             277
#define STRINGID_PKMNLOAFING                278
#define STRINGID_PKMNWONTOBEY               279
#define STRINGID_PKMNTURNEDAWAY             280
#define STRINGID_PKMNPRETENDNOTNOTICE       281
#define STRINGID_ENEMYABOUTTOSWITCHPKMN     282
#define STRINGID_CREPTCLOSER                283
#define STRINGID_CANTGETCLOSER              284
#define STRINGID_PKMNWATCHINGCAREFULLY      285
#define STRINGID_PKMNCURIOUSABOUTX          286
#define STRINGID_PKMNENTHRALLEDBYX          287
#define STRINGID_PKMNIGNOREDX               288
#define STRINGID_THREWPOKEBLOCKATPKMN       289
#define STRINGID_OUTOFSAFARIBALLS           290
#define STRINGID_PKMNSITEMCUREDPARALYSIS    291
#define STRINGID_PKMNSITEMCUREDPOISON       292
#define STRINGID_PKMNSITEMHEALEDBURN        293
#define STRINGID_PKMNSITEMDEFROSTEDIT       294
#define STRINGID_PKMNSITEMWOKEIT            295
#define STRINGID_PKMNSITEMSNAPPEDOUT        296
#define STRINGID_PKMNSITEMCUREDPROBLEM      297
#define STRINGID_PKMNSITEMRESTOREDHEALTH    298
#define STRINGID_PKMNSITEMRESTOREDPP        299
#define STRINGID_PKMNSITEMRESTOREDSTATUS    300
#define STRINGID_PKMNSITEMRESTOREDHPALITTLE 301
#define STRINGID_ITEMALLOWSONLYYMOVE        302
#define STRINGID_PKMNHUNGONWITHX            303
#define STRINGID_EMPTYSTRING3               304
#define STRINGID_PKMNSXPREVENTSBURNS        305
#define STRINGID_PKMNSXBLOCKSY              306
#define STRINGID_PKMNSXRESTOREDHPALITTLE2   307
#define STRINGID_PKMNSXWHIPPEDUPSANDSTORM   308
#define STRINGID_PKMNSXPREVENTSYLOSS        309
#define STRINGID_PKMNSXINFATUATEDY          310
#define STRINGID_PKMNSXMADEYINEFFECTIVE     311
#define STRINGID_PKMNSXCUREDYPROBLEM        312
#define STRINGID_ITSUCKEDLIQUIDOOZE         313
#define STRINGID_PKMNTRANSFORMED            314
#define STRINGID_ELECTRICITYWEAKENED        315
#define STRINGID_FIREWEAKENED               316
#define STRINGID_PKMNHIDUNDERWATER          317
#define STRINGID_PKMNSPRANGUP               318
#define STRINGID_HMMOVESCANTBEFORGOTTEN     319
#define STRINGID_XFOUNDONEY                 320
#define STRINGID_PLAYERDEFEATEDTRAINER1     321
#define STRINGID_SOOTHINGAROMA              322
#define STRINGID_ITEMSCANTBEUSEDNOW         323
#define STRINGID_FORXCOMMAYZ                324
#define STRINGID_USINGXTHEYOFZN             325
#define STRINGID_PKMNUSEDXTOGETPUMPED       326
#define STRINGID_PKMNSXMADEYUSELESS         327
#define STRINGID_PKMNTRAPPEDBYSANDTOMB      328
#define STRINGID_EMPTYSTRING4               329
#define STRINGID_ABOOSTED                   330
#define STRINGID_PKMNSXINTENSIFIEDSUN       331
#define STRINGID_PKMNMAKESGROUNDMISS        332
#define STRINGID_YOUTHROWABALLNOWRIGHT      333
#define STRINGID_PKMNSXTOOKATTACK           334
#define STRINGID_PKMNCHOSEXASDESTINY        335
#define STRINGID_PKMNLOSTFOCUS              336
#define STRINGID_USENEXTPKMN                337
#define STRINGID_PKMNFLEDUSINGITS           338
#define STRINGID_PKMNFLEDUSING              339
#define STRINGID_PKMNWASDRAGGEDOUT          340
#define STRINGID_PREVENTEDFROMWORKING       341
#define STRINGID_PKMNSITEMNORMALIZEDSTATUS  342
#define STRINGID_TRAINER1USEDITEM           343
#define STRINGID_BOXISFULL                  344
#define STRINGID_PKMNAVOIDEDATTACK          345
#define STRINGID_PKMNSXMADEITINEFFECTIVE    346
#define STRINGID_PKMNSXPREVENTSFLINCHING    347
#define STRINGID_PKMNALREADYHASBURN         348
#define STRINGID_STATSWONTDECREASE2         349
#define STRINGID_PKMNSXBLOCKSY2             350
#define STRINGID_PKMNSXWOREOFF              351
#define STRINGID_PKMNRAISEDDEFALITTLE       352
#define STRINGID_PKMNRAISEDSPDEFALITTLE     353
#define STRINGID_THEWALLSHATTERED           354
#define STRINGID_PKMNSXPREVENTSYSZ          355
#define STRINGID_PKMNSXCUREDITSYPROBLEM     356
#define STRINGID_ATTACKERCANTESCAPE         357
#define STRINGID_PKMNOBTAINEDX              358
#define STRINGID_PKMNOBTAINEDX2             359
#define STRINGID_PKMNOBTAINEDXYOBTAINEDZ    360
#define STRINGID_BUTNOEFFECT                361
#define STRINGID_PKMNSXHADNOEFFECTONY       362
#define STRINGID_TWOENEMIESDEFEATED         363
#define STRINGID_TRAINER2LOSETEXT           364
#define STRINGID_PKMNINCAPABLEOFPOWER       365
#define STRINGID_GLINTAPPEARSINEYE          366
#define STRINGID_PKMNGETTINGINTOPOSITION    367
#define STRINGID_PKMNBEGANGROWLINGDEEPLY    368
#define STRINGID_PKMNEAGERFORMORE           369
#define STRINGID_DEFEATEDOPPONENTBYREFEREE  370
#define STRINGID_LOSTTOOPPONENTBYREFEREE    371
#define STRINGID_TIEDOPPONENTBYREFEREE      372
#define STRINGID_QUESTIONFORFEITMATCH       373
#define STRINGID_FORFEITEDMATCH             374
#define STRINGID_PKMNTRANSFERREDSOMEONESPC  375
#define STRINGID_PKMNTRANSFERREDLANETTESPC  376
#define STRINGID_PKMNBOXSOMEONESPCFULL      377
#define STRINGID_PKMNBOXLANETTESPCFULL      378
#define STRINGID_TRAINER1WINTEXT            379
#define STRINGID_TRAINER2WINTEXT            380
#define STRINGID_PICKUPREWARD               381

#endif // GUARD_CONSTANTS_BATTLE_STRING_IDS_H
