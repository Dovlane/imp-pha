#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "pha_0_9_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "pha_0_9.h"
#include "pha_0_9_capi.h"
#include "pha_0_9_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"pha_0_9/Clock" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "pha_0_9/Constant6" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 1 } , { 2 , 0 , TARGET_STRING ( "pha_0_9/Gain1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 2 } , { 3 , 0 , TARGET_STRING ( "pha_0_9/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 4 , 0 , TARGET_STRING (
"pha_0_9/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 5 , 0 ,
TARGET_STRING ( "pha_0_9/Gain7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 6 , 0 , TARGET_STRING ( "pha_0_9/Relay" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING ( "pha_0_9/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING ( "pha_0_9/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"pha_0_9/Sum2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 ,
TARGET_STRING ( "pha_0_9/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 11 , 0 , TARGET_STRING ( "pha_0_9/Switch" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 2 } , { 12 , 0 , TARGET_STRING ( "pha_0_9/Transport Delay1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"pha_0_9/Transport Delay2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
14 , 0 , TARGET_STRING ( "pha_0_9/Transport Delay4" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING ( "pha_0_9/Transport Delay5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"pha_0_9/Qbt/Gain5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0
, TARGET_STRING ( "pha_0_9/Qpb/Gain5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 18 , 0 , TARGET_STRING ( "pha_0_9/Repeating Sequence/Output" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"pha_0_9/Repeating Sequence/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 20 , 0 , TARGET_STRING ( "pha_0_9/Solver Configuration1/RTP_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 21 , 0 , TARGET_STRING (
"pha_0_9/flow IL sensor1/Gain5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 22 , 0 , TARGET_STRING ( "pha_0_9/flow sensor1/Gain5" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"pha_0_9/flow sensor2/Gain5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 24 , 0 , TARGET_STRING ( "pha_0_9/flow sensor3/Gain5" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"pha_0_9/pressure sensor/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 26 , 0 , TARGET_STRING ( "pha_0_9/pressure sensor1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"pha_0_9/pressure sensor2/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 28 , 0 , TARGET_STRING (
"pha_0_9/Solver Configuration1/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"pha_0_9/Solver Configuration1/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"pha_0_9/Solver Configuration1/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"pha_0_9/Solver Configuration1/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"pha_0_9/Solver Configuration1/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"pha_0_9/Solver Configuration1/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/D Gain/Internal Parameters/Derivative Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/I Gain/Internal Parameters/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/Integrator/Continuous/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/N Gain/Internal Parameters/Filter Coefficient" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"pha_0_9/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 42 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/D Gain/Internal Parameters/Derivative Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/I Gain/Internal Parameters/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/Integrator/Continuous/Integrator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/N Gain/Internal Parameters/Filter Coefficient" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/Saturation/Enabled/Saturation" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"pha_0_9/PID Controller1/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static
const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 51 , TARGET_STRING
( "pha_0_9/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 52 ,
TARGET_STRING ( "pha_0_9/PID Controller" ) , TARGET_STRING ( "I" ) , 0 , 0 ,
0 } , { 53 , TARGET_STRING ( "pha_0_9/PID Controller" ) , TARGET_STRING ( "D"
) , 0 , 0 , 0 } , { 54 , TARGET_STRING ( "pha_0_9/PID Controller" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 55 , TARGET_STRING (
"pha_0_9/PID Controller" ) , TARGET_STRING ( "InitialConditionForIntegrator"
) , 0 , 0 , 0 } , { 56 , TARGET_STRING ( "pha_0_9/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 57 ,
TARGET_STRING ( "pha_0_9/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 ,
0 } , { 58 , TARGET_STRING ( "pha_0_9/PID Controller1" ) , TARGET_STRING (
"I" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING ( "pha_0_9/PID Controller1" ) ,
TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"pha_0_9/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 61 ,
TARGET_STRING ( "pha_0_9/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
"pha_0_9/PID Controller1" ) , TARGET_STRING ( "InitialConditionForFilter" ) ,
0 , 0 , 0 } , { 63 , TARGET_STRING ( "pha_0_9/PID Controller1" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING
( "pha_0_9/PID Controller1" ) , TARGET_STRING ( "LowerSaturationLimit" ) , 0
, 0 , 0 } , { 65 , TARGET_STRING ( "pha_0_9/Repeating Sequence" ) ,
TARGET_STRING ( "rep_seq_y" ) , 0 , 4 , 0 } , { 66 , TARGET_STRING (
"pha_0_9/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 67 ,
TARGET_STRING ( "pha_0_9/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0
} , { 68 , TARGET_STRING ( "pha_0_9/Constant2" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 69 , TARGET_STRING ( "pha_0_9/Constant5" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING ( "pha_0_9/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
"pha_0_9/Constant7" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 72 ,
TARGET_STRING ( "pha_0_9/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 73 , TARGET_STRING ( "pha_0_9/Gain3" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 74 , TARGET_STRING ( "pha_0_9/Gain4" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 75 , TARGET_STRING ( "pha_0_9/Gain6" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 76 , TARGET_STRING ( "pha_0_9/Gain7" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING ( "pha_0_9/Relay" ) ,
TARGET_STRING ( "OnSwitchValue" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"pha_0_9/Relay" ) , TARGET_STRING ( "OffSwitchValue" ) , 0 , 0 , 0 } , { 79 ,
TARGET_STRING ( "pha_0_9/Relay" ) , TARGET_STRING ( "OnOutputValue" ) , 0 , 0
, 0 } , { 80 , TARGET_STRING ( "pha_0_9/Relay" ) , TARGET_STRING (
"OffOutputValue" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING ( "pha_0_9/Relay1" )
, TARGET_STRING ( "OnSwitchValue" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"pha_0_9/Relay1" ) , TARGET_STRING ( "OffSwitchValue" ) , 0 , 0 , 0 } , { 83
, TARGET_STRING ( "pha_0_9/Relay1" ) , TARGET_STRING ( "OnOutputValue" ) , 0
, 0 , 0 } , { 84 , TARGET_STRING ( "pha_0_9/Relay1" ) , TARGET_STRING (
"OffOutputValue" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"pha_0_9/Transport Delay1" ) , TARGET_STRING ( "DelayTime" ) , 0 , 0 , 0 } ,
{ 86 , TARGET_STRING ( "pha_0_9/Transport Delay1" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"pha_0_9/Transport Delay2" ) , TARGET_STRING ( "DelayTime" ) , 0 , 0 , 0 } ,
{ 88 , TARGET_STRING ( "pha_0_9/Transport Delay2" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
"pha_0_9/Transport Delay4" ) , TARGET_STRING ( "DelayTime" ) , 0 , 0 , 0 } ,
{ 90 , TARGET_STRING ( "pha_0_9/Transport Delay4" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"pha_0_9/Transport Delay5" ) , TARGET_STRING ( "DelayTime" ) , 0 , 0 , 0 } ,
{ 92 , TARGET_STRING ( "pha_0_9/Transport Delay5" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING ( "pha_0_9/Qbt/Gain5"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"pha_0_9/Qpb/Gain5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 95 ,
TARGET_STRING ( "pha_0_9/Repeating Sequence/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"pha_0_9/Repeating Sequence/Look-Up Table1" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 4 , 0 } , { 97 , TARGET_STRING (
"pha_0_9/flow IL sensor1/Gain5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 98 , TARGET_STRING ( "pha_0_9/flow sensor1/Gain5" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING ( "pha_0_9/flow sensor2/Gain5"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"pha_0_9/flow sensor3/Gain5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
101 , TARGET_STRING ( "pha_0_9/pressure sensor/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"pha_0_9/pressure sensor1/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 103 , TARGET_STRING ( "pha_0_9/pressure sensor2/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING (
 "pha_0_9/Subsystem_around_RTP_082CD161_liquid_volume/Subsystem_around_RTP_082CD161_liquid_volume"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
"pha_0_9/Subsystem_around_RTP_7CAF3599_t/Subsystem_around_RTP_7CAF3599_t" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
"pha_0_9/Subsystem_around_RTP_7CAF3599_w/Subsystem_around_RTP_7CAF3599_w" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
 "pha_0_9/Subsystem_around_RTP_964844C2_liquid_volume/Subsystem_around_RTP_964844C2_liquid_volume"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
 "pha_0_9/Servovalve2/Subsystem_around_RTP_7BA69D45_v/Subsystem_around_RTP_7BA69D45_v"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
 "pha_0_9/Servovalve2/Subsystem_around_RTP_E5C208E6_x/Subsystem_around_RTP_E5C208E6_x"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
 "pha_0_9/Servovalve2/Subsystem_around_RTP_EE9E4FDB_x/Subsystem_around_RTP_EE9E4FDB_x"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
 "pha_0_9/Servovalve2/Main Valve/Subsystem_around_RTP_A2061EF3_v/Subsystem_around_RTP_A2061EF3_v"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . f2odyp2mvm , & rtB . jfr0g5u1sf ,
& rtB . ahlgnathrd , & rtB . brlvfuxaob , & rtB . onylfjlame , & rtB .
mdoqbnusrj , & rtB . gucu42oot3 , & rtB . d3a53bljql , & rtB . ktf3mjep1c , &
rtB . hmp5eu1gav , & rtB . jadzpkmuj2 , & rtB . g0rg3dpy55 , & rtB .
gyihakzqep , & rtB . m0za0b3lr2 , & rtB . gj5iwt5ooj , & rtB . fas1v2vrdk , &
rtB . br544y5c1w , & rtB . itggplgumn , & rtB . j5oevqcglj , & rtB .
dnz0rp2bup , & rtB . ivx3cjbvaj , & rtB . i31jk0iy2i , & rtB . c0jvzaivbg , &
rtB . ph3e1hmjdr , & rtB . hyn2mzczou , & rtB . mxk10ofmfg , & rtB .
i4lj5bxg51 , & rtB . hhcd4btgri , & rtB . po45oiucru [ 0 ] , & rtB .
prfmu3c01o [ 0 ] , & rtB . iedigs2ali [ 0 ] , & rtB . dm5mtjipdw [ 0 ] , &
rtB . g2lcupc0vo [ 0 ] , & rtB . esxew1bxhz [ 0 ] , & rtB . lhjaesm45e , &
rtB . ecmrbtctyr , & rtB . puaxuhcx5l , & rtB . pvrpxvch23 , & rtB .
l0wd0por5w , & rtB . jm5jkar05r , & rtB . duxqetgzhc , & rtB . kmhipurxo0 , &
rtB . b0euoqogax , & rtB . kdafbgl2kl , & rtB . nuwxay5kos , & rtB .
ox0ur4ecpg , & rtB . aay0cthl5b , & rtB . m502eztgoc , & rtB . p3mtxgf5r0 , &
rtB . nhkbsimdnx , & rtB . mkig3ty4kz , & rtP . PIDController_P , & rtP .
PIDController_I , & rtP . PIDController_D , & rtP . PIDController_N , & rtP .
PIDController_InitialConditionForIntegrator , & rtP .
PIDController_InitialConditionForFilter , & rtP . PIDController1_P , & rtP .
PIDController1_I , & rtP . PIDController1_D , & rtP . PIDController1_N , &
rtP . PIDController1_InitialConditionForIntegrator , & rtP .
PIDController1_InitialConditionForFilter , & rtP .
PIDController1_UpperSaturationLimit , & rtP .
PIDController1_LowerSaturationLimit , & rtP . RepeatingSequence_rep_seq_y [ 0
] , & rtP . Constant_Value , & rtP . Constant1_Value , & rtP .
Constant2_Value , & rtP . Constant5_Value , & rtP . Constant6_Value , & rtP .
Constant7_Value , & rtP . Gain1_Gain , & rtP . Gain3_Gain , & rtP .
Gain4_Gain , & rtP . Gain6_Gain , & rtP . Gain7_Gain , & rtP . Relay_OnVal ,
& rtP . Relay_OffVal , & rtP . Relay_YOn , & rtP . Relay_YOff , & rtP .
Relay1_OnVal , & rtP . Relay1_OffVal , & rtP . Relay1_YOn , & rtP .
Relay1_YOff , & rtP . TransportDelay1_Delay , & rtP .
TransportDelay1_InitOutput , & rtP . TransportDelay2_Delay , & rtP .
TransportDelay2_InitOutput , & rtP . TransportDelay4_Delay , & rtP .
TransportDelay4_InitOutput , & rtP . TransportDelay5_Delay , & rtP .
TransportDelay5_InitOutput , & rtP . Gain5_Gain_imrt3sps2q , & rtP .
Gain5_Gain_cns52zdlxh , & rtP . Constant_Value_idbpuu0wz0 , & rtP .
LookUpTable1_bp01Data [ 0 ] , & rtP . Gain5_Gain_h1rdjlyvou , & rtP .
Gain5_Gain_kplrypbnhr , & rtP . Gain5_Gain_cyso43qiuo , & rtP . Gain5_Gain ,
& rtP . Gain_Gain , & rtP . Gain_Gain_ld3kxi2ge1 , & rtP .
Gain_Gain_mlk0nba5an , & rtP . RTP_082CD161_liquid_volume_Value , & rtP .
RTP_7CAF3599_t_Value , & rtP . RTP_7CAF3599_w_Value , & rtP .
RTP_964844C2_liquid_volume_Value , & rtP . RTP_7BA69D45_v_Value , & rtP .
RTP_E5C208E6_x_Value , & rtP . RTP_EE9E4FDB_x_Value , & rtP .
RTP_A2061EF3_v_Value , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL )
} ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 4 , 1 , 10 , 1 , 198 , 1 , 1 , 5 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 51 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 61 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 1595963488U , 1334015471U , 3703238785U , 3790547554U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * pha_0_9_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void pha_0_9_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void pha_0_9_host_InitializeDataMapInfo ( pha_0_9_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
