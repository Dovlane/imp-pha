#include "pha_0_9_acc.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "pha_0_9_acc_private.h"
#include "multiword_types.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simtarget/slSimTgtMdlrefSfcnBridge.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
boolean_T pha_0_9_acc_rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr , int_T
* tailPtr , int_T * headPtr , int_T * lastPtr , real_T tMinusDelay , real_T *
* uBufPtr , boolean_T isfixedbuf , boolean_T istransportdelay , int_T *
maxNewBufSzPtr ) { int_T testIdx ; int_T tail = * tailPtr ; int_T bufSz = *
bufSzPtr ; real_T * tBuf = * uBufPtr + bufSz ; real_T * xBuf = ( NULL ) ;
int_T numBuffer = 2 ; if ( istransportdelay ) { numBuffer = 3 ; xBuf = *
uBufPtr + 2 * bufSz ; } testIdx = ( tail < ( bufSz - 1 ) ) ? ( tail + 1 ) : 0
; if ( ( tMinusDelay <= tBuf [ testIdx ] ) && ! isfixedbuf ) { int_T j ;
real_T * tempT ; real_T * tempU ; real_T * tempX = ( NULL ) ; real_T * uBuf =
* uBufPtr ; int_T newBufSz = bufSz + 1024 ; if ( newBufSz > * maxNewBufSzPtr
) { * maxNewBufSzPtr = newBufSz ; } tempU = ( real_T * ) utMalloc ( numBuffer
* newBufSz * sizeof ( real_T ) ) ; if ( tempU == ( NULL ) ) { return ( false
) ; } tempT = tempU + newBufSz ; if ( istransportdelay ) tempX = tempT +
newBufSz ; for ( j = tail ; j < bufSz ; j ++ ) { tempT [ j - tail ] = tBuf [
j ] ; tempU [ j - tail ] = uBuf [ j ] ; if ( istransportdelay ) tempX [ j -
tail ] = xBuf [ j ] ; } for ( j = 0 ; j < tail ; j ++ ) { tempT [ j + bufSz -
tail ] = tBuf [ j ] ; tempU [ j + bufSz - tail ] = uBuf [ j ] ; if (
istransportdelay ) tempX [ j + bufSz - tail ] = xBuf [ j ] ; } if ( * lastPtr
> tail ) { * lastPtr -= tail ; } else { * lastPtr += ( bufSz - tail ) ; } *
tailPtr = 0 ; * headPtr = bufSz ; utFree ( uBuf ) ; * bufSzPtr = newBufSz ; *
uBufPtr = tempU ; } else { * tailPtr = testIdx ; } return ( true ) ; } real_T
pha_0_9_acc_rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart ,
real_T * uBuf , int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T
newIdx , real_T initOutput , boolean_T discrete , boolean_T
minorStepAndTAtLastMajorOutput ) { int_T i ; real_T yout , t1 , t2 , u1 , u2
; real_T * tBuf = uBuf + bufSz ; if ( ( newIdx == 0 ) && ( oldestIdx == 0 )
&& ( tMinusDelay > tStart ) ) return initOutput ; if ( tMinusDelay <= tStart
) return initOutput ; if ( ( tMinusDelay <= tBuf [ oldestIdx ] ) ) { if (
discrete ) { return ( uBuf [ oldestIdx ] ) ; } else { int_T tempIdx =
oldestIdx + 1 ; if ( oldestIdx == bufSz - 1 ) tempIdx = 0 ; t1 = tBuf [
oldestIdx ] ; t2 = tBuf [ tempIdx ] ; u1 = uBuf [ oldestIdx ] ; u2 = uBuf [
tempIdx ] ; if ( t2 == t1 ) { if ( tMinusDelay >= t2 ) { yout = u2 ; } else {
yout = u1 ; } } else { real_T f1 = ( t2 - tMinusDelay ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; yout = f1 * u1 + f2 * u2 ; } return yout ; } } if (
minorStepAndTAtLastMajorOutput ) { if ( newIdx != 0 ) { if ( * lastIdx ==
newIdx ) { ( * lastIdx ) -- ; } newIdx -- ; } else { if ( * lastIdx == newIdx
) { * lastIdx = bufSz - 1 ; } newIdx = bufSz - 1 ; } } i = * lastIdx ; if (
tBuf [ i ] < tMinusDelay ) { while ( tBuf [ i ] < tMinusDelay ) { if ( i ==
newIdx ) break ; i = ( i < ( bufSz - 1 ) ) ? ( i + 1 ) : 0 ; } } else { while
( tBuf [ i ] >= tMinusDelay ) { i = ( i > 0 ) ? i - 1 : ( bufSz - 1 ) ; } i =
( i < ( bufSz - 1 ) ) ? ( i + 1 ) : 0 ; } * lastIdx = i ; if ( discrete ) {
double tempEps = ( DBL_EPSILON ) * 128.0 ; double localEps = tempEps *
muDoubleScalarAbs ( tBuf [ i ] ) ; if ( tempEps > localEps ) { localEps =
tempEps ; } localEps = localEps / 2.0 ; if ( tMinusDelay >= ( tBuf [ i ] -
localEps ) ) { yout = uBuf [ i ] ; } else { if ( i == 0 ) { yout = uBuf [
bufSz - 1 ] ; } else { yout = uBuf [ i - 1 ] ; } } } else { if ( i == 0 ) {
t1 = tBuf [ bufSz - 1 ] ; u1 = uBuf [ bufSz - 1 ] ; } else { t1 = tBuf [ i -
1 ] ; u1 = uBuf [ i - 1 ] ; } t2 = tBuf [ i ] ; u2 = uBuf [ i ] ; if ( t2 ==
t1 ) { if ( tMinusDelay >= t2 ) { yout = u2 ; } else { yout = u1 ; } } else {
real_T f1 = ( t2 - tMinusDelay ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; yout
= f1 * u1 + f2 * u2 ; } } return ( yout ) ; } real_T look1_binlxpw ( real_T
u0 , const real_T bp0 [ ] , const real_T table [ ] , uint32_T maxIndex ) {
real_T frac ; real_T yL_0d0 ; uint32_T bpIdx ; uint32_T iLeft ; uint32_T
iRght ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = ( u0 - bp0 [ 0U ] ) / (
bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex ] ) { bpIdx =
maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght - iLeft > 1U )
{ if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; }
bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [
iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ; frac = ( u0
- bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex - 1U ] ) ; }
yL_0d0 = table [ iLeft ] ; return ( table [ iLeft + 1U ] - yL_0d0 ) * frac +
yL_0d0 ; } void rt_ssGetBlockPath ( SimStruct * S , int_T sysIdx , int_T
blkIdx , char_T * * path ) { _ssGetBlockPath ( S , sysIdx , blkIdx , path ) ;
} void rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * castedS = (
SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( castedS ) ) {
_ssSet_slErrMsg ( castedS , diag ) ; } else { _ssDiscardDiagnostic ( castedS
, diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S , void * diag )
{ _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; } void
rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } static void
mdlOutputs ( SimStruct * S , int_T tid ) { B_pha_0_9_T * _rtB ; DW_pha_0_9_T
* _rtDW ; P_pha_0_9_T * _rtP ; X_pha_0_9_T * _rtX ; int32_T isHit ; _rtDW = (
( DW_pha_0_9_T * ) ssGetRootDWork ( S ) ) ; _rtX = ( ( X_pha_0_9_T * )
ssGetContStates ( S ) ) ; _rtP = ( ( P_pha_0_9_T * ) ssGetModelRtp ( S ) ) ;
_rtB = ( ( B_pha_0_9_T * ) _ssGetModelBlockIO ( S ) ) ; { real_T * * uBuffer
= ( real_T * * ) & _rtDW -> TransportDelay2_PWORK . TUbufferPtrs [ 0 ] ;
real_T simTime = ssGetT ( S ) ; real_T tMinusDelay = simTime - _rtP -> P_0 ;
_rtB -> B_0_0_0 = pha_0_9_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 , *
uBuffer , _rtDW -> TransportDelay2_IWORK . CircularBufSize , & _rtDW ->
TransportDelay2_IWORK . Last , _rtDW -> TransportDelay2_IWORK . Tail , _rtDW
-> TransportDelay2_IWORK . Head , _rtP -> P_1 , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( S ) && ( ( * uBuffer + _rtDW -> TransportDelay2_IWORK .
CircularBufSize ) [ _rtDW -> TransportDelay2_IWORK . Head ] == ssGetT ( S ) )
) ) ; } if ( ssIsModeUpdateTimeStep ( S ) ) { _rtDW -> Relay_Mode = ( ( _rtB
-> B_0_0_0 >= _rtP -> P_2 ) || ( ( ! ( _rtB -> B_0_0_0 <= _rtP -> P_3 ) ) &&
_rtDW -> Relay_Mode ) ) ; } if ( _rtDW -> Relay_Mode ) { _rtB -> B_0_1_0 =
_rtP -> P_4 ; } else { _rtB -> B_0_1_0 = _rtP -> P_5 ; } isHit =
ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { _rtB -> B_0_2_0 = _rtP ->
P_6 * _rtB -> B_0_1_0 ; } _rtB -> B_0_5_0 = ssGetT ( S ) - _rtB -> B_0_4_0 ;
_rtB -> B_0_7_0 = look1_binlxpw ( muDoubleScalarRem ( _rtB -> B_0_5_0 , _rtB
-> B_0_6_0 ) , _rtP -> P_8 , _rtP -> P_7 , 4U ) ; { real_T * * uBuffer = (
real_T * * ) & _rtDW -> TransportDelay4_PWORK . TUbufferPtrs [ 0 ] ; real_T
simTime = ssGetT ( S ) ; real_T tMinusDelay = simTime - _rtP -> P_9 ; _rtB ->
B_0_8_0 = pha_0_9_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 , * uBuffer ,
_rtDW -> TransportDelay4_IWORK . CircularBufSize , & _rtDW ->
TransportDelay4_IWORK . Last , _rtDW -> TransportDelay4_IWORK . Tail , _rtDW
-> TransportDelay4_IWORK . Head , _rtP -> P_10 , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( S ) && ( ( * uBuffer + _rtDW -> TransportDelay4_IWORK .
CircularBufSize ) [ _rtDW -> TransportDelay4_IWORK . Head ] == ssGetT ( S ) )
) ) ; } _rtB -> B_0_9_0 = _rtP -> P_11 * _rtB -> B_0_8_0 ; _rtB -> B_0_10_0 =
_rtB -> B_0_2_0_k + _rtB -> B_0_9_0 ; _rtB -> B_0_11_0 = _rtB -> B_0_7_0 -
_rtB -> B_0_10_0 ; _rtB -> B_0_12_0 = _rtP -> P_12 * _rtB -> B_0_11_0 ; _rtB
-> B_0_13_0 = _rtX -> Integrator_CSTATE ; _rtB -> B_0_14_0 = _rtP -> P_14 *
_rtB -> B_0_11_0 ; _rtB -> B_0_15_0 = _rtX -> Filter_CSTATE ; _rtB ->
B_0_16_0 = _rtB -> B_0_14_0 - _rtB -> B_0_15_0 ; _rtB -> B_0_17_0 = _rtP ->
P_16 * _rtB -> B_0_16_0 ; _rtB -> B_0_18_0 = ( _rtB -> B_0_12_0 + _rtB ->
B_0_13_0 ) + _rtB -> B_0_17_0 ; _rtB -> B_0_19_0 [ 0 ] = _rtB -> B_0_18_0 ;
_rtB -> B_0_19_0 [ 1 ] = 0.0 ; _rtB -> B_0_19_0 [ 2 ] = 0.0 ; _rtB ->
B_0_19_0 [ 3 ] = 0.0 ; { real_T * * uBuffer = ( real_T * * ) & _rtDW ->
TransportDelay5_PWORK . TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( S ) ;
real_T tMinusDelay = simTime - _rtP -> P_17 ; _rtB -> B_0_20_0 =
pha_0_9_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 , * uBuffer , _rtDW ->
TransportDelay5_IWORK . CircularBufSize , & _rtDW -> TransportDelay5_IWORK .
Last , _rtDW -> TransportDelay5_IWORK . Tail , _rtDW -> TransportDelay5_IWORK
. Head , _rtP -> P_18 , 0 , ( boolean_T ) ( ssIsMinorTimeStep ( S ) && ( ( *
uBuffer + _rtDW -> TransportDelay5_IWORK . CircularBufSize ) [ _rtDW ->
TransportDelay5_IWORK . Head ] == ssGetT ( S ) ) ) ) ; } _rtB -> B_0_21_0 =
_rtB -> B_0_3_0 - _rtB -> B_0_20_0 ; _rtB -> B_0_22_0 = _rtP -> P_19 * _rtB
-> B_0_21_0 ; _rtB -> B_0_23_0 = _rtX -> Integrator_CSTATE_b ; _rtB ->
B_0_24_0 = _rtP -> P_21 * _rtB -> B_0_21_0 ; _rtB -> B_0_25_0 = _rtX ->
Filter_CSTATE_g ; _rtB -> B_0_26_0 = _rtB -> B_0_24_0 - _rtB -> B_0_25_0 ;
_rtB -> B_0_27_0 = _rtP -> P_23 * _rtB -> B_0_26_0 ; _rtB -> B_0_28_0 = (
_rtB -> B_0_22_0 + _rtB -> B_0_23_0 ) + _rtB -> B_0_27_0 ; if (
ssIsModeUpdateTimeStep ( S ) ) { _rtDW -> Saturation_MODE = _rtB -> B_0_28_0
>= _rtP -> P_24 ? 1 : _rtB -> B_0_28_0 > _rtP -> P_25 ? 0 : - 1 ; } _rtB ->
B_0_29_0 = _rtDW -> Saturation_MODE == 1 ? _rtP -> P_24 : _rtDW ->
Saturation_MODE == - 1 ? _rtP -> P_25 : _rtB -> B_0_28_0 ; if ( _rtDW ->
INPUT_1_1_1_FirstOutput == 0.0 ) { _rtDW -> INPUT_1_1_1_FirstOutput = 1.0 ;
_rtX -> pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 = _rtB ->
B_0_29_0 ; } _rtB -> B_0_30_0 [ 0 ] = _rtX ->
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ; _rtB -> B_0_30_0 [
1 ] = ( _rtB -> B_0_29_0 - _rtX ->
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ) * 1000.0 ; _rtB ->
B_0_30_0 [ 2 ] = 0.0 ; _rtB -> B_0_30_0 [ 3 ] = 0.0 ; _rtB -> B_0_31_0 [ 0 ]
= _rtB -> B_0_1_0 ; _rtB -> B_0_31_0 [ 1 ] = 0.0 ; _rtB -> B_0_31_0 [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( S ) != 0 ) { _rtDW -> INPUT_2_1_1_Discrete [ 0
] = ! ( _rtB -> B_0_31_0 [ 0 ] == _rtDW -> INPUT_2_1_1_Discrete [ 1 ] ) ;
_rtDW -> INPUT_2_1_1_Discrete [ 1 ] = _rtB -> B_0_31_0 [ 0 ] ; } _rtB ->
B_0_31_0 [ 0 ] = _rtDW -> INPUT_2_1_1_Discrete [ 1 ] ; _rtB -> B_0_31_0 [ 3 ]
= _rtDW -> INPUT_2_1_1_Discrete [ 0 ] ; { real_T * * uBuffer = ( real_T * * )
& _rtDW -> TransportDelay1_PWORK . TUbufferPtrs [ 0 ] ; real_T simTime =
ssGetT ( S ) ; real_T tMinusDelay = simTime - _rtP -> P_26 ; _rtB -> B_0_32_0
= pha_0_9_acc_rt_TDelayInterpolate ( tMinusDelay , 0.0 , * uBuffer , _rtDW ->
TransportDelay1_IWORK . CircularBufSize , & _rtDW -> TransportDelay1_IWORK .
Last , _rtDW -> TransportDelay1_IWORK . Tail , _rtDW -> TransportDelay1_IWORK
. Head , _rtP -> P_27 , 0 , ( boolean_T ) ( ssIsMinorTimeStep ( S ) && ( ( *
uBuffer + _rtDW -> TransportDelay1_IWORK . CircularBufSize ) [ _rtDW ->
TransportDelay1_IWORK . Head ] == ssGetT ( S ) ) ) ) ; } if (
ssIsModeUpdateTimeStep ( S ) ) { _rtDW -> Relay1_Mode = ( ( _rtB -> B_0_32_0
>= _rtP -> P_28 ) || ( ( ! ( _rtB -> B_0_32_0 <= _rtP -> P_29 ) ) && _rtDW ->
Relay1_Mode ) ) ; } _rtB -> B_0_34_0 = ssGetT ( S ) ; isHit = ssIsSampleHit (
S , 1 , 0 ) ; if ( isHit != 0 ) { if ( ssIsModeUpdateTimeStep ( S ) ) { _rtDW
-> RelationalOperator_Mode = ( _rtB -> B_0_34_0 <= _rtB -> B_0_0_0_m ) ; } if
( _rtDW -> RelationalOperator_Mode ) { if ( _rtDW -> Relay1_Mode ) { _rtB ->
B_0_36_0 = _rtP -> P_30 ; } else { _rtB -> B_0_36_0 = _rtP -> P_31 ; } } else
{ _rtB -> B_0_36_0 = _rtB -> B_0_5_0_b ; } } _rtB -> B_0_37_0 [ 0 ] = _rtB ->
B_0_36_0 ; _rtB -> B_0_37_0 [ 1 ] = 0.0 ; _rtB -> B_0_37_0 [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( S ) != 0 ) { _rtDW -> INPUT_3_1_1_Discrete [ 0 ] = ! (
_rtB -> B_0_37_0 [ 0 ] == _rtDW -> INPUT_3_1_1_Discrete [ 1 ] ) ; _rtDW ->
INPUT_3_1_1_Discrete [ 1 ] = _rtB -> B_0_37_0 [ 0 ] ; } _rtB -> B_0_37_0 [ 0
] = _rtDW -> INPUT_3_1_1_Discrete [ 1 ] ; _rtB -> B_0_37_0 [ 3 ] = _rtDW ->
INPUT_3_1_1_Discrete [ 0 ] ; ssCallAccelRunBlock ( S , 0 , 38 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 0 , 39 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_0_40_0 = _rtP -> P_32 * _rtB -> B_0_39_0 [
6 ] ; _rtB -> B_0_41_0 = _rtP -> P_33 * _rtB -> B_0_39_0 [ 7 ] ; _rtB ->
B_0_42_0 = _rtP -> P_34 * _rtB -> B_0_39_0 [ 8 ] ; ssCallAccelRunBlock ( S ,
0 , 43 , SS_CALL_MDL_OUTPUTS ) ; isHit = ssIsSampleHit ( S , 1 , 0 ) ; if (
isHit != 0 ) { _rtB -> B_0_44_0 = _rtP -> P_35 * _rtB -> B_0_1_0 ; } _rtB ->
B_0_45_0 = _rtP -> P_36 * _rtB -> B_0_39_0 [ 4 ] ; isHit = ssIsSampleHit ( S
, 1 , 0 ) ; if ( isHit != 0 ) { _rtB -> B_0_46_0 = _rtP -> P_37 * _rtB ->
B_0_36_0 ; } _rtB -> B_0_47_0 = _rtP -> P_38 * _rtB -> B_0_39_0 [ 5 ] ;
ssCallAccelRunBlock ( S , 0 , 48 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_0_49_0 =
_rtP -> P_39 * _rtB -> B_0_39_0 [ 3 ] ; _rtB -> B_0_50_0 = _rtP -> P_40 *
_rtB -> B_0_39_0 [ 1 ] ; _rtB -> B_0_51_0 = _rtP -> P_41 * _rtB -> B_0_39_0 [
2 ] ; ssCallAccelRunBlock ( S , 0 , 52 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_0_53_0 = _rtP -> P_42 * _rtB -> B_0_39_0 [ 9 ] ; ssCallAccelRunBlock ( S ,
0 , 54 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_0_56_0 = _rtP -> P_43 * _rtB ->
B_0_39_0 [ 0 ] + _rtB -> B_0_1_0_c ; ssCallAccelRunBlock ( S , 0 , 57 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 0 , 58 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_0_63_0 = _rtP -> P_44 * _rtB -> B_0_11_0 ;
_rtB -> B_0_64_0 = _rtP -> P_45 * _rtB -> B_0_21_0 ; ssCallAccelRunBlock ( S
, 0 , 180 , SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER ( tid ) ; } static void
mdlOutputsTID2 ( SimStruct * S , int_T tid ) { B_pha_0_9_T * _rtB ;
P_pha_0_9_T * _rtP ; _rtP = ( ( P_pha_0_9_T * ) ssGetModelRtp ( S ) ) ; _rtB
= ( ( B_pha_0_9_T * ) _ssGetModelBlockIO ( S ) ) ; _rtB -> B_0_0_0_m = _rtP
-> P_46 ; _rtB -> B_0_1_0_c = _rtP -> P_47 ; _rtB -> B_0_2_0_k = _rtP -> P_48
; _rtB -> B_0_3_0 = _rtP -> P_49 ; _rtB -> B_0_4_0_c = _rtP -> P_50 ; _rtB ->
B_0_5_0_b = _rtP -> P_51 ; _rtB -> B_0_6_0 = _rtP -> P_52 ; _rtB -> B_0_7_0_p
= _rtP -> P_53 ; _rtB -> B_0_8_0_c = _rtP -> P_54 ; _rtB -> B_0_9_0_f = _rtP
-> P_55 ; _rtB -> B_0_10_0_g = _rtP -> P_56 ; _rtB -> B_0_11_0_g = _rtP ->
P_57 ; _rtB -> B_0_12_0_m = _rtP -> P_58 ; _rtB -> B_0_13_0_n = _rtP -> P_59
; _rtB -> B_0_14_0_p = _rtP -> P_60 ; ssCallAccelRunBlock ( S , 0 , 227 ,
SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { B_pha_0_9_T * _rtB ;
DW_pha_0_9_T * _rtDW ; P_pha_0_9_T * _rtP ; _rtDW = ( ( DW_pha_0_9_T * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( P_pha_0_9_T * ) ssGetModelRtp ( S ) ) ;
_rtB = ( ( B_pha_0_9_T * ) _ssGetModelBlockIO ( S ) ) ; { real_T * * uBuffer
= ( real_T * * ) & _rtDW -> TransportDelay2_PWORK . TUbufferPtrs [ 0 ] ;
real_T simTime = ssGetT ( S ) ; _rtDW -> TransportDelay2_IWORK . Head = ( (
_rtDW -> TransportDelay2_IWORK . Head < ( _rtDW -> TransportDelay2_IWORK .
CircularBufSize - 1 ) ) ? ( _rtDW -> TransportDelay2_IWORK . Head + 1 ) : 0 )
; if ( _rtDW -> TransportDelay2_IWORK . Head == _rtDW ->
TransportDelay2_IWORK . Tail ) { if ( !
pha_0_9_acc_rt_TDelayUpdateTailOrGrowBuf ( & _rtDW -> TransportDelay2_IWORK .
CircularBufSize , & _rtDW -> TransportDelay2_IWORK . Tail , & _rtDW ->
TransportDelay2_IWORK . Head , & _rtDW -> TransportDelay2_IWORK . Last ,
simTime - _rtP -> P_0 , uBuffer , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay2_IWORK . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * uBuffer + _rtDW ->
TransportDelay2_IWORK . CircularBufSize ) [ _rtDW -> TransportDelay2_IWORK .
Head ] = simTime ; ( * uBuffer ) [ _rtDW -> TransportDelay2_IWORK . Head ] =
_rtB -> B_0_42_0 ; } { real_T * * uBuffer = ( real_T * * ) & _rtDW ->
TransportDelay4_PWORK . TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( S ) ;
_rtDW -> TransportDelay4_IWORK . Head = ( ( _rtDW -> TransportDelay4_IWORK .
Head < ( _rtDW -> TransportDelay4_IWORK . CircularBufSize - 1 ) ) ? ( _rtDW
-> TransportDelay4_IWORK . Head + 1 ) : 0 ) ; if ( _rtDW ->
TransportDelay4_IWORK . Head == _rtDW -> TransportDelay4_IWORK . Tail ) { if
( ! pha_0_9_acc_rt_TDelayUpdateTailOrGrowBuf ( & _rtDW ->
TransportDelay4_IWORK . CircularBufSize , & _rtDW -> TransportDelay4_IWORK .
Tail , & _rtDW -> TransportDelay4_IWORK . Head , & _rtDW ->
TransportDelay4_IWORK . Last , simTime - _rtP -> P_9 , uBuffer , ( boolean_T
) 0 , false , & _rtDW -> TransportDelay4_IWORK . MaxNewBufSize ) ) {
ssSetErrorStatus ( S , "tdelay memory allocation error" ) ; return ; } } ( *
uBuffer + _rtDW -> TransportDelay4_IWORK . CircularBufSize ) [ _rtDW ->
TransportDelay4_IWORK . Head ] = simTime ; ( * uBuffer ) [ _rtDW ->
TransportDelay4_IWORK . Head ] = _rtB -> B_0_39_0 [ 0 ] ; } { real_T * *
uBuffer = ( real_T * * ) & _rtDW -> TransportDelay5_PWORK . TUbufferPtrs [ 0
] ; real_T simTime = ssGetT ( S ) ; _rtDW -> TransportDelay5_IWORK . Head = (
( _rtDW -> TransportDelay5_IWORK . Head < ( _rtDW -> TransportDelay5_IWORK .
CircularBufSize - 1 ) ) ? ( _rtDW -> TransportDelay5_IWORK . Head + 1 ) : 0 )
; if ( _rtDW -> TransportDelay5_IWORK . Head == _rtDW ->
TransportDelay5_IWORK . Tail ) { if ( !
pha_0_9_acc_rt_TDelayUpdateTailOrGrowBuf ( & _rtDW -> TransportDelay5_IWORK .
CircularBufSize , & _rtDW -> TransportDelay5_IWORK . Tail , & _rtDW ->
TransportDelay5_IWORK . Head , & _rtDW -> TransportDelay5_IWORK . Last ,
simTime - _rtP -> P_17 , uBuffer , ( boolean_T ) 0 , false , & _rtDW ->
TransportDelay5_IWORK . MaxNewBufSize ) ) { ssSetErrorStatus ( S ,
"tdelay memory allocation error" ) ; return ; } } ( * uBuffer + _rtDW ->
TransportDelay5_IWORK . CircularBufSize ) [ _rtDW -> TransportDelay5_IWORK .
Head ] = simTime ; ( * uBuffer ) [ _rtDW -> TransportDelay5_IWORK . Head ] =
_rtB -> B_0_42_0 ; } { real_T * * uBuffer = ( real_T * * ) & _rtDW ->
TransportDelay1_PWORK . TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( S ) ;
_rtDW -> TransportDelay1_IWORK . Head = ( ( _rtDW -> TransportDelay1_IWORK .
Head < ( _rtDW -> TransportDelay1_IWORK . CircularBufSize - 1 ) ) ? ( _rtDW
-> TransportDelay1_IWORK . Head + 1 ) : 0 ) ; if ( _rtDW ->
TransportDelay1_IWORK . Head == _rtDW -> TransportDelay1_IWORK . Tail ) { if
( ! pha_0_9_acc_rt_TDelayUpdateTailOrGrowBuf ( & _rtDW ->
TransportDelay1_IWORK . CircularBufSize , & _rtDW -> TransportDelay1_IWORK .
Tail , & _rtDW -> TransportDelay1_IWORK . Head , & _rtDW ->
TransportDelay1_IWORK . Last , simTime - _rtP -> P_26 , uBuffer , ( boolean_T
) 0 , false , & _rtDW -> TransportDelay1_IWORK . MaxNewBufSize ) ) {
ssSetErrorStatus ( S , "tdelay memory allocation error" ) ; return ; } } ( *
uBuffer + _rtDW -> TransportDelay1_IWORK . CircularBufSize ) [ _rtDW ->
TransportDelay1_IWORK . Head ] = simTime ; ( * uBuffer ) [ _rtDW ->
TransportDelay1_IWORK . Head ] = _rtB -> B_0_41_0 ; } ssCallAccelRunBlock ( S
, 0 , 38 , SS_CALL_MDL_UPDATE ) ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID2 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { B_pha_0_9_T * _rtB ;
XDot_pha_0_9_T * _rtXdot ; X_pha_0_9_T * _rtX ; _rtXdot = ( ( XDot_pha_0_9_T
* ) ssGetdX ( S ) ) ; _rtX = ( ( X_pha_0_9_T * ) ssGetContStates ( S ) ) ;
_rtB = ( ( B_pha_0_9_T * ) _ssGetModelBlockIO ( S ) ) ; _rtXdot ->
Integrator_CSTATE = _rtB -> B_0_63_0 ; _rtXdot -> Filter_CSTATE = _rtB ->
B_0_17_0 ; _rtXdot -> Integrator_CSTATE_b = _rtB -> B_0_64_0 ; _rtXdot ->
Filter_CSTATE_g = _rtB -> B_0_27_0 ; _rtXdot ->
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 = ( _rtB -> B_0_29_0
- _rtX -> pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ) * 1000.0
; ssCallAccelRunBlock ( S , 0 , 38 , SS_CALL_MDL_DERIVATIVES ) ; }
#define MDL_PROJECTION
static void mdlProjection ( SimStruct * S ) { ssCallAccelRunBlock ( S , 0 ,
38 , SS_CALL_MDL_PROJECTION ) ; }
#define MDL_FORCINGFUNCTION
static void mdlForcingFunction ( SimStruct * S ) { B_pha_0_9_T * _rtB ;
XDot_pha_0_9_T * _rtXdot ; X_pha_0_9_T * _rtX ; _rtXdot = ( ( XDot_pha_0_9_T
* ) ssGetdX ( S ) ) ; _rtX = ( ( X_pha_0_9_T * ) ssGetContStates ( S ) ) ;
_rtB = ( ( B_pha_0_9_T * ) _ssGetModelBlockIO ( S ) ) ; _rtXdot ->
Integrator_CSTATE = _rtB -> B_0_63_0 ; _rtXdot -> Filter_CSTATE = _rtB ->
B_0_17_0 ; _rtXdot -> Integrator_CSTATE_b = _rtB -> B_0_64_0 ; _rtXdot ->
Filter_CSTATE_g = _rtB -> B_0_27_0 ; _rtXdot ->
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 = ( _rtB -> B_0_29_0
- _rtX -> pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ) * 1000.0
; ssCallAccelRunBlock ( S , 0 , 38 , SS_CALL_MDL_FORCINGFUNCTION ) ; }
#define MDL_MASSMATRIX
static void mdlMassMatrix ( SimStruct * S ) { ssCallAccelRunBlock ( S , 0 ,
38 , SS_CALL_MDL_MASSMATRIX ) ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { B_pha_0_9_T * _rtB ;
DW_pha_0_9_T * _rtDW ; P_pha_0_9_T * _rtP ; ZCV_pha_0_9_T * _rtZCSV ; _rtDW =
( ( DW_pha_0_9_T * ) ssGetRootDWork ( S ) ) ; _rtZCSV = ( ( ZCV_pha_0_9_T * )
ssGetSolverZcSignalVector ( S ) ) ; _rtP = ( ( P_pha_0_9_T * ) ssGetModelRtp
( S ) ) ; _rtB = ( ( B_pha_0_9_T * ) _ssGetModelBlockIO ( S ) ) ; if ( _rtDW
-> Relay_Mode ) { _rtZCSV -> Relay_RelayZC_ZC = _rtB -> B_0_0_0 - _rtP -> P_3
; } else { _rtZCSV -> Relay_RelayZC_ZC = _rtB -> B_0_0_0 - _rtP -> P_2 ; }
_rtZCSV -> Saturation_UprLim_ZC = _rtB -> B_0_28_0 - _rtP -> P_24 ; _rtZCSV
-> Saturation_LwrLim_ZC = _rtB -> B_0_28_0 - _rtP -> P_25 ; if ( _rtDW ->
Relay1_Mode ) { _rtZCSV -> Relay1_RelayZC_ZC = _rtB -> B_0_32_0 - _rtP ->
P_29 ; } else { _rtZCSV -> Relay1_RelayZC_ZC = _rtB -> B_0_32_0 - _rtP ->
P_28 ; } _rtZCSV -> RelationalOperator_RelopInput_ZC = _rtB -> B_0_34_0 -
_rtB -> B_0_0_0_m ; ssCallAccelRunBlock ( S , 0 , 38 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; } static void mdlInitializeSizes ( SimStruct *
S ) { ssSetChecksumVal ( S , 0 , 1350694899U ) ; ssSetChecksumVal ( S , 1 ,
4202541249U ) ; ssSetChecksumVal ( S , 2 , 2872885132U ) ; ssSetChecksumVal (
S , 3 , 1057866676U ) ; { mxArray * slVerStructMat = ( NULL ) ; mxArray *
slStrMat = mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status
= mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if (
status == 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 ,
"Version" ) ; if ( slVerMat == ( NULL ) ) { status = 1 ; } else { status =
mxGetString ( slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "10.7" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != ( SLSize )
sizeof ( DW_pha_0_9_T ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file (%ld vs %lu)." , ( signed long )
ssGetSizeofDWork ( S ) , ( unsigned long ) sizeof ( DW_pha_0_9_T ) ) ;
ssSetErrorStatus ( S , msg ) ; } if ( ssGetSizeofGlobalBlockIO ( S ) != (
SLSize ) sizeof ( B_pha_0_9_T ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file (%ld vs %lu)." , ( signed long )
ssGetSizeofGlobalBlockIO ( S ) , ( unsigned long ) sizeof ( B_pha_0_9_T ) ) ;
ssSetErrorStatus ( S , msg ) ; } { int ssSizeofParams ; ssGetSizeofParams ( S
, & ssSizeofParams ) ; if ( ssSizeofParams != sizeof ( P_pha_0_9_T ) ) {
static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file (%d vs %lu)." , ssSizeofParams , (
unsigned long ) sizeof ( P_pha_0_9_T ) ) ; ssSetErrorStatus ( S , msg ) ; } }
_ssSetModelRtp ( S , ( real_T * ) & pha_0_9_rtDefaultP ) ; if (
ssGetSizeofDWork ( S ) == ( SLSize ) sizeof ( DW_pha_0_9_T ) ) { { ( (
DW_pha_0_9_T * ) ssGetRootDWork ( S ) ) -> STATE_1_MASS_MATRIX_PR = 5 ; } }
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( ( P_pha_0_9_T * ) ssGetModelRtp (
S ) ) -> P_24 = rtInf ; } static void mdlInitializeSampleTimes ( SimStruct *
S ) { slAccRegPrmChangeFcn ( S , mdlOutputsTID2 ) ; } static void
mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
