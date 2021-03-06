#ifndef SCRIPTS_H
#define SCRIPTS_H

//------------------------------------------------------
//---------------------- Типовые скрипты
//------------------------------------------------------

#define SCRIPT_OBJ_DUDE          (1)
#define SCRIPT_ANIMFVR           (2)
#define SCRIPT_INFO              (3) // скрипт для типовых реплик, на картах его не стоит использовать
#define SCRIPT_TSTCritr          (4)
#define SCRIPT_TSTObjct          (5)
#define SCRIPT_TSTTrigr          (6)
#define SCRIPT_ZTMap             (7)
#define SCRIPT_OBJ_CAR          (33)
#define SCRIPT_OBJ_TRNK         (34)
#define SCRIPT_ZSCarGen         (35)
#define SCRIPT_ANIMNGHT        (483)

#define SCRIPT_ZTInfo            (8)
#define SCRIPT_ZTRad             (9)
#define SCRIPT_ZTGoo            (10)
#define SCRIPT_ZTRokot          (11)
#define SCRIPT_ZTRotat          (463)
#define SCRIPT_ZTPoison         (612)
#define SCRIPT_ZTTriger         (627)
#define SCRIPT_ZTFire           (779)

#define SCRIPT_ZTMin            (12)
#define SCRIPT_ZTCapcan         (13)
#define SCRIPT_ZTLaser          (187)
#define SCRIPT_ZTPwdPol         (14)
#define SCRIPT_ZSPwdPol         (15)
#define SCRIPT_ZSDoor           (16)
#define SCRIPT_ZSCola           (17)
#define SCRIPT_ZSBlock          (18)
#define SCRIPT_ZSMentat         (769)
#define SCRIPT_ZSRocks          (92)
#define SCRIPT_ZSSolar          (19)
#define SCRIPT_ZSLump           (55)
#define SCRIPT_ZSLook           (68)
#define SCRIPT_ZIUseStp         (20)
#define SCRIPT_ZIHDisk          (21)
#define SCRIPT_ZSCmbStp         (395)

#define SCRIPT_ZIBxSafe         (22)
#define SCRIPT_ZIBxRndm         (23)
#define SCRIPT_ZIBxLck          (24)
#define SCRIPT_ZSSoil           (25)
#define SCRIPT_ZSGrvGen         (26)
#define SCRIPT_ZSGrvDst         (27)
#define SCRIPT_ZSRandom         (28)
#define SCRIPT_ZSBooks          (29)
#define SCRIPT_ZSGmSlt          (30)
#define SCRIPT_ZSAlcghl         (32)
#define SCRIPT_ZSIguan          (261)
#define SCRIPT_ZIRadio          (287)
#define SCRIPT_ZSMeat           (301)
#define SCRIPT_ZSDorCls         (404)
#define SCRIPT_ZSHole           (610)
#define SCRIPT_ZSRprJnk         (751)
#define SCRIPT_ZSWater          (770)

#define SCRIPT_ZSTblWrk         (31)
#define SCRIPT_ZSChemTb         (47)
#define SCRIPT_ZSTblChm         (47)
#define SCRIPT_ZSTblDmt         (443)
#define SCRIPT_ZSTblUzi         (464)

#define SCRIPT_ZCAnt            (36)
#define SCRIPT_ZCManti          (37)
#define SCRIPT_ZCRat            (38)
#define SCRIPT_ZCDog            (39)
#define SCRIPT_ZCWolf           (646)
#define SCRIPT_ZCScorp          (40)
#define SCRIPT_ZCBrahmn         (41)
#define SCRIPT_ZCPlant          (42)
#define SCRIPT_ZCDthclw         (43)
#define SCRIPT_ZCRobot          (44)
#define SCRIPT_ZCGhoul          (45)
#define SCRIPT_ZCFloatr         (644)

#define SCRIPT_ZCBandit        (396)
#define SCRIPT_ZCRedRdr        (444)
#define SCRIPT_ZCSavage        (622)
#define SCRIPT_ZCJackal        (623)
#define SCRIPT_ZCRaider        (624)
#define SCRIPT_ZCBodys         (625)
#define SCRIPT_ZCRdrWay        (626)
#define SCRIPT_ZCMexPtl        (628)
#define SCRIPT_ZCBosPtl        (629)
#define SCRIPT_ZCFarmer        (630)
#define SCRIPT_ZCTraper        (631)
#define SCRIPT_ZCMarodr        (632)
#define SCRIPT_ZCCrvBrm        (415)
#define SCRIPT_ZCCrvGrd        (633)
#define SCRIPT_ZCCrvDlr        (634)
#define SCRIPT_ZCImgrnt        (635)
#define SCRIPT_ZCAlejo         (636)
#define SCRIPT_ZCRanger        (637)
#define SCRIPT_ZCPlgrm         (638)
#define SCRIPT_ZCHermit        (639)
#define SCRIPT_ZCShybot        (640)
#define SCRIPT_ZCFisher        (641)
#define SCRIPT_ZCPsyman        (642)
#define SCRIPT_ZCMrHand        (643)
#define SCRIPT_ZCCannbl        (645)
#define SCRIPT_ZCMaxx          (647)

#define SCRIPT_ZCDstMnt        (618)
#define SCRIPT_ZCDstRat        (619)
#define SCRIPT_ZCDstDog        (620)

#define SCRIPT_ZIPostA         (122)
#define SCRIPT_ZIPostB         (123)

//------------------------------------------------------
//---------------------- Встречи на карте мира
//------------------------------------------------------

#define SCRIPT_ZCMstStr         (46) // Таинственный Незнакомец
#define SCRIPT_EncSlvA         (157)
#define SCRIPT_EncSlvB         (158)
#define SCRIPT_EncSlvC         (159)
#define SCRIPT_EncAtmnA        (397) // Атаман Лос Панчос 1
#define SCRIPT_EncAtmnB        (398) // Атаман Лос Панчос 2
#define SCRIPT_EncAtmnC        (399) // Атаман Лос Панчос 3
#define SCRIPT_EncGold         (437) // Умирающий с золотом
#define SCRIPT_EncBibl         (438) // Генри Бимис у библиотеки
#define SCRIPT_EncGlas         (439) // очки Генри Бимиса (на земле)
#define SCRIPT_EncBook         (440) // книга Генри Бимиса
#define SCRIPT_EncCafA         (441) // мужчина в Придорожном Кафе
#define SCRIPT_EncCafB         (442) // женщина в Придорожном Кафе
#define SCRIPT_EncLamnt        (618) // фермер Ламонт на встрече с перекати-поле
#define SCRIPT_EncBaron        (692) // Барон, самоназванный владыка Аризоны
#define SCRIPT_EncBarnB        (754) // соратники Барона Аризоны
#define SCRIPT_EncBarnC        (755) // враги Барона Аризоны
#define SCRIPT_EncSnow         (693) // обледенелые фигуры
#define SCRIPT_EncComix        (694) // журнал комиксов Панчо Вилья
#define SCRIPT_EncPadre        (700) // падре на встрече "Дух святого Иосифа"
#define SCRIPT_ECRdrEnc        (716) // рейдер-магистральщик которого атакуют охотники за головами
#define SCRIPT_EncLmnt1        (619) // перекати-поле первой волны
#define SCRIPT_EncLmnt2        (620) // перекати-поле второй волны
#define SCRIPT_EncLmnt3        (621) // перекати-поле последней волны
#define SCRIPT_EncVltS1        (722) // ВанБюрен - консоль управления дверью убежища
#define SCRIPT_EncVltS2        (723) // ВанБюрен - генератор в убежище
#define SCRIPT_EncVltS3        (724) // ВанБюрен - компьютер в убежище
#define SCRIPT_EncVltC1        (725) // ВанБюрен - напарник паладин БС
#define SCRIPT_EncVltC2        (726) // ВанБюрен - встречающий житель убежища
#define SCRIPT_EncVltC3        (727) // ВанБюрен - житель убежища М и Ж
#define SCRIPT_EncVltC4        (728) // ВанБюрен - поврежденный робоглаз
#define SCRIPT_EncMtntA        (731) // супермутанты на мобильной платформе
#define SCRIPT_EncMtntB        (732) // супермутанты на мобильной платформе с плавающим диалогом
#define SCRIPT_EncMtntC        (733) // заложник на мобильной платформе - член БС
#define SCRIPT_EncMtntD        (734) // реактор на мобильной платформе
#define SCRIPT_EncLgndA        (757) // ЛегендСити - встречающий робот
#define SCRIPT_EncLgndB        (758) // ЛегендСити - мишени
#define SCRIPT_EncLgndC        (759) // ЛегендСити - муз аппарат
#define SCRIPT_EncInfrn        (771) // раненный супермутант возле Инферно
#define SCRIPT_EncBnkrt        (773) // фермер-банкрот
#define SCRIPT_EncScrib        (775) // писарь-заложник на побережье у Пуэрто

//------------------------------------------------------
//---------------------- Вилла
//------------------------------------------------------

#define SCRIPT_VCBabula         (48)
#define SCRIPT_VCJose           (49)
#define SCRIPT_VCChrisA         (50)
#define SCRIPT_VCChrisB        (271)
#define SCRIPT_VCBandit         (51)
#define SCRIPT_VSGate           (52)
#define SCRIPT_VSMeteo          (53)
#define SCRIPT_VCMarodr         (54)
#define SCRIPT_VSRprItm         (56)
#define SCRIPT_VSStairs         (57)
#define SCRIPT_VSDstr           (58)
#define SCRIPT_VCCitizn         (59)
#define SCRIPT_VCChild          (60)
#define SCRIPT_VCCtzBld         (61)
#define SCRIPT_VCCtzTlk         (62)
#define SCRIPT_VSBabStr         (63)
#define SCRIPT_VCEden           (64)
#define SCRIPT_VCPadre          (65)
#define SCRIPT_VCMadre          (66)
#define SCRIPT_VSWell           (67)
#define SCRIPT_VSDead           (69)
#define SCRIPT_VCScnc          (160)
#define SCRIPT_VCCtzHom        (163)
#define SCRIPT_VICtzHom        (164)
#define SCRIPT_VSPolka         (165)
#define SCRIPT_VCOld           (166)
#define SCRIPT_VSRprPlk        (262)
#define SCRIPT_VCCrzCtz        (272)
#define SCRIPT_VCMsngr         (273)
#define SCRIPT_VCCrzEnm        (274)
#define SCRIPT_VIBonus         (298)
#define SCRIPT_VCKidPwr        (317)
#define SCRIPT_VCMigel         (538)
#define SCRIPT_VCPosolA        (573)
#define SCRIPT_VCPosolB        (574)
#define SCRIPT_VSKerama        (589)
#define SCRIPT_VSBnsBlc        (687)
#define SCRIPT_VCRobot         (688)
#define SCRIPT_VCMineA         (737)
#define SCRIPT_VCMineB         (738)

//------------------------------------------------------
//---------------------- Шакалы
//------------------------------------------------------

#define SCRIPT_JCSuka          (124)
#define SCRIPT_JCSamec         (125)
#define SCRIPT_JCGuard         (126)
#define SCRIPT_JCRanger        (127)
#define SCRIPT_JCMan           (128)
#define SCRIPT_JCWoman         (129)
#define SCRIPT_JCChild         (130)
#define SCRIPT_JCCtznA         (131)
#define SCRIPT_JCPosol         (132)
#define SCRIPT_JICulon         (135)
#define SCRIPT_JCCtznB         (136)
#define SCRIPT_JSTotem         (137)
#define SCRIPT_JCCtznC         (138)
#define SCRIPT_JSRifle         (139)
#define SCRIPT_JCMerc          (140)
#define SCRIPT_JSRope          (611)

//------------------------------------------------------
//---------------------- Гараж-Сити
//------------------------------------------------------

#define SCRIPT_GCEugene        (255)
#define SCRIPT_GCEugPap        (256)
#define SCRIPT_GCGate          (257)
#define SCRIPT_GCPit           (258)
#define SCRIPT_GCBoss          (259)
#define SCRIPT_GCMercJc        (260)
#define SCRIPT_GCImgrnt        (296)
#define SCRIPT_GCBarmen        (297)
#define SCRIPT_GCBarStp        (320)
#define SCRIPT_GCMotel         (321)
#define SCRIPT_GSCmptr         (322)

#define SCRIPT_GCClansA        (323)
#define SCRIPT_GCClansB        (324)
#define SCRIPT_GCClanA         (325)
#define SCRIPT_GCClanB         (326)
#define SCRIPT_GCDed           (327)

#define SCRIPT_GCLucas         (328)
#define SCRIPT_GCLcsBnd        (329)
#define SCRIPT_GCBossB         (330)
#define SCRIPT_GCCrvBos        (331)
#define SCRIPT_GCCrvGrd        (332)
#define SCRIPT_GCLucasB        (333)
#define SCRIPT_GCLcsGrd        (334)
#define SCRIPT_GCBosGrd        (335)
#define SCRIPT_GCLcsRbt        (336)
#define SCRIPT_GSCmpRbt        (337)
#define SCRIPT_GSStanok        (338)
#define SCRIPT_GCCtzn          (339)
#define SCRIPT_GCCtzA          (340)
#define SCRIPT_GCBarCtz        (341)
#define SCRIPT_GCCtzRad        (342)
#define SCRIPT_GCBrmBrm        (343)
#define SCRIPT_GCBrmAtk        (344)
#define SCRIPT_GCBrmPsA        (345)
#define SCRIPT_GCBrmPsB        (346)
#define SCRIPT_GSArmor         (472)
#define SCRIPT_GSWhole         (536)
#define SCRIPT_GSFabric        (577)
#define SCRIPT_GSLaser         (578)
#define SCRIPT_GCCtzB          (648)
#define SCRIPT_GCCtzC          (649)
#define SCRIPT_GCMotlB         (696)
#define SCRIPT_GCMotlC         (697)
#define SCRIPT_GSCaps          (702)
#define SCRIPT_GSTrlr          (703)
#define SCRIPT_GCBarGmr        (705)

//------------------------------------------------------
//---------------------- Флагпул
//------------------------------------------------------

#define SCRIPT_FCMer            (70)
#define SCRIPT_FCMerGrd         (71)
#define SCRIPT_FCBoss           (72)
#define SCRIPT_FCSlvGrd         (73)
#define SCRIPT_FCSlavs          (74)
#define SCRIPT_FCSlvVrv         (75)
#define SCRIPT_FCRanger         (76)
#define SCRIPT_FCBarmen         (77)
#define SCRIPT_FCBarSlv         (78)
#define SCRIPT_FCPost           (79)
#define SCRIPT_FCBishop         (80)
#define SCRIPT_FCTom            (81)
#define SCRIPT_FCAdmin          (82)
#define SCRIPT_FCMinBrk         (83)
#define SCRIPT_FCRatKng         (84)
#define SCRIPT_FSMinElc         (85)
#define SCRIPT_FSGame           (86)
#define SCRIPT_FSWater          (87)
#define SCRIPT_FCMadre          (88)
#define SCRIPT_FCVillA          (89)
#define SCRIPT_FCVillB          (90)
#define SCRIPT_FSRobot          (91)
#define SCRIPT_FTDstry          (93)
#define SCRIPT_FSMinDst         (94)
#define SCRIPT_FSCmpSlv         (95)
#define SCRIPT_FCSlvDor         (96)
#define SCRIPT_FCSlvVll         (97)
#define SCRIPT_FSTransf         (98)
#define SCRIPT_FSDorSlv         (99)
#define SCRIPT_FSRadio         (100)
#define SCRIPT_FCSlvRdr        (101)
#define SCRIPT_FCSlvMin        (102)
#define SCRIPT_FCBarTlk        (103)
#define SCRIPT_FCSlvA          (104)
#define SCRIPT_FCSlvB          (105)
#define SCRIPT_FSDead          (106)
#define SCRIPT_FCCrvBos        (107)
#define SCRIPT_FCCrvMan        (108)
#define SCRIPT_FCPostEn        (109)
#define SCRIPT_FCSlvScn        (110)
#define SCRIPT_FCCtznA         (111)
#define SCRIPT_FSSptnk         (112)
#define SCRIPT_FCCitzn         (113)
#define SCRIPT_FSSign          (114)
#define SCRIPT_FCChild         (115)
#define SCRIPT_FSWrkTb         (116)
#define SCRIPT_FCSlvStn        (117)
#define SCRIPT_FCCtznB         (118)
#define SCRIPT_FCRadKid        (119)
#define SCRIPT_FCFarmA         (417)
#define SCRIPT_FCFarmB         (418)
#define SCRIPT_FTRbtAcm        (431)
#define SCRIPT_FSFlag          (552)
#define SCRIPT_FCMinGrd        (698)
#define SCRIPT_FCGrdPst        (710)
#define SCRIPT_FCBody          (711)
#define SCRIPT_FCSlvBld        (712)
#define SCRIPT_FCKidPap        (713)
#define SCRIPT_FCMinPap        (714)
#define SCRIPT_FCSlvKnf        (721)

//--- Лагерь в горах
#define SCRIPT_FCSavage        (718)
#define SCRIPT_FCTraper        (719)
#define SCRIPT_FCTrpPrt        (742)
#define SCRIPT_FSTotems        (720)

//------------------------------------------------------
//---------------------- Сан-Брамин
//------------------------------------------------------

#define SCRIPT_BCLthr          (268)
#define SCRIPT_BCCitizn        (660)
#define SCRIPT_BCBoss          (661)
#define SCRIPT_BCBosKid        (662)
#define SCRIPT_BCHeadA         (663)
#define SCRIPT_BCHeadB         (664)
#define SCRIPT_BCHeadC         (665)
#define SCRIPT_BCRanger        (666)
#define SCRIPT_BCMisBos        (667)
#define SCRIPT_BCMisSld        (668)
#define SCRIPT_BCRoll          (669)
#define SCRIPT_BSRoll          (670)
#define SCRIPT_BSFlag          (671)
#define SCRIPT_BSBrmGoo        (673)
#define SCRIPT_BCChildA        (674)
#define SCRIPT_BCChildB        (675)
#define SCRIPT_BCChildC        (676)
#define SCRIPT_BCSanBrm        (677)
#define SCRIPT_BCRngrGd        (678)
#define SCRIPT_BCGarPst        (679)
#define SCRIPT_BCFortun        (680)
#define SCRIPT_BCCtznMt        (681)
#define SCRIPT_BCAidA          (683)
#define SCRIPT_BCAidB          (684)
#define SCRIPT_BCAidC          (685)
#define SCRIPT_BCCtzWar        (686)
#define SCRIPT_BSZaval         (689)
#define SCRIPT_BCWarA          (690)
#define SCRIPT_BCWarB          (691)
#define SCRIPT_BSStrBns        (729)
#define SCRIPT_BCHunter        (752)
#define SCRIPT_BCCrvnQt        (756)
#define SCRIPT_BCCrvnSv        (774)

//------------------------------------------------------
//---------------------- Рейнджеры
//------------------------------------------------------

#define SCRIPT_RCBoss          (133)
#define SCRIPT_RCRanger        (134)
#define SCRIPT_RCFrmBnd        (243)
#define SCRIPT_RCFrmMan        (244)
#define SCRIPT_RCFrmWmn        (245)
#define SCRIPT_RSFrmRpr        (246)
#define SCRIPT_RCPostA         (247)
#define SCRIPT_RCPostB         (248)
#define SCRIPT_RCIntndt        (249)
#define SCRIPT_RCRngJcl        (250)
#define SCRIPT_RCDumOvr        (251)
#define SCRIPT_RSDumRpr        (252)
#define SCRIPT_RCRngWmn        (253)
#define SCRIPT_RCRngRad        (254)
#define SCRIPT_RCRngMap        (280)
#define SCRIPT_RCGrvTlk        (281)
#define SCRIPT_RSDorDum        (282)
#define SCRIPT_RCComndr        (283)
#define SCRIPT_RCCadetA        (284)
#define SCRIPT_RCAgata         (285)
#define SCRIPT_RCCadetB        (286)
#define SCRIPT_RILoot          (288)
#define SCRIPT_RSRprRar        (289)
#define SCRIPT_RCBezhA         (290)
#define SCRIPT_RCBezhB         (291)
#define SCRIPT_RCParom         (292)
#define SCRIPT_RSParom         (293)
#define SCRIPT_RSRetrns        (294)
#define SCRIPT_RCPresly        (295)
#define SCRIPT_RSMapPnt        (299)
#define SCRIPT_RCRngQrz        (300)
#define SCRIPT_RSRadio         (302)
#define SCRIPT_RCSlave         (303)
#define SCRIPT_RCStory         (304)
#define SCRIPT_RCFlick         (305)
#define SCRIPT_RCFlkKid        (306)
#define SCRIPT_RCFlkBrm        (307)
#define SCRIPT_RSFonar         (308)
#define SCRIPT_RCRatKng        (309)
#define SCRIPT_RCWshKid        (310)
#define SCRIPT_RCWshMan        (311)
#define SCRIPT_RCWshWmn        (312)
#define SCRIPT_RCWshBnd        (313)
#define SCRIPT_RSCmpDum        (314)
#define SCRIPT_RSCmpSrv        (315)
#define SCRIPT_RSWinch         (316)
#define SCRIPT_RCCtzPsn        (318)
#define SCRIPT_RCCadetC        (419)
#define SCRIPT_RSQrzStr        (420)
#define SCRIPT_RSDum           (467)
#define SCRIPT_RCMhvBos        (505)
#define SCRIPT_RCMhvBnd        (506)
#define SCRIPT_RCCouncl        (572)
#define SCRIPT_RCEndBnd        (576)
#define SCRIPT_RSDumVen        (717)

//--- Акведук
#define SCRIPT_RCGart          (319)
#define SCRIPT_RCAcvCtz        (445)
#define SCRIPT_RCAcvKid        (446)
#define SCRIPT_RCAcvEmg        (447)
#define SCRIPT_RCAcvBnd        (448)
#define SCRIPT_RCAcvCld        (617)
#define SCRIPT_RTDeads         (449)
#define SCRIPT_RCAcvTlk        (730)

//------------------------------------------------------
//---------------------- Феникс
//------------------------------------------------------

//--- Общегородские скрипты
#define SCRIPT_PIMapPnx        (387)
#define SCRIPT_PSDudWtd        (392)

//--- Проход в город
#define SCRIPT_PCPost          (120)
#define SCRIPT_PCScnc          (161)
#define SCRIPT_PCCrvBos        (279)
#define SCRIPT_PCCrvGrd        (358)
#define SCRIPT_PCEndBnd        (575)
#define SCRIPT_PCMerkDd        (709)

//--- Даунтаун
#define SCRIPT_PCBrtrA         (263)
#define SCRIPT_PCBrtrB         (264)
#define SCRIPT_PCBrtrC         (265)
#define SCRIPT_PCBrtrD         (266)
#define SCRIPT_PCLloyd         (364)
#define SCRIPT_PCCtzn          (365)
#define SCRIPT_PCGopStp        (366)
#define SCRIPT_PCScvatr        (367)
#define SCRIPT_PCMerkBs        (371)
#define SCRIPT_PCMerkGd        (372)
#define SCRIPT_PSMerkAd        (373)
#define SCRIPT_PCScvTlk        (391)
#define SCRIPT_PCEnmClt        (393)
#define SCRIPT_PCMusKid        (405)
#define SCRIPT_PCKidVor        (406)
#define SCRIPT_PSBrtrA         (407)
#define SCRIPT_PSBrtrB         (408)
#define SCRIPT_PSBrtrC         (409)
#define SCRIPT_PSBrtrD         (410)
#define SCRIPT_PCTcnRun        (462)

#define SCRIPT_PSSltDtr        (351)
#define SCRIPT_PCCasGrd        (360)
#define SCRIPT_PCCasGmr        (361)
#define SCRIPT_PCDon           (362)
#define SCRIPT_PCMigel         (363)
#define SCRIPT_PCCasAdm        (368)
#define SCRIPT_PCCasCrp        (369)
#define SCRIPT_PCCasTlk        (370)
#define SCRIPT_PCCasCas        (275)
#define SCRIPT_PCCasBar        (276)
#define SCRIPT_PCCasSpk        (277)
#define SCRIPT_PCCasAlc        (278)
#define SCRIPT_PCCasVrc        (401)
#define SCRIPT_PSCasSgn        (402)
#define SCRIPT_PCCasBel        (403)
#define SCRIPT_PCCasJck        (411)
#define SCRIPT_PTCasExt        (412)
#define SCRIPT_PCCasTel        (413)
#define SCRIPT_PCDonWmn        (414)
#define SCRIPT_PCMisBos        (682)

//--- Трущобы
#define SCRIPT_PCDrgdlr        (267)
#define SCRIPT_PCBdBos         (374)
#define SCRIPT_PCBdCtz         (375)
#define SCRIPT_PCBdDed         (376)
#define SCRIPT_PCBdKid         (377)
#define SCRIPT_PCBdLoh         (378)
#define SCRIPT_PCBdLohB        (535)
#define SCRIPT_PCBdNark        (379)
#define SCRIPT_PCTrener        (380)
#define SCRIPT_PCRngBos        (381)
#define SCRIPT_PCRngGrd        (382)
#define SCRIPT_PCRngBoy        (383)
#define SCRIPT_PCRngBar        (384)
#define SCRIPT_PCRngCrp        (385)
#define SCRIPT_PCRngEnm        (386)
#define SCRIPT_PCBdTlk1        (388)
#define SCRIPT_PCBdTlk2        (389)
#define SCRIPT_PCBdBkr         (390)
#define SCRIPT_PCFlgRun        (461)
#define SCRIPT_PCBdStiv        (484)
#define SCRIPT_PIBdItem        (537)
#define SCRIPT_PCEndRkt        (580)
#define SCRIPT_PSBxCola        (608)

#define SCRIPT_PCRedBos        (485)
#define SCRIPT_PCRedTlk        (486)
#define SCRIPT_PCRedGrd        (487)
#define SCRIPT_PCRedPst        (521)
#define SCRIPT_PCRedPrn        (522)
#define SCRIPT_PCRedDed        (523)

//--- Собор
#define SCRIPT_PCMaster        (186)
#define SCRIPT_PCMstrRb        (188)
#define SCRIPT_PCCltA          (189)
#define SCRIPT_PCCltB          (190)
#define SCRIPT_PCCltC          (191)
#define SCRIPT_PCCltSpy        (192)
#define SCRIPT_PCCltDlg        (193)
#define SCRIPT_PSElktr         (194)
#define SCRIPT_PCCltSpk        (348)
#define SCRIPT_PCCltBk         (349)
#define SCRIPT_PCCltRg         (350)
#define SCRIPT_PSRadio         (352)
#define SCRIPT_PCCltRad        (353)
#define SCRIPT_PCCltRun        (354)
#define SCRIPT_PSCltBk         (355)
#define SCRIPT_PSPictur        (356)
#define SCRIPT_PCCltBhp        (357)
#define SCRIPT_PCCltLzr        (359)
#define SCRIPT_PCCltKid        (400)
#define SCRIPT_PCCtzBld        (457)
#define SCRIPT_PCCltBld        (571)
#define SCRIPT_PCGhost         (579)
#define SCRIPT_PCCltPtA        (740)
#define SCRIPT_PCCltPtB        (741)

//--- Подземка
#define SCRIPT_PCAnlGhl        (432)
#define SCRIPT_PCPrtznA        (433)
#define SCRIPT_PCPrtznB        (434)
#define SCRIPT_PCPrtznC        (435)
#define SCRIPT_PSAnlBlc        (436)
#define SCRIPT_PSAnlCom        (450)
#define SCRIPT_PCPrtznD        (453)
#define SCRIPT_PCPrtznE        (454)
#define SCRIPT_PSPrtznF        (456)
#define SCRIPT_PCScvAtm        (736)

//--- Атомная станция
#define SCRIPT_PCAtmBos        (524)
#define SCRIPT_PCAtmTlk        (525)
#define SCRIPT_PCAtmWrk        (526)
#define SCRIPT_PCAtmBld        (527)
#define SCRIPT_PCAtmRbt        (528)
#define SCRIPT_PCAtmBrt        (529)
#define SCRIPT_PSAtmStm        (530)
#define SCRIPT_PSAtmCmp        (531)
#define SCRIPT_PSAtmElc        (532)
#define SCRIPT_PCAtmClt        (533)
#define SCRIPT_PSAtmDor        (534)

//------------------------------------------------------
//---------------------- Мотель
//------------------------------------------------------

#define SCRIPT_MCMom           (650)
#define SCRIPT_MCBrthrA        (651)
#define SCRIPT_MCBrthrB        (652)
#define SCRIPT_MCBrthrC        (653)
#define SCRIPT_MSSwitch        (654)
#define SCRIPT_MSGate          (655)
#define SCRIPT_MSDorCol        (656)
#define SCRIPT_MCMtlBoy        (657)
#define SCRIPT_MCMtlNew        (658)
#define SCRIPT_MSMtlNew        (659)

//------------------------------------------------------
//---------------------- Убежище 25
//------------------------------------------------------

#define SCRIPT_PVSLift         (167)
#define SCRIPT_PVSConsl        (168)
#define SCRIPT_PVTExp          (169)
#define SCRIPT_PVCGrd          (170)
#define SCRIPT_PVCOvrsr        (171)
#define SCRIPT_PVSCompA        (172)
#define SCRIPT_PVCScnst        (173)
#define SCRIPT_PVCAstnt        (174)
#define SCRIPT_PVSCompB        (175)
#define SCRIPT_PVCRobot        (176)
#define SCRIPT_PVCHandy        (177)
#define SCRIPT_PVCPost         (178)
#define SCRIPT_PVSSintz        (179)
#define SCRIPT_PVSCnsl         (180)
#define SCRIPT_PVCCtzn         (181)
#define SCRIPT_PVCMedic        (182)
#define SCRIPT_PVCSlave        (183)
#define SCRIPT_PVSBomb         (184)
#define SCRIPT_PVCPtrl         (185)

//------------------------------------------------------
//---------------------- Убежище 27
//------------------------------------------------------

#define SCRIPT_VVSLift         (141)
#define SCRIPT_VVSConsl        (142)
#define SCRIPT_VVSInrcm        (143)
#define SCRIPT_VVTExp          (144)
#define SCRIPT_VVSGntr         (145)
#define SCRIPT_VVSVntl         (146)
#define SCRIPT_VVCScnc         (147)
#define SCRIPT_VVCGhost        (148)
#define SCRIPT_VVTPsn          (149)
#define SCRIPT_VVHolo          (150)
#define SCRIPT_VVTLift         (151)
#define SCRIPT_VVCOwr          (152)
#define SCRIPT_VVSDoor         (153)
#define SCRIPT_VVSBibl         (154)
#define SCRIPT_VVCGhstB        (155)
#define SCRIPT_VVSBasa         (156)

//------------------------------------------------------
//---------------------- Каса-Гранде
//------------------------------------------------------

#define SCRIPT_DCCtznA         (233)
#define SCRIPT_DCCtznB         (234)
#define SCRIPT_DCCtznC         (235)
#define SCRIPT_DCMcCord        (394)
#define SCRIPT_DCRanger        (465)
#define SCRIPT_DCKidTlk        (466)
#define SCRIPT_DCRlctA         (468)
#define SCRIPT_DCRlctB         (469)
#define SCRIPT_DSGrave         (470)
#define SCRIPT_DSGravB         (471)

#define SCRIPT_DCMer           (473)
#define SCRIPT_DCMerDch        (474)
#define SCRIPT_DCMerGrd        (475)
#define SCRIPT_DCMerStp        (501)

#define SCRIPT_DCWtrBrt        (476)
#define SCRIPT_DCAlien         (477)
#define SCRIPT_DCWtrAtk        (478)
#define SCRIPT_DCWtrGrd        (479)
#define SCRIPT_DCWtrBos        (480)
#define SCRIPT_DCCrvGrd        (481)
#define SCRIPT_DCCrvBos        (482)
#define SCRIPT_DSWtrRpr        (488)
#define SCRIPT_DSBthRpr        (489)

#define SCRIPT_DSBarMus        (490)
#define SCRIPT_DCBarBos        (491)
#define SCRIPT_DCBarRdr        (492)
#define SCRIPT_DCBarDgh        (493)
#define SCRIPT_DCBarMer        (494)
#define SCRIPT_DCBarGrd        (495)
#define SCRIPT_DCBarShf        (496)
#define SCRIPT_DCCtznD         (497)
#define SCRIPT_DSBndBox        (498)
#define SCRIPT_DSBndInv        (499)
#define SCRIPT_DCCtznE         (500)
#define SCRIPT_DSBthTbl        (502)
#define SCRIPT_DSHead          (503)
#define SCRIPT_DCBarmen        (581)
#define SCRIPT_DCCtzPsn        (707)

//------------------------------------------------------
//---------------------- Рейдеры (магистральщики)
//------------------------------------------------------

#define SCRIPT_MCBoss        (504)
#define SCRIPT_MCRaider      (511)
#define SCRIPT_MCRio         (512)
#define SCRIPT_MCSlave       (513)
#define SCRIPT_MCPost        (514)
#define SCRIPT_MCBar         (515)
#define SCRIPT_MCWife        (516)
#define SCRIPT_MCPrison      (517)
#define SCRIPT_MTTank        (518)
#define SCRIPT_MCBoys        (519)
#define SCRIPT_MSTank        (520)
#define SCRIPT_MIBonus       (609)
#define SCRIPT_MCRdrBld      (708)
#define SCRIPT_MCRdrHak      (715)

//------------------------------------------------------
//---------------------- ТуСан
//------------------------------------------------------

#define SCRIPT_TCPost          (121)
#define SCRIPT_TCBoss          (195)
#define SCRIPT_TCBarter        (196)
#define SCRIPT_TCNext          (197)
#define SCRIPT_TCOvrsr         (198)
#define SCRIPT_TCSlavs         (199)
#define SCRIPT_TCMedic         (200)
#define SCRIPT_TCTins          (201)
#define SCRIPT_TCCtzn          (202)
#define SCRIPT_TSCmpBos        (203)
#define SCRIPT_TCPadre         (204)
#define SCRIPT_TCSlvVll        (205)
#define SCRIPT_TCSlvTlk        (206)
#define SCRIPT_TCCarlos        (207)
#define SCRIPT_TCHandy         (208)
#define SCRIPT_TCRobot         (209)
#define SCRIPT_TCZAX           (210)
#define SCRIPT_TSZAXCmp        (211)
#define SCRIPT_TTLift          (212)
#define SCRIPT_TSCnslTp        (213)
#define SCRIPT_TSElctr         (214)
#define SCRIPT_TSZAXUpg        (215)
#define SCRIPT_TSBarier        (216)
#define SCRIPT_TSCmpBar        (217)
#define SCRIPT_TSMingun        (218)
#define SCRIPT_TCCtzMed        (219)
#define SCRIPT_TCCtzTlk        (220)
#define SCRIPT_TCZAXRbt        (221)
#define SCRIPT_TCMotel         (222)
#define SCRIPT_TCCrvGrd        (223)
#define SCRIPT_TCCrvBos        (224)
#define SCRIPT_TCCult          (225)
#define SCRIPT_TCGate          (226)
#define SCRIPT_TCCrvQst        (227)
#define SCRIPT_TCSlvCtz        (228)
#define SCRIPT_TCKid           (229)
#define SCRIPT_TCBndSlv        (230)
#define SCRIPT_TCBndBos        (231)
#define SCRIPT_TCBndRng        (232)
#define SCRIPT_TSBody          (239)
#define SCRIPT_TCTinWpn        (240)
#define SCRIPT_TSShovel        (241)
#define SCRIPT_ZSNwsppr        (242)
#define SCRIPT_TSCultDd        (347)
#define SCRIPT_TSWrkTbA        (236)
#define SCRIPT_TSWrkTbB        (237)
#define SCRIPT_TSWrkTbC        (238)
#define SCRIPT_TSBndRad        (421)
#define SCRIPT_TCCody          (459)
#define SCRIPT_TCScvr          (460)

//------------------------------------------------------
//---------------------- Каса-Нуэвa
//------------------------------------------------------

#define SCRIPT_NCScnc          (162)
#define SCRIPT_NCSilosA        (587)
#define SCRIPT_NCSilosB        (588)
#define SCRIPT_NCMer           (590)
#define SCRIPT_NCHimadr        (591)
#define SCRIPT_NCApcBos        (592)
#define SCRIPT_NSScrcrw        (593)
#define SCRIPT_NCSpore         (594)
#define SCRIPT_NTInfo          (595)
#define SCRIPT_NCCitizn        (596)
#define SCRIPT_NCQuestA        (597)
#define SCRIPT_NCApcTch        (598)
#define SCRIPT_NCApcAst        (599)
#define SCRIPT_NCSherif        (600)
#define SCRIPT_NCChild         (601)
#define SCRIPT_NCQuestB        (602)
#define SCRIPT_NCChipo         (603)
#define SCRIPT_NCPinki         (604)
#define SCRIPT_NSCmpLab        (605)
#define SCRIPT_NSLabHmc        (606)
#define SCRIPT_NCApcLab        (607)
#define SCRIPT_NSClimat        (613)
#define SCRIPT_NSGenert        (614)
#define SCRIPT_NSBlock         (615)
#define SCRIPT_NSBlnGaz        (616)
#define SCRIPT_NCCtzTlk        (695)
#define SCRIPT_NCShfRob        (701)
#define SCRIPT_NSWanted        (704)
#define SCRIPT_NCAlco          (706)
#define SCRIPT_NCCarlos        (739)
#define SCRIPT_NSGidro         (777)

//------------------------------------------------------
//---------------------- Инферно
//------------------------------------------------------

#define SCRIPT_ICRobot          (507)
#define SCRIPT_ISVentl          (508)
#define SCRIPT_ISCompA          (509)
#define SCRIPT_ISCompB          (510)
#define SCRIPT_ICDry            (539)
#define SCRIPT_ISGame           (540)
#define SCRIPT_ISPwrArm         (541)
#define SCRIPT_ICMaster         (542)
#define SCRIPT_ICLabBos         (543)
#define SCRIPT_ICLabrnt         (544)
#define SCRIPT_ICGate           (545)
#define SCRIPT_ICGrd            (546)
#define SCRIPT_ICPaladn         (547)
#define SCRIPT_ICApoc           (548)
#define SCRIPT_ISMusic          (549)
#define SCRIPT_ISFair           (550)
#define SCRIPT_ISTotem          (551)
#define SCRIPT_ISEd             (753)

//------------------------------------------------------
//---------------------- Пуэрто-Стайл
//------------------------------------------------------

#define SCRIPT_SCIntndt        (269)
#define SCRIPT_SCBoss          (270)
#define SCRIPT_SSTorped        (416)
#define SCRIPT_SCPost          (455)
#define SCRIPT_SSCmpTpd        (458)
#define SCRIPT_SCShpBoy        (553)
#define SCRIPT_SCSlave         (554)
#define SCRIPT_SCScrBos        (555)
#define SCRIPT_SCScribe        (556)
#define SCRIPT_SCMedic         (557)
#define SCRIPT_SCBell          (558)
#define SCRIPT_SCCook          (559)
#define SCRIPT_SCSldTlk        (560)
#define SCRIPT_SCPldnA         (566)
#define SCRIPT_SCPldnB         (567)
#define SCRIPT_SCInstr         (568)
#define SCRIPT_SCPatrul        (570)
#define SCRIPT_SCLumpy         (672)
#define SCRIPT_SCPaul          (743) // Пауль (EncMtntC) из мобильной платформы перебравшийся в Пуэрто

#define SCRIPT_SSWheel         (561)
#define SCRIPT_SSCmpBos        (562)
#define SCRIPT_SSCmpSrb        (563)
#define SCRIPT_SSLadder        (564)
#define SCRIPT_SILink          (565)
#define SCRIPT_SIPlazmo        (569)
#define SCRIPT_SIPwrArm        (699)
#define SCRIPT_SSCmpMus        (735)

//--- Лагерь Братства в пустыне
#define SCRIPT_SCCmpBos        (582)
#define SCRIPT_SCCmpSld        (583)
#define SCRIPT_SCCmpCmd        (584)
#define SCRIPT_SCCmpBnd        (585)
#define SCRIPT_SCCmpCrv        (586)

//------------------------------------------------------
//---------------------- Сан-Фелипе
//------------------------------------------------------

#define SCRIPT_ACBoss          (744)
#define SCRIPT_ACCtzn          (745)
#define SCRIPT_ACCtzRun        (746)
#define SCRIPT_ACCtzCav        (747)
#define SCRIPT_ASFaro          (748)
#define SCRIPT_ASLampar        (749)
#define SCRIPT_ATCave          (750)

//------------------------------------------------------
//---------------------- Санта Ана
//------------------------------------------------------

#define SCRIPT_CCCtzn          (760)
#define SCRIPT_CCChild         (761)
#define SCRIPT_CCBoss          (762)
#define SCRIPT_CCPapa          (763)
#define SCRIPT_CCNina          (764)
#define SCRIPT_CCNino          (765)
#define SCRIPT_CCBosGrd        (766)
#define SCRIPT_CCCrvBos        (767)
#define SCRIPT_CCNinb          (768)
#define SCRIPT_CCNinb          (768)
#define SCRIPT_CSCar           (772)
#define SCRIPT_CIShovel        (776)
#define SCRIPT_CSWrkTb         (778)

//------------------------------------------------------
//---------------------- Эрмосильо
//------------------------------------------------------

#define SCRIPT_HCRunchA        (422)
#define SCRIPT_HCRunchB        (423)
#define SCRIPT_HCRunchC        (424)
#define SCRIPT_HCSolder        (425)
#define SCRIPT_HCBoss          (426)
#define SCRIPT_HCPost          (427)
#define SCRIPT_HSComp          (428)
#define SCRIPT_HCPrisnr        (429)
#define SCRIPT_HCRobot         (430)
#define SCRIPT_HSGnrtr         (451)
#define SCRIPT_HSFonar         (452)

#endif
