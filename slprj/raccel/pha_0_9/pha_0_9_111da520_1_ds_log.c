#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_log.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_log ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t328 , NeDsMethodOutput * t329 ) { ETTS0 ac_efOut ;
ETTS0 b_efOut ; ETTS0 bb_efOut ; ETTS0 cb_efOut ; ETTS0 cc_efOut ; ETTS0
d_efOut ; ETTS0 e_efOut ; ETTS0 ec_efOut ; ETTS0 efOut ; ETTS0 fb_efOut ;
ETTS0 g_efOut ; ETTS0 gb_efOut ; ETTS0 gc_efOut ; ETTS0 h_efOut ; ETTS0
ic_efOut ; ETTS0 jb_efOut ; ETTS0 k_efOut ; ETTS0 kc_efOut ; ETTS0 l_efOut ;
ETTS0 lb_efOut ; ETTS0 mc_efOut ; ETTS0 nb_efOut ; ETTS0 o_efOut ; ETTS0
p_efOut ; ETTS0 pb_efOut ; ETTS0 r_efOut ; ETTS0 rb_efOut ; ETTS0 s_efOut ;
ETTS0 t19 ; ETTS0 t24 ; ETTS0 t25 ; ETTS0 t28 ; ETTS0 t29 ; ETTS0 t30 ; ETTS0
t31 ; ETTS0 t32 ; ETTS0 t33 ; ETTS0 tb_efOut ; ETTS0 u_efOut ; ETTS0 v_efOut
; ETTS0 vb_efOut ; ETTS0 x_efOut ; ETTS0 xb_efOut ; ETTS0 y_efOut ;
PmRealVector out ; real_T t227 [ 726 ] ; real_T X [ 126 ] ; real_T ab_efOut [
1 ] ; real_T bc_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T db_efOut [ 1 ] ;
real_T dc_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
fc_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T
i_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T
jc_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T
m_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T
qb_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T t255 [ 1 ] ; real_T t256 [ 1
] ; real_T t_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ; real_T w_efOut [ 1 ] ;
real_T wb_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T
Check_Valve_TL_convection_B_rho ; real_T Check_Valve_TL_q_B ; real_T
Check_Valve_TL_valve_area ; real_T D_idx_0 ; real_T D_idx_1 ; real_T D_idx_2
; real_T D_idx_3 ; real_T D_idx_4 ; real_T Double_Acting_Actuator_TL_R_v ;
real_T Double_Acting_Actuator_TL_chamber_A_h_I ; real_T
Double_Acting_Actuator_TL_chamber_A_rho_I ; real_T
Double_Acting_Actuator_TL_chamber_A_u_I ; real_T
Double_Acting_Actuator_TL_chamber_B_h_I ; real_T
Double_Acting_Actuator_TL_chamber_B_rho_I ; real_T
Double_Acting_Actuator_TL_chamber_B_u_I ; real_T
Fixed_Displacement_Motor_TL_Phi_B ; real_T
Fixed_Displacement_Motor_TL_convection_A_rho ; real_T
Fixed_Displacement_Motor_TL_friction_torque_ ; real_T
Fixed_Displacement_Motor_TL_mechanical_power ; real_T
Gas_Charged_Accumulator_TL1_u_I ; real_T
Gas_Charged_Accumulator_TL_convection_A_mdot ; real_T
Gas_Charged_Accumulator_TL_rho_I ; real_T Gas_Charged_Accumulator_TL_u_I ;
real_T Interface_TL_IL1_Phi_TL ; real_T Interface_TL_IL2_Phi_TL ; real_T
Interface_TL_IL2_convection_TL_mdot ; real_T
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho ; real_T
Pressure_Relief_Valve_TL1_relief_valve_orifice_area ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_B_rho ; real_T
Pressure_Relief_Valve_TL_relief_valve_orifice_area ; real_T
Servovalve2_Fixed_Orifice_A_B_p ; real_T
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A ; real_T
Servovalve2_Main_Valve_Orifice_AT_Orifice_orifice_area ; real_T
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc0 ; real_T
Servovalve2_Main_Valve_Orifice_BT_Orifice_orifice_area ; real_T
Servovalve2_Main_Valve_Spool_Damper_power_dissipated ; real_T
Servovalve2_Nozzle_A_Nozzle_A_mdot_A ; real_T U_idx_0 ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T U_idx_3 ; real_T flow_sensor3_Flow_Rate_Sensor_TL3_V
; real_T intrm_sf_mf_184 ; real_T intrm_sf_mf_202 ; real_T intrm_sf_mf_242 ;
real_T intrm_sf_mf_25 ; real_T intrm_sf_mf_39 ; real_T intrm_sf_mf_53 ;
real_T intrm_sf_mf_63 ; real_T intrm_sf_mf_92 ; real_T t234_idx_0 ; real_T
t257 ; real_T t258 ; real_T t263 ; real_T t264 ; real_T t269 ; real_T t271 ;
real_T t274 ; real_T t276 ; real_T t278 ; real_T t280 ; real_T t281 ; real_T
t282 ; real_T t283 ; real_T t285 ; real_T t293 ; real_T t294 ; real_T t295 ;
real_T t297 ; real_T t298 ; real_T t299 ; real_T t301 ; real_T t302 ; real_T
t308 ; real_T t309 ; real_T t310 ; real_T t315 ; real_T t317 ; real_T t319 ;
real_T t321 ; real_T t325 ; real_T
x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho ; real_T
x3_Way_Directional_Valve_TL1_orifice_PA_convection_B_rho ; real_T
x3_Way_Directional_Valve_TL_orifice_AT_convection_B_rho ; real_T
x3_Way_Directional_Valve_TL_orifice_PA_convection_B_rho ; size_t t36 [ 1 ] ;
size_t t37 [ 1 ] ; size_t t39 [ 1 ] ; int32_T b ; U_idx_0 = t328 -> mU . mX [
0 ] ; U_idx_1 = t328 -> mU . mX [ 1 ] ; U_idx_2 = t328 -> mU . mX [ 2 ] ;
U_idx_3 = t328 -> mU . mX [ 3 ] ; for ( b = 0 ; b < 126 ; b ++ ) { X [ b ] =
t328 -> mX . mX [ b ] ; } D_idx_0 = t328 -> mD . mX [ 0 ] ; D_idx_1 = t328 ->
mD . mX [ 1 ] ; D_idx_2 = t328 -> mD . mX [ 2 ] ; D_idx_3 = t328 -> mD . mX [
3 ] ; D_idx_4 = t328 -> mD . mX [ 4 ] ; out = t329 -> mLOG ;
Check_Valve_TL_valve_area = ( ( X [ 28ULL ] - X [ 30ULL ] ) - 0.1 ) / 0.1 ;
if ( Check_Valve_TL_valve_area <= 0.0 ) { t257 = 0.0 ; } else if (
Check_Valve_TL_valve_area <= 0.005 ) { t257 = Check_Valve_TL_valve_area *
Check_Valve_TL_valve_area * 100.50251256281406 ; } else if (
Check_Valve_TL_valve_area <= 0.995 ) { t257 = Check_Valve_TL_valve_area *
1.0050251256281406 - 0.0025125628140703518 ; } else if (
Check_Valve_TL_valve_area <= 1.0 ) { t257 = ( 1.0 - Check_Valve_TL_valve_area
) * ( 1.0 - Check_Valve_TL_valve_area ) * - 100.50251256281406 + 1.0 ; } else
{ t257 = 1.0 ; } Check_Valve_TL_valve_area = t257 * 9.9999900000000011E-5 +
1.0E-10 ; t256 [ 0ULL ] = X [ 32ULL ] ; t36 [ 0 ] = 11ULL ; t37 [ 0 ] = 1ULL
; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32 =
efOut ; t256 [ 0ULL ] = X [ 28ULL ] ; t39 [ 0 ] = 12ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t256 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t28
= b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t28 . mField0 [ 0ULL ] , &
t28 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36
[ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = c_efOut [ 0 ] ;
t257 = t255 [ 0ULL ] ; t256 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32
= d_efOut ; t256 [ 0ULL ] = X [ 30ULL ] ; tlu2_linear_linear_prelookup ( &
e_efOut . mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t256 [
0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t24 = e_efOut ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] ,
& t32 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , & t39 [
0ULL ] , & t37 [ 0ULL ] ) ; t234_idx_0 = f_efOut [ 0 ] ;
Check_Valve_TL_convection_B_rho = t234_idx_0 ; Check_Valve_TL_q_B = - X [
33ULL ] / ( t234_idx_0 == 0.0 ? 1.0E-16 : t234_idx_0 ) ;
Double_Acting_Actuator_TL_R_v = X [ 38ULL ] * 0.001 ; t256 [ 0ULL ] = X [
0ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , &
g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] ,
& t37 [ 0ULL ] ) ; t32 = g_efOut ; t256 [ 0ULL ] = X [ 1ULL ] ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t256 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t31
= h_efOut ; tlu2_2d_linear_linear_value ( & i_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , &
t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t36
[ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t234_idx_0 = i_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_A_rho_I = t234_idx_0 ;
tlu2_2d_linear_linear_value ( & j_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] ,
& t32 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t36 [ 0ULL ] , & t39 [
0ULL ] , & t37 [ 0ULL ] ) ; t234_idx_0 = j_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_A_u_I = t234_idx_0 ;
Double_Acting_Actuator_TL_chamber_A_h_I = X [ 1ULL ] / (
Double_Acting_Actuator_TL_chamber_A_rho_I == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_A_rho_I ) * 100.0 + t234_idx_0 ; t256 [
0ULL ] = X [ 3ULL ] ; tlu2_linear_linear_prelookup ( & k_efOut . mField0 [
0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] ,
& t37 [ 0ULL ] ) ; t31 = k_efOut ; t256 [ 0ULL ] = X [ 4ULL ] ;
tlu2_linear_linear_prelookup ( & l_efOut . mField0 [ 0ULL ] , & l_efOut .
mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t256 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32
= l_efOut ; tlu2_2d_linear_linear_value ( & m_efOut [ 0ULL ] , & t31 .
mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , & t32 . mField0 [ 0ULL ] , &
t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t36
[ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t234_idx_0 = m_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_B_rho_I = t234_idx_0 ;
tlu2_2d_linear_linear_value ( & n_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ] ,
& t31 . mField2 [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t36 [ 0ULL ] , & t39 [
0ULL ] , & t37 [ 0ULL ] ) ; t234_idx_0 = n_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_B_u_I = t234_idx_0 ;
Double_Acting_Actuator_TL_chamber_B_h_I = X [ 4ULL ] / (
Double_Acting_Actuator_TL_chamber_B_rho_I == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_B_rho_I ) * 100.0 + t234_idx_0 ;
Fixed_Displacement_Motor_TL_Phi_B = ( - X [ 31ULL ] - X [ 56ULL ] ) - X [
57ULL ] ; t256 [ 0ULL ] = X [ 58ULL ] ; tlu2_linear_linear_prelookup ( &
o_efOut . mField0 [ 0ULL ] , & o_efOut . mField1 [ 0ULL ] , & o_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t31 = o_efOut ; t256 [ 0 ] =
1.01325 ; tlu2_linear_linear_prelookup ( & p_efOut . mField0 [ 0ULL ] , &
p_efOut . mField1 [ 0ULL ] , & p_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t256 [ 0ULL ] , & t39 [ 0ULL ] ,
& t37 [ 0ULL ] ) ; t25 = p_efOut ; tlu2_2d_linear_linear_value ( & q_efOut [
0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t36 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ;
t234_idx_0 = q_efOut [ 0 ] ; Fixed_Displacement_Motor_TL_convection_A_rho =
t234_idx_0 ; t255 [ 0ULL ] = X [ 61ULL ] ; tlu2_linear_linear_prelookup ( &
r_efOut . mField0 [ 0ULL ] , & r_efOut . mField1 [ 0ULL ] , & r_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t255 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t33 = r_efOut ; t255 [ 0ULL ] =
X [ 54ULL ] ; tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , &
s_efOut . mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t255 [ 0ULL ] , & t39 [ 0ULL ] ,
& t37 [ 0ULL ] ) ; t19 = s_efOut ; tlu2_2d_linear_linear_value ( & t_efOut [
0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [ 0ULL ] , & t19 .
mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t36 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ;
t234_idx_0 = t_efOut [ 0 ] ; Fixed_Displacement_Motor_TL_mechanical_power =
tanh ( X [ 8ULL ] * 4.0 / 0.00942477796076938 ) ;
Fixed_Displacement_Motor_TL_friction_torque_ = fabs ( 1.01325 - X [ 54ULL ] )
* Fixed_Displacement_Motor_TL_mechanical_power * 0.057295779513082311 ;
Fixed_Displacement_Motor_TL_mechanical_power = (
Fixed_Displacement_Motor_TL_convection_A_rho + t234_idx_0 ) / 2.0 ; t263 = X
[ 59ULL ] * ( 1.01325 - X [ 54ULL ] ) / (
Fixed_Displacement_Motor_TL_mechanical_power == 0.0 ? 1.0E-16 :
Fixed_Displacement_Motor_TL_mechanical_power ) ; t255 [ 0ULL ] = X [ 58ULL ]
; tlu2_linear_nearest_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t255 [ 0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t33
= u_efOut ; tlu2_linear_nearest_prelookup ( & v_efOut . mField0 [ 0ULL ] , &
v_efOut . mField1 [ 0ULL ] , & v_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t256 [ 0ULL ] , & t39 [ 0ULL ] ,
& t37 [ 0ULL ] ) ; t32 = v_efOut ; tlu2_2d_linear_nearest_value ( & w_efOut [
0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t36 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0
] = w_efOut [ 0 ] ; Fixed_Displacement_Motor_TL_mechanical_power = t255 [
0ULL ] ; t256 [ 0ULL ] = X [ 61ULL ] ; tlu2_linear_nearest_prelookup ( &
x_efOut . mField0 [ 0ULL ] , & x_efOut . mField1 [ 0ULL ] , & x_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t31 = x_efOut ; t256 [ 0ULL ] =
X [ 54ULL ] ; tlu2_linear_nearest_prelookup ( & y_efOut . mField0 [ 0ULL ] ,
& y_efOut . mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t256 [ 0ULL ] , & t39 [ 0ULL ] ,
& t37 [ 0ULL ] ) ; t32 = y_efOut ; tlu2_2d_linear_nearest_value ( & ab_efOut
[ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t36 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0
] = ab_efOut [ 0 ] ; t264 = t255 [ 0ULL ] ;
Fixed_Displacement_Motor_TL_mechanical_power = (
Fixed_Displacement_Motor_TL_mechanical_power + t264 ) / 2.0 ; t269 = ( - X [
64ULL ] - X [ 65ULL ] ) + X [ 66ULL ] ;
Gas_Charged_Accumulator_TL_convection_A_mdot = ( - X [ 68ULL ] - X [ 69ULL ]
) + X [ 70ULL ] ; t256 [ 0ULL ] = X [ 10ULL ] ; tlu2_linear_linear_prelookup
( & bb_efOut . mField0 [ 0ULL ] , & bb_efOut . mField1 [ 0ULL ] , & bb_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32 = bb_efOut ; t256 [ 0ULL ] =
X [ 11ULL ] ; tlu2_linear_linear_prelookup ( & cb_efOut . mField0 [ 0ULL ] ,
& cb_efOut . mField1 [ 0ULL ] , & cb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t256 [ 0ULL ] , & t39 [ 0ULL ] ,
& t37 [ 0ULL ] ) ; t33 = cb_efOut ; tlu2_2d_linear_linear_value ( & db_efOut
[ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t33 .
mField0 [ 0ULL ] , & t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t36 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0
] = db_efOut [ 0 ] ; Gas_Charged_Accumulator_TL_rho_I = t255 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = eb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_u_I = t255 [ 0ULL ] ; t256 [ 0ULL ] = X [ 12ULL ]
; tlu2_linear_linear_prelookup ( & fb_efOut . mField0 [ 0ULL ] , & fb_efOut .
mField1 [ 0ULL ] , & fb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32
= fb_efOut ; t256 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_linear_prelookup ( &
gb_efOut . mField0 [ 0ULL ] , & gb_efOut . mField1 [ 0ULL ] , & gb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t256 [
0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t29 = gb_efOut ;
tlu2_2d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = hb_efOut [ 0 ] ; t271 = t255 [
0ULL ] ; tlu2_2d_linear_linear_value ( & ib_efOut [ 0ULL ] , & t32 . mField0
[ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t36 [
0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = ib_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL1_u_I = t255 [ 0ULL ] ; Interface_TL_IL1_Phi_TL = (
- X [ 55ULL ] - X [ 77ULL ] ) + X [ 56ULL ] ; Interface_TL_IL2_Phi_TL = - X [
66ULL ] + X [ 31ULL ] ; Interface_TL_IL2_convection_TL_mdot = - X [ 70ULL ] +
X [ 33ULL ] ; Pressure_Relief_Valve_TL_relief_valve_orifice_area = ( ( X [
54ULL ] - 1.01325 ) - 3.0 ) / 0.14999999999999991 ; if (
Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 0.0 ) { t274 = 0.0 ; }
else if ( Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 0.005 ) {
t274 = Pressure_Relief_Valve_TL_relief_valve_orifice_area *
Pressure_Relief_Valve_TL_relief_valve_orifice_area * 100.50251256281406 ; }
else if ( Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 0.995 ) {
t274 = Pressure_Relief_Valve_TL_relief_valve_orifice_area *
1.0050251256281406 - 0.0025125628140703518 ; } else if (
Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 1.0 ) { t274 = ( 1.0 -
Pressure_Relief_Valve_TL_relief_valve_orifice_area ) * ( 1.0 -
Pressure_Relief_Valve_TL_relief_valve_orifice_area ) * - 100.50251256281406 +
1.0 ; } else { t274 = 1.0 ; }
Pressure_Relief_Valve_TL_relief_valve_orifice_area = t274 *
9.9999900000000011E-5 + 1.0E-10 ; t274 = ( - X [ 33ULL ] - X [ 87ULL ] ) + X
[ 59ULL ] ; t256 [ 0ULL ] = X [ 86ULL ] ; tlu2_linear_linear_prelookup ( &
jb_efOut . mField0 [ 0ULL ] , & jb_efOut . mField1 [ 0ULL ] , & jb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t29 = jb_efOut ;
tlu2_2d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = kb_efOut [ 0 ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho = t255 [ 0ULL ] ; t256
[ 0ULL ] = X [ 89ULL ] ; tlu2_linear_linear_prelookup ( & lb_efOut . mField0
[ 0ULL ] , & lb_efOut . mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ]
, & t37 [ 0ULL ] ) ; t32 = lb_efOut ; tlu2_2d_linear_linear_value ( &
mb_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , &
t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField0 , & t36 [ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ;
t255 [ 0 ] = mb_efOut [ 0 ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_B_rho = t255 [ 0ULL ] ;
Pressure_Relief_Valve_TL1_relief_valve_orifice_area = ( ( X [ 11ULL ] -
1.01325 ) - 3.0 ) / 0.14999999999999991 ; if (
Pressure_Relief_Valve_TL1_relief_valve_orifice_area <= 0.0 ) { t276 = 0.0 ; }
else if ( Pressure_Relief_Valve_TL1_relief_valve_orifice_area <= 0.005 ) {
t276 = Pressure_Relief_Valve_TL1_relief_valve_orifice_area *
Pressure_Relief_Valve_TL1_relief_valve_orifice_area * 100.50251256281406 ; }
else if ( Pressure_Relief_Valve_TL1_relief_valve_orifice_area <= 0.995 ) {
t276 = Pressure_Relief_Valve_TL1_relief_valve_orifice_area *
1.0050251256281406 - 0.0025125628140703518 ; } else if (
Pressure_Relief_Valve_TL1_relief_valve_orifice_area <= 1.0 ) { t276 = ( 1.0 -
Pressure_Relief_Valve_TL1_relief_valve_orifice_area ) * ( 1.0 -
Pressure_Relief_Valve_TL1_relief_valve_orifice_area ) * - 100.50251256281406
+ 1.0 ; } else { t276 = 1.0 ; }
Pressure_Relief_Valve_TL1_relief_valve_orifice_area = t276 *
9.9999900000000011E-5 + 1.0E-10 ; t256 [ 0ULL ] = X [ 91ULL ] ;
tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] , & nb_efOut .
mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32
= nb_efOut ; tlu2_2d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , &
t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36
[ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = ob_efOut [ 0 ] ;
t276 = t255 [ 0ULL ] ; t256 [ 0ULL ] = X [ 93ULL ] ;
tlu2_linear_linear_prelookup ( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut .
mField1 [ 0ULL ] , & pb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32
= pb_efOut ; tlu2_2d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t25 . mField0 [ 0ULL ] , &
t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36
[ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = qb_efOut [ 0 ] ;
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho = t255 [ 0ULL ] ;
t278 = - X [ 79ULL ] / 993.22507500000017 * 1.0E+6 ; intrm_sf_mf_25 = X [
30ULL ] >= 1.0E-5 ? X [ 30ULL ] : 1.0E-5 ; t280 = 1.01325 / ( intrm_sf_mf_25
== 0.0 ? 1.0E-16 : intrm_sf_mf_25 ) * 0.0050251256281407036 ; intrm_sf_mf_25
= pmf_exp ( ( intrm_sf_mf_25 - 1.01325 ) / 21791.0 ) ; t282 = 1.0 / (
intrm_sf_mf_25 == 0.0 ? 1.0E-16 : intrm_sf_mf_25 ) + t280 ; intrm_sf_mf_25 =
998.21615577889452 / ( t282 == 0.0 ? 1.0E-16 : t282 ) ; t280 =
Interface_TL_IL2_convection_TL_mdot / ( intrm_sf_mf_25 == 0.0 ? 1.0E-16 :
intrm_sf_mf_25 ) * 1.0E+6 ; t281 = ( - X [ 33ULL ] - X [ 79ULL ] ) - X [
87ULL ] ; t282 = X [ 64ULL ] + X [ 65ULL ] ; t283 = X [ 68ULL ] + X [ 69ULL ]
; Servovalve2_Fixed_Orifice_A_B_p = X [ 101ULL ] * - 0.12820512820512822 +
1.01325 ; Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A = ( ( ( - X [
102ULL ] - X [ 103ULL ] ) - X [ 104ULL ] ) - X [ 70ULL ] ) + X [ 33ULL ] ;
intrm_sf_mf_39 = Servovalve2_Fixed_Orifice_A_B_p >= 1.0E-5 ?
Servovalve2_Fixed_Orifice_A_B_p : 1.0E-5 ; t264 = 1.01325 / ( intrm_sf_mf_39
== 0.0 ? 1.0E-16 : intrm_sf_mf_39 ) * 0.0050251256281407036 ; intrm_sf_mf_39
= pmf_exp ( ( intrm_sf_mf_39 - 1.01325 ) / 21791.0 ) ; t285 = 1.0 / (
intrm_sf_mf_39 == 0.0 ? 1.0E-16 : intrm_sf_mf_39 ) + t264 ; intrm_sf_mf_39 =
998.21615577889452 / ( t285 == 0.0 ? 1.0E-16 : t285 ) ; t285 = X [ 105ULL ] *
0.12820512820512822 + 1.01325 ; intrm_sf_mf_53 = t285 >= 1.0E-5 ? t285 :
1.0E-5 ; t264 = 1.01325 / ( intrm_sf_mf_53 == 0.0 ? 1.0E-16 : intrm_sf_mf_53
) * 0.0050251256281407036 ; intrm_sf_mf_53 = pmf_exp ( ( intrm_sf_mf_53 -
1.01325 ) / 21791.0 ) ; t264 += 1.0 / ( intrm_sf_mf_53 == 0.0 ? 1.0E-16 :
intrm_sf_mf_53 ) ; intrm_sf_mf_53 = 998.21615577889452 / ( t264 == 0.0 ?
1.0E-16 : t264 ) ; if ( - ( X [ 18ULL ] - 1.0E-5 ) <= 0.0 ) {
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc0 = 0.0 ; }
else { Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc0 = - (
X [ 18ULL ] - 1.0E-5 ) >= 1.0 ? 1.0 : - ( X [ 18ULL ] - 1.0E-5 ) ; }
Servovalve2_Main_Valve_Spool_Damper_power_dissipated =
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc0 * 0.0245 ;
Servovalve2_Main_Valve_Orifice_AT_Orifice_orifice_area =
Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.0E-9 ;
intrm_sf_mf_63 = X [ 26ULL ] >= 1.0E-5 ? X [ 26ULL ] : 1.0E-5 ; t264 =
1.01325 / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 : intrm_sf_mf_63 ) *
0.0050251256281407036 ; intrm_sf_mf_63 = pmf_exp ( ( intrm_sf_mf_63 - 1.01325
) / 21791.0 ) ; t293 = 1.0 / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 :
intrm_sf_mf_63 ) + t264 ; intrm_sf_mf_63 = 998.21615577889452 / ( t293 == 0.0
? 1.0E-16 : t293 ) ;
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc0 = ( 1.0 -
pmf_exp ( - ( Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc0
/ 5.0E-5 ) / 1.848 ) ) * 0.8373 + 0.3663 ; t293 =
Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.2250000000000001E-6
; if ( X [ 19ULL ] - - 1.0E-5 <= 0.0 ) { t294 = 0.0 ; } else { t294 = X [
19ULL ] - - 1.0E-5 >= 1.0 ? 1.0 : X [ 19ULL ] - - 1.0E-5 ; }
Servovalve2_Main_Valve_Spool_Damper_power_dissipated = t294 * 0.0245 ; t295 =
- X [ 48ULL ] + X [ 104ULL ] ;
Servovalve2_Main_Valve_Orifice_BT_Orifice_orifice_area =
Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.0E-9 ;
intrm_sf_mf_92 = X [ 4ULL ] >= 1.0E-5 ? X [ 4ULL ] : 1.0E-5 ; t264 = 1.01325
/ ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) *
0.0050251256281407036 ; intrm_sf_mf_92 = pmf_exp ( ( intrm_sf_mf_92 - 1.01325
) / 21791.0 ) ; t297 = 1.0 / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 :
intrm_sf_mf_92 ) + t264 ; intrm_sf_mf_92 = 998.21615577889452 / ( t297 == 0.0
? 1.0E-16 : t297 ) ; t294 = ( 1.0 - pmf_exp ( - ( t294 / 5.0E-5 ) / 1.848 ) )
* 0.8373 + 0.3663 ; t297 =
Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.2250000000000001E-6
; if ( X [ 20ULL ] - - 1.0E-5 <= 0.0 ) { t298 = 0.0 ; } else { t298 = X [
20ULL ] - - 1.0E-5 >= 1.0 ? 1.0 : X [ 20ULL ] - - 1.0E-5 ; }
Servovalve2_Main_Valve_Spool_Damper_power_dissipated = t298 * 0.0245 ; t299 =
Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.0E-9 ; t298 = ( 1.0
- pmf_exp ( - ( t298 / 5.0E-5 ) / 1.848 ) ) * 0.8373 + 0.3663 ; t301 =
Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.2250000000000001E-6
; if ( - ( X [ 21ULL ] - 1.0E-5 ) <= 0.0 ) { t302 = 0.0 ; } else { t302 = - (
X [ 21ULL ] - 1.0E-5 ) >= 1.0 ? 1.0 : - ( X [ 21ULL ] - 1.0E-5 ) ; }
Servovalve2_Main_Valve_Spool_Damper_power_dissipated = t302 * 0.0245 ; t302 =
( 1.0 - pmf_exp ( - ( t302 / 5.0E-5 ) / 1.848 ) ) * 0.8373 + 0.3663 ; t264 =
( X [ 15ULL ] - - 0.00029980999999999996 ) * 0.0052333238858972009 + 1.0E-9 ;
Servovalve2_Nozzle_A_Nozzle_A_mdot_A = ( ( ( - X [ 79ULL ] - X [ 103ULL ] ) -
X [ 104ULL ] ) - X [ 113ULL ] ) + X [ 48ULL ] ; if ( t264 <= 1.0E-9 ) {
intrm_sf_mf_184 = 1.0E-9 ; } else { intrm_sf_mf_184 = t264 >= 3.14E-6 ?
3.14E-6 : t264 ; } t264 = ( X [ 15ULL ] - 0.00029980999999999996 ) * -
0.0052333238858972009 + 1.0E-9 ; if ( t264 <= 1.0E-9 ) { intrm_sf_mf_202 =
1.0E-9 ; } else { intrm_sf_mf_202 = t264 >= 3.14E-6 ? 3.14E-6 : t264 ; } t308
= X [ 48ULL ] / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) * 1.0E+6
; t256 [ 0ULL ] = X [ 63ULL ] ; tlu2_linear_linear_prelookup ( & rb_efOut .
mField0 [ 0ULL ] , & rb_efOut . mField1 [ 0ULL ] , & rb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [ 0ULL ] , &
t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t29 = rb_efOut ;
tlu2_2d_linear_linear_value ( & sb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = sb_efOut [ 0 ] ; t309 = t255 [
0ULL ] ; t309 = - Gas_Charged_Accumulator_TL_convection_A_mdot / ( t309 ==
0.0 ? 1.0E-16 : t309 ) * 1.0E+6 ; t256 [ 0ULL ] = X [ 29ULL ] ;
tlu2_linear_linear_prelookup ( & tb_efOut . mField0 [ 0ULL ] , & tb_efOut .
mField1 [ 0ULL ] , & tb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t256 [ 0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t30
= tb_efOut ; tlu2_2d_linear_linear_value ( & ub_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , &
t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36
[ 0ULL ] , & t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = ub_efOut [ 0 ] ;
t310 = t255 [ 0ULL ] ; t310 = X [ 33ULL ] / ( t310 == 0.0 ? 1.0E-16 : t310 )
* 1.0E+6 ; t256 [ 0ULL ] = X [ 52ULL ] ; tlu2_linear_linear_prelookup ( &
vb_efOut . mField0 [ 0ULL ] , & vb_efOut . mField1 [ 0ULL ] , & vb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32 = vb_efOut ;
tlu2_2d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = wb_efOut [ 0 ] ;
flow_sensor3_Flow_Rate_Sensor_TL3_V = t255 [ 0ULL ] ;
flow_sensor3_Flow_Rate_Sensor_TL3_V = t274 / (
flow_sensor3_Flow_Rate_Sensor_TL3_V == 0.0 ? 1.0E-16 :
flow_sensor3_Flow_Rate_Sensor_TL3_V ) * 1.0E+6 ; t264 = ( ( ( - U_idx_2 +
0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( t264 <= 0.0 ) { t315 = 0.0 ; } else if ( t264 <=
0.005 ) { t315 = t264 * t264 * 100.50251256281406 ; } else if ( t264 <= 0.995
) { t315 = t264 * 1.0050251256281406 - 0.0025125628140703518 ; } else if (
t264 <= 1.0 ) { t315 = ( 1.0 - t264 ) * ( 1.0 - t264 ) * - 100.50251256281406
+ 1.0 ; } else { t315 = 1.0 ; } t264 = ( ( ( U_idx_2 + 0.00050000000000000044
) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) / 9.9999900000000011E-5 ; if ( t264 <=
0.0 ) { t317 = 0.0 ; } else if ( t264 <= 0.005 ) { t317 = t264 * t264 *
100.50251256281406 ; } else if ( t264 <= 0.995 ) { t317 = t264 *
1.0050251256281406 - 0.0025125628140703518 ; } else if ( t264 <= 1.0 ) { t317
= ( 1.0 - t264 ) * ( 1.0 - t264 ) * - 100.50251256281406 + 1.0 ; } else {
t317 = 1.0 ; } t264 = ( ( ( - U_idx_3 + 0.00050000000000000044 ) * 0.01999998
+ 1.0E-10 ) - 1.0E-10 ) / 9.9999900000000011E-5 ; if ( t264 <= 0.0 ) { t264 =
0.0 ; } else if ( t264 <= 0.005 ) { t264 = t264 * t264 * 100.50251256281406 ;
} else if ( t264 <= 0.995 ) { t264 = t264 * 1.0050251256281406 -
0.0025125628140703518 ; } else if ( t264 <= 1.0 ) { t264 = ( 1.0 - t264 ) * (
1.0 - t264 ) * - 100.50251256281406 + 1.0 ; } else { t264 = 1.0 ; }
intrm_sf_mf_242 = ( ( ( U_idx_3 + 0.00050000000000000044 ) * 0.01999998 +
1.0E-10 ) - 1.0E-10 ) / 9.9999900000000011E-5 ; if ( intrm_sf_mf_242 <= 0.0 )
{ t319 = 0.0 ; } else if ( intrm_sf_mf_242 <= 0.005 ) { t319 =
intrm_sf_mf_242 * intrm_sf_mf_242 * 100.50251256281406 ; } else if (
intrm_sf_mf_242 <= 0.995 ) { t319 = intrm_sf_mf_242 * 1.0050251256281406 -
0.0025125628140703518 ; } else if ( intrm_sf_mf_242 <= 1.0 ) { t319 = ( 1.0 -
intrm_sf_mf_242 ) * ( 1.0 - intrm_sf_mf_242 ) * - 100.50251256281406 + 1.0 ;
} else { t319 = 1.0 ; } intrm_sf_mf_242 = t319 * 9.9999900000000011E-5 +
1.0E-10 ; t256 [ 0ULL ] = X [ 114ULL ] ; tlu2_linear_linear_prelookup ( &
xb_efOut . mField0 [ 0ULL ] , & xb_efOut . mField1 [ 0ULL ] , & xb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t30 = xb_efOut ;
tlu2_2d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t30 . mField0 [ 0ULL ]
, & t30 . mField2 [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = yb_efOut [ 0 ] ; t319 = t255 [
0ULL ] ; t256 [ 0ULL ] = X [ 116ULL ] ; tlu2_linear_linear_prelookup ( &
ac_efOut . mField0 [ 0ULL ] , & ac_efOut . mField1 [ 0ULL ] , & ac_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t29 = ac_efOut ;
tlu2_2d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = bc_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL_orifice_AT_convection_B_rho = t255 [ 0ULL ] ;
t256 [ 0ULL ] = X [ 117ULL ] ; tlu2_linear_linear_prelookup ( & cc_efOut .
mField0 [ 0ULL ] , & cc_efOut . mField1 [ 0ULL ] , & cc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [ 0ULL ] , &
t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t29 = cc_efOut ;
tlu2_2d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t28 . mField0 [ 0ULL ] , & t28 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = dc_efOut [ 0 ] ; t321 = t255 [
0ULL ] ; t256 [ 0ULL ] = X [ 119ULL ] ; tlu2_linear_linear_prelookup ( &
ec_efOut . mField0 [ 0ULL ] , & ec_efOut . mField1 [ 0ULL ] , & ec_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t31 = ec_efOut ;
tlu2_2d_linear_linear_value ( & fc_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ]
, & t31 . mField2 [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = fc_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL_orifice_PA_convection_B_rho = t255 [ 0ULL ] ;
t256 [ 0ULL ] = X [ 120ULL ] ; tlu2_linear_linear_prelookup ( & gc_efOut .
mField0 [ 0ULL ] , & gc_efOut . mField1 [ 0ULL ] , & gc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [ 0ULL ] , &
t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t31 = gc_efOut ;
tlu2_2d_linear_linear_value ( & hc_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ]
, & t31 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = hc_efOut [ 0 ] ; t258 = t255 [
0ULL ] ; t256 [ 0ULL ] = X [ 122ULL ] ; tlu2_linear_linear_prelookup ( &
ic_efOut . mField0 [ 0ULL ] , & ic_efOut . mField1 [ 0ULL ] , & ic_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32 = ic_efOut ;
tlu2_2d_linear_linear_value ( & jc_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = jc_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho = t255 [ 0ULL ] ;
t256 [ 0ULL ] = X [ 123ULL ] ; tlu2_linear_linear_prelookup ( & kc_efOut .
mField0 [ 0ULL ] , & kc_efOut . mField1 [ 0ULL ] , & kc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [ 0ULL ] , &
t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t31 = kc_efOut ;
tlu2_2d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ]
, & t31 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , & t24 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t255 [ 0 ] = lc_efOut [ 0 ] ; t325 = t255 [
0ULL ] ; t256 [ 0ULL ] = X [ 125ULL ] ; tlu2_linear_linear_prelookup ( &
mc_efOut . mField0 [ 0ULL ] , & mc_efOut . mField1 [ 0ULL ] , & mc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t256 [
0ULL ] , & t36 [ 0ULL ] , & t37 [ 0ULL ] ) ; t32 = mc_efOut ;
tlu2_2d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t36 [ 0ULL ] , &
t39 [ 0ULL ] , & t37 [ 0ULL ] ) ; t256 [ 0 ] = nc_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_PA_convection_B_rho = t256 [ 0ULL ] ;
t227 [ 0ULL ] = X [ 25ULL ] ; t227 [ 1ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 2ULL
] = X [ 25ULL ] ; t227 [ 3ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 4ULL ] = X [
27ULL ] ; t227 [ 5ULL ] = X [ 28ULL ] * 0.1 ; t227 [ 6ULL ] = X [ 29ULL ] ;
t227 [ 7ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 8ULL ] = X [ 31ULL ] ; t227 [ 9ULL
] = - X [ 31ULL ] ; t227 [ 10ULL ] = X [ 27ULL ] ; t227 [ 11ULL ] = X [ 28ULL
] * 0.1 ; t227 [ 12ULL ] = X [ 31ULL ] ; t227 [ 13ULL ] = X [ 32ULL ] ; t227
[ 14ULL ] = X [ 33ULL ] ; t227 [ 15ULL ] = X [ 34ULL ] ; t227 [ 16ULL ] = X [
29ULL ] ; t227 [ 17ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 18ULL ] = - X [ 31ULL ]
; t227 [ 19ULL ] = X [ 35ULL ] ; t227 [ 20ULL ] = - X [ 33ULL ] ; t227 [
21ULL ] = X [ 34ULL ] ; t227 [ 22ULL ] = Check_Valve_TL_valve_area ; t227 [
23ULL ] = X [ 33ULL ] ; t227 [ 24ULL ] = - X [ 33ULL ] ; t227 [ 25ULL ] =
t257 ; t227 [ 26ULL ] = X [ 33ULL ] / ( t257 == 0.0 ? 1.0E-16 : t257 ) ; t227
[ 27ULL ] = Check_Valve_TL_convection_B_rho ; t227 [ 28ULL ] =
Check_Valve_TL_q_B ; t227 [ 29ULL ] = X [ 36ULL ] ; t227 [ 30ULL ] = X [ 1ULL
] * 0.1 ; t227 [ 31ULL ] = X [ 37ULL ] ; t227 [ 32ULL ] = X [ 4ULL ] * 0.1 ;
t227 [ 33ULL ] = X [ 0ULL ] ; t227 [ 34ULL ] = X [ 0ULL ] ; t227 [ 35ULL ] =
Double_Acting_Actuator_TL_R_v ; t227 [ 36ULL ] = X [ 36ULL ] ; t227 [ 37ULL ]
= X [ 1ULL ] * 0.1 ; t227 [ 38ULL ] = X [ 0ULL ] ; t227 [ 39ULL ] = X [ 39ULL
] ; t227 [ 40ULL ] = - X [ 40ULL ] - X [ 41ULL ] ; t227 [ 41ULL ] =
Double_Acting_Actuator_TL_R_v ; t227 [ 42ULL ] = X [ 0ULL ] ; t227 [ 43ULL ]
= X [ 1ULL ] * 0.1 ; t227 [ 44ULL ] = X [ 36ULL ] ; t227 [ 45ULL ] = X [ 1ULL
] * 0.1 ; t227 [ 46ULL ] = X [ 39ULL ] ; t227 [ 47ULL ] = X [ 42ULL ] ; t227
[ 48ULL ] = X [ 43ULL ] ; t227 [ 49ULL ] = X [ 44ULL ] ; t227 [ 50ULL ] =
Double_Acting_Actuator_TL_chamber_A_rho_I ; t227 [ 51ULL ] =
Double_Acting_Actuator_TL_chamber_A_u_I ; t227 [ 52ULL ] =
Double_Acting_Actuator_TL_chamber_A_h_I ; t227 [ 53ULL ] = X [ 2ULL ] ; t227
[ 54ULL ] = X [ 2ULL ] * 0.01 + 1.0E-5 ; t227 [ 55ULL ] =
Double_Acting_Actuator_TL_R_v ; t227 [ 56ULL ] = X [ 45ULL ] ; t227 [ 57ULL ]
= X [ 43ULL ] ; t227 [ 58ULL ] = X [ 37ULL ] ; t227 [ 59ULL ] = X [ 4ULL ] *
0.1 ; t227 [ 60ULL ] = X [ 0ULL ] ; t227 [ 61ULL ] = X [ 46ULL ] ; t227 [
62ULL ] = X [ 40ULL ] ; t227 [ 63ULL ] = Double_Acting_Actuator_TL_R_v ; t227
[ 64ULL ] = X [ 3ULL ] ; t227 [ 65ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 66ULL ] =
X [ 37ULL ] ; t227 [ 67ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 68ULL ] = X [ 46ULL
] ; t227 [ 69ULL ] = X [ 47ULL ] ; t227 [ 70ULL ] = X [ 48ULL ] ; t227 [
71ULL ] = X [ 49ULL ] ; t227 [ 72ULL ] =
Double_Acting_Actuator_TL_chamber_B_rho_I ; t227 [ 73ULL ] =
Double_Acting_Actuator_TL_chamber_B_u_I ; t227 [ 74ULL ] =
Double_Acting_Actuator_TL_chamber_B_h_I ; t227 [ 75ULL ] = X [ 5ULL ] ; t227
[ 76ULL ] = X [ 5ULL ] * - 0.01 + 1.0E-5 ; t227 [ 77ULL ] =
Double_Acting_Actuator_TL_R_v ; t227 [ 78ULL ] = X [ 50ULL ] ; t227 [ 79ULL ]
= X [ 48ULL ] ; t227 [ 80ULL ] = Double_Acting_Actuator_TL_R_v ; t227 [ 81ULL
] = X [ 51ULL ] ; t227 [ 82ULL ] = Double_Acting_Actuator_TL_R_v ; t227 [
83ULL ] = X [ 6ULL ] ; t227 [ 84ULL ] = X [ 7ULL ] ; t227 [ 85ULL ] = X [
7ULL ] ; t227 [ 86ULL ] = Double_Acting_Actuator_TL_R_v ; t227 [ 87ULL ] =
Double_Acting_Actuator_TL_R_v ; t227 [ 88ULL ] = X [ 7ULL ] ; t227 [ 89ULL ]
= X [ 7ULL ] ; t227 [ 90ULL ] = X [ 52ULL ] ; t227 [ 91ULL ] = X [ 53ULL ] ;
t227 [ 92ULL ] = X [ 54ULL ] * 0.1 ; t227 [ 93ULL ] = X [ 55ULL ] ; t227 [
94ULL ] = Fixed_Displacement_Motor_TL_Phi_B ; t227 [ 95ULL ] = X [ 8ULL ] ;
t227 [ 96ULL ] = X [ 52ULL ] ; t227 [ 97ULL ] = X [ 55ULL ] ; t227 [ 98ULL ]
= X [ 58ULL ] ; t227 [ 99ULL ] = X [ 59ULL ] ; t227 [ 100ULL ] = X [ 60ULL ]
; t227 [ 101ULL ] = X [ 53ULL ] ; t227 [ 102ULL ] = X [ 54ULL ] * 0.1 ; t227
[ 103ULL ] = Fixed_Displacement_Motor_TL_Phi_B ; t227 [ 104ULL ] = X [ 61ULL
] ; t227 [ 105ULL ] = - X [ 59ULL ] ; t227 [ 106ULL ] = X [ 60ULL ] ; t227 [
107ULL ] = ( 1.01325 - X [ 54ULL ] ) * 0.1 ; t227 [ 108ULL ] = X [ 8ULL ] *
9.5492965855137211 ; t227 [ 109ULL ] = X [ 62ULL ] ; t227 [ 110ULL ] =
Fixed_Displacement_Motor_TL_friction_torque_ ; t227 [ 111ULL ] = X [ 59ULL ]
; t227 [ 112ULL ] = Fixed_Displacement_Motor_TL_convection_A_rho ; t227 [
113ULL ] = t234_idx_0 ; t227 [ 114ULL ] = t263 * 100.0 ; t227 [ 115ULL ] = -
X [ 59ULL ] ; t227 [ 116ULL ] = ( 1.01325 - X [ 54ULL ] ) *
7.04347826086956E-15 / ( Fixed_Displacement_Motor_TL_mechanical_power == 0.0
? 1.0E-16 : Fixed_Displacement_Motor_TL_mechanical_power ) * 100000.0 ; t227
[ 117ULL ] = X [ 8ULL ] * X [ 62ULL ] * 0.001 ; t227 [ 118ULL ] = X [ 59ULL ]
/ ( Fixed_Displacement_Motor_TL_convection_A_rho == 0.0 ? 1.0E-16 :
Fixed_Displacement_Motor_TL_convection_A_rho ) ; t227 [ 119ULL ] = - X [
59ULL ] / ( t234_idx_0 == 0.0 ? 1.0E-16 : t234_idx_0 ) ; t227 [ 120ULL ] = X
[ 9ULL ] ; t227 [ 121ULL ] = U_idx_0 ; t227 [ 122ULL ] = - U_idx_0 ; t227 [
123ULL ] = - X [ 9ULL ] ; t227 [ 124ULL ] = X [ 63ULL ] ; t227 [ 125ULL ] = X
[ 11ULL ] * 0.1 ; t227 [ 126ULL ] = X [ 10ULL ] ; t227 [ 127ULL ] = t269 ;
t227 [ 128ULL ] = X [ 10ULL ] ; t227 [ 129ULL ] = X [ 11ULL ] * 0.1 ; t227 [
130ULL ] = X [ 72ULL ] * 0.001 ; t227 [ 131ULL ] =
Gas_Charged_Accumulator_TL_convection_A_mdot ; t227 [ 132ULL ] =
Gas_Charged_Accumulator_TL_rho_I ; t227 [ 133ULL ] = X [ 63ULL ] ; t227 [
134ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 135ULL ] = t269 ; t227 [ 136ULL ] = X [
67ULL ] ; t227 [ 137ULL ] = Gas_Charged_Accumulator_TL_convection_A_mdot ;
t227 [ 138ULL ] = X [ 71ULL ] ; t227 [ 139ULL ] =
Gas_Charged_Accumulator_TL_u_I ; t227 [ 140ULL ] = X [ 11ULL ] / (
Gas_Charged_Accumulator_TL_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_rho_I ) * 100.0 + Gas_Charged_Accumulator_TL_u_I ;
t227 [ 141ULL ] = X [ 72ULL ] * Gas_Charged_Accumulator_TL_rho_I * 0.001 ;
t227 [ 142ULL ] = X [ 36ULL ] ; t227 [ 143ULL ] = X [ 1ULL ] * 0.1 ; t227 [
144ULL ] = X [ 0ULL ] ; t227 [ 145ULL ] = - X [ 39ULL ] ; t227 [ 146ULL ] = X
[ 41ULL ] ; t227 [ 147ULL ] = X [ 12ULL ] ; t227 [ 148ULL ] = X [ 13ULL ] *
0.1 ; t227 [ 149ULL ] = X [ 75ULL ] * 0.001 ; t227 [ 150ULL ] = - X [ 43ULL ]
; t227 [ 151ULL ] = t271 ; t227 [ 152ULL ] = X [ 36ULL ] ; t227 [ 153ULL ] =
X [ 1ULL ] * 0.1 ; t227 [ 154ULL ] = - X [ 39ULL ] ; t227 [ 155ULL ] = X [
73ULL ] ; t227 [ 156ULL ] = - X [ 43ULL ] ; t227 [ 157ULL ] = X [ 74ULL ] ;
t227 [ 158ULL ] = Gas_Charged_Accumulator_TL1_u_I ; t227 [ 159ULL ] = X [
13ULL ] / ( t271 == 0.0 ? 1.0E-16 : t271 ) * 100.0 +
Gas_Charged_Accumulator_TL1_u_I ; t227 [ 160ULL ] = X [ 75ULL ] * t271 *
0.001 ; t227 [ 161ULL ] = X [ 8ULL ] ; t227 [ 162ULL ] = U_idx_1 ; t227 [
163ULL ] = - X [ 76ULL ] + X [ 62ULL ] ; t227 [ 164ULL ] = X [ 8ULL ] ; t227
[ 165ULL ] = X [ 8ULL ] ; t227 [ 166ULL ] = X [ 8ULL ] ; t227 [ 167ULL ] = X
[ 76ULL ] ; t227 [ 168ULL ] = X [ 8ULL ] ; t227 [ 169ULL ] =
Interface_TL_IL1_Phi_TL ; t227 [ 170ULL ] = X [ 52ULL ] ; t227 [ 171ULL ] = X
[ 52ULL ] ; t227 [ 172ULL ] = Interface_TL_IL1_Phi_TL ; t227 [ 173ULL ] = X [
78ULL ] ; t227 [ 174ULL ] = X [ 79ULL ] ; t227 [ 175ULL ] = - X [ 79ULL ] ;
t227 [ 176ULL ] = X [ 79ULL ] ; t227 [ 177ULL ] = X [ 30ULL ] * 0.1 ; t227 [
178ULL ] = Interface_TL_IL2_Phi_TL ; t227 [ 179ULL ] = X [ 29ULL ] ; t227 [
180ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 181ULL ] = X [ 29ULL ] ; t227 [ 182ULL
] = X [ 30ULL ] * 0.1 ; t227 [ 183ULL ] = Interface_TL_IL2_Phi_TL ; t227 [
184ULL ] = X [ 80ULL ] ; t227 [ 185ULL ] =
Interface_TL_IL2_convection_TL_mdot ; t227 [ 186ULL ] = X [ 81ULL ] ; t227 [
187ULL ] = - Interface_TL_IL2_convection_TL_mdot ; t227 [ 188ULL ] =
Interface_TL_IL2_convection_TL_mdot ; t227 [ 189ULL ] = X [ 4ULL ] * 0.1 ;
t227 [ 190ULL ] = - X [ 46ULL ] ; t227 [ 191ULL ] = X [ 37ULL ] ; t227 [
192ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 193ULL ] = X [ 37ULL ] ; t227 [ 194ULL ]
= X [ 4ULL ] * 0.1 ; t227 [ 195ULL ] = - X [ 46ULL ] ; t227 [ 196ULL ] = X [
82ULL ] ; t227 [ 197ULL ] = - X [ 48ULL ] ; t227 [ 198ULL ] = X [ 83ULL ] ;
t227 [ 199ULL ] = X [ 48ULL ] ; t227 [ 200ULL ] = - X [ 48ULL ] ; t227 [
201ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 202ULL ] = X [ 25ULL ] ; t227 [ 203ULL
] = X [ 26ULL ] * 0.1 ; t227 [ 204ULL ] = X [ 25ULL ] ; t227 [ 205ULL ] = X [
26ULL ] * 0.1 ; t227 [ 206ULL ] = X [ 84ULL ] ; t227 [ 207ULL ] = X [ 85ULL ]
; t227 [ 208ULL ] = X [ 10ULL ] ; t227 [ 209ULL ] = X [ 10ULL ] ; t227 [
210ULL ] = X [ 0ULL ] ; t227 [ 211ULL ] = X [ 0ULL ] ; t227 [ 212ULL ] = X [
53ULL ] ; t227 [ 213ULL ] = X [ 54ULL ] * 0.1 ; t227 [ 214ULL ] = X [ 52ULL ]
; t227 [ 215ULL ] = X [ 53ULL ] ; t227 [ 216ULL ] = X [ 54ULL ] * 0.1 ; t227
[ 217ULL ] = X [ 52ULL ] ; t227 [ 218ULL ] = X [ 56ULL ] ; t227 [ 219ULL ] =
- X [ 56ULL ] ; t227 [ 220ULL ] = X [ 53ULL ] ; t227 [ 221ULL ] = X [ 54ULL ]
* 0.1 ; t227 [ 222ULL ] = X [ 56ULL ] ; t227 [ 223ULL ] = X [ 86ULL ] ; t227
[ 224ULL ] = t274 ; t227 [ 225ULL ] = X [ 88ULL ] ; t227 [ 226ULL ] = X [
52ULL ] ; t227 [ 227ULL ] = - X [ 56ULL ] ; t227 [ 228ULL ] = X [ 89ULL ] ;
t227 [ 229ULL ] = - t274 ; t227 [ 230ULL ] = X [ 88ULL ] ; t227 [ 231ULL ] =
X [ 53ULL ] ; t227 [ 232ULL ] = X [ 54ULL ] * 0.1 ; t227 [ 233ULL ] = X [
52ULL ] ; t227 [ 234ULL ] = t274 ; t227 [ 235ULL ] = - t274 ; t227 [ 236ULL ]
= X [ 56ULL ] ; t227 [ 237ULL ] = - X [ 56ULL ] ; t227 [ 238ULL ] = t274 ;
t227 [ 239ULL ] = - t274 ; t227 [ 240ULL ] = t274 / (
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho == 0.0 ? 1.0E-16 :
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho ) ; t227 [ 241ULL ] =
- t274 / ( Pressure_Relief_Valve_TL_relief_valve_convection_B_rho == 0.0 ?
1.0E-16 : Pressure_Relief_Valve_TL_relief_valve_convection_B_rho ) ; t227 [
242ULL ] = Pressure_Relief_Valve_TL_relief_valve_convection_A_rho ; t227 [
243ULL ] = Pressure_Relief_Valve_TL_relief_valve_convection_B_rho ; t227 [
244ULL ] = Pressure_Relief_Valve_TL_relief_valve_orifice_area ; t227 [ 245ULL
] = X [ 63ULL ] ; t227 [ 246ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 247ULL ] = X [
90ULL ] ; t227 [ 248ULL ] = X [ 63ULL ] ; t227 [ 249ULL ] = X [ 11ULL ] * 0.1
; t227 [ 250ULL ] = X [ 90ULL ] ; t227 [ 251ULL ] = X [ 64ULL ] ; t227 [
252ULL ] = - X [ 64ULL ] ; t227 [ 253ULL ] = X [ 63ULL ] ; t227 [ 254ULL ] =
X [ 11ULL ] * 0.1 ; t227 [ 255ULL ] = X [ 64ULL ] ; t227 [ 256ULL ] = X [
91ULL ] ; t227 [ 257ULL ] = X [ 68ULL ] ; t227 [ 258ULL ] = X [ 92ULL ] ;
t227 [ 259ULL ] = X [ 90ULL ] ; t227 [ 260ULL ] = - X [ 64ULL ] ; t227 [
261ULL ] = X [ 93ULL ] ; t227 [ 262ULL ] = - X [ 68ULL ] ; t227 [ 263ULL ] =
X [ 92ULL ] ; t227 [ 264ULL ] = X [ 63ULL ] ; t227 [ 265ULL ] = X [ 11ULL ] *
0.1 ; t227 [ 266ULL ] = X [ 90ULL ] ; t227 [ 267ULL ] = X [ 68ULL ] ; t227 [
268ULL ] = - X [ 68ULL ] ; t227 [ 269ULL ] = X [ 64ULL ] ; t227 [ 270ULL ] =
- X [ 64ULL ] ; t227 [ 271ULL ] = X [ 68ULL ] ; t227 [ 272ULL ] = - X [ 68ULL
] ; t227 [ 273ULL ] = X [ 68ULL ] / ( t276 == 0.0 ? 1.0E-16 : t276 ) ; t227 [
274ULL ] = - X [ 68ULL ] / (
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho == 0.0 ? 1.0E-16 :
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho ) ; t227 [ 275ULL ] =
t276 ; t227 [ 276ULL ] =
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho ; t227 [ 277ULL ] =
Pressure_Relief_Valve_TL1_relief_valve_orifice_area ; t227 [ 278ULL ] = - X [
79ULL ] ; t227 [ 279ULL ] = t278 * 1.0E-6 ; t227 [ 280ULL ] = - X [ 79ULL ] ;
t227 [ 281ULL ] = t278 * 1.0E-6 ; t227 [ 282ULL ] = X [ 30ULL ] * 0.1 ; t227
[ 283ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 284ULL ] = X [ 30ULL ] * 0.1 ; t227 [
285ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 286ULL ] =
Interface_TL_IL2_convection_TL_mdot ; t227 [ 287ULL ] = t280 * 1.0E-6 ; t227
[ 288ULL ] = Interface_TL_IL2_convection_TL_mdot ; t227 [ 289ULL ] = t280 *
1.0E-6 ; t227 [ 290ULL ] = X [ 52ULL ] ; t227 [ 291ULL ] = X [ 77ULL ] ; t227
[ 292ULL ] = X [ 52ULL ] ; t227 [ 293ULL ] = X [ 77ULL ] ; t227 [ 294ULL ] =
X [ 94ULL ] ; t227 [ 295ULL ] = t281 ; t227 [ 296ULL ] = t281 ; t227 [ 297ULL
] = X [ 95ULL ] ; t227 [ 298ULL ] = X [ 57ULL ] ; t227 [ 299ULL ] = X [ 95ULL
] ; t227 [ 300ULL ] = X [ 57ULL ] ; t227 [ 301ULL ] = X [ 96ULL ] ; t227 [
302ULL ] = X [ 87ULL ] ; t227 [ 303ULL ] = X [ 87ULL ] ; t227 [ 304ULL ] = X
[ 90ULL ] ; t227 [ 305ULL ] = t282 ; t227 [ 306ULL ] = X [ 90ULL ] ; t227 [
307ULL ] = t282 ; t227 [ 308ULL ] = X [ 97ULL ] ; t227 [ 309ULL ] = t283 ;
t227 [ 310ULL ] = t283 ; t227 [ 311ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 312ULL
] = X [ 9ULL ] ; t227 [ 313ULL ] = X [ 98ULL ] ; t227 [ 314ULL ] = X [ 98ULL
] * 0.08 ; t227 [ 315ULL ] = X [ 98ULL ] * X [ 98ULL ] * 0.08 ; t227 [ 316ULL
] = D_idx_0 ; t227 [ 317ULL ] = X [ 9ULL ] ; t227 [ 318ULL ] = X [ 99ULL ] ;
t227 [ 319ULL ] = X [ 14ULL ] ; t227 [ 320ULL ] = X [ 9ULL ] ; t227 [ 321ULL
] = X [ 9ULL ] ; t227 [ 322ULL ] = X [ 9ULL ] ; t227 [ 323ULL ] = X [ 100ULL
] ; t227 [ 324ULL ] = X [ 9ULL ] ; t227 [ 325ULL ] = X [ 15ULL ] ; t227 [
326ULL ] = X [ 9ULL ] ; t227 [ 327ULL ] = X [ 9ULL ] ; t227 [ 328ULL ] = X [
15ULL ] ; t227 [ 329ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 330ULL ] = X [ 9ULL ] ;
t227 [ 331ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 332ULL ] =
Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t227 [ 333ULL ] = X [ 30ULL ] * 0.1 ;
t227 [ 334ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t227 [ 335ULL ] =
D_idx_1 ; t227 [ 336ULL ] =
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A ; t227 [ 337ULL ] = -
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A ; t227 [ 338ULL ] = ( X [
30ULL ] - Servovalve2_Fixed_Orifice_A_B_p ) * 0.1 ; t227 [ 339ULL ] =
intrm_sf_mf_25 ; t227 [ 340ULL ] = intrm_sf_mf_39 ; t227 [ 341ULL ] =
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A / ( intrm_sf_mf_25 == 0.0
? 1.0E-16 : intrm_sf_mf_25 ) ; t227 [ 342ULL ] = -
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_mdot_A / ( intrm_sf_mf_39 == 0.0
? 1.0E-16 : intrm_sf_mf_39 ) ; t227 [ 343ULL ] = X [ 30ULL ] * 0.1 ; t227 [
344ULL ] = t285 * 0.1 ; t227 [ 345ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 346ULL ]
= t285 * 0.1 ; t227 [ 347ULL ] = D_idx_2 ; t227 [ 348ULL ] = X [ 102ULL ] ;
t227 [ 349ULL ] = - X [ 102ULL ] ; t227 [ 350ULL ] = ( X [ 30ULL ] - t285 ) *
0.1 ; t227 [ 351ULL ] = intrm_sf_mf_25 ; t227 [ 352ULL ] = intrm_sf_mf_53 ;
t227 [ 353ULL ] = X [ 102ULL ] / ( intrm_sf_mf_25 == 0.0 ? 1.0E-16 :
intrm_sf_mf_25 ) ; t227 [ 354ULL ] = - X [ 102ULL ] / ( intrm_sf_mf_53 == 0.0
? 1.0E-16 : intrm_sf_mf_53 ) ; t227 [ 355ULL ] = X [ 16ULL ] ; t227 [ 356ULL
] = X [ 9ULL ] ; t227 [ 357ULL ] = X [ 106ULL ] ; t227 [ 358ULL ] = X [
106ULL ] * 0.0196078431372549 ; t227 [ 359ULL ] = X [ 106ULL ] * X [ 106ULL ]
* 0.0196078431372549 ; t227 [ 360ULL ] = X [ 16ULL ] ; t227 [ 361ULL ] = X [
9ULL ] ; t227 [ 362ULL ] = X [ 17ULL ] * 1200.0 ; t227 [ 363ULL ] = - X [
16ULL ] + X [ 9ULL ] ; t227 [ 364ULL ] = X [ 17ULL ] ; t227 [ 365ULL ] = X [
26ULL ] * 0.1 ; t227 [ 366ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ;
t227 [ 367ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 368ULL ] = t285 * 0.1 ; t227 [
369ULL ] = X [ 16ULL ] ; t227 [ 370ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 371ULL
] = X [ 16ULL ] ; t227 [ 372ULL ] = X [ 107ULL ] ; t227 [ 373ULL ] = - X [
107ULL ] ; t227 [ 374ULL ] = - X [ 16ULL ] ; t227 [ 375ULL ] = X [ 18ULL ] ;
t227 [ 376ULL ] = X [ 16ULL ] ; t227 [ 377ULL ] = X [ 16ULL ] ; t227 [ 378ULL
] = X [ 18ULL ] ; t227 [ 379ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 380ULL ] = X [
18ULL ] ; t227 [ 381ULL ] =
Servovalve2_Main_Valve_Orifice_AT_Orifice_orifice_area ; t227 [ 382ULL ] = X
[ 103ULL ] ; t227 [ 383ULL ] = - X [ 103ULL ] ; t227 [ 384ULL ] = ( X [ 26ULL
] - 1.01325 ) * 0.1 ; t227 [ 385ULL ] = intrm_sf_mf_63 ; t227 [ 386ULL ] = X
[ 103ULL ] / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 : intrm_sf_mf_63 ) ; t227 [
387ULL ] = - X [ 103ULL ] / 993.22507500000017 ; t227 [ 388ULL ] = X [ 16ULL
] ; t227 [ 389ULL ] = X [ 107ULL ] ; t227 [ 390ULL ] = X [ 18ULL ] ; t227 [
391ULL ] = Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc0 ;
t227 [ 392ULL ] = X [ 103ULL ] ; t227 [ 393ULL ] = - X [ 103ULL ] ; t227 [
394ULL ] = t293 ; t227 [ 395ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 396ULL ] = X [
16ULL ] ; t227 [ 397ULL ] = X [ 108ULL ] ; t227 [ 398ULL ] = - X [ 108ULL ] ;
t227 [ 399ULL ] = - X [ 16ULL ] ; t227 [ 400ULL ] = X [ 19ULL ] ; t227 [
401ULL ] = X [ 16ULL ] ; t227 [ 402ULL ] = X [ 16ULL ] ; t227 [ 403ULL ] = X
[ 19ULL ] ; t227 [ 404ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 405ULL ] = X [ 19ULL
] ; t227 [ 406ULL ] = Servovalve2_Main_Valve_Orifice_BT_Orifice_orifice_area
; t227 [ 407ULL ] = t295 ; t227 [ 408ULL ] = - t295 ; t227 [ 409ULL ] = ( X [
4ULL ] - 1.01325 ) * 0.1 ; t227 [ 410ULL ] = intrm_sf_mf_92 ; t227 [ 411ULL ]
= t295 / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) ; t227 [ 412ULL
] = - t295 / 993.22507500000017 ; t227 [ 413ULL ] = X [ 16ULL ] ; t227 [
414ULL ] = X [ 108ULL ] ; t227 [ 415ULL ] = X [ 19ULL ] ; t227 [ 416ULL ] =
t294 ; t227 [ 417ULL ] = t295 ; t227 [ 418ULL ] = - t295 ; t227 [ 419ULL ] =
t297 ; t227 [ 420ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 421ULL ] = X [ 26ULL ] *
0.1 ; t227 [ 422ULL ] = X [ 16ULL ] ; t227 [ 423ULL ] = X [ 109ULL ] ; t227 [
424ULL ] = - X [ 109ULL ] ; t227 [ 425ULL ] = - X [ 16ULL ] ; t227 [ 426ULL ]
= X [ 20ULL ] ; t227 [ 427ULL ] = X [ 16ULL ] ; t227 [ 428ULL ] = X [ 16ULL ]
; t227 [ 429ULL ] = X [ 20ULL ] ; t227 [ 430ULL ] = X [ 30ULL ] * 0.1 ; t227
[ 431ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 432ULL ] = X [ 20ULL ] ; t227 [
433ULL ] = t299 ; t227 [ 434ULL ] = X [ 103ULL ] ; t227 [ 435ULL ] = - X [
103ULL ] ; t227 [ 436ULL ] = ( X [ 30ULL ] - X [ 26ULL ] ) * 0.1 ; t227 [
437ULL ] = intrm_sf_mf_25 ; t227 [ 438ULL ] = intrm_sf_mf_63 ; t227 [ 439ULL
] = X [ 103ULL ] / ( intrm_sf_mf_25 == 0.0 ? 1.0E-16 : intrm_sf_mf_25 ) ;
t227 [ 440ULL ] = - X [ 103ULL ] / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 :
intrm_sf_mf_63 ) ; t227 [ 441ULL ] = X [ 16ULL ] ; t227 [ 442ULL ] = X [
26ULL ] * 0.1 ; t227 [ 443ULL ] = X [ 26ULL ] * 0.1 ; t227 [ 444ULL ] = X [
109ULL ] ; t227 [ 445ULL ] = X [ 20ULL ] ; t227 [ 446ULL ] = t298 ; t227 [
447ULL ] = X [ 103ULL ] ; t227 [ 448ULL ] = - X [ 103ULL ] ; t227 [ 449ULL ]
= t301 ; t227 [ 450ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 451ULL ] = X [ 4ULL ] *
0.1 ; t227 [ 452ULL ] = X [ 16ULL ] ; t227 [ 453ULL ] = X [ 110ULL ] ; t227 [
454ULL ] = - X [ 110ULL ] ; t227 [ 455ULL ] = - X [ 16ULL ] ; t227 [ 456ULL ]
= X [ 21ULL ] ; t227 [ 457ULL ] = X [ 16ULL ] ; t227 [ 458ULL ] = X [ 16ULL ]
; t227 [ 459ULL ] = X [ 21ULL ] ; t227 [ 460ULL ] = X [ 30ULL ] * 0.1 ; t227
[ 461ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 462ULL ] = X [ 21ULL ] ; t227 [ 463ULL
] = Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.0E-9 ; t227 [
464ULL ] = X [ 104ULL ] ; t227 [ 465ULL ] = - X [ 104ULL ] ; t227 [ 466ULL ]
= ( X [ 30ULL ] - X [ 4ULL ] ) * 0.1 ; t227 [ 467ULL ] = intrm_sf_mf_25 ;
t227 [ 468ULL ] = intrm_sf_mf_92 ; t227 [ 469ULL ] = X [ 104ULL ] / (
intrm_sf_mf_25 == 0.0 ? 1.0E-16 : intrm_sf_mf_25 ) ; t227 [ 470ULL ] = - X [
104ULL ] / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) ; t227 [
471ULL ] = X [ 16ULL ] ; t227 [ 472ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 473ULL ]
= X [ 4ULL ] * 0.1 ; t227 [ 474ULL ] = X [ 110ULL ] ; t227 [ 475ULL ] = X [
21ULL ] ; t227 [ 476ULL ] = t302 ; t227 [ 477ULL ] = X [ 104ULL ] ; t227 [
478ULL ] = - X [ 104ULL ] ; t227 [ 479ULL ] =
Servovalve2_Main_Valve_Spool_Damper_power_dissipated + 1.2250000000000001E-6
; t227 [ 480ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 481ULL ] = X [ 16ULL ] ; t227
[ 482ULL ] = X [ 111ULL ] ; t227 [ 483ULL ] = X [ 111ULL ] *
0.0027624309392265192 ; t227 [ 484ULL ] = X [ 111ULL ] * X [ 111ULL ] *
0.0027624309392265192 ; t227 [ 485ULL ] = X [ 16ULL ] ; t227 [ 486ULL ] = X [
16ULL ] ; t227 [ 487ULL ] = X [ 112ULL ] ; t227 [ 488ULL ] = X [ 16ULL ] ;
t227 [ 489ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t227 [ 490ULL ] = X
[ 16ULL ] ; t227 [ 491ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t227 [
492ULL ] = X [ 16ULL ] ; t227 [ 493ULL ] = Servovalve2_Fixed_Orifice_A_B_p *
0.1 ; t227 [ 494ULL ] = intrm_sf_mf_39 ; t227 [ 495ULL ] = X [ 16ULL ] ; t227
[ 496ULL ] = X [ 22ULL ] ; t227 [ 497ULL ] = X [ 101ULL ] ; t227 [ 498ULL ] =
( ( ( ( - X [ 48ULL ] - X [ 102ULL ] ) - X [ 70ULL ] ) + X [ 33ULL ] ) + X [
79ULL ] ) + X [ 113ULL ] ; t227 [ 499ULL ] = X [ 22ULL ] * 7.8E-5 + 0.0001 ;
t227 [ 500ULL ] = t285 * 0.1 ; t227 [ 501ULL ] = X [ 16ULL ] ; t227 [ 502ULL
] = t285 * 0.1 ; t227 [ 503ULL ] = X [ 16ULL ] ; t227 [ 504ULL ] = t285 * 0.1
; t227 [ 505ULL ] = intrm_sf_mf_53 ; t227 [ 506ULL ] = X [ 16ULL ] ; t227 [
507ULL ] = X [ 23ULL ] ; t227 [ 508ULL ] = X [ 105ULL ] ; t227 [ 509ULL ] = -
X [ 113ULL ] + X [ 102ULL ] ; t227 [ 510ULL ] = X [ 23ULL ] * - 7.8E-5 +
0.0001 ; t227 [ 511ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t227 [
512ULL ] = Servovalve2_Fixed_Orifice_A_B_p * 0.1 ; t227 [ 513ULL ] = X [
15ULL ] ; t227 [ 514ULL ] = D_idx_3 ; t227 [ 515ULL ] = intrm_sf_mf_184 ;
t227 [ 516ULL ] = Servovalve2_Nozzle_A_Nozzle_A_mdot_A ; t227 [ 517ULL ] = -
Servovalve2_Nozzle_A_Nozzle_A_mdot_A ; t227 [ 518ULL ] = (
Servovalve2_Fixed_Orifice_A_B_p - 1.01325 ) * 0.1 ; t227 [ 519ULL ] =
intrm_sf_mf_39 ; t227 [ 520ULL ] = Servovalve2_Nozzle_A_Nozzle_A_mdot_A / (
intrm_sf_mf_39 == 0.0 ? 1.0E-16 : intrm_sf_mf_39 ) ; t227 [ 521ULL ] = -
Servovalve2_Nozzle_A_Nozzle_A_mdot_A / 993.22507500000017 ; t227 [ 522ULL ] =
X [ 15ULL ] ; t227 [ 523ULL ] = t285 * 0.1 ; t227 [ 524ULL ] = t285 * 0.1 ;
t227 [ 525ULL ] = X [ 15ULL ] ; t227 [ 526ULL ] = D_idx_4 ; t227 [ 527ULL ] =
intrm_sf_mf_202 ; t227 [ 528ULL ] = X [ 113ULL ] ; t227 [ 529ULL ] = - X [
113ULL ] ; t227 [ 530ULL ] = ( t285 - 1.01325 ) * 0.1 ; t227 [ 531ULL ] =
intrm_sf_mf_53 ; t227 [ 532ULL ] = X [ 113ULL ] / ( intrm_sf_mf_53 == 0.0 ?
1.0E-16 : intrm_sf_mf_53 ) ; t227 [ 533ULL ] = - X [ 113ULL ] /
993.22507500000017 ; t227 [ 534ULL ] = X [ 15ULL ] ; t227 [ 535ULL ] = X [
30ULL ] * 0.1 ; t227 [ 536ULL ] = U_idx_1 ; t227 [ 537ULL ] = U_idx_2 ; t227
[ 538ULL ] = U_idx_3 ; t227 [ 539ULL ] = U_idx_0 ; t227 [ 540ULL ] = X [
53ULL ] ; t227 [ 541ULL ] = X [ 54ULL ] * 0.1 ; t227 [ 542ULL ] =
Double_Acting_Actuator_TL_R_v ; t227 [ 543ULL ] = X [ 38ULL ] ; t227 [ 544ULL
] = X [ 38ULL ] * 0.001 ; t227 [ 545ULL ] = X [ 38ULL ] * X [ 38ULL ] * 0.001
; t227 [ 546ULL ] = Double_Acting_Actuator_TL_R_v ; t227 [ 547ULL ] = X [
24ULL ] * 10000.0 ; t227 [ 548ULL ] = Double_Acting_Actuator_TL_R_v ; t227 [
549ULL ] = X [ 24ULL ] ; t227 [ 550ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 551ULL ]
= X [ 4ULL ] * 0.1 ; t227 [ 552ULL ] = X [ 4ULL ] * 0.1 ; t227 [ 553ULL ] = X
[ 4ULL ] * 0.1 ; t227 [ 554ULL ] = X [ 48ULL ] ; t227 [ 555ULL ] = t308 *
1.0E-6 ; t227 [ 556ULL ] = X [ 48ULL ] ; t227 [ 557ULL ] = t308 * 1.0E-6 ;
t227 [ 558ULL ] = X [ 63ULL ] ; t227 [ 559ULL ] = X [ 11ULL ] * 0.1 ; t227 [
560ULL ] = X [ 63ULL ] ; t227 [ 561ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 562ULL
] = X [ 63ULL ] ; t227 [ 563ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 564ULL ] = X [
63ULL ] ; t227 [ 565ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 566ULL ] = -
Gas_Charged_Accumulator_TL_convection_A_mdot ; t227 [ 567ULL ] = t269 * -
1000.0 ; t227 [ 568ULL ] = - t269 ; t227 [ 569ULL ] = t309 * 1.0E-6 ; t227 [
570ULL ] = - Gas_Charged_Accumulator_TL_convection_A_mdot ; t227 [ 571ULL ] =
t309 * 1.0E-6 ; t227 [ 572ULL ] = X [ 29ULL ] ; t227 [ 573ULL ] = X [ 30ULL ]
* 0.1 ; t227 [ 574ULL ] = X [ 29ULL ] ; t227 [ 575ULL ] = X [ 30ULL ] * 0.1 ;
t227 [ 576ULL ] = X [ 29ULL ] ; t227 [ 577ULL ] = X [ 30ULL ] * 0.1 ; t227 [
578ULL ] = X [ 29ULL ] ; t227 [ 579ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 580ULL
] = X [ 33ULL ] ; t227 [ 581ULL ] = X [ 31ULL ] * 1000.0 ; t227 [ 582ULL ] =
X [ 31ULL ] ; t227 [ 583ULL ] = t310 * 1.0E-6 ; t227 [ 584ULL ] = X [ 33ULL ]
; t227 [ 585ULL ] = t310 * 1.0E-6 ; t227 [ 586ULL ] = X [ 52ULL ] ; t227 [
587ULL ] = X [ 52ULL ] ; t227 [ 588ULL ] = X [ 52ULL ] ; t227 [ 589ULL ] = X
[ 52ULL ] ; t227 [ 590ULL ] = t274 ; t227 [ 591ULL ] = X [ 56ULL ] * 1000.0 ;
t227 [ 592ULL ] = X [ 56ULL ] ; t227 [ 593ULL ] =
flow_sensor3_Flow_Rate_Sensor_TL3_V * 1.0E-6 ; t227 [ 594ULL ] = t274 ; t227
[ 595ULL ] = flow_sensor3_Flow_Rate_Sensor_TL3_V * 1.0E-6 ; t227 [ 596ULL ] =
X [ 63ULL ] ; t227 [ 597ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 598ULL ] = X [
63ULL ] ; t227 [ 599ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 600ULL ] = X [ 11ULL ]
* 99999.999999999985 ; t227 [ 601ULL ] = X [ 11ULL ] * 99999.999999999985 ;
t227 [ 602ULL ] = X [ 29ULL ] ; t227 [ 603ULL ] = X [ 30ULL ] * 0.1 ; t227 [
604ULL ] = X [ 29ULL ] ; t227 [ 605ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 606ULL
] = X [ 30ULL ] * 99999.999999999985 ; t227 [ 607ULL ] = X [ 30ULL ] *
99999.999999999985 ; t227 [ 608ULL ] = X [ 36ULL ] ; t227 [ 609ULL ] = X [
1ULL ] * 0.1 ; t227 [ 610ULL ] = X [ 36ULL ] ; t227 [ 611ULL ] = X [ 1ULL ] *
0.1 ; t227 [ 612ULL ] = X [ 1ULL ] * 99999.999999999985 ; t227 [ 613ULL ] = X
[ 1ULL ] * 99999.999999999985 ; t227 [ 614ULL ] = X [ 53ULL ] ; t227 [ 615ULL
] = X [ 54ULL ] * 0.1 ; t227 [ 616ULL ] = X [ 27ULL ] ; t227 [ 617ULL ] = X [
28ULL ] * 0.1 ; t227 [ 618ULL ] = U_idx_2 ; t227 [ 619ULL ] = X [ 95ULL ] ;
t227 [ 620ULL ] = X [ 53ULL ] ; t227 [ 621ULL ] = X [ 54ULL ] * 0.1 ; t227 [
622ULL ] = X [ 95ULL ] ; t227 [ 623ULL ] = X [ 57ULL ] ; t227 [ 624ULL ] = -
X [ 57ULL ] ; t227 [ 625ULL ] = - U_idx_2 + 0.00050000000000000044 ; t227 [
626ULL ] = X [ 53ULL ] ; t227 [ 627ULL ] = X [ 54ULL ] * 0.1 ; t227 [ 628ULL
] = X [ 57ULL ] ; t227 [ 629ULL ] = X [ 114ULL ] ; t227 [ 630ULL ] = X [
87ULL ] ; t227 [ 631ULL ] = X [ 115ULL ] ; t227 [ 632ULL ] = X [ 95ULL ] ;
t227 [ 633ULL ] = - X [ 57ULL ] ; t227 [ 634ULL ] = X [ 116ULL ] ; t227 [
635ULL ] = - X [ 87ULL ] ; t227 [ 636ULL ] = X [ 115ULL ] ; t227 [ 637ULL ] =
t315 * 9.9999900000000011E-5 + 1.0E-10 ; t227 [ 638ULL ] = X [ 87ULL ] ; t227
[ 639ULL ] = - X [ 87ULL ] ; t227 [ 640ULL ] = t319 ; t227 [ 641ULL ] =
x3_Way_Directional_Valve_TL_orifice_AT_convection_B_rho ; t227 [ 642ULL ] = X
[ 87ULL ] / ( t319 == 0.0 ? 1.0E-16 : t319 ) ; t227 [ 643ULL ] = - X [ 87ULL
] / ( x3_Way_Directional_Valve_TL_orifice_AT_convection_B_rho == 0.0 ?
1.0E-16 : x3_Way_Directional_Valve_TL_orifice_AT_convection_B_rho ) ; t227 [
644ULL ] = X [ 27ULL ] ; t227 [ 645ULL ] = X [ 28ULL ] * 0.1 ; t227 [ 646ULL
] = X [ 53ULL ] ; t227 [ 647ULL ] = X [ 54ULL ] * 0.1 ; t227 [ 648ULL ] = - X
[ 31ULL ] ; t227 [ 649ULL ] = X [ 31ULL ] ; t227 [ 650ULL ] = U_idx_2 +
0.00050000000000000044 ; t227 [ 651ULL ] = X [ 27ULL ] ; t227 [ 652ULL ] = X
[ 28ULL ] * 0.1 ; t227 [ 653ULL ] = - X [ 31ULL ] ; t227 [ 654ULL ] = X [
117ULL ] ; t227 [ 655ULL ] = - X [ 33ULL ] ; t227 [ 656ULL ] = X [ 118ULL ] ;
t227 [ 657ULL ] = X [ 53ULL ] ; t227 [ 658ULL ] = X [ 54ULL ] * 0.1 ; t227 [
659ULL ] = X [ 31ULL ] ; t227 [ 660ULL ] = X [ 119ULL ] ; t227 [ 661ULL ] = X
[ 33ULL ] ; t227 [ 662ULL ] = X [ 118ULL ] ; t227 [ 663ULL ] = t317 *
9.9999900000000011E-5 + 1.0E-10 ; t227 [ 664ULL ] = - X [ 33ULL ] ; t227 [
665ULL ] = X [ 33ULL ] ; t227 [ 666ULL ] = t321 ; t227 [ 667ULL ] =
x3_Way_Directional_Valve_TL_orifice_PA_convection_B_rho ; t227 [ 668ULL ] = -
X [ 33ULL ] / ( t321 == 0.0 ? 1.0E-16 : t321 ) ; t227 [ 669ULL ] = X [ 33ULL
] / ( x3_Way_Directional_Valve_TL_orifice_PA_convection_B_rho == 0.0 ?
1.0E-16 : x3_Way_Directional_Valve_TL_orifice_PA_convection_B_rho ) ; t227 [
670ULL ] = X [ 63ULL ] ; t227 [ 671ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 672ULL
] = X [ 29ULL ] ; t227 [ 673ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 674ULL ] =
U_idx_3 ; t227 [ 675ULL ] = X [ 90ULL ] ; t227 [ 676ULL ] = X [ 63ULL ] ;
t227 [ 677ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 678ULL ] = X [ 90ULL ] ; t227 [
679ULL ] = X [ 65ULL ] ; t227 [ 680ULL ] = - X [ 65ULL ] ; t227 [ 681ULL ] =
- U_idx_3 + 0.00050000000000000044 ; t227 [ 682ULL ] = X [ 63ULL ] ; t227 [
683ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 684ULL ] = X [ 65ULL ] ; t227 [ 685ULL
] = X [ 120ULL ] ; t227 [ 686ULL ] = X [ 69ULL ] ; t227 [ 687ULL ] = X [
121ULL ] ; t227 [ 688ULL ] = X [ 90ULL ] ; t227 [ 689ULL ] = - X [ 65ULL ] ;
t227 [ 690ULL ] = X [ 122ULL ] ; t227 [ 691ULL ] = - X [ 69ULL ] ; t227 [
692ULL ] = X [ 121ULL ] ; t227 [ 693ULL ] = t264 * 9.9999900000000011E-5 +
1.0E-10 ; t227 [ 694ULL ] = X [ 69ULL ] ; t227 [ 695ULL ] = - X [ 69ULL ] ;
t227 [ 696ULL ] = t258 ; t227 [ 697ULL ] =
x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho ; t227 [ 698ULL ] =
X [ 69ULL ] / ( t258 == 0.0 ? 1.0E-16 : t258 ) ; t227 [ 699ULL ] = - X [
69ULL ] / ( x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho == 0.0 ?
1.0E-16 : x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho ) ; t227 [
700ULL ] = X [ 29ULL ] ; t227 [ 701ULL ] = X [ 30ULL ] * 0.1 ; t227 [ 702ULL
] = X [ 63ULL ] ; t227 [ 703ULL ] = X [ 11ULL ] * 0.1 ; t227 [ 704ULL ] = X [
66ULL ] ; t227 [ 705ULL ] = - X [ 66ULL ] ; t227 [ 706ULL ] = U_idx_3 +
0.00050000000000000044 ; t227 [ 707ULL ] = X [ 29ULL ] ; t227 [ 708ULL ] = X
[ 30ULL ] * 0.1 ; t227 [ 709ULL ] = X [ 66ULL ] ; t227 [ 710ULL ] = X [
123ULL ] ; t227 [ 711ULL ] = X [ 70ULL ] ; t227 [ 712ULL ] = X [ 124ULL ] ;
t227 [ 713ULL ] = X [ 63ULL ] ; t227 [ 714ULL ] = X [ 11ULL ] * 0.1 ; t227 [
715ULL ] = - X [ 66ULL ] ; t227 [ 716ULL ] = X [ 125ULL ] ; t227 [ 717ULL ] =
- X [ 70ULL ] ; t227 [ 718ULL ] = X [ 124ULL ] ; t227 [ 719ULL ] =
intrm_sf_mf_242 ; t227 [ 720ULL ] = X [ 70ULL ] ; t227 [ 721ULL ] = - X [
70ULL ] ; t227 [ 722ULL ] = t325 ; t227 [ 723ULL ] =
x3_Way_Directional_Valve_TL1_orifice_PA_convection_B_rho ; t227 [ 724ULL ] =
X [ 70ULL ] / ( t325 == 0.0 ? 1.0E-16 : t325 ) ; t227 [ 725ULL ] = - X [
70ULL ] / ( x3_Way_Directional_Valve_TL1_orifice_PA_convection_B_rho == 0.0 ?
1.0E-16 : x3_Way_Directional_Valve_TL1_orifice_PA_convection_B_rho ) ; for (
b = 0 ; b < 726 ; b ++ ) { out . mX [ b ] = t227 [ b ] ; } ( void ) LC ; (
void ) t329 ; return 0 ; }
