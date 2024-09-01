#include "pha_0_9.h"
#include <stdlib.h>
#include "rtwtypes.h"
#include <stddef.h>
#include "mwmathutil.h"
#include <string.h>
#include "pha_0_9_private.h"
#include "rt_logging_mmi.h"
#include "pha_0_9_capi.h"
#include "multiword_types.h"
#include "pha_0_9_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "10.7 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; MassMatrix rtMassMatrix ; static SimStruct model_S
; SimStruct * const rtS = & model_S ;
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ;
#endif
void * rt_TDelayCreateBuf ( int_T numBuffer , int_T bufSz , int_T elemSz ) {
return ( ( void * ) utMalloc ( numBuffer * bufSz * elemSz ) ) ; }
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
boolean_T rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr , int_T * tailPtr ,
int_T * headPtr , int_T * lastPtr , real_T tMinusDelay , real_T * * uBufPtr ,
boolean_T isfixedbuf , boolean_T istransportdelay , int_T * maxNewBufSzPtr )
{ int_T testIdx ; int_T tail = * tailPtr ; int_T bufSz = * bufSzPtr ; real_T
* tBuf = * uBufPtr + bufSz ; real_T * xBuf = ( NULL ) ; int_T numBuffer = 2 ;
if ( istransportdelay ) { numBuffer = 3 ; xBuf = * uBufPtr + 2 * bufSz ; }
testIdx = ( tail < ( bufSz - 1 ) ) ? ( tail + 1 ) : 0 ; if ( ( tMinusDelay <=
tBuf [ testIdx ] ) && ! isfixedbuf ) { int_T j ; real_T * tempT ; real_T *
tempU ; real_T * tempX = ( NULL ) ; real_T * uBuf = * uBufPtr ; int_T
newBufSz = bufSz + 1024 ; if ( newBufSz > * maxNewBufSzPtr ) { *
maxNewBufSzPtr = newBufSz ; } tempU = ( real_T * ) utMalloc ( numBuffer *
newBufSz * sizeof ( real_T ) ) ; if ( tempU == ( NULL ) ) { return ( false )
; } tempT = tempU + newBufSz ; if ( istransportdelay ) tempX = tempT +
newBufSz ; for ( j = tail ; j < bufSz ; j ++ ) { tempT [ j - tail ] = tBuf [
j ] ; tempU [ j - tail ] = uBuf [ j ] ; if ( istransportdelay ) tempX [ j -
tail ] = xBuf [ j ] ; } for ( j = 0 ; j < tail ; j ++ ) { tempT [ j + bufSz -
tail ] = tBuf [ j ] ; tempU [ j + bufSz - tail ] = uBuf [ j ] ; if (
istransportdelay ) tempX [ j + bufSz - tail ] = xBuf [ j ] ; } if ( * lastPtr
> tail ) { * lastPtr -= tail ; } else { * lastPtr += ( bufSz - tail ) ; } *
tailPtr = 0 ; * headPtr = bufSz ; utFree ( uBuf ) ; * bufSzPtr = newBufSz ; *
uBufPtr = tempU ; } else { * tailPtr = testIdx ; } return ( true ) ; } real_T
rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart , real_T * uBuf ,
int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T newIdx , real_T
initOutput , boolean_T discrete , boolean_T minorStepAndTAtLastMajorOutput )
{ int_T i ; real_T yout , t1 , t2 , u1 , u2 ; real_T * tBuf = uBuf + bufSz ;
if ( ( newIdx == 0 ) && ( oldestIdx == 0 ) && ( tMinusDelay > tStart ) )
return initOutput ; if ( tMinusDelay <= tStart ) return initOutput ; if ( (
tMinusDelay <= tBuf [ oldestIdx ] ) ) { if ( discrete ) { return ( uBuf [
oldestIdx ] ) ; } else { int_T tempIdx = oldestIdx + 1 ; if ( oldestIdx ==
bufSz - 1 ) tempIdx = 0 ; t1 = tBuf [ oldestIdx ] ; t2 = tBuf [ tempIdx ] ;
u1 = uBuf [ oldestIdx ] ; u2 = uBuf [ tempIdx ] ; if ( t2 == t1 ) { if (
tMinusDelay >= t2 ) { yout = u2 ; } else { yout = u1 ; } } else { real_T f1 =
( t2 - tMinusDelay ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; yout = f1 * u1 +
f2 * u2 ; } return yout ; } } if ( minorStepAndTAtLastMajorOutput ) { if (
newIdx != 0 ) { if ( * lastIdx == newIdx ) { ( * lastIdx ) -- ; } newIdx -- ;
} else { if ( * lastIdx == newIdx ) { * lastIdx = bufSz - 1 ; } newIdx =
bufSz - 1 ; } } i = * lastIdx ; if ( tBuf [ i ] < tMinusDelay ) { while (
tBuf [ i ] < tMinusDelay ) { if ( i == newIdx ) break ; i = ( i < ( bufSz - 1
) ) ? ( i + 1 ) : 0 ; } } else { while ( tBuf [ i ] >= tMinusDelay ) { i = (
i > 0 ) ? i - 1 : ( bufSz - 1 ) ; } i = ( i < ( bufSz - 1 ) ) ? ( i + 1 ) : 0
; } * lastIdx = i ; if ( discrete ) { double tempEps = ( DBL_EPSILON ) *
128.0 ; double localEps = tempEps * muDoubleScalarAbs ( tBuf [ i ] ) ; if (
tempEps > localEps ) { localEps = tempEps ; } localEps = localEps / 2.0 ; if
( tMinusDelay >= ( tBuf [ i ] - localEps ) ) { yout = uBuf [ i ] ; } else {
if ( i == 0 ) { yout = uBuf [ bufSz - 1 ] ; } else { yout = uBuf [ i - 1 ] ;
} } } else { if ( i == 0 ) { t1 = tBuf [ bufSz - 1 ] ; u1 = uBuf [ bufSz - 1
] ; } else { t1 = tBuf [ i - 1 ] ; u1 = uBuf [ i - 1 ] ; } t2 = tBuf [ i ] ;
u2 = uBuf [ i ] ; if ( t2 == t1 ) { if ( tMinusDelay >= t2 ) { yout = u2 ; }
else { yout = u1 ; } } else { real_T f1 = ( t2 - tMinusDelay ) / ( t2 - t1 )
; real_T f2 = 1.0 - f1 ; yout = f1 * u1 + f2 * u2 ; } } return ( yout ) ; }
real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table
[ ] , uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ; uint32_T bpIdx ;
uint32_T iLeft ; uint32_T iRght ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac
= ( u0 - bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [
maxIndex ] ) { bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while
( iRght - iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else {
iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [
iLeft ] ) / ( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft =
maxIndex - 1U ; frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] -
bp0 [ maxIndex - 1U ] ) ; } yL_0d0 = table [ iLeft ] ; return ( table [ iLeft
+ 1U ] - yL_0d0 ) * frac + yL_0d0 ; }
#ifndef __RTW_UTFREE__  
extern void utFree ( void * ) ;
#endif
void rt_TDelayFreeBuf ( void * buf ) { utFree ( buf ) ; } void MdlInitialize
( void ) { int_T tmp_e ; int_T tmp_f ; int_T tmp_g ; int_T tmp_i ; int_T
tmp_j ; int_T tmp_m ; boolean_T tmp ; boolean_T tmp_p ; SimStruct * S ; void
* diag ; rtX . alcp5effvp = rtP . PIDController_InitialConditionForIntegrator
; rtX . fegoyxeour = rtP . PIDController_InitialConditionForFilter ; rtX .
gcrrfaz50v = rtP . PIDController1_InitialConditionForIntegrator ; rtX .
offxl3dkmo = rtP . PIDController1_InitialConditionForFilter ; tmp = false ;
tmp_p = false ; if ( tmp_p || tmp ) { tmp_e = strcmp ( ssGetSolverName ( rtS
) , "daessc" ) ; tmp_i = strcmp ( ssGetSolverName ( rtS ) , "ode14x" ) ;
tmp_m = strcmp ( ssGetSolverName ( rtS ) , "ode15s" ) ; tmp_g = strcmp (
ssGetSolverName ( rtS ) , "ode1be" ) ; tmp_j = strcmp ( ssGetSolverName ( rtS
) , "ode23t" ) ; tmp_f = strcmp ( ssGetSolverName ( rtS ) , "odeN" ) ; if ( (
boolean_T ) ( ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 ) & ( tmp_g != 0
) & ( tmp_j != 0 ) & ( tmp_f != 0 ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "daessc" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } { static int_T modelMassMatrixIr [ 45 ]
= { 0 , 1 , 2 , 3 , 4 , 6 , 7 , 41 , 60 , 6 , 7 , 59 , 5 , 9 , 10 , 41 , 9 ,
10 , 8 , 11 , 12 , 17 , 62 , 19 , 13 , 14 , 13 , 14 , 15 , 16 , 60 , 15 , 16
, 59 , 18 , 20 , 26 , 21 , 22 , 23 , 24 , 25 , 27 , 28 , 29 } ; static int_T
modelMassMatrixJc [ 132 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 9 , 12 , 13 , 16 , 18 ,
19 , 20 , 21 , 23 , 24 , 26 , 28 , 31 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41
, 42 , 43 , 44 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 ,
45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45
, 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 ,
45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45
, 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 ,
45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45
, 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 , 45 } ; static real_T
modelMassMatrixPr [ 45 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; ( void )
memcpy ( rtMassMatrix . ir , modelMassMatrixIr , 45 * sizeof ( int_T ) ) ; (
void ) memcpy ( rtMassMatrix . jc , modelMassMatrixJc , 132 * sizeof ( int_T
) ) ; ( void ) memcpy ( rtMassMatrix . pr , modelMassMatrixPr , 45 * sizeof (
real_T ) ) ; } } void MdlStart ( void ) { CXPtMax * _rtXPerturbMax ; CXPtMin
* _rtXPerturbMin ; NeModelParameters modelParameters ; NeModelParameters
modelParameters_p ; NeslRtpManager * manager ; NeslRtpManager * manager_p ;
NeslSimulationData * simulationData ; NeslSimulator * tmp_p ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p
; SscRTWLogFcnManager * rtwLogManager ; SscRTWLogFcnManager * rtwLogManager_p
; SscRTWLogging * tmp_j ; char * msg ; char * msg_e ; char * msg_p ; real_T
tmp_m [ 16 ] ; real_T time ; real_T tmp_e ; real_T * tmp_f ; int32_T tmp_i ;
int_T tmp_g [ 5 ] ; boolean_T directFeedThrough [ 5 ] ; boolean_T tmp ;
boolean_T val ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { char ptrKey [ 1024 ] ; {
real_T * pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 , 4096 , sizeof (
real_T ) ) ; if ( pBuffer == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } rtDW . ngat1pyozl . Tail = 0
; rtDW . ngat1pyozl . Head = 0 ; rtDW . ngat1pyozl . Last = 0 ; rtDW .
ngat1pyozl . CircularBufSize = 4096 ; pBuffer [ 0 ] = rtP .
TransportDelay2_InitOutput ; pBuffer [ 4096 ] = ssGetT ( rtS ) ; rtDW .
f3biyympth . TUbufferPtrs [ 0 ] = ( void * ) & pBuffer [ 0 ] ; sprintf (
ptrKey , "pha_0_9/Transport\nDelay2_TUbuffer%d" , 0 ) ;
slsaSaveRawMemoryForSimTargetOP ( rtS , ptrKey , ( void * * ) ( & rtDW .
f3biyympth . TUbufferPtrs [ 0 ] ) , 2 * 4096 * sizeof ( real_T ) , ( NULL ) ,
( NULL ) ) ; } } { char ptrKey [ 1024 ] ; { real_T * pBuffer = ( real_T * )
rt_TDelayCreateBuf ( 2 , 4096 , sizeof ( real_T ) ) ; if ( pBuffer == ( NULL
) ) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ;
} rtDW . ojok31w2uk . Tail = 0 ; rtDW . ojok31w2uk . Head = 0 ; rtDW .
ojok31w2uk . Last = 0 ; rtDW . ojok31w2uk . CircularBufSize = 4096 ; pBuffer
[ 0 ] = rtP . TransportDelay4_InitOutput ; pBuffer [ 4096 ] = ssGetT ( rtS )
; rtDW . jdknbk1age . TUbufferPtrs [ 0 ] = ( void * ) & pBuffer [ 0 ] ;
sprintf ( ptrKey , "pha_0_9/Transport\nDelay4_TUbuffer%d" , 0 ) ;
slsaSaveRawMemoryForSimTargetOP ( rtS , ptrKey , ( void * * ) ( & rtDW .
jdknbk1age . TUbufferPtrs [ 0 ] ) , 2 * 4096 * sizeof ( real_T ) , ( NULL ) ,
( NULL ) ) ; } } { char ptrKey [ 1024 ] ; { real_T * pBuffer = ( real_T * )
rt_TDelayCreateBuf ( 2 , 4096 , sizeof ( real_T ) ) ; if ( pBuffer == ( NULL
) ) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ;
} rtDW . hwohqmhrzq . Tail = 0 ; rtDW . hwohqmhrzq . Head = 0 ; rtDW .
hwohqmhrzq . Last = 0 ; rtDW . hwohqmhrzq . CircularBufSize = 4096 ; pBuffer
[ 0 ] = rtP . TransportDelay5_InitOutput ; pBuffer [ 4096 ] = ssGetT ( rtS )
; rtDW . p5saxr4o0f . TUbufferPtrs [ 0 ] = ( void * ) & pBuffer [ 0 ] ;
sprintf ( ptrKey , "pha_0_9/Transport\nDelay5_TUbuffer%d" , 0 ) ;
slsaSaveRawMemoryForSimTargetOP ( rtS , ptrKey , ( void * * ) ( & rtDW .
p5saxr4o0f . TUbufferPtrs [ 0 ] ) , 2 * 4096 * sizeof ( real_T ) , ( NULL ) ,
( NULL ) ) ; } } { char ptrKey [ 1024 ] ; { real_T * pBuffer = ( real_T * )
rt_TDelayCreateBuf ( 2 , 4096 , sizeof ( real_T ) ) ; if ( pBuffer == ( NULL
) ) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ;
} rtDW . df531s2hdp . Tail = 0 ; rtDW . df531s2hdp . Head = 0 ; rtDW .
df531s2hdp . Last = 0 ; rtDW . df531s2hdp . CircularBufSize = 4096 ; pBuffer
[ 0 ] = rtP . TransportDelay1_InitOutput ; pBuffer [ 4096 ] = ssGetT ( rtS )
; rtDW . bpuk1pdm3x . TUbufferPtrs [ 0 ] = ( void * ) & pBuffer [ 0 ] ;
sprintf ( ptrKey , "pha_0_9/Transport\nDelay1_TUbuffer%d" , 0 ) ;
slsaSaveRawMemoryForSimTargetOP ( rtS , ptrKey , ( void * * ) ( & rtDW .
bpuk1pdm3x . TUbufferPtrs [ 0 ] ) , 2 * 4096 * sizeof ( real_T ) , ( NULL ) ,
( NULL ) ) ; } } manager_p = nesl_lease_rtp_manager (
"pha_0_9/Solver Configuration1_1" , 0 ) ; manager = manager_p ; tmp =
pointer_is_null ( manager_p ) ; if ( tmp ) { pha_0_9_111da520_1_gateway ( ) ;
manager = nesl_lease_rtp_manager ( "pha_0_9/Solver Configuration1_1" , 0 ) ;
} rtDW . gw20xosyr1 = ( void * ) manager ; rtDW . euajuiqyjk = true ; tmp_p =
nesl_lease_simulator ( "pha_0_9/Solver Configuration1_1" , 0 , 0 ) ; rtDW .
hhsbxeii4m = ( void * ) tmp_p ; tmp = pointer_is_null ( rtDW . hhsbxeii4m ) ;
if ( tmp ) { pha_0_9_111da520_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
"pha_0_9/Solver Configuration1_1" , 0 , 0 ) ; rtDW . hhsbxeii4m = ( void * )
tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"pha_0_9/Solver Configuration1_100" , ( void * * ) ( & rtDW . hhsbxeii4m ) ,
0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . fj4aqip5oa = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
btrddqfwca = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters . mStartTime
= 0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_ON ; modelParameters .
mRTWModifiedTimeStamp = 6.47124289E+8 ; modelParameters . mZcDisabled = false
; modelParameters . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters . mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters .
mFixedStepSize = tmp_e ; tmp = true ; modelParameters . mVariableStepSolver =
tmp ; tmp = false ; modelParameters . mIsUsingODEN = tmp ; tmp =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . btrddqfwca ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . hhsbxeii4m
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . fj4aqip5oa ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 126 ;
simulationData -> mData -> mContStates . mX = & rtX . huwelhlato [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 5 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 67 ; simulationData -> mData -> mModeVector . mX = & rtDW
. dyxglur3eu [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_m [ 1 ] = rtB . dm5mtjipdw [ 1 ] ;
tmp_m [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_m [ 3 ] = rtB . dm5mtjipdw [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . po45oiucru [ 0 ] ; tmp_m [ 5 ] = rtB .
po45oiucru [ 1 ] ; tmp_m [ 6 ] = rtB . po45oiucru [ 2 ] ; tmp_m [ 7 ] = rtB .
po45oiucru [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . prfmu3c01o [ 0 ] ;
tmp_m [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_m [ 10 ] = rtB . prfmu3c01o [ 2 ]
; tmp_m [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . iedigs2ali [ 0 ] ; tmp_m [ 13 ] = rtB . iedigs2ali [ 1 ] ; tmp_m [ 14 ]
= rtB . iedigs2ali [ 2 ] ; tmp_m [ 15 ] = rtB . iedigs2ali [ 3 ] ; tmp_g [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 126 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> huwelhlato
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 126 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> huwelhlato [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . btrddqfwca ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. hhsbxeii4m , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager
) ; if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS
) ) ; if ( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } tmp_p = nesl_lease_simulator (
"pha_0_9/Solver Configuration1_1" , 1 , 0 ) ; rtDW . bd243nh5y3 = ( void * )
tmp_p ; tmp = pointer_is_null ( rtDW . bd243nh5y3 ) ; if ( tmp ) {
pha_0_9_111da520_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
"pha_0_9/Solver Configuration1_1" , 1 , 0 ) ; rtDW . bd243nh5y3 = ( void * )
tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"pha_0_9/Solver Configuration1_110" , ( void * * ) ( & rtDW . bd243nh5y3 ) ,
0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . acptrjzcqz = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
olw41uyegm = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_p .
mStartTime = 0.0 ; modelParameters_p . mLoadInitialState = false ;
modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_ON ;
modelParameters_p . mRTWModifiedTimeStamp = 6.47124289E+8 ; modelParameters_p
. mZcDisabled = false ; modelParameters_p . mUseModelRefSolver = false ;
tmp_e = 0.001 ; modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp = true ; modelParameters_p .
mVariableStepSolver = tmp ; tmp = false ; modelParameters_p . mIsUsingODEN =
tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . olw41uyegm ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . bd243nh5y3 , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } tmp_j = ssc_rtw_make_logging_struct ( "pha_0_9" ,
"Solver Configuration1/EVAL_KEY/SINK_1" , 726U ) ; rtDW . mrqszxjji2 = ( void
* ) tmp_j ; tmp_f = calloc ( 726U , 8U ) ; rtDW . fikcbckkyr = ( void * )
tmp_f ; directFeedThrough [ 0 ] = true ; directFeedThrough [ 1 ] = true ;
directFeedThrough [ 2 ] = true ; directFeedThrough [ 3 ] = true ;
directFeedThrough [ 4 ] = true ; rtwLogManager_p =
ssc_lease_rtw_log_fcn_manager ( "pha_0_9/Solver Configuration1_1" , 0 , 5U ,
directFeedThrough , 4U , 726U ) ; rtwLogManager = rtwLogManager_p ; tmp =
pointer_is_null ( rtwLogManager_p ) ; if ( tmp ) { pha_0_9_111da520_1_gateway
( ) ; rtwLogManager = ssc_lease_rtw_log_fcn_manager (
"pha_0_9/Solver Configuration1_1" , 0 , 5U , directFeedThrough , 4U , 726U )
; } rtDW . isk1cpyugg = ( void * ) rtwLogManager ; if ( rtDW . isk1cpyugg !=
NULL ) { ssc_rtw_setup_log_fcn ( rtDW . isk1cpyugg ) ; ssc_logger_start (
rtDW . mrqszxjji2 ) ; } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
NeParameterBundle expl_temp ; NeslSimulationData * simulationData ;
NeuDiagnosticManager * diag ; NeuDiagnosticTree * diagTree ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_p ; real_T tmp_g [ 214 ] ; real_T
tmp_i [ 214 ] ; real_T tmp_p [ 16 ] ; real_T tmp [ 8 ] ; real_T lonahskxif ;
real_T time ; real_T time_e ; real_T time_i ; real_T time_p ; real_T *
parameterBundle_mRealParameters_mX ; int_T tmp_m [ 6 ] ; int_T tmp_e [ 5 ] ;
int_T j ; boolean_T first_output ; { real_T * * uBuffer = ( real_T * * ) &
rtDW . f3biyympth . TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( rtS ) ;
real_T tMinusDelay = simTime - rtP . TransportDelay2_Delay ; rtB . m0za0b3lr2
= rt_TDelayInterpolate ( tMinusDelay , 0.0 , * uBuffer , rtDW . ngat1pyozl .
CircularBufSize , & rtDW . ngat1pyozl . Last , rtDW . ngat1pyozl . Tail ,
rtDW . ngat1pyozl . Head , rtP . TransportDelay2_InitOutput , 0 , ( boolean_T
) ( ssIsMinorTimeStep ( rtS ) && ( ( * uBuffer + rtDW . ngat1pyozl .
CircularBufSize ) [ rtDW . ngat1pyozl . Head ] == ssGetT ( rtS ) ) ) ) ; } if
( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . pka2kvd4xr = ( ( rtB . m0za0b3lr2
>= rtP . Relay_OnVal ) || ( ( ! ( rtB . m0za0b3lr2 <= rtP . Relay_OffVal ) )
&& rtDW . pka2kvd4xr ) ) ; } if ( rtDW . pka2kvd4xr ) { rtB . gucu42oot3 =
rtP . Relay_YOn ; } else { rtB . gucu42oot3 = rtP . Relay_YOff ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . ahlgnathrd = rtP . Gain1_Gain * rtB .
gucu42oot3 ; } rtB . dnz0rp2bup = ssGetT ( rtS ) ; rtB . j5oevqcglj =
look1_binlxpw ( muDoubleScalarRem ( rtB . dnz0rp2bup , rtP .
Constant_Value_idbpuu0wz0 ) , rtP . LookUpTable1_bp01Data , rtP .
RepeatingSequence_rep_seq_y , 4U ) ; { real_T * * uBuffer = ( real_T * * ) &
rtDW . jdknbk1age . TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( rtS ) ;
real_T tMinusDelay = simTime - rtP . TransportDelay4_Delay ; rtB . gj5iwt5ooj
= rt_TDelayInterpolate ( tMinusDelay , 0.0 , * uBuffer , rtDW . ojok31w2uk .
CircularBufSize , & rtDW . ojok31w2uk . Last , rtDW . ojok31w2uk . Tail ,
rtDW . ojok31w2uk . Head , rtP . TransportDelay4_InitOutput , 0 , ( boolean_T
) ( ssIsMinorTimeStep ( rtS ) && ( ( * uBuffer + rtDW . ojok31w2uk .
CircularBufSize ) [ rtDW . ojok31w2uk . Head ] == ssGetT ( rtS ) ) ) ) ; }
rtB . mdoqbnusrj = rtP . Gain7_Gain * rtB . gj5iwt5ooj ; rtB . ktf3mjep1c =
rtP . Constant2_Value + rtB . mdoqbnusrj ; rtB . hmp5eu1gav = rtB .
j5oevqcglj - rtB . ktf3mjep1c ; rtB . duxqetgzhc = rtP . PIDController_P *
rtB . hmp5eu1gav ; rtB . l0wd0por5w = rtX . alcp5effvp ; rtB . lhjaesm45e =
rtP . PIDController_D * rtB . hmp5eu1gav ; rtB . ecmrbtctyr = rtX .
fegoyxeour ; rtB . puaxuhcx5l = rtB . lhjaesm45e - rtB . ecmrbtctyr ; rtB .
jm5jkar05r = rtP . PIDController_N * rtB . puaxuhcx5l ; rtB . kmhipurxo0 = (
rtB . duxqetgzhc + rtB . l0wd0por5w ) + rtB . jm5jkar05r ; rtB . dm5mtjipdw [
0 ] = rtB . kmhipurxo0 ; rtB . dm5mtjipdw [ 1 ] = 0.0 ; rtB . dm5mtjipdw [ 2
] = 0.0 ; rtB . dm5mtjipdw [ 3 ] = 0.0 ; { real_T * * uBuffer = ( real_T * *
) & rtDW . p5saxr4o0f . TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( rtS )
; real_T tMinusDelay = simTime - rtP . TransportDelay5_Delay ; rtB .
fas1v2vrdk = rt_TDelayInterpolate ( tMinusDelay , 0.0 , * uBuffer , rtDW .
hwohqmhrzq . CircularBufSize , & rtDW . hwohqmhrzq . Last , rtDW . hwohqmhrzq
. Tail , rtDW . hwohqmhrzq . Head , rtP . TransportDelay5_InitOutput , 0 , (
boolean_T ) ( ssIsMinorTimeStep ( rtS ) && ( ( * uBuffer + rtDW . hwohqmhrzq
. CircularBufSize ) [ rtDW . hwohqmhrzq . Head ] == ssGetT ( rtS ) ) ) ) ; }
rtB . jadzpkmuj2 = rtP . Constant5_Value - rtB . fas1v2vrdk ; rtB .
p3mtxgf5r0 = rtP . PIDController1_P * rtB . jadzpkmuj2 ; rtB . aay0cthl5b =
rtX . gcrrfaz50v ; rtB . b0euoqogax = rtP . PIDController1_D * rtB .
jadzpkmuj2 ; rtB . kdafbgl2kl = rtX . offxl3dkmo ; rtB . nuwxay5kos = rtB .
b0euoqogax - rtB . kdafbgl2kl ; rtB . m502eztgoc = rtP . PIDController1_N *
rtB . nuwxay5kos ; rtB . mkig3ty4kz = ( rtB . p3mtxgf5r0 + rtB . aay0cthl5b )
+ rtB . m502eztgoc ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW .
eqah3tvqef = rtB . mkig3ty4kz >= rtP . PIDController1_UpperSaturationLimit ?
1 : rtB . mkig3ty4kz > rtP . PIDController1_LowerSaturationLimit ? 0 : - 1 ;
} rtB . nhkbsimdnx = rtDW . eqah3tvqef == 1 ? rtP .
PIDController1_UpperSaturationLimit : rtDW . eqah3tvqef == - 1 ? rtP .
PIDController1_LowerSaturationLimit : rtB . mkig3ty4kz ; if ( rtDW .
asvtvarmbc == 0.0 ) { rtDW . asvtvarmbc = 1.0 ; rtX . pjkpdgwqyh = rtB .
nhkbsimdnx ; } rtB . po45oiucru [ 0 ] = rtX . pjkpdgwqyh ; rtB . po45oiucru [
1 ] = ( rtB . nhkbsimdnx - rtX . pjkpdgwqyh ) * 1000.0 ; rtB . po45oiucru [ 2
] = 0.0 ; rtB . po45oiucru [ 3 ] = 0.0 ; rtB . prfmu3c01o [ 0 ] = rtB .
gucu42oot3 ; rtB . prfmu3c01o [ 1 ] = 0.0 ; rtB . prfmu3c01o [ 2 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . k0bdrlkwiq [ 0 ] = ! ( rtB .
prfmu3c01o [ 0 ] == rtDW . k0bdrlkwiq [ 1 ] ) ; rtDW . k0bdrlkwiq [ 1 ] = rtB
. prfmu3c01o [ 0 ] ; } rtB . prfmu3c01o [ 0 ] = rtDW . k0bdrlkwiq [ 1 ] ; rtB
. prfmu3c01o [ 3 ] = rtDW . k0bdrlkwiq [ 0 ] ; { real_T * * uBuffer = (
real_T * * ) & rtDW . bpuk1pdm3x . TUbufferPtrs [ 0 ] ; real_T simTime =
ssGetT ( rtS ) ; real_T tMinusDelay = simTime - rtP . TransportDelay1_Delay ;
rtB . gyihakzqep = rt_TDelayInterpolate ( tMinusDelay , 0.0 , * uBuffer ,
rtDW . df531s2hdp . CircularBufSize , & rtDW . df531s2hdp . Last , rtDW .
df531s2hdp . Tail , rtDW . df531s2hdp . Head , rtP .
TransportDelay1_InitOutput , 0 , ( boolean_T ) ( ssIsMinorTimeStep ( rtS ) &&
( ( * uBuffer + rtDW . df531s2hdp . CircularBufSize ) [ rtDW . df531s2hdp .
Head ] == ssGetT ( rtS ) ) ) ) ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtDW . lrjwmtodrz = ( ( rtB . gyihakzqep >= rtP . Relay1_OnVal ) || ( ( ! (
rtB . gyihakzqep <= rtP . Relay1_OffVal ) ) && rtDW . lrjwmtodrz ) ) ; } rtB
. f2odyp2mvm = ssGetT ( rtS ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . l1sgtau4de = ( rtB . f2odyp2mvm <=
rtP . Constant_Value ) ; } if ( rtDW . l1sgtau4de ) { if ( rtDW . lrjwmtodrz
) { rtB . g0rg3dpy55 = rtP . Relay1_YOn ; } else { rtB . g0rg3dpy55 = rtP .
Relay1_YOff ; } } else { rtB . g0rg3dpy55 = rtP . Constant7_Value ; } } rtB .
iedigs2ali [ 0 ] = rtB . g0rg3dpy55 ; rtB . iedigs2ali [ 1 ] = 0.0 ; rtB .
iedigs2ali [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . azokvtooxw
[ 0 ] = ! ( rtB . iedigs2ali [ 0 ] == rtDW . azokvtooxw [ 1 ] ) ; rtDW .
azokvtooxw [ 1 ] = rtB . iedigs2ali [ 0 ] ; } rtB . iedigs2ali [ 0 ] = rtDW .
azokvtooxw [ 1 ] ; rtB . iedigs2ali [ 3 ] = rtDW . azokvtooxw [ 0 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW . euajuiqyjk ) { tmp [ 0 ] = rtP
. RTP_7CAF3599_w_Value ; tmp [ 1 ] = rtP . RTP_7BA69D45_v_Value ; tmp [ 2 ] =
rtP . RTP_082CD161_liquid_volume_Value ; tmp [ 3 ] = rtP .
RTP_964844C2_liquid_volume_Value ; tmp [ 4 ] = rtP . RTP_7CAF3599_t_Value ;
tmp [ 5 ] = rtP . RTP_A2061EF3_v_Value ; tmp [ 6 ] = rtP .
RTP_E5C208E6_x_Value ; tmp [ 7 ] = rtP . RTP_EE9E4FDB_x_Value ;
parameterBundle_mRealParameters_mX = & tmp [ 0 ] ; diag =
rtw_create_diagnostics ( ) ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 8 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
first_output = nesl_rtp_manager_set_rtps ( ( NeslRtpManager * ) rtDW .
gw20xosyr1 , ssGetT ( rtS ) , expl_temp , diag ) ; if ( ! first_output ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } } rtDW . euajuiqyjk = false ; } simulationData = (
NeslSimulationData * ) rtDW . fj4aqip5oa ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 126 ;
simulationData -> mData -> mContStates . mX = & rtX . huwelhlato [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 5 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 67 ; simulationData -> mData -> mModeVector . mX = & rtDW
. dyxglur3eu [ 0 ] ; first_output = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_p [ 1 ] = rtB . dm5mtjipdw [ 1 ] ;
tmp_p [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_p [ 3 ] = rtB . dm5mtjipdw [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . po45oiucru [ 0 ] ; tmp_p [ 5 ] = rtB .
po45oiucru [ 1 ] ; tmp_p [ 6 ] = rtB . po45oiucru [ 2 ] ; tmp_p [ 7 ] = rtB .
po45oiucru [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . prfmu3c01o [ 0 ] ;
tmp_p [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_p [ 10 ] = rtB . prfmu3c01o [ 2 ]
; tmp_p [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . iedigs2ali [ 0 ] ; tmp_p [ 13 ] = rtB . iedigs2ali [ 1 ] ; tmp_p [ 14 ]
= rtB . iedigs2ali [ 2 ] ; tmp_p [ 15 ] = rtB . iedigs2ali [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mOutputs . mN = 198 ; simulationData
-> mData -> mOutputs . mX = & rtB . esxew1bxhz [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; time_p =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) rtDW . btrddqfwca ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; j = ne_simulator_method (
( NeslSimulator * ) rtDW . hhsbxeii4m , NESL_SIM_OUTPUTS , simulationData ,
diag ) ; if ( j != 0 ) { first_output = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( first_output ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg_p ) ; }
} if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . acptrjzcqz ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . o0rehg2mop ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . pondv4ezn4 ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_m [ 0 ] = 0 ; tmp_i [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_i [ 1 ]
= rtB . dm5mtjipdw [ 1 ] ; tmp_i [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_i [ 3 ]
= rtB . dm5mtjipdw [ 3 ] ; tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . po45oiucru [
0 ] ; tmp_i [ 5 ] = rtB . po45oiucru [ 1 ] ; tmp_i [ 6 ] = rtB . po45oiucru [
2 ] ; tmp_i [ 7 ] = rtB . po45oiucru [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] =
rtB . prfmu3c01o [ 0 ] ; tmp_i [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_i [ 10 ]
= rtB . prfmu3c01o [ 2 ] ; tmp_i [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_m [ 3
] = 12 ; tmp_i [ 12 ] = rtB . iedigs2ali [ 0 ] ; tmp_i [ 13 ] = rtB .
iedigs2ali [ 1 ] ; tmp_i [ 14 ] = rtB . iedigs2ali [ 2 ] ; tmp_i [ 15 ] = rtB
. iedigs2ali [ 3 ] ; tmp_m [ 4 ] = 16 ; memcpy ( & tmp_i [ 16 ] , & rtB .
esxew1bxhz [ 0 ] , 198U * sizeof ( real_T ) ) ; tmp_m [ 5 ] = 214 ;
simulationData -> mData -> mInputValues . mN = 214 ; simulationData -> mData
-> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 10 ; simulationData
-> mData -> mOutputs . mX = & rtB . g2lcupc0vo [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; time_i =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) rtDW . olw41uyegm ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diag ) ; j = ne_simulator_method (
( NeslSimulator * ) rtDW . bd243nh5y3 , NESL_SIM_OUTPUTS , simulationData ,
diag ) ; if ( j != 0 ) { first_output = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( first_output ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . hyn2mzczou = rtP . Gain5_Gain * rtB . g2lcupc0vo [ 6 ] ; rtB .
mxk10ofmfg = rtP . Gain_Gain * rtB . g2lcupc0vo [ 7 ] ; rtB . i4lj5bxg51 =
rtP . Gain_Gain_ld3kxi2ge1 * rtB . g2lcupc0vo [ 8 ] ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtB . brlvfuxaob = rtP . Gain3_Gain * rtB . gucu42oot3 ; }
rtB . c0jvzaivbg = rtP . Gain5_Gain_kplrypbnhr * rtB . g2lcupc0vo [ 4 ] ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . onylfjlame = rtP . Gain4_Gain * rtB
. g0rg3dpy55 ; } rtB . ph3e1hmjdr = rtP . Gain5_Gain_cyso43qiuo * rtB .
g2lcupc0vo [ 5 ] ; rtB . i31jk0iy2i = rtP . Gain5_Gain_h1rdjlyvou * rtB .
g2lcupc0vo [ 3 ] ; rtB . br544y5c1w = rtP . Gain5_Gain_imrt3sps2q * rtB .
g2lcupc0vo [ 1 ] ; rtB . itggplgumn = rtP . Gain5_Gain_cns52zdlxh * rtB .
g2lcupc0vo [ 2 ] ; rtB . hhcd4btgri = rtP . Gain_Gain_mlk0nba5an * rtB .
g2lcupc0vo [ 9 ] ; lonahskxif = rtP . Gain6_Gain * rtB . g2lcupc0vo [ 0 ] ;
rtB . d3a53bljql = rtP . Constant1_Value + lonahskxif ; rtB . pvrpxvch23 =
rtP . PIDController_I * rtB . hmp5eu1gav ; rtB . ox0ur4ecpg = rtP .
PIDController1_I * rtB . jadzpkmuj2 ; if ( ( rtDW . isk1cpyugg != NULL ) &&
ssGetLogOutput ( rtS ) ) { tmp_g [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_g [ 1 ]
= rtB . dm5mtjipdw [ 1 ] ; tmp_g [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_g [ 3 ]
= rtB . dm5mtjipdw [ 3 ] ; tmp_g [ 4 ] = rtB . po45oiucru [ 0 ] ; tmp_g [ 5 ]
= rtB . po45oiucru [ 1 ] ; tmp_g [ 6 ] = rtB . po45oiucru [ 2 ] ; tmp_g [ 7 ]
= rtB . po45oiucru [ 3 ] ; tmp_g [ 8 ] = rtB . prfmu3c01o [ 0 ] ; tmp_g [ 9 ]
= rtB . prfmu3c01o [ 1 ] ; tmp_g [ 10 ] = rtB . prfmu3c01o [ 2 ] ; tmp_g [ 11
] = rtB . prfmu3c01o [ 3 ] ; tmp_g [ 12 ] = rtB . iedigs2ali [ 0 ] ; tmp_g [
13 ] = rtB . iedigs2ali [ 1 ] ; tmp_g [ 14 ] = rtB . iedigs2ali [ 2 ] ; tmp_g
[ 15 ] = rtB . iedigs2ali [ 3 ] ; memcpy ( & tmp_g [ 16 ] , & rtB .
esxew1bxhz [ 0 ] , 198U * sizeof ( real_T ) ) ; ssc_rtw_log_fcn ( rtDW .
isk1cpyugg , ssGetT ( rtS ) , & tmp_g [ 0 ] , rtDW . fikcbckkyr ) ; } if ( (
rtDW . isk1cpyugg != NULL ) && ssGetLogOutput ( rtS ) ) { ssc_logger_log (
rtDW . mrqszxjji2 , ssGetT ( rtS ) , rtDW . fikcbckkyr ) ; } UNUSED_PARAMETER
( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { rtB . jfr0g5u1sf = rtP .
Constant6_Value ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T
tmp ; { real_T * * uBuffer = ( real_T * * ) & rtDW . f3biyympth .
TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( rtS ) ; rtDW . ngat1pyozl .
Head = ( ( rtDW . ngat1pyozl . Head < ( rtDW . ngat1pyozl . CircularBufSize -
1 ) ) ? ( rtDW . ngat1pyozl . Head + 1 ) : 0 ) ; if ( rtDW . ngat1pyozl .
Head == rtDW . ngat1pyozl . Tail ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( &
rtDW . ngat1pyozl . CircularBufSize , & rtDW . ngat1pyozl . Tail , & rtDW .
ngat1pyozl . Head , & rtDW . ngat1pyozl . Last , simTime - rtP .
TransportDelay2_Delay , uBuffer , ( boolean_T ) 0 , false , & rtDW .
ngat1pyozl . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; }
slsaSaveRawMemoryForSimTargetOP ( rtS , "pha_0_9/Transport\nDelay2_TUbuffer0"
, ( void * * ) ( & uBuffer [ 0 ] ) , 2 * rtDW . ngat1pyozl . CircularBufSize
* sizeof ( real_T ) , ( NULL ) , ( NULL ) ) ; } ( * uBuffer + rtDW .
ngat1pyozl . CircularBufSize ) [ rtDW . ngat1pyozl . Head ] = simTime ; ( *
uBuffer ) [ rtDW . ngat1pyozl . Head ] = rtB . i4lj5bxg51 ; } { real_T * *
uBuffer = ( real_T * * ) & rtDW . jdknbk1age . TUbufferPtrs [ 0 ] ; real_T
simTime = ssGetT ( rtS ) ; rtDW . ojok31w2uk . Head = ( ( rtDW . ojok31w2uk .
Head < ( rtDW . ojok31w2uk . CircularBufSize - 1 ) ) ? ( rtDW . ojok31w2uk .
Head + 1 ) : 0 ) ; if ( rtDW . ojok31w2uk . Head == rtDW . ojok31w2uk . Tail
) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ojok31w2uk .
CircularBufSize , & rtDW . ojok31w2uk . Tail , & rtDW . ojok31w2uk . Head , &
rtDW . ojok31w2uk . Last , simTime - rtP . TransportDelay4_Delay , uBuffer ,
( boolean_T ) 0 , false , & rtDW . ojok31w2uk . MaxNewBufSize ) ) {
ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
slsaSaveRawMemoryForSimTargetOP ( rtS , "pha_0_9/Transport\nDelay4_TUbuffer0"
, ( void * * ) ( & uBuffer [ 0 ] ) , 2 * rtDW . ojok31w2uk . CircularBufSize
* sizeof ( real_T ) , ( NULL ) , ( NULL ) ) ; } ( * uBuffer + rtDW .
ojok31w2uk . CircularBufSize ) [ rtDW . ojok31w2uk . Head ] = simTime ; ( *
uBuffer ) [ rtDW . ojok31w2uk . Head ] = rtB . g2lcupc0vo [ 0 ] ; } { real_T
* * uBuffer = ( real_T * * ) & rtDW . p5saxr4o0f . TUbufferPtrs [ 0 ] ;
real_T simTime = ssGetT ( rtS ) ; rtDW . hwohqmhrzq . Head = ( ( rtDW .
hwohqmhrzq . Head < ( rtDW . hwohqmhrzq . CircularBufSize - 1 ) ) ? ( rtDW .
hwohqmhrzq . Head + 1 ) : 0 ) ; if ( rtDW . hwohqmhrzq . Head == rtDW .
hwohqmhrzq . Tail ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW .
hwohqmhrzq . CircularBufSize , & rtDW . hwohqmhrzq . Tail , & rtDW .
hwohqmhrzq . Head , & rtDW . hwohqmhrzq . Last , simTime - rtP .
TransportDelay5_Delay , uBuffer , ( boolean_T ) 0 , false , & rtDW .
hwohqmhrzq . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; }
slsaSaveRawMemoryForSimTargetOP ( rtS , "pha_0_9/Transport\nDelay5_TUbuffer0"
, ( void * * ) ( & uBuffer [ 0 ] ) , 2 * rtDW . hwohqmhrzq . CircularBufSize
* sizeof ( real_T ) , ( NULL ) , ( NULL ) ) ; } ( * uBuffer + rtDW .
hwohqmhrzq . CircularBufSize ) [ rtDW . hwohqmhrzq . Head ] = simTime ; ( *
uBuffer ) [ rtDW . hwohqmhrzq . Head ] = rtB . i4lj5bxg51 ; } { real_T * *
uBuffer = ( real_T * * ) & rtDW . bpuk1pdm3x . TUbufferPtrs [ 0 ] ; real_T
simTime = ssGetT ( rtS ) ; rtDW . df531s2hdp . Head = ( ( rtDW . df531s2hdp .
Head < ( rtDW . df531s2hdp . CircularBufSize - 1 ) ) ? ( rtDW . df531s2hdp .
Head + 1 ) : 0 ) ; if ( rtDW . df531s2hdp . Head == rtDW . df531s2hdp . Tail
) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . df531s2hdp .
CircularBufSize , & rtDW . df531s2hdp . Tail , & rtDW . df531s2hdp . Head , &
rtDW . df531s2hdp . Last , simTime - rtP . TransportDelay1_Delay , uBuffer ,
( boolean_T ) 0 , false , & rtDW . df531s2hdp . MaxNewBufSize ) ) {
ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
slsaSaveRawMemoryForSimTargetOP ( rtS , "pha_0_9/Transport\nDelay1_TUbuffer0"
, ( void * * ) ( & uBuffer [ 0 ] ) , 2 * rtDW . df531s2hdp . CircularBufSize
* sizeof ( real_T ) , ( NULL ) , ( NULL ) ) ; } ( * uBuffer + rtDW .
df531s2hdp . CircularBufSize ) [ rtDW . df531s2hdp . Head ] = simTime ; ( *
uBuffer ) [ rtDW . df531s2hdp . Head ] = rtB . mxk10ofmfg ; } simulationData
= ( NeslSimulationData * ) rtDW . fj4aqip5oa ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 126 ;
simulationData -> mData -> mContStates . mX = & rtX . huwelhlato [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 5 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 67 ; simulationData -> mData -> mModeVector . mX = & rtDW
. dyxglur3eu [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_p [ 1 ] = rtB . dm5mtjipdw [ 1 ] ;
tmp_p [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_p [ 3 ] = rtB . dm5mtjipdw [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . po45oiucru [ 0 ] ; tmp_p [ 5 ] = rtB .
po45oiucru [ 1 ] ; tmp_p [ 6 ] = rtB . po45oiucru [ 2 ] ; tmp_p [ 7 ] = rtB .
po45oiucru [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . prfmu3c01o [ 0 ] ;
tmp_p [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_p [ 10 ] = rtB . prfmu3c01o [ 2 ]
; tmp_p [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . iedigs2ali [ 0 ] ; tmp_p [ 13 ] = rtB . iedigs2ali [ 1 ] ; tmp_p [ 14 ]
= rtB . iedigs2ali [ 2 ] ; tmp_p [ 15 ] = rtB . iedigs2ali [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
btrddqfwca ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. hhsbxeii4m , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 5 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot ->
alcp5effvp = rtB . pvrpxvch23 ; _rtXdot -> fegoyxeour = rtB . jm5jkar05r ;
_rtXdot -> gcrrfaz50v = rtB . ox0ur4ecpg ; _rtXdot -> offxl3dkmo = rtB .
m502eztgoc ; _rtXdot -> pjkpdgwqyh = ( rtB . nhkbsimdnx - rtX . pjkpdgwqyh )
* 1000.0 ; simulationData = ( NeslSimulationData * ) rtDW . fj4aqip5oa ; time
= ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 126 ; simulationData -> mData -> mContStates . mX = & rtX . huwelhlato [ 0
] ; simulationData -> mData -> mDiscStates . mN = 5 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 67 ; simulationData -> mData -> mModeVector . mX = & rtDW
. dyxglur3eu [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_p [ 1 ] = rtB . dm5mtjipdw [ 1 ] ;
tmp_p [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_p [ 3 ] = rtB . dm5mtjipdw [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . po45oiucru [ 0 ] ; tmp_p [ 5 ] = rtB .
po45oiucru [ 1 ] ; tmp_p [ 6 ] = rtB . po45oiucru [ 2 ] ; tmp_p [ 7 ] = rtB .
po45oiucru [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . prfmu3c01o [ 0 ] ;
tmp_p [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_p [ 10 ] = rtB . prfmu3c01o [ 2 ]
; tmp_p [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . iedigs2ali [ 0 ] ; tmp_p [ 13 ] = rtB . iedigs2ali [ 1 ] ; tmp_p [ 14 ]
= rtB . iedigs2ali [ 2 ] ; tmp_p [ 15 ] = rtB . iedigs2ali [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 126 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> huwelhlato [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . btrddqfwca ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hhsbxeii4m ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 5 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. fj4aqip5oa ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 126 ; simulationData -> mData -> mContStates . mX
= & rtX . huwelhlato [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 5
; simulationData -> mData -> mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 67 ; simulationData -> mData ->
mModeVector . mX = & rtDW . dyxglur3eu [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_p [ 1 ]
= rtB . dm5mtjipdw [ 1 ] ; tmp_p [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_p [ 3 ]
= rtB . dm5mtjipdw [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . po45oiucru [
0 ] ; tmp_p [ 5 ] = rtB . po45oiucru [ 1 ] ; tmp_p [ 6 ] = rtB . po45oiucru [
2 ] ; tmp_p [ 7 ] = rtB . po45oiucru [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . prfmu3c01o [ 0 ] ; tmp_p [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_p [ 10 ]
= rtB . prfmu3c01o [ 2 ] ; tmp_p [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . iedigs2ali [ 0 ] ; tmp_p [ 13 ] = rtB .
iedigs2ali [ 1 ] ; tmp_p [ 14 ] = rtB . iedigs2ali [ 2 ] ; tmp_p [ 15 ] = rtB
. iedigs2ali [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . btrddqfwca ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . hhsbxeii4m ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlForcingFunction ( void ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; XDot * _rtXdot ; char * msg ; real_T tmp_p [ 16 ] ; real_T
time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T tmp ; _rtXdot = ( ( XDot
* ) ssGetdX ( rtS ) ) ; _rtXdot -> alcp5effvp = rtB . pvrpxvch23 ; _rtXdot ->
fegoyxeour = rtB . jm5jkar05r ; _rtXdot -> gcrrfaz50v = rtB . ox0ur4ecpg ;
_rtXdot -> offxl3dkmo = rtB . m502eztgoc ; _rtXdot -> pjkpdgwqyh = ( rtB .
nhkbsimdnx - rtX . pjkpdgwqyh ) * 1000.0 ; simulationData = (
NeslSimulationData * ) rtDW . fj4aqip5oa ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 126 ;
simulationData -> mData -> mContStates . mX = & rtX . huwelhlato [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 5 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 67 ; simulationData -> mData -> mModeVector . mX = & rtDW
. dyxglur3eu [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_p [ 1 ] = rtB . dm5mtjipdw [ 1 ] ;
tmp_p [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_p [ 3 ] = rtB . dm5mtjipdw [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . po45oiucru [ 0 ] ; tmp_p [ 5 ] = rtB .
po45oiucru [ 1 ] ; tmp_p [ 6 ] = rtB . po45oiucru [ 2 ] ; tmp_p [ 7 ] = rtB .
po45oiucru [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . prfmu3c01o [ 0 ] ;
tmp_p [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_p [ 10 ] = rtB . prfmu3c01o [ 2 ]
; tmp_p [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . iedigs2ali [ 0 ] ; tmp_p [ 13 ] = rtB . iedigs2ali [ 1 ] ; tmp_p [ 14 ]
= rtB . iedigs2ali [ 2 ] ; tmp_p [ 15 ] = rtB . iedigs2ali [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 126 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> huwelhlato [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . btrddqfwca ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hhsbxeii4m ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; real_T *
tmp_i ; real_T * tmp_m ; int32_T tmp_g ; int_T tmp_e [ 5 ] ; boolean_T tmp ;
simulationData = ( NeslSimulationData * ) rtDW . fj4aqip5oa ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 126 ;
simulationData -> mData -> mContStates . mX = & rtX . huwelhlato [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 5 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 67 ; simulationData -> mData -> mModeVector . mX = & rtDW
. dyxglur3eu [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_p [ 1 ] = rtB . dm5mtjipdw [ 1 ] ;
tmp_p [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_p [ 3 ] = rtB . dm5mtjipdw [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . po45oiucru [ 0 ] ; tmp_p [ 5 ] = rtB .
po45oiucru [ 1 ] ; tmp_p [ 6 ] = rtB . po45oiucru [ 2 ] ; tmp_p [ 7 ] = rtB .
po45oiucru [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . prfmu3c01o [ 0 ] ;
tmp_p [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_p [ 10 ] = rtB . prfmu3c01o [ 2 ]
; tmp_p [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . iedigs2ali [ 0 ] ; tmp_p [ 13 ] = rtB . iedigs2ali [ 1 ] ; tmp_p [ 14 ]
= rtB . iedigs2ali [ 2 ] ; tmp_p [ 15 ] = rtB . iedigs2ali [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; tmp_i = ssGetMassMatrixPr ( rtS ) ; tmp_m =
double_pointer_shift ( tmp_i , rtDW . omis1sz1c1 ) ; simulationData -> mData
-> mMassMatrixPr . mN = 40 ; simulationData -> mData -> mMassMatrixPr . mX =
tmp_m ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . btrddqfwca ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_g = ne_simulator_method ( ( NeslSimulator * ) rtDW . hhsbxeii4m ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_g != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; ZCV * _rtZCSV ; char * msg ; real_T tmp_p [ 16 ] ; real_T
time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T tmp ; _rtZCSV = ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) ; if ( rtDW . pka2kvd4xr ) { _rtZCSV
-> ic25ygsem0 = rtB . m0za0b3lr2 - rtP . Relay_OffVal ; } else { _rtZCSV ->
ic25ygsem0 = rtB . m0za0b3lr2 - rtP . Relay_OnVal ; } _rtZCSV -> ko5chhblpu =
rtB . mkig3ty4kz - rtP . PIDController1_UpperSaturationLimit ; _rtZCSV ->
lwqcq24kt3 = rtB . mkig3ty4kz - rtP . PIDController1_LowerSaturationLimit ;
if ( rtDW . lrjwmtodrz ) { _rtZCSV -> icaqxvyvdw = rtB . gyihakzqep - rtP .
Relay1_OffVal ; } else { _rtZCSV -> icaqxvyvdw = rtB . gyihakzqep - rtP .
Relay1_OnVal ; } _rtZCSV -> bjfy0vyba2 = rtB . f2odyp2mvm - rtP .
Constant_Value ; simulationData = ( NeslSimulationData * ) rtDW . fj4aqip5oa
; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 126 ; simulationData -> mData -> mContStates . mX = & rtX
. huwelhlato [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 5 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . m03o3nukj2 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 67 ; simulationData -> mData ->
mModeVector . mX = & rtDW . dyxglur3eu [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . dm5mtjipdw [ 0 ] ; tmp_p [ 1 ]
= rtB . dm5mtjipdw [ 1 ] ; tmp_p [ 2 ] = rtB . dm5mtjipdw [ 2 ] ; tmp_p [ 3 ]
= rtB . dm5mtjipdw [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . po45oiucru [
0 ] ; tmp_p [ 5 ] = rtB . po45oiucru [ 1 ] ; tmp_p [ 6 ] = rtB . po45oiucru [
2 ] ; tmp_p [ 7 ] = rtB . po45oiucru [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . prfmu3c01o [ 0 ] ; tmp_p [ 9 ] = rtB . prfmu3c01o [ 1 ] ; tmp_p [ 10 ]
= rtB . prfmu3c01o [ 2 ] ; tmp_p [ 11 ] = rtB . prfmu3c01o [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . iedigs2ali [ 0 ] ; tmp_p [ 13 ] = rtB .
iedigs2ali [ 1 ] ; tmp_p [ 14 ] = rtB . iedigs2ali [ 2 ] ; tmp_p [ 15 ] = rtB
. iedigs2ali [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 75 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> hepy0enbpk ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . btrddqfwca ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . hhsbxeii4m ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { rt_TDelayFreeBuf ( rtDW . f3biyympth .
TUbufferPtrs [ 0 ] ) ; rt_TDelayFreeBuf ( rtDW . jdknbk1age . TUbufferPtrs [
0 ] ) ; rt_TDelayFreeBuf ( rtDW . p5saxr4o0f . TUbufferPtrs [ 0 ] ) ;
rt_TDelayFreeBuf ( rtDW . bpuk1pdm3x . TUbufferPtrs [ 0 ] ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . btrddqfwca
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . fj4aqip5oa
) ; nesl_erase_simulator ( "pha_0_9/Solver Configuration1_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . olw41uyegm ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . acptrjzcqz ) ; nesl_erase_simulator (
"pha_0_9/Solver Configuration1_1" ) ; nesl_destroy_registry ( ) ;
ssc_logger_terminate ( rtDW . mrqszxjji2 ) ; free ( rtDW . fikcbckkyr ) ;
ssc_logger_destroy ( rtDW . mrqszxjji2 ) ; } static void
mr_pha_0_9_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_pha_0_9_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_pha_0_9_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_pha_0_9_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_pha_0_9_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_pha_0_9_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_pha_0_9_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_pha_0_9_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_pha_0_9_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_pha_0_9_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_pha_0_9_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_pha_0_9_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_pha_0_9_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_pha_0_9_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_pha_0_9_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_pha_0_9_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_pha_0_9_GetDWork ( ) { static const char_T * ssDWFieldNames [ 3
] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_pha_0_9_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 24 ] = {
"rtDW.jyvbb3c21t" , "rtDW.ii2uylflih" , "rtDW.asvtvarmbc" , "rtDW.k0bdrlkwiq"
, "rtDW.azokvtooxw" , "rtDW.m03o3nukj2" , "rtDW.o0rehg2mop" ,
"rtDW.ezt044acxv" , "rtDW.idwjt1x2cd" , "rtDW.kesbszygtf" , "rtDW.j3ufwsqibm"
, "rtDW.ngat1pyozl" , "rtDW.ojok31w2uk" , "rtDW.hwohqmhrzq" ,
"rtDW.df531s2hdp" , "rtDW.dyxglur3eu" , "rtDW.pondv4ezn4" , "rtDW.eqah3tvqef"
, "rtDW.omis1sz1c1" , "rtDW.pka2kvd4xr" , "rtDW.lrjwmtodrz" ,
"rtDW.l1sgtau4de" , "rtDW.bgrjrvlkdf" , "rtDW.elk1ic4slt" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 24 , rtdwDataFieldNames ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW
. jyvbb3c21t ) , sizeof ( rtDW . jyvbb3c21t ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( rtDW
. ii2uylflih ) , sizeof ( rtDW . ii2uylflih ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( rtDW
. asvtvarmbc ) , sizeof ( rtDW . asvtvarmbc ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW
. k0bdrlkwiq ) , sizeof ( rtDW . k0bdrlkwiq ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( rtDW
. azokvtooxw ) , sizeof ( rtDW . azokvtooxw ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( rtDW
. m03o3nukj2 ) , sizeof ( rtDW . m03o3nukj2 ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW
. o0rehg2mop ) , sizeof ( rtDW . o0rehg2mop ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( rtDW
. ezt044acxv ) , sizeof ( rtDW . ezt044acxv ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & ( rtDW
. idwjt1x2cd ) , sizeof ( rtDW . idwjt1x2cd ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW
. kesbszygtf ) , sizeof ( rtDW . kesbszygtf ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & ( rtDW
. j3ufwsqibm ) , sizeof ( rtDW . j3ufwsqibm ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & ( rtDW
. ngat1pyozl ) , sizeof ( rtDW . ngat1pyozl ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( rtDW
. ojok31w2uk ) , sizeof ( rtDW . ojok31w2uk ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & ( rtDW
. hwohqmhrzq ) , sizeof ( rtDW . hwohqmhrzq ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & ( rtDW
. df531s2hdp ) , sizeof ( rtDW . df531s2hdp ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & ( rtDW
. dyxglur3eu ) , sizeof ( rtDW . dyxglur3eu ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & ( rtDW
. pondv4ezn4 ) , sizeof ( rtDW . pondv4ezn4 ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & ( rtDW
. eqah3tvqef ) , sizeof ( rtDW . eqah3tvqef ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & ( rtDW
. omis1sz1c1 ) , sizeof ( rtDW . omis1sz1c1 ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & ( rtDW
. pka2kvd4xr ) , sizeof ( rtDW . pka2kvd4xr ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & ( rtDW
. lrjwmtodrz ) , sizeof ( rtDW . lrjwmtodrz ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & ( rtDW
. l1sgtau4de ) , sizeof ( rtDW . l1sgtau4de ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & ( rtDW
. bgrjrvlkdf ) , sizeof ( rtDW . bgrjrvlkdf ) ) ;
mr_pha_0_9_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & ( rtDW
. elk1ic4slt ) , sizeof ( rtDW . elk1ic4slt ) ) ; mxSetFieldByNumber ( ssDW ,
0 , 1 , rtdwData ) ; } return ssDW ; } void mr_pha_0_9_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ; mr_pha_0_9_restoreDataFromMxArray ( ( void
* ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData
= mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_pha_0_9_restoreDataFromMxArray ( (
void * ) & ( rtDW . jyvbb3c21t ) , rtdwData , 0 , 0 , sizeof ( rtDW .
jyvbb3c21t ) ) ; mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ii2uylflih ) , rtdwData , 0 , 1 , sizeof ( rtDW . ii2uylflih ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . asvtvarmbc ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . asvtvarmbc ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . k0bdrlkwiq ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . k0bdrlkwiq ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . azokvtooxw ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . azokvtooxw ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . m03o3nukj2 ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . m03o3nukj2 ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . o0rehg2mop ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . o0rehg2mop ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . ezt044acxv ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . ezt044acxv ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . idwjt1x2cd ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . idwjt1x2cd ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . kesbszygtf ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . kesbszygtf ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . j3ufwsqibm ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . j3ufwsqibm ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . ngat1pyozl ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . ngat1pyozl ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . ojok31w2uk ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . ojok31w2uk ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . hwohqmhrzq ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . hwohqmhrzq ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . df531s2hdp ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . df531s2hdp ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . dyxglur3eu ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . dyxglur3eu ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . pondv4ezn4 ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . pondv4ezn4 ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . eqah3tvqef ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . eqah3tvqef ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . omis1sz1c1 ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . omis1sz1c1 ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . pka2kvd4xr ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . pka2kvd4xr ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . lrjwmtodrz ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . lrjwmtodrz ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . l1sgtau4de ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . l1sgtau4de ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . bgrjrvlkdf ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . bgrjrvlkdf ) ) ;
mr_pha_0_9_restoreDataFromMxArray ( ( void * ) & ( rtDW . elk1ic4slt ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . elk1ic4slt ) ) ; } } mxArray *
mr_pha_0_9_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 10 ] = { "SimscapeRtp" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "SimscapeSinkBlock" , } ; static const char_T * blockPath [ 10 ] =
{ "pha_0_9/Solver Configuration1/RTP_1" ,
"pha_0_9/Solver Configuration1/EVAL_KEY/STATE_1" ,
"pha_0_9/Solver Configuration1/EVAL_KEY/OUTPUT_1_0" , "pha_0_9/Scope" ,
"pha_0_9/Scope1" , "pha_0_9/Scope2" , "pha_0_9/Scope3" , "pha_0_9/Scope4" ,
"pha_0_9/Scope5" , "pha_0_9/Solver Configuration1/EVAL_KEY/SINK_1" , } ;
static const int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , }
; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] =
0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
131 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 229 ) ;
ssSetNumBlockIO ( rtS , 51 ) ; ssSetNumBlockParams ( rtS , 69 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1595963488U ) ; ssSetChecksumVal ( rtS , 1 ,
1334015471U ) ; ssSetChecksumVal ( rtS , 2 , 3703238785U ) ; ssSetChecksumVal
( rtS , 3 , 3790547554U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { real_T * x
= ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void
* ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { rtDW . omis1sz1c1 = 5 ; } { static DataTypeTransInfo dtInfo ; ( void
) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 23 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } pha_0_9_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"pha_0_9" ) ; ssSetPath ( rtS , "pha_0_9" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 100.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 2 , 2 , 5 } ;
static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 2 , 1 , 1 , 2 , 2 , 5 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "Discrete" , "Discrete" , "FirstOutput" , "Discrete" , "Discrete"
, "Discrete" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"pha_0_9/PID Controller/Integrator/Continuous/Integrator" ,
"pha_0_9/PID Controller/Filter/Cont. Filter/Filter" ,
"pha_0_9/PID Controller1/Integrator/Continuous/Integrator" ,
"pha_0_9/PID Controller1/Filter/Cont. Filter/Filter" ,
"pha_0_9/Simulink-PS\nConverter1" , "pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Double-Acting Actuator (TL)"
, "pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Double-Acting Actuator (TL)"
, "pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Inertia" ,
"pha_0_9/Servovalve2/Armature Mass" , "pha_0_9/Gas-Charged Accumulator (TL)"
, "pha_0_9/Gas-Charged Accumulator (TL)" ,
"pha_0_9/Gas-Charged Accumulator (TL)1" ,
"pha_0_9/Gas-Charged Accumulator (TL)1" ,
"pha_0_9/Servovalve2/Armature Hard Stop" ,
"pha_0_9/Servovalve2/Armature Position" ,
"pha_0_9/Servovalve2/Main Valve/Spool Mass" ,
"pha_0_9/Servovalve2/Flapper Spring" ,
"pha_0_9/Servovalve2/Main Valve/Orifice AT/Motion Sensor" ,
"pha_0_9/Servovalve2/Main Valve/Orifice BT/Motion Sensor" ,
"pha_0_9/Servovalve2/Main Valve/Orifice PA/Motion Sensor" ,
"pha_0_9/Servovalve2/Main Valve/Orifice PB/Motion Sensor" ,
"pha_0_9/Servovalve2/Main Valve/Spool Side A/Spool Side A" ,
"pha_0_9/Servovalve2/Main Valve/Spool Side B/Spool Side B" ,
"pha_0_9/Translational Spring" , "pha_0_9/Cap (TL)" , "pha_0_9/Cap (TL)" ,
"pha_0_9/Check Valve (TL)" , "pha_0_9/Check Valve (TL)" ,
"pha_0_9/Check Valve (TL)" , "pha_0_9/Check Valve (TL)" ,
"pha_0_9/Check Valve (TL)" , "pha_0_9/Check Valve (TL)" ,
"pha_0_9/Check Valve (TL)" , "pha_0_9/Check Valve (TL)" ,
"pha_0_9/Check Valve (TL)" , "pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Translational Damper" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Double-Acting Actuator (TL)"
, "pha_0_9/Gas-Charged Accumulator (TL)1" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Double-Acting Actuator (TL)"
, "pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Double-Acting Actuator (TL)"
, "pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Double-Acting Actuator (TL)" , "pha_0_9/Double-Acting Actuator (TL)"
, "pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Double-Acting Actuator (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Pressure Relief Valve (TL)" , "pha_0_9/Reservoir (TL)1" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Fixed-Displacement Motor (TL)" ,
"pha_0_9/Gas-Charged Accumulator (TL)" ,
"pha_0_9/Pressure Relief Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/Gas-Charged Accumulator (TL)" ,
"pha_0_9/Pressure Relief Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/Gas-Charged Accumulator (TL)" ,
"pha_0_9/Gas-Charged Accumulator (TL)" ,
"pha_0_9/Gas-Charged Accumulator (TL)1" ,
"pha_0_9/Gas-Charged Accumulator (TL)1" ,
"pha_0_9/Gas-Charged Accumulator (TL)1" , "pha_0_9/Inertia" ,
"pha_0_9/Reservoir (TL)" , "pha_0_9/Interface (TL-IL)1" ,
"pha_0_9/Interface (TL-IL)1" , "pha_0_9/Interface (TL-IL)2" ,
"pha_0_9/Interface (TL-IL)2" , "pha_0_9/Interface (TL-IL)3" ,
"pha_0_9/Interface (TL-IL)3" , "pha_0_9/Interface (TL-IL)4" ,
"pha_0_9/Interface (TL-IL)4" , "pha_0_9/Pressure Relief Valve (TL)" ,
"pha_0_9/Reservoir (TL)1" , "pha_0_9/Pressure Relief Valve (TL)" ,
"pha_0_9/Pressure Relief Valve (TL)" , "pha_0_9/Pressure Relief Valve (TL)1"
, "pha_0_9/Pressure Relief Valve (TL)1" ,
"pha_0_9/Pressure Relief Valve (TL)1" , "pha_0_9/Pressure Relief Valve (TL)1"
, "pha_0_9/Reservoir (TL)" , "pha_0_9/Reservoir (TL)1" ,
"pha_0_9/Reservoir (TL)1" , "pha_0_9/Reservoir (TL)2" ,
"pha_0_9/Servovalve2/Armature Damper" ,
"pha_0_9/Servovalve2/Armature Hard Stop" ,
"pha_0_9/Servovalve2/Armature Mass" ,
"pha_0_9/Servovalve2/Main Valve/Spool Side A/Spool Side A" ,
"pha_0_9/Servovalve2/Fixed Orifice B/Fixed Orifice B" ,
"pha_0_9/Servovalve2/Main Valve/Orifice PA/Orifice" ,
"pha_0_9/Servovalve2/Main Valve/Orifice PB/Orifice" ,
"pha_0_9/Servovalve2/Main Valve/Spool Side B/Spool Side B" ,
"pha_0_9/Servovalve2/Flapper Damper" ,
"pha_0_9/Servovalve2/Main Valve/Orifice AT/Hydraulic Force" ,
"pha_0_9/Servovalve2/Main Valve/Orifice BT/Hydraulic Force" ,
"pha_0_9/Servovalve2/Main Valve/Orifice PA/Hydraulic Force" ,
"pha_0_9/Servovalve2/Main Valve/Orifice PB/Hydraulic Force" ,
"pha_0_9/Servovalve2/Main Valve/Spool Damper" ,
"pha_0_9/Servovalve2/Main Valve/Spool Mass" ,
"pha_0_9/Servovalve2/Nozzle B/Nozzle B" ,
"pha_0_9/3-Way Directional Valve (TL)" ,
"pha_0_9/3-Way Directional Valve (TL)" ,
"pha_0_9/3-Way Directional Valve (TL)" ,
"pha_0_9/3-Way Directional Valve (TL)" ,
"pha_0_9/3-Way Directional Valve (TL)" ,
"pha_0_9/3-Way Directional Valve (TL)" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/3-Way Directional Valve (TL)1" ,
"pha_0_9/Solver\nConfiguration1/EVAL_KEY/INPUT_4_1_1" ,
"pha_0_9/Solver\nConfiguration1/EVAL_KEY/INPUT_1_1_1" ,
"pha_0_9/Solver\nConfiguration1/EVAL_KEY/INPUT_1_1_1" ,
"pha_0_9/Solver\nConfiguration1/EVAL_KEY/INPUT_2_1_1" ,
"pha_0_9/Solver\nConfiguration1/EVAL_KEY/INPUT_3_1_1" ,
"pha_0_9/Solver\nConfiguration1/EVAL_KEY/STATE_1" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" , "" ,
"pha_0_9.Simulink_PS_Converter1.outputFiltered_4175404342_0" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.T_I" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.p_I" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.interface_displacement" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.T_I" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.p_I" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.interface_displacement" ,
"pha_0_9.Double_Acting_Actuator_TL.hard_stop.x" ,
"pha_0_9.Double_Acting_Actuator_TL.sensor.x" , "pha_0_9.Inertia.w" ,
"pha_0_9.Servovalve2.Armature_Mass.v" ,
"pha_0_9.Gas_Charged_Accumulator_TL.T_I" ,
"pha_0_9.Gas_Charged_Accumulator_TL.p_I" ,
"pha_0_9.Gas_Charged_Accumulator_TL1.T_I" ,
"pha_0_9.Gas_Charged_Accumulator_TL1.p_I" ,
"pha_0_9.Servovalve2.Armature_Hard_Stop.x" ,
"pha_0_9.Servovalve2.Armature_Position.x" ,
"pha_0_9.Servovalve2.Main_Valve.Spool_Mass.v" ,
"pha_0_9.Servovalve2.Flapper_Spring.x" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_AT.Motion_Sensor.x" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_BT.Motion_Sensor.x" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_PA.Motion_Sensor.x" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_PB.Motion_Sensor.x" ,
 "pha_0_9.Servovalve2.Main_Valve.Spool_Side_A.Spool_Side_A.interface_displacement"
,
 "pha_0_9.Servovalve2.Main_Valve.Spool_Side_B.Spool_Side_B.interface_displacement"
, "pha_0_9.Translational_Spring.x" , "pha_0_9.Cap_TL.A.T" ,
"pha_0_9.Cap_TL.A.p" , "pha_0_9.Check_Valve_TL.A.T" ,
"pha_0_9.Check_Valve_TL.A.p" , "pha_0_9.Check_Valve_TL.B.T" ,
"pha_0_9.Check_Valve_TL.B.p" , "pha_0_9.Check_Valve_TL.Phi_A" ,
"pha_0_9.Check_Valve_TL.convection_A.T" ,
"pha_0_9.Check_Valve_TL.convection_A.mdot" ,
"pha_0_9.Check_Valve_TL.convection_A.u_I" ,
"pha_0_9.Check_Valve_TL.convection_B.T" ,
"pha_0_9.Double_Acting_Actuator_TL.A.T" ,
"pha_0_9.Double_Acting_Actuator_TL.B.T" , "pha_0_9.Translational_Damper.f" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.Phi_A" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.Q_H" ,
"pha_0_9.Gas_Charged_Accumulator_TL1.Q_H" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.convection_A.T" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.convection_A.mdot" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.convection_A.u_I" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_A.interface_force" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.Phi_A" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.convection_A.T" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.convection_A.mdot" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.convection_A.u_I" ,
"pha_0_9.Double_Acting_Actuator_TL.chamber_B.interface_force" ,
"pha_0_9.Double_Acting_Actuator_TL.hard_stop.f" ,
"pha_0_9.Fixed_Displacement_Motor_TL.A.T" ,
"pha_0_9.Fixed_Displacement_Motor_TL.B.T" ,
"pha_0_9.Fixed_Displacement_Motor_TL.B.p" ,
"pha_0_9.Fixed_Displacement_Motor_TL.Phi_A" ,
"pha_0_9.Pressure_Relief_Valve_TL.relief_valve.Phi_A" ,
"pha_0_9.Reservoir_TL1.Phi_A" ,
"pha_0_9.Fixed_Displacement_Motor_TL.convection_A.T" ,
"pha_0_9.Fixed_Displacement_Motor_TL.convection_A.mdot" ,
"pha_0_9.Fixed_Displacement_Motor_TL.convection_A.u_I" ,
"pha_0_9.Fixed_Displacement_Motor_TL.convection_B.T" ,
"pha_0_9.Fixed_Displacement_Motor_TL.torque" ,
"pha_0_9.Gas_Charged_Accumulator_TL.A.T" ,
"pha_0_9.Pressure_Relief_Valve_TL1.relief_valve.Phi_A" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_AT.Phi_A" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_PA.Phi_A" ,
"pha_0_9.Gas_Charged_Accumulator_TL.convection_A.T" ,
"pha_0_9.Pressure_Relief_Valve_TL1.relief_valve.convection_A.mdot" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_AT.convection_A.mdot" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_PA.convection_A.mdot" ,
"pha_0_9.Gas_Charged_Accumulator_TL.convection_A.u_I" ,
"pha_0_9.Gas_Charged_Accumulator_TL.liquid_volume" ,
"pha_0_9.Gas_Charged_Accumulator_TL1.convection_A.T" ,
"pha_0_9.Gas_Charged_Accumulator_TL1.convection_A.u_I" ,
"pha_0_9.Gas_Charged_Accumulator_TL1.liquid_volume" , "pha_0_9.Inertia.t" ,
"pha_0_9.Reservoir_TL.Phi_A" , "pha_0_9.Interface_TL_IL1.convection_TL.T" ,
"pha_0_9.Interface_TL_IL1.convection_TL.mdot" ,
"pha_0_9.Interface_TL_IL2.convection_TL.T" ,
"pha_0_9.Interface_TL_IL2.convection_TL.u_I" ,
"pha_0_9.Interface_TL_IL3.convection_TL.T" ,
"pha_0_9.Interface_TL_IL3.convection_TL.u_I" ,
"pha_0_9.Interface_TL_IL4.convection_TL.T" ,
"pha_0_9.Interface_TL_IL4.convection_TL.u_I" ,
"pha_0_9.Pressure_Relief_Valve_TL.relief_valve.convection_A.T" ,
"pha_0_9.Reservoir_TL1.convection_A.mdot" ,
"pha_0_9.Pressure_Relief_Valve_TL.relief_valve.convection_A.u_I" ,
"pha_0_9.Pressure_Relief_Valve_TL.relief_valve.convection_B.T" ,
"pha_0_9.Pressure_Relief_Valve_TL1.B.T" ,
"pha_0_9.Pressure_Relief_Valve_TL1.relief_valve.convection_A.T" ,
"pha_0_9.Pressure_Relief_Valve_TL1.relief_valve.convection_A.u_I" ,
"pha_0_9.Pressure_Relief_Valve_TL1.relief_valve.convection_B.T" ,
"pha_0_9.Reservoir_TL.convection_A.T" , "pha_0_9.Reservoir_TL1.A.T" ,
"pha_0_9.Reservoir_TL1.convection_A.T" ,
"pha_0_9.Reservoir_TL2.convection_A.T" ,
"pha_0_9.Servovalve2.Armature_Damper.f" ,
"pha_0_9.Servovalve2.Armature_Hard_Stop.f" ,
"pha_0_9.Servovalve2.Armature_Mass.f" ,
"pha_0_9.Servovalve2.Main_Valve.Spool_Side_A.Spool_Side_A.interface_force" ,
"pha_0_9.Servovalve2.Fixed_Orifice_B.Fixed_Orifice_B.mdot_A" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_PA.Orifice.mdot_A" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_PB.Orifice.mdot_A" ,
"pha_0_9.Servovalve2.Main_Valve.Spool_Side_B.Spool_Side_B.interface_force" ,
"pha_0_9.Servovalve2.Flapper_Damper.f" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_AT.Hydraulic_Force.S" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_BT.Hydraulic_Force.S" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_PA.Hydraulic_Force.S" ,
"pha_0_9.Servovalve2.Main_Valve.Orifice_PB.Hydraulic_Force.S" ,
"pha_0_9.Servovalve2.Main_Valve.Spool_Damper.f" ,
"pha_0_9.Servovalve2.Main_Valve.Spool_Mass.f" ,
"pha_0_9.Servovalve2.Nozzle_B.Nozzle_B.mdot_A" ,
"pha_0_9.x3_Way_Directional_Valve_TL.orifice_AT.convection_A.T" ,
"pha_0_9.x3_Way_Directional_Valve_TL.orifice_AT.convection_A.u_I" ,
"pha_0_9.x3_Way_Directional_Valve_TL.orifice_AT.convection_B.T" ,
"pha_0_9.x3_Way_Directional_Valve_TL.orifice_PA.convection_A.T" ,
"pha_0_9.x3_Way_Directional_Valve_TL.orifice_PA.convection_A.u_I" ,
"pha_0_9.x3_Way_Directional_Valve_TL.orifice_PA.convection_B.T" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_AT.convection_A.T" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_AT.convection_A.u_I" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_AT.convection_B.T" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_PA.convection_A.T" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_PA.convection_A.u_I" ,
"pha_0_9.x3_Way_Directional_Valve_TL1.orifice_PA.convection_B.T" , "Discrete"
, "Discrete" , "FirstOutput" , "Discrete" , "Discrete" , "Discrete" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 ,
2 , 3 , 4 , 5 , 0 , 1 , 2 , 3 , 4 , 5 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 137 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 137 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . alcp5effvp ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . fegoyxeour ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . gcrrfaz50v ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . offxl3dkmo ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . pjkpdgwqyh ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . huwelhlato [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . huwelhlato [ 1 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . huwelhlato [ 2 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . huwelhlato [ 3 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . huwelhlato [ 4 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . huwelhlato [ 5 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . huwelhlato [ 6 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . huwelhlato [ 7 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . huwelhlato [ 8 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . huwelhlato [ 9 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . huwelhlato [ 10 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . huwelhlato [ 11 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . huwelhlato [ 12 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . huwelhlato [ 13 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . huwelhlato [ 14 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . huwelhlato [ 15 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . huwelhlato [ 16 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . huwelhlato [ 17 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . huwelhlato [ 18 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . huwelhlato [ 19 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . huwelhlato [ 20 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . huwelhlato [ 21 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . huwelhlato [ 22 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . huwelhlato [ 23 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . huwelhlato [ 24 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . huwelhlato [ 25 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . huwelhlato [ 26 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . huwelhlato [ 27 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . huwelhlato [ 28 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . huwelhlato [ 29 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . huwelhlato [ 30 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . huwelhlato [ 31 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . huwelhlato [ 32 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . huwelhlato [ 33 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . huwelhlato [ 34 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . huwelhlato [ 35 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . huwelhlato [ 36 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . huwelhlato [ 37 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . huwelhlato [ 38 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . huwelhlato [ 39 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . huwelhlato [ 40 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . huwelhlato [ 41 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . huwelhlato [ 42 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . huwelhlato [ 43 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . huwelhlato [ 44 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . huwelhlato [ 45 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . huwelhlato [ 46 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . huwelhlato [ 47 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . huwelhlato [ 48 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . huwelhlato [ 49 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . huwelhlato [ 50 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . huwelhlato [ 51 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . huwelhlato [ 52 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . huwelhlato [ 53 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . huwelhlato [ 54 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . huwelhlato [ 55 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . huwelhlato [ 56 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . huwelhlato [ 57 ] ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . huwelhlato [ 58 ] ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . huwelhlato [ 59 ] ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . huwelhlato [ 60 ] ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . huwelhlato [ 61 ] ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . huwelhlato [ 62 ] ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . huwelhlato [ 63 ] ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . huwelhlato [ 64 ] ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . huwelhlato [ 65 ] ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . huwelhlato [ 66 ] ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtX . huwelhlato [ 67 ] ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtX . huwelhlato [ 68 ] ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtX . huwelhlato [ 69 ] ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtX . huwelhlato [ 70 ] ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtX . huwelhlato [ 71 ] ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtX . huwelhlato [ 72 ] ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtX . huwelhlato [ 73 ] ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtX . huwelhlato [ 74 ] ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtX . huwelhlato [ 75 ] ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtX . huwelhlato [ 76 ] ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtX . huwelhlato [ 77 ] ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtX . huwelhlato [ 78 ] ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtX . huwelhlato [ 79 ] ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtX . huwelhlato [ 80 ] ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtX . huwelhlato [ 81 ] ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtX . huwelhlato [ 82 ] ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtX . huwelhlato [ 83 ] ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtX . huwelhlato [ 84 ] ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtX . huwelhlato [ 85 ] ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtX . huwelhlato [ 86 ] ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtX . huwelhlato [ 87 ] ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) & rtX . huwelhlato [ 88 ] ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) & rtX . huwelhlato [ 89 ] ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtX . huwelhlato [ 90 ] ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtX . huwelhlato [ 91 ] ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtX . huwelhlato [ 92 ] ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtX . huwelhlato [ 93 ] ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtX . huwelhlato [ 94 ] ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtX . huwelhlato [ 95 ] ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtX . huwelhlato [ 96 ] ;
rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) & rtX . huwelhlato [ 97 ] ;
rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) & rtX . huwelhlato [ 98 ] ;
rt_LoggedStateSignalPtrs [ 104 ] = ( void * ) & rtX . huwelhlato [ 99 ] ;
rt_LoggedStateSignalPtrs [ 105 ] = ( void * ) & rtX . huwelhlato [ 100 ] ;
rt_LoggedStateSignalPtrs [ 106 ] = ( void * ) & rtX . huwelhlato [ 101 ] ;
rt_LoggedStateSignalPtrs [ 107 ] = ( void * ) & rtX . huwelhlato [ 102 ] ;
rt_LoggedStateSignalPtrs [ 108 ] = ( void * ) & rtX . huwelhlato [ 103 ] ;
rt_LoggedStateSignalPtrs [ 109 ] = ( void * ) & rtX . huwelhlato [ 104 ] ;
rt_LoggedStateSignalPtrs [ 110 ] = ( void * ) & rtX . huwelhlato [ 105 ] ;
rt_LoggedStateSignalPtrs [ 111 ] = ( void * ) & rtX . huwelhlato [ 106 ] ;
rt_LoggedStateSignalPtrs [ 112 ] = ( void * ) & rtX . huwelhlato [ 107 ] ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtX . huwelhlato [ 108 ] ;
rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) & rtX . huwelhlato [ 109 ] ;
rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtX . huwelhlato [ 110 ] ;
rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtX . huwelhlato [ 111 ] ;
rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) & rtX . huwelhlato [ 112 ] ;
rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) & rtX . huwelhlato [ 113 ] ;
rt_LoggedStateSignalPtrs [ 119 ] = ( void * ) & rtX . huwelhlato [ 114 ] ;
rt_LoggedStateSignalPtrs [ 120 ] = ( void * ) & rtX . huwelhlato [ 115 ] ;
rt_LoggedStateSignalPtrs [ 121 ] = ( void * ) & rtX . huwelhlato [ 116 ] ;
rt_LoggedStateSignalPtrs [ 122 ] = ( void * ) & rtX . huwelhlato [ 117 ] ;
rt_LoggedStateSignalPtrs [ 123 ] = ( void * ) & rtX . huwelhlato [ 118 ] ;
rt_LoggedStateSignalPtrs [ 124 ] = ( void * ) & rtX . huwelhlato [ 119 ] ;
rt_LoggedStateSignalPtrs [ 125 ] = ( void * ) & rtX . huwelhlato [ 120 ] ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) & rtX . huwelhlato [ 121 ] ;
rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) & rtX . huwelhlato [ 122 ] ;
rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) & rtX . huwelhlato [ 123 ] ;
rt_LoggedStateSignalPtrs [ 129 ] = ( void * ) & rtX . huwelhlato [ 124 ] ;
rt_LoggedStateSignalPtrs [ 130 ] = ( void * ) & rtX . huwelhlato [ 125 ] ;
rt_LoggedStateSignalPtrs [ 131 ] = ( void * ) rtDW . jyvbb3c21t ;
rt_LoggedStateSignalPtrs [ 132 ] = ( void * ) & rtDW . ii2uylflih ;
rt_LoggedStateSignalPtrs [ 133 ] = ( void * ) & rtDW . asvtvarmbc ;
rt_LoggedStateSignalPtrs [ 134 ] = ( void * ) rtDW . k0bdrlkwiq ;
rt_LoggedStateSignalPtrs [ 135 ] = ( void * ) rtDW . azokvtooxw ;
rt_LoggedStateSignalPtrs [ 136 ] = ( void * ) rtDW . m03o3nukj2 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 131 ] ; static real_T absTol [ 131 ] = { 1.0E-6 , 1.0E-6
, 1.0E-6 , 1.0E-6 , 1.0E-6 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static uint8_T
absTolControl [ 131 ] = { 0U , 0U , 0U , 0U , 0U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U } ; static real_T
contStateJacPerturbBoundMinVec [ 131 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 131 ] ; static uint8_T zcAttributes [ 80 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 3 ] = { { 1 * sizeof ( real_T ) ,
( char * ) ( & rtB . ivx3cjbvaj ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . g0rg3dpy55 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . gucu42oot3 ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i <
131 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 2.0 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
3 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "daessc" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetJacobianPerturbationBoundsMinVec ( rtS ,
contStateJacPerturbBoundMinVec ) ; ssSetJacobianPerturbationBoundsMaxVec (
rtS , contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1
) ; ( void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) )
; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ; ssSetMassMatrixNzMax ( rtS
, 45 ) ; ssSetModelMassMatrix ( rtS , MdlMassMatrix ) ;
ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 45 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 80 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 5 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 80 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 5 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 45 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 131 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 45 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 1595963488U ) ;
ssSetChecksumVal ( rtS , 1 , 1334015471U ) ; ssSetChecksumVal ( rtS , 2 ,
3703238785U ) ; ssSetChecksumVal ( rtS , 3 , 3790547554U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_pha_0_9_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_pha_0_9_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_pha_0_9_SetDWork ) ; rtP . PIDController1_UpperSaturationLimit = rtInf ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
