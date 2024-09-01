#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_obs_act.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_obs_act ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t75 , NeDsMethodOutput * t76 ) { ETTS0 b_efOut ; ETTS0
d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 i_efOut ; ETTS0
j_efOut ; ETTS0 l_efOut ; ETTS0 m_efOut ; ETTS0 t4 ; ETTS0 t7 ; ETTS0 t8 ;
PmRealVector out ; real_T t51 [ 755 ] ; real_T X [ 126 ] ; real_T c_efOut [ 1
] ; real_T f_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T k_efOut [ 1 ] ;
real_T n_efOut [ 1 ] ; real_T t56 [ 1 ] ; real_T D_idx_0 ; real_T D_idx_1 ;
real_T D_idx_2 ; real_T D_idx_3 ; real_T D_idx_4 ; real_T
Double_Acting_Actuator_TL_R_v ; real_T Fixed_Displacement_Motor_TL_Phi_B ;
real_T Gas_Charged_Accumulator_TL_convection_A_mdot ; real_T
Gas_Charged_Accumulator_TL_liquid_mass ; real_T Interface_TL_IL1_Phi_TL ;
real_T Interface_TL_IL2_Phi_TL ; real_T Interface_TL_IL2_convection_TL_mdot ;
real_T Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ; real_T
Qbt_Flow_Rate_Sensor_IL_V ; real_T Servovalve2_Fixed_Orifice_A_B_p ; real_T
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A ; real_T
Servovalve2_Fixed_Orifice_B_B_p ; real_T
Servovalve2_Main_Valve_Orifice_BT_Orifice_mdot_A ; real_T U_idx_0 ; real_T
U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ; real_T intrm_sf_mf_25 ; real_T
t55_idx_0 ; real_T t57 ; real_T t58 ; real_T t61 ; real_T t62 ; real_T t63 ;
real_T t67 ; real_T t68 ; real_T t70 ; size_t t10 [ 1 ] ; size_t t11 [ 1 ] ;
size_t t13 [ 1 ] ; int32_T b ; U_idx_0 = t75 -> mU . mX [ 0 ] ; U_idx_1 = t75
-> mU . mX [ 1 ] ; U_idx_2 = t75 -> mU . mX [ 2 ] ; U_idx_3 = t75 -> mU . mX
[ 3 ] ; for ( b = 0 ; b < 126 ; b ++ ) { X [ b ] = t75 -> mX . mX [ b ] ; }
D_idx_0 = t75 -> mD . mX [ 0 ] ; D_idx_1 = t75 -> mD . mX [ 1 ] ; D_idx_2 =
t75 -> mD . mX [ 2 ] ; D_idx_3 = t75 -> mD . mX [ 3 ] ; D_idx_4 = t75 -> mD .
mX [ 4 ] ; out = t76 -> mOBS_ACT ; Double_Acting_Actuator_TL_R_v = X [ 38ULL
] * 0.001 ; Fixed_Displacement_Motor_TL_Phi_B = ( - X [ 31ULL ] - X [ 56ULL ]
) - X [ 57ULL ] ; t57 = ( - X [ 64ULL ] - X [ 65ULL ] ) + X [ 66ULL ] ;
Gas_Charged_Accumulator_TL_convection_A_mdot = ( - X [ 68ULL ] - X [ 69ULL ]
) + X [ 70ULL ] ; t56 [ 0ULL ] = X [ 10ULL ] ; t10 [ 0 ] = 11ULL ; t11 [ 0 ]
= 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut
. mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t56 [ 0ULL ] , & t10 [ 0ULL ] , & t11 [ 0ULL ] ) ; t8 =
efOut ; t56 [ 0ULL ] = X [ 11ULL ] ; t13 [ 0 ] = 12ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t56 [ 0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t7 =
b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t10 [ 0ULL ] , &
t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t55_idx_0 = c_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_liquid_mass = X [ 72ULL ] * t55_idx_0 * 0.001 ;
t56 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup ( & d_efOut .
mField0 [ 0ULL ] , & d_efOut . mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t56 [ 0ULL ] , & t10 [
0ULL ] , & t11 [ 0ULL ] ) ; t4 = d_efOut ; t56 [ 0ULL ] = X [ 13ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t56 [ 0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t8 =
e_efOut ; tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t10 [ 0ULL ] , &
t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t55_idx_0 = f_efOut [ 0 ] ; t58 = X [ 75ULL
] * t55_idx_0 * 0.001 ; Interface_TL_IL1_Phi_TL = ( - X [ 55ULL ] - X [ 77ULL
] ) + X [ 56ULL ] ; Interface_TL_IL2_Phi_TL = - X [ 66ULL ] + X [ 31ULL ] ;
Interface_TL_IL2_convection_TL_mdot = - X [ 70ULL ] + X [ 33ULL ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot = ( - X [ 33ULL ] - X
[ 87ULL ] ) + X [ 59ULL ] ; Qbt_Flow_Rate_Sensor_IL_V = - X [ 79ULL ] /
993.22507500000017 * 1.0E+6 ; intrm_sf_mf_25 = X [ 30ULL ] >= 1.0E-5 ? X [
30ULL ] : 1.0E-5 ; t61 = 1.01325 / ( intrm_sf_mf_25 == 0.0 ? 1.0E-16 :
intrm_sf_mf_25 ) * 0.0050251256281407036 ; intrm_sf_mf_25 = pmf_exp ( (
intrm_sf_mf_25 - 1.01325 ) / 21791.0 ) ; t63 = 1.0 / ( intrm_sf_mf_25 == 0.0
? 1.0E-16 : intrm_sf_mf_25 ) + t61 ; intrm_sf_mf_25 = 998.21615577889452 / (
t63 == 0.0 ? 1.0E-16 : t63 ) ; intrm_sf_mf_25 =
Interface_TL_IL2_convection_TL_mdot / ( intrm_sf_mf_25 == 0.0 ? 1.0E-16 :
intrm_sf_mf_25 ) * 1.0E+6 ; t61 = ( - X [ 33ULL ] - X [ 79ULL ] ) - X [ 87ULL
] ; t62 = X [ 64ULL ] + X [ 65ULL ] ; t63 = X [ 68ULL ] + X [ 69ULL ] ;
Servovalve2_Fixed_Orifice_A_B_p = X [ 101ULL ] * - 0.12820512820512822 +
1.01325 ; Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A = ( ( ( - X [
102ULL ] - X [ 103ULL ] ) - X [ 104ULL ] ) - X [ 70ULL ] ) + X [ 33ULL ] ;
Servovalve2_Fixed_Orifice_B_B_p = X [ 105ULL ] * 0.12820512820512822 +
1.01325 ; Servovalve2_Main_Valve_Orifice_BT_Orifice_mdot_A = - X [ 48ULL ] +
X [ 104ULL ] ; flow_IL_sensor1_Flow_Rate_Sensor_IL_V = X [ 4ULL ] >= 1.0E-5 ?
X [ 4ULL ] : 1.0E-5 ; t55_idx_0 = 1.01325 / (
flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ? 1.0E-16 :
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) * 0.0050251256281407036 ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = pmf_exp ( (
flow_IL_sensor1_Flow_Rate_Sensor_IL_V - 1.01325 ) / 21791.0 ) ; t67 = 1.0 / (
flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ? 1.0E-16 :
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) + t55_idx_0 ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = 998.21615577889452 / ( t67 == 0.0 ?
1.0E-16 : t67 ) ; t67 = ( ( ( - X [ 79ULL ] - X [ 103ULL ] ) - X [ 104ULL ] )
- X [ 113ULL ] ) + X [ 48ULL ] ; flow_IL_sensor1_Flow_Rate_Sensor_IL_V = X [
48ULL ] / ( flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ? 1.0E-16 :
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) * 1.0E+6 ; t56 [ 0ULL ] = X [ 63ULL ]
; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t56 [ 0ULL ] , & t10 [ 0ULL ] , & t11 [ 0ULL ] ) ; t8 =
g_efOut ; tlu2_2d_linear_linear_value ( & h_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t10 [ 0ULL ] , &
t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t55_idx_0 = h_efOut [ 0 ] ; t68 = -
Gas_Charged_Accumulator_TL_convection_A_mdot / ( t55_idx_0 == 0.0 ? 1.0E-16 :
t55_idx_0 ) * 1.0E+6 ; t56 [ 0ULL ] = X [ 29ULL ] ;
tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t56 [ 0ULL ] , & t10 [ 0ULL ] , & t11 [ 0ULL ] ) ; t4 =
i_efOut ; t56 [ 0ULL ] = X [ 30ULL ] ; tlu2_linear_linear_prelookup ( &
j_efOut . mField0 [ 0ULL ] , & j_efOut . mField1 [ 0ULL ] , & j_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t56 [
0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t8 = j_efOut ;
tlu2_2d_linear_linear_value ( & k_efOut [ 0ULL ] , & t4 . mField0 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t10 [ 0ULL ] , & t13 [ 0ULL
] , & t11 [ 0ULL ] ) ; t55_idx_0 = k_efOut [ 0 ] ; t55_idx_0 = X [ 33ULL ] /
( t55_idx_0 == 0.0 ? 1.0E-16 : t55_idx_0 ) * 1.0E+6 ; t56 [ 0ULL ] = X [
52ULL ] ; tlu2_linear_linear_prelookup ( & l_efOut . mField0 [ 0ULL ] , &
l_efOut . mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t56 [ 0ULL ] , & t10 [ 0ULL ] ,
& t11 [ 0ULL ] ) ; t4 = l_efOut ; t56 [ 0 ] = 1.01325 ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t56 [ 0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t8 =
m_efOut ; tlu2_2d_linear_linear_value ( & n_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t10 [ 0ULL ] , &
t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t56 [ 0 ] = n_efOut [ 0 ] ; t70 = t56 [
0ULL ] ; t70 = Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot / (
t70 == 0.0 ? 1.0E-16 : t70 ) * 1.0E+6 ; t51 [ 0ULL ] = X [ 25ULL ] ; t51 [
1ULL ] = X [ 26ULL ] * 0.1 ; t51 [ 2ULL ] = X [ 25ULL ] ; t51 [ 3ULL ] = X [
26ULL ] * 0.1 ; t51 [ 4ULL ] = X [ 27ULL ] ; t51 [ 5ULL ] = X [ 28ULL ] * 0.1
; t51 [ 6ULL ] = X [ 29ULL ] ; t51 [ 7ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 8ULL
] = X [ 31ULL ] ; t51 [ 9ULL ] = - X [ 31ULL ] ; t51 [ 10ULL ] = X [ 27ULL ]
; t51 [ 11ULL ] = X [ 28ULL ] * 0.1 ; t51 [ 12ULL ] = X [ 31ULL ] ; t51 [
13ULL ] = X [ 32ULL ] ; t51 [ 14ULL ] = X [ 33ULL ] ; t51 [ 15ULL ] = X [
34ULL ] ; t51 [ 16ULL ] = X [ 29ULL ] ; t51 [ 17ULL ] = X [ 30ULL ] * 0.1 ;
t51 [ 18ULL ] = - X [ 31ULL ] ; t51 [ 19ULL ] = X [ 35ULL ] ; t51 [ 20ULL ] =
- X [ 33ULL ] ; t51 [ 21ULL ] = X [ 34ULL ] ; t51 [ 22ULL ] = X [ 33ULL ] ;
t51 [ 23ULL ] = - X [ 33ULL ] ; t51 [ 24ULL ] = X [ 36ULL ] ; t51 [ 25ULL ] =
X [ 1ULL ] * 0.1 ; t51 [ 26ULL ] = X [ 37ULL ] ; t51 [ 27ULL ] = X [ 4ULL ] *
0.1 ; t51 [ 28ULL ] = 0.0 ; t51 [ 29ULL ] = X [ 0ULL ] ; t51 [ 30ULL ] = X [
0ULL ] ; t51 [ 31ULL ] = Double_Acting_Actuator_TL_R_v ; t51 [ 32ULL ] = X [
36ULL ] ; t51 [ 33ULL ] = X [ 1ULL ] * 0.1 ; t51 [ 34ULL ] = 0.0 ; t51 [
35ULL ] = X [ 0ULL ] ; t51 [ 36ULL ] = X [ 39ULL ] ; t51 [ 37ULL ] = - X [
40ULL ] - X [ 41ULL ] ; t51 [ 38ULL ] = Double_Acting_Actuator_TL_R_v ; t51 [
39ULL ] = X [ 0ULL ] ; t51 [ 40ULL ] = X [ 1ULL ] * 0.1 ; t51 [ 41ULL ] = X [
36ULL ] ; t51 [ 42ULL ] = X [ 1ULL ] * 0.1 ; t51 [ 43ULL ] = X [ 39ULL ] ;
t51 [ 44ULL ] = X [ 42ULL ] ; t51 [ 45ULL ] = X [ 43ULL ] ; t51 [ 46ULL ] = X
[ 44ULL ] ; t51 [ 47ULL ] = X [ 2ULL ] ; t51 [ 48ULL ] = X [ 45ULL ] ; t51 [
49ULL ] = X [ 43ULL ] ; t51 [ 50ULL ] = 0.0 ; t51 [ 51ULL ] = X [ 37ULL ] ;
t51 [ 52ULL ] = X [ 4ULL ] * 0.1 ; t51 [ 53ULL ] = 0.0 ; t51 [ 54ULL ] = X [
0ULL ] ; t51 [ 55ULL ] = X [ 46ULL ] ; t51 [ 56ULL ] = X [ 40ULL ] ; t51 [
57ULL ] = Double_Acting_Actuator_TL_R_v ; t51 [ 58ULL ] = X [ 3ULL ] ; t51 [
59ULL ] = X [ 4ULL ] * 0.1 ; t51 [ 60ULL ] = X [ 37ULL ] ; t51 [ 61ULL ] = X
[ 4ULL ] * 0.1 ; t51 [ 62ULL ] = X [ 46ULL ] ; t51 [ 63ULL ] = X [ 47ULL ] ;
t51 [ 64ULL ] = X [ 48ULL ] ; t51 [ 65ULL ] = X [ 49ULL ] ; t51 [ 66ULL ] = X
[ 5ULL ] ; t51 [ 67ULL ] = X [ 50ULL ] ; t51 [ 68ULL ] = X [ 48ULL ] ; t51 [
69ULL ] = - 0.1 ; t51 [ 70ULL ] = 0.0 ; t51 [ 71ULL ] =
Double_Acting_Actuator_TL_R_v ; t51 [ 72ULL ] = X [ 51ULL ] ; t51 [ 73ULL ] =
Double_Acting_Actuator_TL_R_v ; t51 [ 74ULL ] = 0.0 ; t51 [ 75ULL ] = X [
6ULL ] ; t51 [ 76ULL ] = 0.0 ; t51 [ 77ULL ] = X [ 7ULL ] ; t51 [ 78ULL ] =
0.0 ; t51 [ 79ULL ] = 0.0 ; t51 [ 80ULL ] = X [ 7ULL ] ; t51 [ 81ULL ] =
Double_Acting_Actuator_TL_R_v ; t51 [ 82ULL ] = Double_Acting_Actuator_TL_R_v
; t51 [ 83ULL ] = X [ 7ULL ] ; t51 [ 84ULL ] = X [ 7ULL ] ; t51 [ 85ULL ] = X
[ 52ULL ] ; t51 [ 86ULL ] = 0.101325 ; t51 [ 87ULL ] = X [ 53ULL ] ; t51 [
88ULL ] = X [ 54ULL ] * 0.1 ; t51 [ 89ULL ] = 0.0 ; t51 [ 90ULL ] = 0.0 ; t51
[ 91ULL ] = 0.0 ; t51 [ 92ULL ] = 0.0 ; t51 [ 93ULL ] = 0.0 ; t51 [ 94ULL ] =
X [ 55ULL ] ; t51 [ 95ULL ] = Fixed_Displacement_Motor_TL_Phi_B ; t51 [ 96ULL
] = X [ 8ULL ] ; t51 [ 97ULL ] = X [ 52ULL ] ; t51 [ 98ULL ] = 0.101325 ; t51
[ 99ULL ] = X [ 55ULL ] ; t51 [ 100ULL ] = X [ 58ULL ] ; t51 [ 101ULL ] = X [
59ULL ] ; t51 [ 102ULL ] = X [ 60ULL ] ; t51 [ 103ULL ] = X [ 53ULL ] ; t51 [
104ULL ] = X [ 54ULL ] * 0.1 ; t51 [ 105ULL ] =
Fixed_Displacement_Motor_TL_Phi_B ; t51 [ 106ULL ] = X [ 61ULL ] ; t51 [
107ULL ] = - X [ 59ULL ] ; t51 [ 108ULL ] = X [ 60ULL ] ; t51 [ 109ULL ] = X
[ 62ULL ] ; t51 [ 110ULL ] = X [ 59ULL ] ; t51 [ 111ULL ] = - X [ 59ULL ] ;
t51 [ 112ULL ] = 0.0 ; t51 [ 113ULL ] = X [ 9ULL ] ; t51 [ 114ULL ] = U_idx_0
; t51 [ 115ULL ] = - U_idx_0 ; t51 [ 116ULL ] = - X [ 9ULL ] ; t51 [ 117ULL ]
= X [ 63ULL ] ; t51 [ 118ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 119ULL ] = X [
10ULL ] ; t51 [ 120ULL ] = t57 ; t51 [ 121ULL ] = 0.0 ; t51 [ 122ULL ] = X [
10ULL ] ; t51 [ 123ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 124ULL ] = X [ 72ULL ] *
0.001 ; t51 [ 125ULL ] = Gas_Charged_Accumulator_TL_convection_A_mdot ; t51 [
126ULL ] = X [ 63ULL ] ; t51 [ 127ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 128ULL ]
= t57 ; t51 [ 129ULL ] = X [ 67ULL ] ; t51 [ 130ULL ] =
Gas_Charged_Accumulator_TL_convection_A_mdot ; t51 [ 131ULL ] = X [ 71ULL ] ;
t51 [ 132ULL ] = Gas_Charged_Accumulator_TL_liquid_mass ; t51 [ 133ULL ] = X
[ 36ULL ] ; t51 [ 134ULL ] = X [ 1ULL ] * 0.1 ; t51 [ 135ULL ] = X [ 0ULL ] ;
t51 [ 136ULL ] = - X [ 39ULL ] ; t51 [ 137ULL ] = X [ 41ULL ] ; t51 [ 138ULL
] = X [ 12ULL ] ; t51 [ 139ULL ] = X [ 13ULL ] * 0.1 ; t51 [ 140ULL ] = X [
75ULL ] * 0.001 ; t51 [ 141ULL ] = - X [ 43ULL ] ; t51 [ 142ULL ] = X [ 36ULL
] ; t51 [ 143ULL ] = X [ 1ULL ] * 0.1 ; t51 [ 144ULL ] = - X [ 39ULL ] ; t51
[ 145ULL ] = X [ 73ULL ] ; t51 [ 146ULL ] = - X [ 43ULL ] ; t51 [ 147ULL ] =
X [ 74ULL ] ; t51 [ 148ULL ] = t58 ; t51 [ 149ULL ] = 0.0 ; t51 [ 150ULL ] =
X [ 8ULL ] ; t51 [ 151ULL ] = U_idx_1 ; t51 [ 152ULL ] = - X [ 76ULL ] + X [
62ULL ] ; t51 [ 153ULL ] = X [ 8ULL ] ; t51 [ 154ULL ] = X [ 8ULL ] ; t51 [
155ULL ] = X [ 8ULL ] ; t51 [ 156ULL ] = X [ 76ULL ] ; t51 [ 157ULL ] = X [
8ULL ] ; t51 [ 158ULL ] = 0.0 ; t51 [ 159ULL ] = 0.101325 ; t51 [ 160ULL ] =
Interface_TL_IL1_Phi_TL ; t51 [ 161ULL ] = 0.0 ; t51 [ 162ULL ] = X [ 52ULL ]
; t51 [ 163ULL ] = 0.101325 ; t51 [ 164ULL ] = 293.15 ; t51 [ 165ULL ] = X [
52ULL ] ; t51 [ 166ULL ] = 0.101325 ; t51 [ 167ULL ] =
Interface_TL_IL1_Phi_TL ; t51 [ 168ULL ] = X [ 78ULL ] ; t51 [ 169ULL ] = X [
79ULL ] ; t51 [ 170ULL ] = 83.9060317352855 ; t51 [ 171ULL ] = - X [ 79ULL ]
; t51 [ 172ULL ] = X [ 79ULL ] ; t51 [ 173ULL ] = 0.0 ; t51 [ 174ULL ] = X [
30ULL ] * 0.1 ; t51 [ 175ULL ] = Interface_TL_IL2_Phi_TL ; t51 [ 176ULL ] =
0.0 ; t51 [ 177ULL ] = X [ 29ULL ] ; t51 [ 178ULL ] = X [ 30ULL ] * 0.1 ; t51
[ 179ULL ] = 293.15 ; t51 [ 180ULL ] = X [ 29ULL ] ; t51 [ 181ULL ] = X [
30ULL ] * 0.1 ; t51 [ 182ULL ] = Interface_TL_IL2_Phi_TL ; t51 [ 183ULL ] = X
[ 80ULL ] ; t51 [ 184ULL ] = Interface_TL_IL2_convection_TL_mdot ; t51 [
185ULL ] = X [ 81ULL ] ; t51 [ 186ULL ] = -
Interface_TL_IL2_convection_TL_mdot ; t51 [ 187ULL ] =
Interface_TL_IL2_convection_TL_mdot ; t51 [ 188ULL ] = 0.0 ; t51 [ 189ULL ] =
X [ 4ULL ] * 0.1 ; t51 [ 190ULL ] = - X [ 46ULL ] ; t51 [ 191ULL ] = 0.0 ;
t51 [ 192ULL ] = X [ 37ULL ] ; t51 [ 193ULL ] = X [ 4ULL ] * 0.1 ; t51 [
194ULL ] = 293.15 ; t51 [ 195ULL ] = X [ 37ULL ] ; t51 [ 196ULL ] = X [ 4ULL
] * 0.1 ; t51 [ 197ULL ] = - X [ 46ULL ] ; t51 [ 198ULL ] = X [ 82ULL ] ; t51
[ 199ULL ] = - X [ 48ULL ] ; t51 [ 200ULL ] = X [ 83ULL ] ; t51 [ 201ULL ] =
X [ 48ULL ] ; t51 [ 202ULL ] = - X [ 48ULL ] ; t51 [ 203ULL ] = 0.0 ; t51 [
204ULL ] = X [ 26ULL ] * 0.1 ; t51 [ 205ULL ] = 0.0 ; t51 [ 206ULL ] = 0.0 ;
t51 [ 207ULL ] = X [ 25ULL ] ; t51 [ 208ULL ] = X [ 26ULL ] * 0.1 ; t51 [
209ULL ] = 293.15 ; t51 [ 210ULL ] = X [ 25ULL ] ; t51 [ 211ULL ] = X [ 26ULL
] * 0.1 ; t51 [ 212ULL ] = 0.0 ; t51 [ 213ULL ] = X [ 84ULL ] ; t51 [ 214ULL
] = 0.0 ; t51 [ 215ULL ] = X [ 85ULL ] ; t51 [ 216ULL ] = 0.0 ; t51 [ 217ULL
] = 0.0 ; t51 [ 218ULL ] = 0.0 ; t51 [ 219ULL ] = 0.0 ; t51 [ 220ULL ] = 0.0
; t51 [ 221ULL ] = 0.0 ; t51 [ 222ULL ] = 0.0 ; t51 [ 223ULL ] = X [ 10ULL ]
; t51 [ 224ULL ] = X [ 10ULL ] ; t51 [ 225ULL ] = X [ 0ULL ] ; t51 [ 226ULL ]
= X [ 0ULL ] ; t51 [ 227ULL ] = X [ 53ULL ] ; t51 [ 228ULL ] = X [ 54ULL ] *
0.1 ; t51 [ 229ULL ] = X [ 52ULL ] ; t51 [ 230ULL ] = 0.101325 ; t51 [ 231ULL
] = X [ 53ULL ] ; t51 [ 232ULL ] = X [ 54ULL ] * 0.1 ; t51 [ 233ULL ] = X [
52ULL ] ; t51 [ 234ULL ] = 0.101325 ; t51 [ 235ULL ] = X [ 56ULL ] ; t51 [
236ULL ] = - X [ 56ULL ] ; t51 [ 237ULL ] = X [ 53ULL ] ; t51 [ 238ULL ] = X
[ 54ULL ] * 0.1 ; t51 [ 239ULL ] = X [ 56ULL ] ; t51 [ 240ULL ] = X [ 86ULL ]
; t51 [ 241ULL ] = Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ;
t51 [ 242ULL ] = X [ 88ULL ] ; t51 [ 243ULL ] = X [ 52ULL ] ; t51 [ 244ULL ]
= 0.101325 ; t51 [ 245ULL ] = - X [ 56ULL ] ; t51 [ 246ULL ] = X [ 89ULL ] ;
t51 [ 247ULL ] = - Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ;
t51 [ 248ULL ] = X [ 88ULL ] ; t51 [ 249ULL ] = X [ 53ULL ] ; t51 [ 250ULL ]
= X [ 54ULL ] * 0.1 ; t51 [ 251ULL ] = X [ 52ULL ] ; t51 [ 252ULL ] =
0.101325 ; t51 [ 253ULL ] =
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ; t51 [ 254ULL ] = -
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ; t51 [ 255ULL ] = X
[ 63ULL ] ; t51 [ 256ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 257ULL ] = X [ 90ULL ]
; t51 [ 258ULL ] = 0.101325 ; t51 [ 259ULL ] = X [ 63ULL ] ; t51 [ 260ULL ] =
X [ 11ULL ] * 0.1 ; t51 [ 261ULL ] = X [ 90ULL ] ; t51 [ 262ULL ] = 0.101325
; t51 [ 263ULL ] = X [ 64ULL ] ; t51 [ 264ULL ] = - X [ 64ULL ] ; t51 [
265ULL ] = X [ 63ULL ] ; t51 [ 266ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 267ULL ]
= X [ 64ULL ] ; t51 [ 268ULL ] = X [ 91ULL ] ; t51 [ 269ULL ] = X [ 68ULL ] ;
t51 [ 270ULL ] = X [ 92ULL ] ; t51 [ 271ULL ] = X [ 90ULL ] ; t51 [ 272ULL ]
= 0.101325 ; t51 [ 273ULL ] = - X [ 64ULL ] ; t51 [ 274ULL ] = X [ 93ULL ] ;
t51 [ 275ULL ] = - X [ 68ULL ] ; t51 [ 276ULL ] = X [ 92ULL ] ; t51 [ 277ULL
] = X [ 63ULL ] ; t51 [ 278ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 279ULL ] = X [
90ULL ] ; t51 [ 280ULL ] = 0.101325 ; t51 [ 281ULL ] = X [ 68ULL ] ; t51 [
282ULL ] = - X [ 68ULL ] ; t51 [ 283ULL ] = 0.101325 ; t51 [ 284ULL ] =
0.101325 ; t51 [ 285ULL ] = 0.101325 ; t51 [ 286ULL ] = 0.101325 ; t51 [
287ULL ] = - X [ 79ULL ] ; t51 [ 288ULL ] = Qbt_Flow_Rate_Sensor_IL_V *
1.0E-6 ; t51 [ 289ULL ] = - X [ 79ULL ] ; t51 [ 290ULL ] =
Qbt_Flow_Rate_Sensor_IL_V * 1.0E-6 ; t51 [ 291ULL ] = X [ 30ULL ] * 0.1 ; t51
[ 292ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 293ULL ] = X [ 30ULL ] * 0.1 ; t51 [
294ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 295ULL ] =
Interface_TL_IL2_convection_TL_mdot ; t51 [ 296ULL ] = intrm_sf_mf_25 *
1.0E-6 ; t51 [ 297ULL ] = Interface_TL_IL2_convection_TL_mdot ; t51 [ 298ULL
] = intrm_sf_mf_25 * 1.0E-6 ; t51 [ 299ULL ] = X [ 52ULL ] ; t51 [ 300ULL ] =
0.101325 ; t51 [ 301ULL ] = X [ 77ULL ] ; t51 [ 302ULL ] = 293.15 ; t51 [
303ULL ] = X [ 52ULL ] ; t51 [ 304ULL ] = 0.101325 ; t51 [ 305ULL ] = X [
77ULL ] ; t51 [ 306ULL ] = X [ 94ULL ] ; t51 [ 307ULL ] = t61 ; t51 [ 308ULL
] = 83.9060317352855 ; t51 [ 309ULL ] = 0.101325 ; t51 [ 310ULL ] = t61 ; t51
[ 311ULL ] = X [ 95ULL ] ; t51 [ 312ULL ] = 0.101325 ; t51 [ 313ULL ] = X [
57ULL ] ; t51 [ 314ULL ] = 293.15 ; t51 [ 315ULL ] = X [ 95ULL ] ; t51 [
316ULL ] = 0.101325 ; t51 [ 317ULL ] = X [ 57ULL ] ; t51 [ 318ULL ] = X [
96ULL ] ; t51 [ 319ULL ] = X [ 87ULL ] ; t51 [ 320ULL ] = 83.9060317352855 ;
t51 [ 321ULL ] = 0.101325 ; t51 [ 322ULL ] = X [ 87ULL ] ; t51 [ 323ULL ] = X
[ 90ULL ] ; t51 [ 324ULL ] = 0.101325 ; t51 [ 325ULL ] = t62 ; t51 [ 326ULL ]
= 293.15 ; t51 [ 327ULL ] = X [ 90ULL ] ; t51 [ 328ULL ] = 0.101325 ; t51 [
329ULL ] = t62 ; t51 [ 330ULL ] = X [ 97ULL ] ; t51 [ 331ULL ] = t63 ; t51 [
332ULL ] = 83.9060317352855 ; t51 [ 333ULL ] = 0.101325 ; t51 [ 334ULL ] =
t63 ; t51 [ 335ULL ] = X [ 26ULL ] * 0.1 ; t51 [ 336ULL ] = 0.0 ; t51 [
337ULL ] = X [ 9ULL ] ; t51 [ 338ULL ] = X [ 98ULL ] ; t51 [ 339ULL ] = X [
98ULL ] * 0.08 ; t51 [ 340ULL ] = 0.0 ; t51 [ 341ULL ] = D_idx_0 ; t51 [
342ULL ] = X [ 9ULL ] ; t51 [ 343ULL ] = X [ 99ULL ] ; t51 [ 344ULL ] = X [
14ULL ] ; t51 [ 345ULL ] = X [ 9ULL ] ; t51 [ 346ULL ] = X [ 9ULL ] ; t51 [
347ULL ] = X [ 9ULL ] ; t51 [ 348ULL ] = X [ 100ULL ] ; t51 [ 349ULL ] = X [
9ULL ] ; t51 [ 350ULL ] = 0.0 ; t51 [ 351ULL ] = 0.0 ; t51 [ 352ULL ] = X [
15ULL ] ; t51 [ 353ULL ] = X [ 9ULL ] ; t51 [ 354ULL ] = X [ 9ULL ] ; t51 [
355ULL ] = X [ 15ULL ] ; t51 [ 356ULL ] = X [ 4ULL ] * 0.1 ; t51 [ 357ULL ] =
X [ 9ULL ] ; t51 [ 358ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 359ULL ] =
Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t51 [ 360ULL ] = X [ 30ULL ] * 0.1 ;
t51 [ 361ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t51 [ 362ULL ] = 0.0
; t51 [ 363ULL ] = D_idx_1 ; t51 [ 364ULL ] = 0.0 ; t51 [ 365ULL ] =
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A ; t51 [ 366ULL ] = -
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A ; t51 [ 367ULL ] = X [
30ULL ] * 0.1 ; t51 [ 368ULL ] = Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51
[ 369ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 370ULL ] =
Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51 [ 371ULL ] = 0.0 ; t51 [ 372ULL ]
= D_idx_2 ; t51 [ 373ULL ] = 0.0 ; t51 [ 374ULL ] = X [ 102ULL ] ; t51 [
375ULL ] = - X [ 102ULL ] ; t51 [ 376ULL ] = X [ 16ULL ] ; t51 [ 377ULL ] = X
[ 9ULL ] ; t51 [ 378ULL ] = X [ 106ULL ] ; t51 [ 379ULL ] = X [ 106ULL ] *
0.0196078431372549 ; t51 [ 380ULL ] = X [ 16ULL ] ; t51 [ 381ULL ] = X [ 9ULL
] ; t51 [ 382ULL ] = X [ 17ULL ] * 1200.0 ; t51 [ 383ULL ] = - X [ 16ULL ] +
X [ 9ULL ] ; t51 [ 384ULL ] = X [ 17ULL ] ; t51 [ 385ULL ] = 0.0 ; t51 [
386ULL ] = X [ 26ULL ] * 0.1 ; t51 [ 387ULL ] =
Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t51 [ 388ULL ] = X [ 4ULL ] * 0.1 ;
t51 [ 389ULL ] = Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51 [ 390ULL ] = X [
16ULL ] ; t51 [ 391ULL ] = 0.0 ; t51 [ 392ULL ] = 0.0 ; t51 [ 393ULL ] = X [
26ULL ] * 0.1 ; t51 [ 394ULL ] = 0.101325 ; t51 [ 395ULL ] = 0.0 ; t51 [
396ULL ] = X [ 16ULL ] ; t51 [ 397ULL ] = X [ 107ULL ] ; t51 [ 398ULL ] = - X
[ 107ULL ] ; t51 [ 399ULL ] = - X [ 16ULL ] ; t51 [ 400ULL ] = 0.0 ; t51 [
401ULL ] = 0.0 ; t51 [ 402ULL ] = 0.0 ; t51 [ 403ULL ] = 0.0 ; t51 [ 404ULL ]
= X [ 18ULL ] ; t51 [ 405ULL ] = X [ 16ULL ] ; t51 [ 406ULL ] = X [ 16ULL ] ;
t51 [ 407ULL ] = X [ 18ULL ] ; t51 [ 408ULL ] = X [ 26ULL ] * 0.1 ; t51 [
409ULL ] = 0.101325 ; t51 [ 410ULL ] = 0.0 ; t51 [ 411ULL ] = X [ 18ULL ] ;
t51 [ 412ULL ] = X [ 103ULL ] ; t51 [ 413ULL ] = - X [ 103ULL ] ; t51 [
414ULL ] = X [ 16ULL ] ; t51 [ 415ULL ] = 0.101325 ; t51 [ 416ULL ] =
0.101325 ; t51 [ 417ULL ] = X [ 107ULL ] ; t51 [ 418ULL ] = X [ 18ULL ] ; t51
[ 419ULL ] = X [ 103ULL ] ; t51 [ 420ULL ] = - X [ 103ULL ] ; t51 [ 421ULL ]
= X [ 4ULL ] * 0.1 ; t51 [ 422ULL ] = 0.101325 ; t51 [ 423ULL ] = 0.0 ; t51 [
424ULL ] = X [ 16ULL ] ; t51 [ 425ULL ] = X [ 108ULL ] ; t51 [ 426ULL ] = - X
[ 108ULL ] ; t51 [ 427ULL ] = - X [ 16ULL ] ; t51 [ 428ULL ] = 0.0 ; t51 [
429ULL ] = 0.0 ; t51 [ 430ULL ] = 0.0 ; t51 [ 431ULL ] = 0.0 ; t51 [ 432ULL ]
= X [ 19ULL ] ; t51 [ 433ULL ] = X [ 16ULL ] ; t51 [ 434ULL ] = X [ 16ULL ] ;
t51 [ 435ULL ] = X [ 19ULL ] ; t51 [ 436ULL ] = X [ 4ULL ] * 0.1 ; t51 [
437ULL ] = 0.101325 ; t51 [ 438ULL ] = 0.0 ; t51 [ 439ULL ] = X [ 19ULL ] ;
t51 [ 440ULL ] = Servovalve2_Main_Valve_Orifice_BT_Orifice_mdot_A ; t51 [
441ULL ] = - Servovalve2_Main_Valve_Orifice_BT_Orifice_mdot_A ; t51 [ 442ULL
] = X [ 16ULL ] ; t51 [ 443ULL ] = 0.101325 ; t51 [ 444ULL ] = 0.101325 ; t51
[ 445ULL ] = X [ 108ULL ] ; t51 [ 446ULL ] = X [ 19ULL ] ; t51 [ 447ULL ] =
Servovalve2_Main_Valve_Orifice_BT_Orifice_mdot_A ; t51 [ 448ULL ] = -
Servovalve2_Main_Valve_Orifice_BT_Orifice_mdot_A ; t51 [ 449ULL ] = X [ 30ULL
] * 0.1 ; t51 [ 450ULL ] = X [ 26ULL ] * 0.1 ; t51 [ 451ULL ] = 0.0 ; t51 [
452ULL ] = X [ 16ULL ] ; t51 [ 453ULL ] = X [ 109ULL ] ; t51 [ 454ULL ] = - X
[ 109ULL ] ; t51 [ 455ULL ] = - X [ 16ULL ] ; t51 [ 456ULL ] = 0.0 ; t51 [
457ULL ] = 0.0 ; t51 [ 458ULL ] = 0.0 ; t51 [ 459ULL ] = 0.0 ; t51 [ 460ULL ]
= X [ 20ULL ] ; t51 [ 461ULL ] = X [ 16ULL ] ; t51 [ 462ULL ] = X [ 16ULL ] ;
t51 [ 463ULL ] = X [ 20ULL ] ; t51 [ 464ULL ] = X [ 30ULL ] * 0.1 ; t51 [
465ULL ] = X [ 26ULL ] * 0.1 ; t51 [ 466ULL ] = 0.0 ; t51 [ 467ULL ] = X [
20ULL ] ; t51 [ 468ULL ] = X [ 103ULL ] ; t51 [ 469ULL ] = - X [ 103ULL ] ;
t51 [ 470ULL ] = X [ 16ULL ] ; t51 [ 471ULL ] = X [ 26ULL ] * 0.1 ; t51 [
472ULL ] = X [ 26ULL ] * 0.1 ; t51 [ 473ULL ] = X [ 109ULL ] ; t51 [ 474ULL ]
= X [ 20ULL ] ; t51 [ 475ULL ] = X [ 103ULL ] ; t51 [ 476ULL ] = - X [ 103ULL
] ; t51 [ 477ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 478ULL ] = X [ 4ULL ] * 0.1 ;
t51 [ 479ULL ] = 0.0 ; t51 [ 480ULL ] = X [ 16ULL ] ; t51 [ 481ULL ] = X [
110ULL ] ; t51 [ 482ULL ] = - X [ 110ULL ] ; t51 [ 483ULL ] = - X [ 16ULL ] ;
t51 [ 484ULL ] = 0.0 ; t51 [ 485ULL ] = 0.0 ; t51 [ 486ULL ] = 0.0 ; t51 [
487ULL ] = 0.0 ; t51 [ 488ULL ] = X [ 21ULL ] ; t51 [ 489ULL ] = X [ 16ULL ]
; t51 [ 490ULL ] = X [ 16ULL ] ; t51 [ 491ULL ] = X [ 21ULL ] ; t51 [ 492ULL
] = X [ 30ULL ] * 0.1 ; t51 [ 493ULL ] = X [ 4ULL ] * 0.1 ; t51 [ 494ULL ] =
0.0 ; t51 [ 495ULL ] = X [ 21ULL ] ; t51 [ 496ULL ] = X [ 104ULL ] ; t51 [
497ULL ] = - X [ 104ULL ] ; t51 [ 498ULL ] = X [ 16ULL ] ; t51 [ 499ULL ] = X
[ 4ULL ] * 0.1 ; t51 [ 500ULL ] = X [ 4ULL ] * 0.1 ; t51 [ 501ULL ] = X [
110ULL ] ; t51 [ 502ULL ] = X [ 21ULL ] ; t51 [ 503ULL ] = X [ 104ULL ] ; t51
[ 504ULL ] = - X [ 104ULL ] ; t51 [ 505ULL ] = X [ 30ULL ] * 0.1 ; t51 [
506ULL ] = 0.0 ; t51 [ 507ULL ] = X [ 16ULL ] ; t51 [ 508ULL ] = X [ 111ULL ]
; t51 [ 509ULL ] = X [ 111ULL ] * 0.0027624309392265192 ; t51 [ 510ULL ] = X
[ 16ULL ] ; t51 [ 511ULL ] = X [ 16ULL ] ; t51 [ 512ULL ] = X [ 112ULL ] ;
t51 [ 513ULL ] = X [ 16ULL ] ; t51 [ 514ULL ] =
Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t51 [ 515ULL ] = 0.0 ; t51 [ 516ULL ]
= X [ 16ULL ] ; t51 [ 517ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t51
[ 518ULL ] = 0.0 ; t51 [ 519ULL ] = X [ 16ULL ] ; t51 [ 520ULL ] =
Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t51 [ 521ULL ] = X [ 22ULL ] ; t51 [
522ULL ] = X [ 101ULL ] ; t51 [ 523ULL ] = ( ( ( ( - X [ 48ULL ] - X [ 102ULL
] ) - X [ 70ULL ] ) + X [ 33ULL ] ) + X [ 79ULL ] ) + X [ 113ULL ] ; t51 [
524ULL ] = 0.0 ; t51 [ 525ULL ] = Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51
[ 526ULL ] = 0.0 ; t51 [ 527ULL ] = X [ 16ULL ] ; t51 [ 528ULL ] =
Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51 [ 529ULL ] = 0.0 ; t51 [ 530ULL ]
= X [ 16ULL ] ; t51 [ 531ULL ] = Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51
[ 532ULL ] = X [ 23ULL ] ; t51 [ 533ULL ] = X [ 105ULL ] ; t51 [ 534ULL ] = -
X [ 113ULL ] + X [ 102ULL ] ; t51 [ 535ULL ] = 0.0 ; t51 [ 536ULL ] =
0.101325 ; t51 [ 537ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t51 [
538ULL ] = 0.101325 ; t51 [ 539ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1
; t51 [ 540ULL ] = 0.101325 ; t51 [ 541ULL ] = X [ 15ULL ] ; t51 [ 542ULL ] =
D_idx_3 ; t51 [ 543ULL ] = 0.0 ; t51 [ 544ULL ] = t67 ; t51 [ 545ULL ] = -
t67 ; t51 [ 546ULL ] = X [ 15ULL ] ; t51 [ 547ULL ] =
Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51 [ 548ULL ] = 0.101325 ; t51 [
549ULL ] = Servovalve2_Fixed_Orifice_B_B_p * 0.1 ; t51 [ 550ULL ] = 0.101325
; t51 [ 551ULL ] = X [ 15ULL ] ; t51 [ 552ULL ] = D_idx_4 ; t51 [ 553ULL ] =
0.0 ; t51 [ 554ULL ] = X [ 113ULL ] ; t51 [ 555ULL ] = - X [ 113ULL ] ; t51 [
556ULL ] = X [ 15ULL ] ; t51 [ 557ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 558ULL ]
= 0.101325 ; t51 [ 559ULL ] = U_idx_1 ; t51 [ 560ULL ] = U_idx_2 ; t51 [
561ULL ] = U_idx_3 ; t51 [ 562ULL ] = U_idx_0 ; t51 [ 563ULL ] = X [ 53ULL ]
; t51 [ 564ULL ] = X [ 54ULL ] * 0.1 ; t51 [ 565ULL ] = 0.0 ; t51 [ 566ULL ]
= Double_Acting_Actuator_TL_R_v ; t51 [ 567ULL ] = X [ 38ULL ] ; t51 [ 568ULL
] = X [ 38ULL ] * 0.001 ; t51 [ 569ULL ] = 0.0 ; t51 [ 570ULL ] =
Double_Acting_Actuator_TL_R_v ; t51 [ 571ULL ] = X [ 24ULL ] * 10000.0 ; t51
[ 572ULL ] = Double_Acting_Actuator_TL_R_v ; t51 [ 573ULL ] = X [ 24ULL ] ;
t51 [ 574ULL ] = X [ 4ULL ] * 0.1 ; t51 [ 575ULL ] = X [ 4ULL ] * 0.1 ; t51 [
576ULL ] = X [ 4ULL ] * 0.1 ; t51 [ 577ULL ] = X [ 4ULL ] * 0.1 ; t51 [
578ULL ] = X [ 48ULL ] ; t51 [ 579ULL ] =
flow_IL_sensor1_Flow_Rate_Sensor_IL_V * 1.0E-6 ; t51 [ 580ULL ] = X [ 48ULL ]
; t51 [ 581ULL ] = flow_IL_sensor1_Flow_Rate_Sensor_IL_V * 1.0E-6 ; t51 [
582ULL ] = X [ 63ULL ] ; t51 [ 583ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 584ULL ]
= X [ 63ULL ] ; t51 [ 585ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 586ULL ] = X [
63ULL ] ; t51 [ 587ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 588ULL ] = X [ 63ULL ] ;
t51 [ 589ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 590ULL ] = -
Gas_Charged_Accumulator_TL_convection_A_mdot ; t51 [ 591ULL ] = t57 * -
1000.0 ; t51 [ 592ULL ] = - t57 ; t51 [ 593ULL ] = t68 * 1.0E-6 ; t51 [
594ULL ] = - Gas_Charged_Accumulator_TL_convection_A_mdot ; t51 [ 595ULL ] =
t68 * 1.0E-6 ; t51 [ 596ULL ] = X [ 29ULL ] ; t51 [ 597ULL ] = X [ 30ULL ] *
0.1 ; t51 [ 598ULL ] = X [ 29ULL ] ; t51 [ 599ULL ] = X [ 30ULL ] * 0.1 ; t51
[ 600ULL ] = X [ 29ULL ] ; t51 [ 601ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 602ULL
] = X [ 29ULL ] ; t51 [ 603ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 604ULL ] = X [
33ULL ] ; t51 [ 605ULL ] = X [ 31ULL ] * 1000.0 ; t51 [ 606ULL ] = X [ 31ULL
] ; t51 [ 607ULL ] = t55_idx_0 * 1.0E-6 ; t51 [ 608ULL ] = X [ 33ULL ] ; t51
[ 609ULL ] = t55_idx_0 * 1.0E-6 ; t51 [ 610ULL ] = X [ 52ULL ] ; t51 [ 611ULL
] = 0.101325 ; t51 [ 612ULL ] = X [ 52ULL ] ; t51 [ 613ULL ] = 0.101325 ; t51
[ 614ULL ] = X [ 52ULL ] ; t51 [ 615ULL ] = 0.101325 ; t51 [ 616ULL ] = X [
52ULL ] ; t51 [ 617ULL ] = 0.101325 ; t51 [ 618ULL ] =
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ; t51 [ 619ULL ] = X
[ 56ULL ] * 1000.0 ; t51 [ 620ULL ] = X [ 56ULL ] ; t51 [ 621ULL ] = t70 *
1.0E-6 ; t51 [ 622ULL ] =
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ; t51 [ 623ULL ] =
t70 * 1.0E-6 ; t51 [ 624ULL ] = X [ 63ULL ] ; t51 [ 625ULL ] = X [ 11ULL ] *
0.1 ; t51 [ 626ULL ] = X [ 63ULL ] ; t51 [ 627ULL ] = X [ 11ULL ] * 0.1 ; t51
[ 628ULL ] = 0.0 ; t51 [ 629ULL ] = 0.0 ; t51 [ 630ULL ] = 99999.999999999985
; t51 [ 631ULL ] = X [ 11ULL ] * 99999.999999999985 ; t51 [ 632ULL ] =
99999.999999999985 ; t51 [ 633ULL ] = 400.0 ; t51 [ 634ULL ] = X [ 11ULL ] *
99999.999999999985 ; t51 [ 635ULL ] = X [ 29ULL ] ; t51 [ 636ULL ] = X [
30ULL ] * 0.1 ; t51 [ 637ULL ] = X [ 29ULL ] ; t51 [ 638ULL ] = X [ 30ULL ] *
0.1 ; t51 [ 639ULL ] = 0.0 ; t51 [ 640ULL ] = 0.0 ; t51 [ 641ULL ] =
99999.999999999985 ; t51 [ 642ULL ] = X [ 30ULL ] * 99999.999999999985 ; t51
[ 643ULL ] = 99999.999999999985 ; t51 [ 644ULL ] = 400.0 ; t51 [ 645ULL ] = X
[ 30ULL ] * 99999.999999999985 ; t51 [ 646ULL ] = X [ 36ULL ] ; t51 [ 647ULL
] = X [ 1ULL ] * 0.1 ; t51 [ 648ULL ] = X [ 36ULL ] ; t51 [ 649ULL ] = X [
1ULL ] * 0.1 ; t51 [ 650ULL ] = 0.0 ; t51 [ 651ULL ] = 0.0 ; t51 [ 652ULL ] =
99999.999999999985 ; t51 [ 653ULL ] = X [ 1ULL ] * 99999.999999999985 ; t51 [
654ULL ] = 99999.999999999985 ; t51 [ 655ULL ] = 400.0 ; t51 [ 656ULL ] = X [
1ULL ] * 99999.999999999985 ; t51 [ 657ULL ] = X [ 53ULL ] ; t51 [ 658ULL ] =
X [ 54ULL ] * 0.1 ; t51 [ 659ULL ] = X [ 27ULL ] ; t51 [ 660ULL ] = X [ 28ULL
] * 0.1 ; t51 [ 661ULL ] = U_idx_2 ; t51 [ 662ULL ] = X [ 95ULL ] ; t51 [
663ULL ] = 0.101325 ; t51 [ 664ULL ] = X [ 53ULL ] ; t51 [ 665ULL ] = X [
54ULL ] * 0.1 ; t51 [ 666ULL ] = X [ 95ULL ] ; t51 [ 667ULL ] = 0.101325 ;
t51 [ 668ULL ] = X [ 57ULL ] ; t51 [ 669ULL ] = - X [ 57ULL ] ; t51 [ 670ULL
] = - U_idx_2 + 0.00050000000000000044 ; t51 [ 671ULL ] = X [ 53ULL ] ; t51 [
672ULL ] = X [ 54ULL ] * 0.1 ; t51 [ 673ULL ] = X [ 57ULL ] ; t51 [ 674ULL ]
= X [ 114ULL ] ; t51 [ 675ULL ] = X [ 87ULL ] ; t51 [ 676ULL ] = X [ 115ULL ]
; t51 [ 677ULL ] = X [ 95ULL ] ; t51 [ 678ULL ] = 0.101325 ; t51 [ 679ULL ] =
- X [ 57ULL ] ; t51 [ 680ULL ] = X [ 116ULL ] ; t51 [ 681ULL ] = - X [ 87ULL
] ; t51 [ 682ULL ] = X [ 115ULL ] ; t51 [ 683ULL ] = X [ 87ULL ] ; t51 [
684ULL ] = - X [ 87ULL ] ; t51 [ 685ULL ] = X [ 27ULL ] ; t51 [ 686ULL ] = X
[ 28ULL ] * 0.1 ; t51 [ 687ULL ] = X [ 53ULL ] ; t51 [ 688ULL ] = X [ 54ULL ]
* 0.1 ; t51 [ 689ULL ] = - X [ 31ULL ] ; t51 [ 690ULL ] = X [ 31ULL ] ; t51 [
691ULL ] = U_idx_2 + 0.00050000000000000044 ; t51 [ 692ULL ] = X [ 27ULL ] ;
t51 [ 693ULL ] = X [ 28ULL ] * 0.1 ; t51 [ 694ULL ] = - X [ 31ULL ] ; t51 [
695ULL ] = X [ 117ULL ] ; t51 [ 696ULL ] = - X [ 33ULL ] ; t51 [ 697ULL ] = X
[ 118ULL ] ; t51 [ 698ULL ] = X [ 53ULL ] ; t51 [ 699ULL ] = X [ 54ULL ] *
0.1 ; t51 [ 700ULL ] = X [ 31ULL ] ; t51 [ 701ULL ] = X [ 119ULL ] ; t51 [
702ULL ] = X [ 33ULL ] ; t51 [ 703ULL ] = X [ 118ULL ] ; t51 [ 704ULL ] = - X
[ 33ULL ] ; t51 [ 705ULL ] = X [ 33ULL ] ; t51 [ 706ULL ] = X [ 63ULL ] ; t51
[ 707ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 708ULL ] = X [ 29ULL ] ; t51 [ 709ULL
] = X [ 30ULL ] * 0.1 ; t51 [ 710ULL ] = U_idx_3 ; t51 [ 711ULL ] = X [ 90ULL
] ; t51 [ 712ULL ] = 0.101325 ; t51 [ 713ULL ] = X [ 63ULL ] ; t51 [ 714ULL ]
= X [ 11ULL ] * 0.1 ; t51 [ 715ULL ] = X [ 90ULL ] ; t51 [ 716ULL ] =
0.101325 ; t51 [ 717ULL ] = X [ 65ULL ] ; t51 [ 718ULL ] = - X [ 65ULL ] ;
t51 [ 719ULL ] = - U_idx_3 + 0.00050000000000000044 ; t51 [ 720ULL ] = X [
63ULL ] ; t51 [ 721ULL ] = X [ 11ULL ] * 0.1 ; t51 [ 722ULL ] = X [ 65ULL ] ;
t51 [ 723ULL ] = X [ 120ULL ] ; t51 [ 724ULL ] = X [ 69ULL ] ; t51 [ 725ULL ]
= X [ 121ULL ] ; t51 [ 726ULL ] = X [ 90ULL ] ; t51 [ 727ULL ] = 0.101325 ;
t51 [ 728ULL ] = - X [ 65ULL ] ; t51 [ 729ULL ] = X [ 122ULL ] ; t51 [ 730ULL
] = - X [ 69ULL ] ; t51 [ 731ULL ] = X [ 121ULL ] ; t51 [ 732ULL ] = X [
69ULL ] ; t51 [ 733ULL ] = - X [ 69ULL ] ; t51 [ 734ULL ] = X [ 29ULL ] ; t51
[ 735ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 736ULL ] = X [ 63ULL ] ; t51 [ 737ULL
] = X [ 11ULL ] * 0.1 ; t51 [ 738ULL ] = X [ 66ULL ] ; t51 [ 739ULL ] = - X [
66ULL ] ; t51 [ 740ULL ] = U_idx_3 + 0.00050000000000000044 ; t51 [ 741ULL ]
= X [ 29ULL ] ; t51 [ 742ULL ] = X [ 30ULL ] * 0.1 ; t51 [ 743ULL ] = X [
66ULL ] ; t51 [ 744ULL ] = X [ 123ULL ] ; t51 [ 745ULL ] = X [ 70ULL ] ; t51
[ 746ULL ] = X [ 124ULL ] ; t51 [ 747ULL ] = X [ 63ULL ] ; t51 [ 748ULL ] = X
[ 11ULL ] * 0.1 ; t51 [ 749ULL ] = - X [ 66ULL ] ; t51 [ 750ULL ] = X [
125ULL ] ; t51 [ 751ULL ] = - X [ 70ULL ] ; t51 [ 752ULL ] = X [ 124ULL ] ;
t51 [ 753ULL ] = X [ 70ULL ] ; t51 [ 754ULL ] = - X [ 70ULL ] ; for ( b = 0 ;
b < 755 ; b ++ ) { out . mX [ b ] = t51 [ b ] ; } ( void ) LC ; ( void ) t76
; return 0 ; }
