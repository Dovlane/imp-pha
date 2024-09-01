    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 61;
            section.data(61)  = dumData; %prealloc

                    ;% rtP.PIDController_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.PIDController1_D
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.PIDController_I
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.PIDController1_I
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.PIDController_InitialConditionForFilter
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.PIDController1_InitialConditionForFilter
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.PIDController_InitialConditionForIntegrator
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController1_InitialConditionForIntegrator
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.PIDController1_LowerSaturationLimit
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.PIDController_N
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PIDController1_N
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PIDController_P
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PIDController1_P
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.PIDController1_UpperSaturationLimit
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.RepeatingSequence_rep_seq_y
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.TransportDelay2_Delay
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 19;

                    ;% rtP.TransportDelay2_InitOutput
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 20;

                    ;% rtP.Relay_OnVal
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 21;

                    ;% rtP.Relay_OffVal
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 22;

                    ;% rtP.Relay_YOn
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 23;

                    ;% rtP.Relay_YOff
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 24;

                    ;% rtP.Gain1_Gain
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 25;

                    ;% rtP.LookUpTable1_bp01Data
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 26;

                    ;% rtP.TransportDelay4_Delay
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 31;

                    ;% rtP.TransportDelay4_InitOutput
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 32;

                    ;% rtP.Gain7_Gain
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 33;

                    ;% rtP.TransportDelay5_Delay
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 34;

                    ;% rtP.TransportDelay5_InitOutput
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 35;

                    ;% rtP.TransportDelay1_Delay
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 36;

                    ;% rtP.TransportDelay1_InitOutput
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 37;

                    ;% rtP.Relay1_OnVal
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 38;

                    ;% rtP.Relay1_OffVal
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 39;

                    ;% rtP.Relay1_YOn
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 40;

                    ;% rtP.Relay1_YOff
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 41;

                    ;% rtP.Gain5_Gain
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 42;

                    ;% rtP.Gain_Gain
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 43;

                    ;% rtP.Gain_Gain_ld3kxi2ge1
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 44;

                    ;% rtP.Gain3_Gain
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 45;

                    ;% rtP.Gain5_Gain_kplrypbnhr
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 46;

                    ;% rtP.Gain4_Gain
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 47;

                    ;% rtP.Gain5_Gain_cyso43qiuo
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 48;

                    ;% rtP.Gain5_Gain_h1rdjlyvou
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 49;

                    ;% rtP.Gain5_Gain_imrt3sps2q
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 50;

                    ;% rtP.Gain5_Gain_cns52zdlxh
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 51;

                    ;% rtP.Gain_Gain_mlk0nba5an
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 52;

                    ;% rtP.Gain6_Gain
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 53;

                    ;% rtP.Constant_Value
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 54;

                    ;% rtP.Constant1_Value
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 55;

                    ;% rtP.Constant2_Value
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 56;

                    ;% rtP.Constant5_Value
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 57;

                    ;% rtP.Constant6_Value
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 58;

                    ;% rtP.Constant7_Value
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 59;

                    ;% rtP.Constant_Value_idbpuu0wz0
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 60;

                    ;% rtP.RTP_A2061EF3_v_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 61;

                    ;% rtP.RTP_7BA69D45_v_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 62;

                    ;% rtP.RTP_E5C208E6_x_Value
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 63;

                    ;% rtP.RTP_EE9E4FDB_x_Value
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 64;

                    ;% rtP.RTP_082CD161_liquid_volume_Value
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 65;

                    ;% rtP.RTP_7CAF3599_t_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 66;

                    ;% rtP.RTP_7CAF3599_w_Value
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 67;

                    ;% rtP.RTP_964844C2_liquid_volume_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 68;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 51;
            section.data(51)  = dumData; %prealloc

                    ;% rtB.m0za0b3lr2
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gucu42oot3
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ahlgnathrd
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.dnz0rp2bup
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.j5oevqcglj
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.gj5iwt5ooj
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.mdoqbnusrj
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ktf3mjep1c
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.hmp5eu1gav
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.duxqetgzhc
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.l0wd0por5w
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.lhjaesm45e
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.ecmrbtctyr
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.puaxuhcx5l
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.jm5jkar05r
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.kmhipurxo0
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.dm5mtjipdw
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.fas1v2vrdk
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 20;

                    ;% rtB.jadzpkmuj2
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 21;

                    ;% rtB.p3mtxgf5r0
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 22;

                    ;% rtB.aay0cthl5b
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 23;

                    ;% rtB.b0euoqogax
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 24;

                    ;% rtB.kdafbgl2kl
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% rtB.nuwxay5kos
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 26;

                    ;% rtB.m502eztgoc
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 27;

                    ;% rtB.mkig3ty4kz
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 28;

                    ;% rtB.nhkbsimdnx
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 29;

                    ;% rtB.po45oiucru
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 30;

                    ;% rtB.prfmu3c01o
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 34;

                    ;% rtB.gyihakzqep
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 38;

                    ;% rtB.f2odyp2mvm
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 39;

                    ;% rtB.g0rg3dpy55
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 40;

                    ;% rtB.iedigs2ali
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 41;

                    ;% rtB.ivx3cjbvaj
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 45;

                    ;% rtB.esxew1bxhz
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 46;

                    ;% rtB.g2lcupc0vo
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 244;

                    ;% rtB.hyn2mzczou
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 254;

                    ;% rtB.mxk10ofmfg
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 255;

                    ;% rtB.i4lj5bxg51
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 256;

                    ;% rtB.brlvfuxaob
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 257;

                    ;% rtB.c0jvzaivbg
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 258;

                    ;% rtB.onylfjlame
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 259;

                    ;% rtB.ph3e1hmjdr
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 260;

                    ;% rtB.i31jk0iy2i
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 261;

                    ;% rtB.br544y5c1w
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 262;

                    ;% rtB.itggplgumn
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 263;

                    ;% rtB.hhcd4btgri
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 264;

                    ;% rtB.d3a53bljql
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 265;

                    ;% rtB.pvrpxvch23
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 266;

                    ;% rtB.ox0ur4ecpg
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 267;

                    ;% rtB.jfr0g5u1sf
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 268;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% rtDW.jyvbb3c21t
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ii2uylflih
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.asvtvarmbc
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% rtDW.k0bdrlkwiq
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% rtDW.azokvtooxw
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 6;

                    ;% rtDW.m03o3nukj2
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtDW.o0rehg2mop
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 13;

                    ;% rtDW.ezt044acxv.modelTStart
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 14;

                    ;% rtDW.idwjt1x2cd.modelTStart
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 15;

                    ;% rtDW.kesbszygtf.modelTStart
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 16;

                    ;% rtDW.j3ufwsqibm.modelTStart
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 24;
            section.data(24)  = dumData; %prealloc

                    ;% rtDW.f3biyympth.TUbufferPtrs
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jdknbk1age.TUbufferPtrs
                    section.data(2).logicalSrcIdx = 12;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.p5saxr4o0f.TUbufferPtrs
                    section.data(3).logicalSrcIdx = 13;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.bpuk1pdm3x.TUbufferPtrs
                    section.data(4).logicalSrcIdx = 14;
                    section.data(4).dtTransOffset = 6;

                    ;% rtDW.gw20xosyr1
                    section.data(5).logicalSrcIdx = 15;
                    section.data(5).dtTransOffset = 8;

                    ;% rtDW.hhsbxeii4m
                    section.data(6).logicalSrcIdx = 16;
                    section.data(6).dtTransOffset = 9;

                    ;% rtDW.fj4aqip5oa
                    section.data(7).logicalSrcIdx = 17;
                    section.data(7).dtTransOffset = 10;

                    ;% rtDW.btrddqfwca
                    section.data(8).logicalSrcIdx = 18;
                    section.data(8).dtTransOffset = 11;

                    ;% rtDW.izznjfm4pc
                    section.data(9).logicalSrcIdx = 19;
                    section.data(9).dtTransOffset = 12;

                    ;% rtDW.isyfafpgzq
                    section.data(10).logicalSrcIdx = 20;
                    section.data(10).dtTransOffset = 13;

                    ;% rtDW.bd243nh5y3
                    section.data(11).logicalSrcIdx = 21;
                    section.data(11).dtTransOffset = 14;

                    ;% rtDW.acptrjzcqz
                    section.data(12).logicalSrcIdx = 22;
                    section.data(12).dtTransOffset = 15;

                    ;% rtDW.olw41uyegm
                    section.data(13).logicalSrcIdx = 23;
                    section.data(13).dtTransOffset = 16;

                    ;% rtDW.lse4cj4bwu
                    section.data(14).logicalSrcIdx = 24;
                    section.data(14).dtTransOffset = 17;

                    ;% rtDW.mv4ej4pni5
                    section.data(15).logicalSrcIdx = 25;
                    section.data(15).dtTransOffset = 18;

                    ;% rtDW.j1p2hxsfve.LoggedData
                    section.data(16).logicalSrcIdx = 26;
                    section.data(16).dtTransOffset = 19;

                    ;% rtDW.dsan2yefar.LoggedData
                    section.data(17).logicalSrcIdx = 27;
                    section.data(17).dtTransOffset = 20;

                    ;% rtDW.hcmzflxpsq.LoggedData
                    section.data(18).logicalSrcIdx = 28;
                    section.data(18).dtTransOffset = 21;

                    ;% rtDW.jz4uhoo0fb.LoggedData
                    section.data(19).logicalSrcIdx = 29;
                    section.data(19).dtTransOffset = 22;

                    ;% rtDW.mhzs43sey4.LoggedData
                    section.data(20).logicalSrcIdx = 30;
                    section.data(20).dtTransOffset = 23;

                    ;% rtDW.khzguuli43.LoggedData
                    section.data(21).logicalSrcIdx = 31;
                    section.data(21).dtTransOffset = 24;

                    ;% rtDW.mrqszxjji2
                    section.data(22).logicalSrcIdx = 32;
                    section.data(22).dtTransOffset = 25;

                    ;% rtDW.fikcbckkyr
                    section.data(23).logicalSrcIdx = 33;
                    section.data(23).dtTransOffset = 26;

                    ;% rtDW.isk1cpyugg
                    section.data(24).logicalSrcIdx = 34;
                    section.data(24).dtTransOffset = 27;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtDW.ngat1pyozl.Tail
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ojok31w2uk.Tail
                    section.data(2).logicalSrcIdx = 36;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.hwohqmhrzq.Tail
                    section.data(3).logicalSrcIdx = 37;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.df531s2hdp.Tail
                    section.data(4).logicalSrcIdx = 38;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.dyxglur3eu
                    section.data(5).logicalSrcIdx = 39;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.pondv4ezn4
                    section.data(6).logicalSrcIdx = 40;
                    section.data(6).dtTransOffset = 71;

                    ;% rtDW.eqah3tvqef
                    section.data(7).logicalSrcIdx = 41;
                    section.data(7).dtTransOffset = 72;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.omis1sz1c1
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.pka2kvd4xr
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lrjwmtodrz
                    section.data(2).logicalSrcIdx = 44;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.l1sgtau4de
                    section.data(3).logicalSrcIdx = 45;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.euajuiqyjk
                    section.data(4).logicalSrcIdx = 46;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bgrjrvlkdf
                    section.data(5).logicalSrcIdx = 47;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.elk1ic4slt
                    section.data(6).logicalSrcIdx = 48;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1595963488;
    targMap.checksum1 = 1334015471;
    targMap.checksum2 = 3703238785;
    targMap.checksum3 = 3790547554;

