#ifndef RTW_HEADER_pha_0_9_acc_h_
#define RTW_HEADER_pha_0_9_acc_h_
#ifndef pha_0_9_acc_COMMON_INCLUDES_
#define pha_0_9_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn
#define S_FUNCTION_LEVEL 2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "pha_0_9_acc_types.h"
#include <stddef.h>
#include <float.h>
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
typedef struct { real_T B_0_0_0 ; real_T B_0_1_0 ; real_T B_0_2_0 ; real_T
B_0_4_0 ; real_T B_0_5_0 ; real_T B_0_7_0 ; real_T B_0_8_0 ; real_T B_0_9_0 ;
real_T B_0_10_0 ; real_T B_0_11_0 ; real_T B_0_12_0 ; real_T B_0_13_0 ;
real_T B_0_14_0 ; real_T B_0_15_0 ; real_T B_0_16_0 ; real_T B_0_17_0 ;
real_T B_0_18_0 ; real_T B_0_19_0 [ 4 ] ; real_T B_0_20_0 ; real_T B_0_21_0 ;
real_T B_0_22_0 ; real_T B_0_23_0 ; real_T B_0_24_0 ; real_T B_0_25_0 ;
real_T B_0_26_0 ; real_T B_0_27_0 ; real_T B_0_28_0 ; real_T B_0_29_0 ;
real_T B_0_30_0 [ 4 ] ; real_T B_0_31_0 [ 4 ] ; real_T B_0_32_0 ; real_T
B_0_34_0 ; real_T B_0_36_0 ; real_T B_0_37_0 [ 4 ] ; real_T B_0_38_0 [ 198 ]
; real_T B_0_39_0 [ 10 ] ; real_T B_0_40_0 ; real_T B_0_41_0 ; real_T
B_0_42_0 ; real_T B_0_44_0 ; real_T B_0_45_0 ; real_T B_0_46_0 ; real_T
B_0_47_0 ; real_T B_0_49_0 ; real_T B_0_50_0 ; real_T B_0_51_0 ; real_T
B_0_53_0 ; real_T B_0_56_0 ; real_T B_0_63_0 ; real_T B_0_64_0 ; real_T
B_0_0_0_m ; real_T B_0_1_0_c ; real_T B_0_2_0_k ; real_T B_0_3_0 ; real_T
B_0_4_0_c ; real_T B_0_5_0_b ; real_T B_0_6_0 ; real_T B_0_7_0_p ; real_T
B_0_8_0_c ; real_T B_0_9_0_f ; real_T B_0_10_0_g ; real_T B_0_11_0_g ; real_T
B_0_12_0_m ; real_T B_0_13_0_n ; real_T B_0_14_0_p ; real_T B_0_15_0_l ; }
B_pha_0_9_T ; typedef struct { real_T INPUT_4_1_1_Discrete [ 2 ] ; real_T
INPUT_1_1_1_Discrete ; real_T INPUT_1_1_1_FirstOutput ; real_T
INPUT_2_1_1_Discrete [ 2 ] ; real_T INPUT_3_1_1_Discrete [ 2 ] ; real_T
STATE_1_Discrete [ 5 ] ; real_T OUTPUT_1_0_Discrete ; struct { real_T
modelTStart ; } TransportDelay2_RWORK ; struct { real_T modelTStart ; }
TransportDelay4_RWORK ; struct { real_T modelTStart ; } TransportDelay5_RWORK
; struct { real_T modelTStart ; } TransportDelay1_RWORK ; struct { void *
TUbufferPtrs [ 2 ] ; } TransportDelay2_PWORK ; struct { void * TUbufferPtrs [
2 ] ; } TransportDelay4_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
TransportDelay5_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
TransportDelay1_PWORK ; void * STATE_1_Simulator ; void * STATE_1_SimData ;
void * STATE_1_DiagMgr ; void * STATE_1_ZcLogger ; void * STATE_1_TsInfo ;
void * OUTPUT_1_0_Simulator ; void * OUTPUT_1_0_SimData ; void *
OUTPUT_1_0_DiagMgr ; void * OUTPUT_1_0_ZcLogger ; void * OUTPUT_1_0_TsInfo ;
void * Scope_PWORK ; void * Scope1_PWORK ; void * Scope2_PWORK ; void *
Scope3_PWORK ; void * Scope4_PWORK ; void * Scope5_PWORK ; void *
SINK_1_RtwLogger ; void * SINK_1_RtwLogBuffer ; void *
SINK_1_RtwLogFcnManager ; void * RTP_1_RtpManager ; struct { int_T Tail ;
int_T Head ; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
TransportDelay2_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } TransportDelay4_IWORK ; struct {
int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } TransportDelay5_IWORK ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
TransportDelay1_IWORK ; int_T STATE_1_Modes [ 67 ] ; int_T OUTPUT_1_0_Modes ;
int_T Saturation_MODE ; int32_T STATE_1_MASS_MATRIX_PR ; boolean_T Relay_Mode
; boolean_T Relay1_Mode ; boolean_T RelationalOperator_Mode ; boolean_T
STATE_1_FirstOutput ; boolean_T OUTPUT_1_0_FirstOutput ; boolean_T
RTP_1_SetParametersNeeded ; char_T pad_RTP_1_SetParametersNeeded [ 2 ] ; }
DW_pha_0_9_T ; typedef struct { real_T Integrator_CSTATE ; real_T
Filter_CSTATE ; real_T Integrator_CSTATE_b ; real_T Filter_CSTATE_g ; real_T
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ; real_T
pha_0_9Double_Acting_Actuator_TLchamber_AT_I [ 126 ] ; } X_pha_0_9_T ;
typedef struct { real_T Integrator_CSTATE ; real_T Filter_CSTATE ; real_T
Integrator_CSTATE_b ; real_T Filter_CSTATE_g ; real_T
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ; real_T
pha_0_9Double_Acting_Actuator_TLchamber_AT_I [ 126 ] ; } XDot_pha_0_9_T ;
typedef struct { boolean_T Integrator_CSTATE ; boolean_T Filter_CSTATE ;
boolean_T Integrator_CSTATE_b ; boolean_T Filter_CSTATE_g ; boolean_T
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ; boolean_T
pha_0_9Double_Acting_Actuator_TLchamber_AT_I [ 126 ] ; } XDis_pha_0_9_T ;
typedef struct { real_T Integrator_CSTATE ; real_T Filter_CSTATE ; real_T
Integrator_CSTATE_b ; real_T Filter_CSTATE_g ; real_T
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ; real_T
pha_0_9Double_Acting_Actuator_TLchamber_AT_I [ 126 ] ; }
CStateAbsTol_pha_0_9_T ; typedef struct { real_T Integrator_CSTATE ; real_T
Filter_CSTATE ; real_T Integrator_CSTATE_b ; real_T Filter_CSTATE_g ; real_T
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ; real_T
pha_0_9Double_Acting_Actuator_TLchamber_AT_I [ 126 ] ; } CXPtMin_pha_0_9_T ;
typedef struct { real_T Integrator_CSTATE ; real_T Filter_CSTATE ; real_T
Integrator_CSTATE_b ; real_T Filter_CSTATE_g ; real_T
pha_0_9Simulink_PS_Converter1outputFiltered_4175404342_0 ; real_T
pha_0_9Double_Acting_Actuator_TLchamber_AT_I [ 126 ] ; } CXPtMax_pha_0_9_T ;
typedef struct { real_T Relay_RelayZC_ZC ; real_T Saturation_UprLim_ZC ;
real_T Saturation_LwrLim_ZC ; real_T Relay1_RelayZC_ZC ; real_T
RelationalOperator_RelopInput_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_1_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_2_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_3_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_4_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_1_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_2_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_3_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_4_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Azc_1_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_1_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_2_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Azc_2_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Azc_3_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_4_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_5_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_6_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_7_ZC ; real_T
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_8_ZC ; real_T
STATE_1_Pressure_Relief_Valve_TLrelief_valvezc_1_ZC ; real_T
STATE_1_Pressure_Relief_Valve_TLrelief_valvezc_2_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_5_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_6_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_7_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_8_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TLder_liquid_volumezc_1_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TLder_liquid_volumezc_2_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TLzc_3_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TLzc_4_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TLzc_5_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_5_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_6_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TLzc_6_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TLzc_7_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1der_liquid_volumezc_3_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1der_liquid_volumezc_4_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_5_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_6_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_7_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_8_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_9_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_10_ZC ; real_T
STATE_1_Gas_Charged_Accumulator_TL1zc_11_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_ATzc_7_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TL1orifice_ATzc_8_ZC ; real_T
STATE_1_Servovalve2Armature_Hard_Stopzc_1_ZC ; real_T
STATE_1_Servovalve2Armature_Hard_Stopzc_2_ZC ; real_T
STATE_1_Servovalve2Main_ValveOrifice_PAOrificezc_1_ZC ; real_T
STATE_1_Servovalve2Main_ValveSpool_Side_ASpool_Side_Azc_1_ZC ; real_T
STATE_1_Servovalve2Main_ValveSpool_Side_BSpool_Side_Bzc_1_ZC ; real_T
STATE_1_Servovalve2Main_ValveOrifice_PAOrificezc_2_ZC ; real_T
STATE_1_Servovalve2Main_ValveOrifice_PBOrificezc_1_ZC ; real_T
STATE_1_Servovalve2Main_ValveSpool_Side_ASpool_Side_Azc_2_ZC ; real_T
STATE_1_Servovalve2Main_ValveSpool_Side_BSpool_Side_Bzc_2_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_ATzc_9_ZC ; real_T
STATE_1_x3_Way_Directional_Valve_TLorifice_ATzc_10_ZC ; real_T
STATE_1_Servovalve2Main_ValveOrifice_ATOrificeorifice_opening_smoothzc_1_ZC ;
real_T
STATE_1_Servovalve2Main_ValveOrifice_ATOrificeorifice_opening_smoothzc_2_ZC ;
real_T
 STATE_1_Servovalve2Main_ValveOrifice_ATSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZC
; real_T
 STATE_1_Servovalve2Main_ValveOrifice_ATSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZC
; real_T
STATE_1_Servovalve2Main_ValveOrifice_BTOrificeorifice_opening_smoothzc_1_ZC ;
real_T
STATE_1_Servovalve2Main_ValveOrifice_BTOrificeorifice_opening_smoothzc_2_ZC ;
real_T
 STATE_1_Servovalve2Main_ValveOrifice_BTSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZC
; real_T
 STATE_1_Servovalve2Main_ValveOrifice_BTSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZC
; real_T
STATE_1_Servovalve2Main_ValveOrifice_PAOrificeorifice_opening_smoothzc_3_ZC ;
real_T
STATE_1_Servovalve2Main_ValveOrifice_PAOrificeorifice_opening_smoothzc_4_ZC ;
real_T
 STATE_1_Servovalve2Main_ValveOrifice_PASpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZC
; real_T
 STATE_1_Servovalve2Main_ValveOrifice_PASpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZC
; real_T
STATE_1_Servovalve2Main_ValveOrifice_PBOrificeorifice_opening_smoothzc_2_ZC ;
real_T
STATE_1_Servovalve2Main_ValveOrifice_PBOrificeorifice_opening_smoothzc_3_ZC ;
real_T
 STATE_1_Servovalve2Main_ValveOrifice_PBSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZC
; real_T
 STATE_1_Servovalve2Main_ValveOrifice_PBSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZC
; real_T STATE_1_Servovalve2Nozzle_ANozzle_Azc_1_ZC ; real_T
STATE_1_Servovalve2Nozzle_ANozzle_Azc_2_ZC ; real_T
STATE_1_Servovalve2Nozzle_BNozzle_Bzc_1_ZC ; real_T
STATE_1_Servovalve2Nozzle_BNozzle_Bzc_2_ZC ; } ZCV_pha_0_9_T ; typedef struct
{ ZCSigState Relay_RelayZC_ZCE ; ZCSigState Saturation_UprLim_ZCE ;
ZCSigState Saturation_LwrLim_ZCE ; ZCSigState Relay1_RelayZC_ZCE ; ZCSigState
RelationalOperator_RelopInput_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_1_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_2_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_3_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_4_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_1_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_2_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_3_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_4_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Azc_1_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_1_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_2_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Azc_2_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Azc_3_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_4_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_5_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_6_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_7_ZCE ; ZCSigState
STATE_1_Double_Acting_Actuator_TLchamber_Bzc_8_ZCE ; ZCSigState
STATE_1_Pressure_Relief_Valve_TLrelief_valvezc_1_ZCE ; ZCSigState
STATE_1_Pressure_Relief_Valve_TLrelief_valvezc_2_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_5_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_6_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_7_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_PAzc_8_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TLder_liquid_volumezc_1_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TLder_liquid_volumezc_2_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TLzc_3_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TLzc_4_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TLzc_5_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_5_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_PAzc_6_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TLzc_6_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TLzc_7_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1der_liquid_volumezc_3_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1der_liquid_volumezc_4_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_5_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_6_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_7_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_8_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_9_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_10_ZCE ; ZCSigState
STATE_1_Gas_Charged_Accumulator_TL1zc_11_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_ATzc_7_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TL1orifice_ATzc_8_ZCE ; ZCSigState
STATE_1_Servovalve2Armature_Hard_Stopzc_1_ZCE ; ZCSigState
STATE_1_Servovalve2Armature_Hard_Stopzc_2_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_PAOrificezc_1_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveSpool_Side_ASpool_Side_Azc_1_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveSpool_Side_BSpool_Side_Bzc_1_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_PAOrificezc_2_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_PBOrificezc_1_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveSpool_Side_ASpool_Side_Azc_2_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveSpool_Side_BSpool_Side_Bzc_2_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_ATzc_9_ZCE ; ZCSigState
STATE_1_x3_Way_Directional_Valve_TLorifice_ATzc_10_ZCE ; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_ATOrificeorifice_opening_smoothzc_1_ZCE
; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_ATOrificeorifice_opening_smoothzc_2_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_ATSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_ATSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZCE
; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_BTOrificeorifice_opening_smoothzc_1_ZCE
; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_BTOrificeorifice_opening_smoothzc_2_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_BTSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_BTSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZCE
; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_PAOrificeorifice_opening_smoothzc_3_ZCE
; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_PAOrificeorifice_opening_smoothzc_4_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_PASpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_PASpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZCE
; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_PBOrificeorifice_opening_smoothzc_2_ZCE
; ZCSigState
STATE_1_Servovalve2Main_ValveOrifice_PBOrificeorifice_opening_smoothzc_3_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_PBSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_1_ZCE
; ZCSigState
 STATE_1_Servovalve2Main_ValveOrifice_PBSpool_Orifice_Hydraulic_Forceorifice_opening_smoothzc_2_ZCE
; ZCSigState STATE_1_Servovalve2Nozzle_ANozzle_Azc_1_ZCE ; ZCSigState
STATE_1_Servovalve2Nozzle_ANozzle_Azc_2_ZCE ; ZCSigState
STATE_1_Servovalve2Nozzle_BNozzle_Bzc_1_ZCE ; ZCSigState
STATE_1_Servovalve2Nozzle_BNozzle_Bzc_2_ZCE ; } PrevZCX_pha_0_9_T ; typedef
struct { int_T ir [ 45 ] ; int_T jc [ 132 ] ; real_T pr [ 45 ] ; }
MassMatrix_pha_0_9_T ; struct P_pha_0_9_T_ { real_T P_0 ; real_T P_1 ; real_T
P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 [ 5 ] ;
real_T P_8 [ 5 ] ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ;
real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T
P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ;
real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T
P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ;
real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T
P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ;
real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T
P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ;
real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; } ; extern
P_pha_0_9_T pha_0_9_rtDefaultP ;
#endif
