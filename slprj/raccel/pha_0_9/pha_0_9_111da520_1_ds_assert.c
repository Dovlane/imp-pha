#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_assert.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_assert ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t579 , NeDsMethodOutput * t580 ) { ETTS0 ab_efOut ;
ETTS0 ac_efOut ; ETTS0 ae_efOut ; ETTS0 b_efOut ; ETTS0 bd_efOut ; ETTS0
cb_efOut ; ETTS0 cc_efOut ; ETTS0 ce_efOut ; ETTS0 d_efOut ; ETTS0 db_efOut ;
ETTS0 dd_efOut ; ETTS0 e_efOut ; ETTS0 ec_efOut ; ETTS0 ee_efOut ; ETTS0
efOut ; ETTS0 fb_efOut ; ETTS0 fc_efOut ; ETTS0 fd_efOut ; ETTS0 g_efOut ;
ETTS0 gb_efOut ; ETTS0 ge_efOut ; ETTS0 h_efOut ; ETTS0 hc_efOut ; ETTS0
hd_efOut ; ETTS0 ib_efOut ; ETTS0 ie_efOut ; ETTS0 j_efOut ; ETTS0 jb_efOut ;
ETTS0 jc_efOut ; ETTS0 jd_efOut ; ETTS0 k_efOut ; ETTS0 ke_efOut ; ETTS0
lb_efOut ; ETTS0 lc_efOut ; ETTS0 ld_efOut ; ETTS0 m_efOut ; ETTS0 mb_efOut ;
ETTS0 me_efOut ; ETTS0 n_efOut ; ETTS0 nc_efOut ; ETTS0 nd_efOut ; ETTS0
ob_efOut ; ETTS0 oe_efOut ; ETTS0 p_efOut ; ETTS0 pc_efOut ; ETTS0 pd_efOut ;
ETTS0 qe_efOut ; ETTS0 rb_efOut ; ETTS0 rc_efOut ; ETTS0 rd_efOut ; ETTS0
s_efOut ; ETTS0 sb_efOut ; ETTS0 t27 ; ETTS0 t29 ; ETTS0 t3 ; ETTS0 t31 ;
ETTS0 t43 ; ETTS0 t44 ; ETTS0 t45 ; ETTS0 t47 ; ETTS0 t49 ; ETTS0 t51 ; ETTS0
t54 ; ETTS0 t55 ; ETTS0 t57 ; ETTS0 t59 ; ETTS0 t62 ; ETTS0 t7 ; ETTS0
t_efOut ; ETTS0 tc_efOut ; ETTS0 td_efOut ; ETTS0 ub_efOut ; ETTS0 uc_efOut ;
ETTS0 v_efOut ; ETTS0 vd_efOut ; ETTS0 wc_efOut ; ETTS0 xb_efOut ; ETTS0
xd_efOut ; ETTS0 y_efOut ; ETTS0 yc_efOut ; PmIntVector out ; real_T X [ 126
] ; real_T ad_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ;
real_T be_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T cd_efOut [ 1 ] ; real_T
dc_efOut [ 1 ] ; real_T de_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T
ed_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T fe_efOut [ 1 ] ; real_T
gc_efOut [ 1 ] ; real_T gd_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T
he_efOut [ 1 ] ; real_T i_efOut [ 1 ] ; real_T ic_efOut [ 1 ] ; real_T
id_efOut [ 1 ] ; real_T je_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T
kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T
le_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T md_efOut [ 1 ] ; real_T
nb_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T
oc_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T
pe_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T
qc_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
re_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T t406
[ 1 ] ; real_T t471 [ 1 ] ; real_T tb_efOut [ 1 ] ; real_T u_efOut [ 1 ] ;
real_T ud_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T vc_efOut [ 1 ] ;
real_T w_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T wd_efOut [ 1 ] ; real_T
x_efOut [ 1 ] ; real_T xc_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T
yd_efOut [ 1 ] ; real_T Check_Valve_TL_convection_A_mdot_abs ; real_T
Check_Valve_TL_convection_B_rho ; real_T Check_Valve_TL_mdot_c ; real_T
Check_Valve_TL_rho_avg ; real_T
Double_Acting_Actuator_TL_chamber_A_convection_A_rho ; real_T
Double_Acting_Actuator_TL_chamber_A_rho_I ; real_T
Double_Acting_Actuator_TL_chamber_B_beta_I ; real_T
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ; real_T
Double_Acting_Actuator_TL_chamber_B_convection_A_rho ; real_T
Double_Acting_Actuator_TL_chamber_B_rho_I ; real_T
Fixed_Displacement_Motor_TL_convection_A_mdot_abs ; real_T
Fixed_Displacement_Motor_TL_convection_A_rho ; real_T
Gas_Charged_Accumulator_TL1_convection_A_rho ; real_T
Gas_Charged_Accumulator_TL1_gas_volume_sat ; real_T
Gas_Charged_Accumulator_TL1_mdot_neg ; real_T
Gas_Charged_Accumulator_TL1_mdot_pos ; real_T
Gas_Charged_Accumulator_TL1_rho_I ; real_T
Gas_Charged_Accumulator_TL1_volume_coeff ; real_T
Gas_Charged_Accumulator_TL_beta_I ; real_T
Gas_Charged_Accumulator_TL_convection_A_mdot_abs ; real_T
Gas_Charged_Accumulator_TL_convection_A_rho ; real_T
Gas_Charged_Accumulator_TL_gas_volume_sat ; real_T
Gas_Charged_Accumulator_TL_rho_I ; real_T
Gas_Charged_Accumulator_TL_volume_coeff ; real_T
Interface_TL_IL1_convection_TL_rho ; real_T
Interface_TL_IL2_convection_TL_mdot ; real_T
Interface_TL_IL2_convection_TL_mdot_abs ; real_T
Interface_TL_IL2_convection_TL_rho ; real_T
Interface_TL_IL3_convection_TL_rho ; real_T
Interface_TL_IL4_convection_TL_rho ; real_T
Pressure_Relief_Valve_TL1_relief_valve_area_ratio ; real_T
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho ; real_T
Pressure_Relief_Valve_TL1_relief_valve_p_diff_c ; real_T
Pressure_Relief_Valve_TL1_relief_valve_rho_avg ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_B_rho ; real_T
Pressure_Relief_Valve_TL_relief_valve_orifice_area ; real_T
Pressure_Relief_Valve_TL_relief_valve_p_diff_c ; real_T
Pressure_Relief_Valve_TL_relief_valve_rho_avg ; real_T
Reservoir_TL1_convection_A_mdot_abs ; real_T Reservoir_TL1_convection_A_rho ;
real_T Reservoir_TL2_convection_A_mdot ; real_T
Reservoir_TL2_convection_A_mdot_abs ; real_T Reservoir_TL2_convection_A_rho ;
real_T Reservoir_TL_convection_A_mdot_abs ; real_T
Reservoir_TL_convection_A_rho ; real_T
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff ; real_T
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff ; real_T
Servovalve2_Main_Valve_Orifice_AT_Orifice_orifice_area ; real_T
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc2 ; real_T
Servovalve2_Main_Valve_Orifice_BT_Orifice_orifice_area ; real_T
Servovalve2_Main_Valve_Orifice_PA_Orifice_orifice_area ; real_T
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff ; real_T
Servovalve2_Main_Valve_Orifice_PA_Orifice_rho_avg ; real_T
Servovalve2_Main_Valve_Orifice_PB_Orifice_orifice_area ; real_T
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff ; real_T
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg ; real_T
Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 ; real_T
Servovalve2_Nozzle_A_Nozzle_A_rho_avg ; real_T
Servovalve2_Nozzle_B_Nozzle_B_rho_avg ; real_T U_idx_2 ; real_T U_idx_3 ;
real_T flow_sensor3_Flow_Rate_Sensor_TL3_rho ; real_T intrm_sf_mf_228 ;
real_T intrm_sf_mf_233 ; real_T intrm_sf_mf_234 ; real_T intrm_sf_mf_242 ;
real_T intrm_sf_mf_33 ; real_T intrm_sf_mf_37 ; real_T intrm_sf_mf_38 ;
real_T intrm_sf_mf_39 ; real_T intrm_sf_mf_47 ; real_T intrm_sf_mf_51 ;
real_T intrm_sf_mf_52 ; real_T intrm_sf_mf_53 ; real_T intrm_sf_mf_58 ;
real_T intrm_sf_mf_62 ; real_T intrm_sf_mf_63 ; real_T intrm_sf_mf_64 ;
real_T intrm_sf_mf_87 ; real_T intrm_sf_mf_91 ; real_T intrm_sf_mf_92 ;
real_T intrm_sf_mf_93 ; real_T t430_idx_0 ; real_T t473 ; real_T t474 ;
real_T t475 ; real_T t476 ; real_T t477 ; real_T t478 ; real_T t479 ; real_T
t480 ; real_T t481 ; real_T t482 ; real_T t484 ; real_T t486 ; real_T t487 ;
real_T t488 ; real_T t489 ; real_T t490 ; real_T t493 ; real_T t495 ; real_T
t496 ; real_T t499 ; real_T t500 ; real_T t501 ; real_T t503 ; real_T t504 ;
real_T t505 ; real_T t506 ; real_T t508 ; real_T t509 ; real_T t510 ; real_T
t511 ; real_T t512 ; real_T t513 ; real_T t515 ; real_T t516 ; real_T t517 ;
real_T t518 ; real_T t519 ; real_T t520 ; real_T t521 ; real_T t522 ; real_T
t523 ; real_T t528 ; real_T t529 ; real_T t530 ; real_T t531 ; real_T t532 ;
real_T t533 ; real_T t534 ; real_T t535 ; real_T t536 ; real_T t537 ; real_T
t538 ; real_T t539 ; real_T t540 ; real_T t543 ; real_T t547 ; real_T t573 ;
real_T x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho ; real_T
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ; real_T
x3_Way_Directional_Valve_TL1_orifice_AT_rho_avg ; real_T
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff ; real_T
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c ; real_T
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio ; real_T
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg ; real_T
x3_Way_Directional_Valve_TL_orifice_PA_p_diff ; size_t t65 [ 1 ] ; size_t t66
[ 1 ] ; size_t t68 [ 1 ] ; int32_T t418 [ 882 ] ; int32_T M_idx_13 ; int32_T
M_idx_14 ; int32_T M_idx_15 ; int32_T M_idx_16 ; int32_T M_idx_18 ; int32_T
M_idx_19 ; int32_T M_idx_20 ; int32_T M_idx_21 ; int32_T M_idx_22 ; int32_T
M_idx_23 ; int32_T M_idx_24 ; int32_T M_idx_25 ; int32_T M_idx_26 ; int32_T
M_idx_27 ; int32_T M_idx_29 ; int32_T M_idx_30 ; int32_T M_idx_31 ; int32_T
M_idx_32 ; int32_T M_idx_33 ; int32_T M_idx_34 ; int32_T M_idx_35 ; int32_T
M_idx_36 ; int32_T M_idx_37 ; int32_T M_idx_38 ; int32_T M_idx_40 ; int32_T
M_idx_41 ; int32_T M_idx_42 ; int32_T M_idx_43 ; int32_T M_idx_44 ; int32_T
M_idx_45 ; int32_T M_idx_46 ; int32_T M_idx_47 ; int32_T M_idx_48 ; int32_T
M_idx_49 ; int32_T M_idx_51 ; int32_T M_idx_52 ; int32_T M_idx_53 ; int32_T
M_idx_54 ; int32_T M_idx_55 ; int32_T M_idx_56 ; int32_T M_idx_57 ; int32_T
M_idx_58 ; int32_T M_idx_59 ; int32_T M_idx_60 ; int32_T M_idx_62 ; int32_T
M_idx_63 ; int32_T M_idx_64 ; int32_T M_idx_65 ; int32_T M_idx_66 ; int32_T b
; M_idx_13 = t579 -> mM . mX [ 13 ] ; M_idx_14 = t579 -> mM . mX [ 14 ] ;
M_idx_15 = t579 -> mM . mX [ 15 ] ; M_idx_16 = t579 -> mM . mX [ 16 ] ;
M_idx_18 = t579 -> mM . mX [ 18 ] ; M_idx_19 = t579 -> mM . mX [ 19 ] ;
M_idx_20 = t579 -> mM . mX [ 20 ] ; M_idx_21 = t579 -> mM . mX [ 21 ] ;
M_idx_22 = t579 -> mM . mX [ 22 ] ; M_idx_23 = t579 -> mM . mX [ 23 ] ;
M_idx_24 = t579 -> mM . mX [ 24 ] ; M_idx_25 = t579 -> mM . mX [ 25 ] ;
M_idx_26 = t579 -> mM . mX [ 26 ] ; M_idx_27 = t579 -> mM . mX [ 27 ] ;
M_idx_29 = t579 -> mM . mX [ 29 ] ; M_idx_30 = t579 -> mM . mX [ 30 ] ;
M_idx_31 = t579 -> mM . mX [ 31 ] ; M_idx_32 = t579 -> mM . mX [ 32 ] ;
M_idx_33 = t579 -> mM . mX [ 33 ] ; M_idx_34 = t579 -> mM . mX [ 34 ] ;
M_idx_35 = t579 -> mM . mX [ 35 ] ; M_idx_36 = t579 -> mM . mX [ 36 ] ;
M_idx_37 = t579 -> mM . mX [ 37 ] ; M_idx_38 = t579 -> mM . mX [ 38 ] ;
M_idx_40 = t579 -> mM . mX [ 40 ] ; M_idx_41 = t579 -> mM . mX [ 41 ] ;
M_idx_42 = t579 -> mM . mX [ 42 ] ; M_idx_43 = t579 -> mM . mX [ 43 ] ;
M_idx_44 = t579 -> mM . mX [ 44 ] ; M_idx_45 = t579 -> mM . mX [ 45 ] ;
M_idx_46 = t579 -> mM . mX [ 46 ] ; M_idx_47 = t579 -> mM . mX [ 47 ] ;
M_idx_48 = t579 -> mM . mX [ 48 ] ; M_idx_49 = t579 -> mM . mX [ 49 ] ;
M_idx_51 = t579 -> mM . mX [ 51 ] ; M_idx_52 = t579 -> mM . mX [ 52 ] ;
M_idx_53 = t579 -> mM . mX [ 53 ] ; M_idx_54 = t579 -> mM . mX [ 54 ] ;
M_idx_55 = t579 -> mM . mX [ 55 ] ; M_idx_56 = t579 -> mM . mX [ 56 ] ;
M_idx_57 = t579 -> mM . mX [ 57 ] ; M_idx_58 = t579 -> mM . mX [ 58 ] ;
M_idx_59 = t579 -> mM . mX [ 59 ] ; M_idx_60 = t579 -> mM . mX [ 60 ] ;
M_idx_62 = t579 -> mM . mX [ 62 ] ; M_idx_63 = t579 -> mM . mX [ 63 ] ;
M_idx_64 = t579 -> mM . mX [ 64 ] ; M_idx_65 = t579 -> mM . mX [ 65 ] ;
M_idx_66 = t579 -> mM . mX [ 66 ] ; U_idx_2 = t579 -> mU . mX [ 2 ] ; U_idx_3
= t579 -> mU . mX [ 3 ] ; for ( b = 0 ; b < 126 ; b ++ ) { X [ b ] = t579 ->
mX . mX [ b ] ; } out = t580 -> mASSERT ; t573 = ( ( X [ 28ULL ] - X [ 30ULL
] ) - 0.1 ) / 0.1 ; if ( t573 <= 0.0 ) { t473 = 0.0 ; } else if ( t573 <=
0.005 ) { t473 = t573 * t573 * 100.50251256281406 ; } else if ( t573 <= 0.995
) { t473 = t573 * 1.0050251256281406 - 0.0025125628140703518 ; } else if (
t573 <= 1.0 ) { t473 = ( 1.0 - t573 ) * ( 1.0 - t573 ) * - 100.50251256281406
+ 1.0 ; } else { t473 = 1.0 ; } t573 = t473 * 9.9999900000000011E-5 + 1.0E-10
; t473 = t573 / 0.01 ; Check_Valve_TL_convection_A_mdot_abs = pmf_sqrt ( X [
33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 32ULL
] ; t65 [ 0 ] = 11ULL ; t66 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( &
efOut . mField0 [ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , &
t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44 = efOut ; t406 [ 0ULL ] = X [ 28ULL ] ;
t68 [ 0 ] = 12ULL ; tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL
] , & b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [ 0ULL ] , & t68 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t55 = b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [
0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0
] = c_efOut [ 0 ] ; t547 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= d_efOut ; t406 [ 0ULL ] = X [ 30ULL ] ; tlu2_linear_linear_prelookup ( &
e_efOut . mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t51 = e_efOut ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ] ,
& t44 . mField2 [ 0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [ 0ULL ] , & t68 [
0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = f_efOut [ 0 ] ;
Check_Valve_TL_convection_B_rho = t430_idx_0 ; t406 [ 0ULL ] = X [ 32ULL ] ;
tlu2_linear_nearest_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= g_efOut ; t406 [ 0ULL ] = X [ 28ULL ] ; tlu2_linear_nearest_prelookup ( &
h_efOut . mField0 [ 0ULL ] , & h_efOut . mField1 [ 0ULL ] , & h_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t43 = h_efOut ;
tlu2_2d_linear_nearest_value ( & i_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ]
, & t44 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , & t43 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = i_efOut [ 0 ] ;
Check_Valve_TL_rho_avg = t430_idx_0 ; t406 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_nearest_prelookup ( & j_efOut . mField0 [ 0ULL ] , & j_efOut .
mField1 [ 0ULL ] , & j_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t54
= j_efOut ; t406 [ 0ULL ] = X [ 30ULL ] ; tlu2_linear_nearest_prelookup ( &
k_efOut . mField0 [ 0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t47 = k_efOut ;
tlu2_2d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = l_efOut [ 0 ] ;
Check_Valve_TL_mdot_c = pmf_sqrt ( t573 * 0.78539816339744828 ) * ( (
Check_Valve_TL_rho_avg + t430_idx_0 ) / 2.0 ) * 150.0 ;
Check_Valve_TL_rho_avg = ( t547 + Check_Valve_TL_convection_B_rho ) / 2.0 ;
t406 [ 0ULL ] = X [ 0ULL ] ; tlu2_linear_linear_prelookup ( & m_efOut .
mField0 [ 0ULL ] , & m_efOut . mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [
0ULL ] , & t66 [ 0ULL ] ) ; t44 = m_efOut ; t406 [ 0ULL ] = X [ 1ULL ] ;
tlu2_linear_linear_prelookup ( & n_efOut . mField0 [ 0ULL ] , & n_efOut .
mField1 [ 0ULL ] , & n_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t406 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t59
= n_efOut ; tlu2_2d_linear_linear_value ( & o_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t59 . mField0 [ 0ULL ] , &
t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = o_efOut [ 0 ] ;
t474 = t430_idx_0 ; t475 = pmf_sqrt ( X [ 43ULL ] * X [ 43ULL ] +
6.4242428173257682E-10 ) ; t406 [ 0ULL ] = X [ 42ULL ] ;
tlu2_linear_linear_prelookup ( & p_efOut . mField0 [ 0ULL ] , & p_efOut .
mField1 [ 0ULL ] , & p_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t54
= p_efOut ; tlu2_2d_linear_linear_value ( & q_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , & t59 . mField0 [ 0ULL ] , &
t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = q_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_A_convection_A_rho = t430_idx_0 ;
tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ] ,
& t44 . mField2 [ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t65 [ 0ULL ] , & t68 [
0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = r_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_A_rho_I = t430_idx_0 ; t406 [ 0ULL ] = X [
3ULL ] ; tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , &
s_efOut . mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t54 = s_efOut ; t406 [ 0ULL ] = X [ 4ULL ] ;
tlu2_linear_linear_prelookup ( & t_efOut . mField0 [ 0ULL ] , & t_efOut .
mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t406 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t7
= t_efOut ; tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t65 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = u_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_B_beta_I = t430_idx_0 ;
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs = pmf_sqrt ( X [
48ULL ] * X [ 48ULL ] + 6.4242428173257682E-10 ) ; t406 [ 0ULL ] = X [ 47ULL
] ; tlu2_linear_linear_prelookup ( & v_efOut . mField0 [ 0ULL ] , & v_efOut .
mField1 [ 0ULL ] , & v_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= v_efOut ; tlu2_2d_linear_linear_value ( & w_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t65 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = w_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_B_convection_A_rho = t430_idx_0 ;
tlu2_2d_linear_linear_value ( & x_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] ,
& t54 . mField2 [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t65 [ 0ULL ] , & t68 [
0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = x_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_B_rho_I = t430_idx_0 ;
Fixed_Displacement_Motor_TL_convection_A_mdot_abs = pmf_sqrt ( X [ 59ULL ] *
X [ 59ULL ] + 6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 58ULL ] ;
tlu2_linear_linear_prelookup ( & y_efOut . mField0 [ 0ULL ] , & y_efOut .
mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t54
= y_efOut ; t406 [ 0 ] = 1.01325 ; tlu2_linear_linear_prelookup ( & ab_efOut
. mField0 [ 0ULL ] , & ab_efOut . mField1 [ 0ULL ] , & ab_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t49 = ab_efOut ;
tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = bb_efOut [ 0 ] ;
Fixed_Displacement_Motor_TL_convection_A_rho = t430_idx_0 ; t471 [ 0ULL ] = X
[ 61ULL ] ; tlu2_linear_linear_prelookup ( & cb_efOut . mField0 [ 0ULL ] , &
cb_efOut . mField1 [ 0ULL ] , & cb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t471 [ 0ULL ] , & t65 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t3 = cb_efOut ; t471 [ 0ULL ] = X [ 54ULL ] ;
tlu2_linear_linear_prelookup ( & db_efOut . mField0 [ 0ULL ] , & db_efOut .
mField1 [ 0ULL ] , & db_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t471 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t31
= db_efOut ; tlu2_2d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t430_idx_0 = eb_efOut [ 0 ] ;
t471 [ 0ULL ] = X [ 58ULL ] ; tlu2_linear_nearest_prelookup ( & fb_efOut .
mField0 [ 0ULL ] , & fb_efOut . mField1 [ 0ULL ] , & fb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t471 [ 0ULL ] , &
t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t3 = fb_efOut ;
tlu2_linear_nearest_prelookup ( & gb_efOut . mField0 [ 0ULL ] , & gb_efOut .
mField1 [ 0ULL ] , & gb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t406 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t29
= gb_efOut ; tlu2_2d_linear_nearest_value ( & hb_efOut [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t65 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = hb_efOut [ 0 ] ;
t476 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 61ULL ] ;
tlu2_linear_nearest_prelookup ( & ib_efOut . mField0 [ 0ULL ] , & ib_efOut .
mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= ib_efOut ; t406 [ 0ULL ] = X [ 54ULL ] ; tlu2_linear_nearest_prelookup ( &
jb_efOut . mField0 [ 0ULL ] , & jb_efOut . mField1 [ 0ULL ] , & jb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t3 = jb_efOut ;
tlu2_2d_linear_nearest_value ( & kb_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ]
, & t44 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t65 [ 0ULL ] , & t68 [
0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = kb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_beta_I = t471 [ 0ULL ] ; t476 = ( t476 +
Gas_Charged_Accumulator_TL_beta_I ) / 2.0 ; t406 [ 0ULL ] = X [ 10ULL ] ;
tlu2_linear_linear_prelookup ( & lb_efOut . mField0 [ 0ULL ] , & lb_efOut .
mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t57
= lb_efOut ; t406 [ 0ULL ] = X [ 11ULL ] ; tlu2_linear_linear_prelookup ( &
mb_efOut . mField0 [ 0ULL ] , & mb_efOut . mField1 [ 0ULL ] , & mb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t27 = mb_efOut ;
tlu2_2d_linear_linear_value ( & nb_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , & t27 . mField0 [ 0ULL ] , & t27 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = nb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_beta_I = t471 [ 0ULL ] ; t477 = ( - X [ 68ULL ] -
X [ 69ULL ] ) + X [ 70ULL ] ;
Gas_Charged_Accumulator_TL_convection_A_mdot_abs = pmf_sqrt ( t477 * t477 +
6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 67ULL ] ;
tlu2_linear_linear_prelookup ( & ob_efOut . mField0 [ 0ULL ] , & ob_efOut .
mField1 [ 0ULL ] , & ob_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t45
= ob_efOut ; tlu2_2d_linear_linear_value ( & pb_efOut [ 0ULL ] , & t45 .
mField0 [ 0ULL ] , & t45 . mField2 [ 0ULL ] , & t27 . mField0 [ 0ULL ] , &
t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = pb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_convection_A_rho = t471 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , & t27 . mField0 [ 0ULL ] , & t27 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = qb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_rho_I = t471 [ 0ULL ] ;
Gas_Charged_Accumulator_TL_volume_coeff = 0.008 - X [ 72ULL ] * 0.001 ;
Gas_Charged_Accumulator_TL_gas_volume_sat =
Gas_Charged_Accumulator_TL_volume_coeff > 4.0E-9 ?
Gas_Charged_Accumulator_TL_volume_coeff : 4.0E-9 ;
Gas_Charged_Accumulator_TL_volume_coeff = pmf_pow ( 0.008 / (
Gas_Charged_Accumulator_TL_gas_volume_sat == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_gas_volume_sat ) , 1.4 ) * 1.01325 ;
Gas_Charged_Accumulator_TL_volume_coeff =
Gas_Charged_Accumulator_TL_volume_coeff * 1.4 / (
Gas_Charged_Accumulator_TL_gas_volume_sat == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_gas_volume_sat ) ; t406 [ 0ULL ] = X [ 12ULL ] ;
tlu2_linear_linear_prelookup ( & rb_efOut . mField0 [ 0ULL ] , & rb_efOut .
mField1 [ 0ULL ] , & rb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t54
= rb_efOut ; t406 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_linear_prelookup ( &
sb_efOut . mField0 [ 0ULL ] , & sb_efOut . mField1 [ 0ULL ] , & sb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t62 = sb_efOut ;
tlu2_2d_linear_linear_value ( & tb_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = tb_efOut [ 0 ] ; t478 = t471 [
0ULL ] ; t406 [ 0ULL ] = X [ 73ULL ] ; tlu2_linear_linear_prelookup ( &
ub_efOut . mField0 [ 0ULL ] , & ub_efOut . mField1 [ 0ULL ] , & ub_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [
0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44 = ub_efOut ;
tlu2_2d_linear_linear_value ( & vb_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ]
, & t44 . mField2 [ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = vb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL1_convection_A_rho = t471 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = wb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL1_rho_I = t471 [ 0ULL ] ;
Gas_Charged_Accumulator_TL1_volume_coeff = 0.008 - X [ 75ULL ] * 0.001 ;
Gas_Charged_Accumulator_TL1_gas_volume_sat =
Gas_Charged_Accumulator_TL1_volume_coeff > 4.0000000000000004E-11 ?
Gas_Charged_Accumulator_TL1_volume_coeff : 4.0000000000000004E-11 ;
Gas_Charged_Accumulator_TL1_volume_coeff = pmf_pow ( 0.008 / (
Gas_Charged_Accumulator_TL1_gas_volume_sat == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_gas_volume_sat ) , 1.4 ) * 1.01325 ; if ( - X [
43ULL ] < 0.0 ) { Gas_Charged_Accumulator_TL1_mdot_neg = - X [ 43ULL ] ; }
else { Gas_Charged_Accumulator_TL1_mdot_neg = 0.0 ; } if ( - X [ 43ULL ] >
0.0 ) { Gas_Charged_Accumulator_TL1_mdot_pos = - X [ 43ULL ] ; } else {
Gas_Charged_Accumulator_TL1_mdot_pos = 0.0 ; }
Gas_Charged_Accumulator_TL1_volume_coeff =
Gas_Charged_Accumulator_TL1_volume_coeff * 1.4 / (
Gas_Charged_Accumulator_TL1_gas_volume_sat == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_gas_volume_sat ) ; t479 = pmf_sqrt ( X [ 79ULL ]
* X [ 79ULL ] + 6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 78ULL ] ;
tlu2_linear_linear_prelookup ( & xb_efOut . mField0 [ 0ULL ] , & xb_efOut .
mField1 [ 0ULL ] , & xb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t59
= xb_efOut ; tlu2_2d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , & t49 . mField0 [ 0ULL ] , &
t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = yb_efOut [ 0 ] ;
Interface_TL_IL1_convection_TL_rho = t471 [ 0ULL ] ;
Interface_TL_IL2_convection_TL_mdot = - X [ 70ULL ] + X [ 33ULL ] ;
Interface_TL_IL2_convection_TL_mdot_abs = pmf_sqrt (
Interface_TL_IL2_convection_TL_mdot * Interface_TL_IL2_convection_TL_mdot +
6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 80ULL ] ;
tlu2_linear_linear_prelookup ( & ac_efOut . mField0 [ 0ULL ] , & ac_efOut .
mField1 [ 0ULL ] , & ac_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= ac_efOut ; tlu2_2d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t51 . mField0 [ 0ULL ] , &
t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = bc_efOut [ 0 ] ;
Interface_TL_IL2_convection_TL_rho = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [
82ULL ] ; tlu2_linear_linear_prelookup ( & cc_efOut . mField0 [ 0ULL ] , &
cc_efOut . mField1 [ 0ULL ] , & cc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t57 = cc_efOut ; tlu2_2d_linear_linear_value ( & dc_efOut
[ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , & t7 .
mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0
] = dc_efOut [ 0 ] ; Interface_TL_IL3_convection_TL_rho = t471 [ 0ULL ] ;
t406 [ 0ULL ] = X [ 84ULL ] ; tlu2_linear_linear_prelookup ( & ec_efOut .
mField0 [ 0ULL ] , & ec_efOut . mField1 [ 0ULL ] , & ec_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , &
t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t59 = ec_efOut ; t406 [ 0ULL ] = X [ 26ULL
] ; tlu2_linear_linear_prelookup ( & fc_efOut . mField0 [ 0ULL ] , & fc_efOut
. mField1 [ 0ULL ] , & fc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t406 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ;
t44 = fc_efOut ; tlu2_2d_linear_linear_value ( & gc_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , & t44 . mField0 [ 0ULL ] , &
t44 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = gc_efOut [ 0 ] ;
Interface_TL_IL4_convection_TL_rho = t471 [ 0ULL ] ;
Pressure_Relief_Valve_TL_relief_valve_orifice_area = ( ( X [ 54ULL ] -
1.01325 ) - 3.0 ) / 0.14999999999999991 ; if (
Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 0.0 ) { t480 = 0.0 ; }
else if ( Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 0.005 ) {
t480 = Pressure_Relief_Valve_TL_relief_valve_orifice_area *
Pressure_Relief_Valve_TL_relief_valve_orifice_area * 100.50251256281406 ; }
else if ( Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 0.995 ) {
t480 = Pressure_Relief_Valve_TL_relief_valve_orifice_area *
1.0050251256281406 - 0.0025125628140703518 ; } else if (
Pressure_Relief_Valve_TL_relief_valve_orifice_area <= 1.0 ) { t480 = ( 1.0 -
Pressure_Relief_Valve_TL_relief_valve_orifice_area ) * ( 1.0 -
Pressure_Relief_Valve_TL_relief_valve_orifice_area ) * - 100.50251256281406 +
1.0 ; } else { t480 = 1.0 ; }
Pressure_Relief_Valve_TL_relief_valve_orifice_area = t480 *
9.9999900000000011E-5 + 1.0E-10 ; t480 =
Pressure_Relief_Valve_TL_relief_valve_orifice_area / 0.01 ;
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot = ( - X [ 33ULL ] - X
[ 87ULL ] ) + X [ 59ULL ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs = pmf_sqrt (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 86ULL ] ;
tlu2_linear_linear_prelookup ( & hc_efOut . mField0 [ 0ULL ] , & hc_efOut .
mField1 [ 0ULL ] , & hc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= hc_efOut ; tlu2_2d_linear_linear_value ( & ic_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , &
t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = ic_efOut [ 0 ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho = t471 [ 0ULL ] ; t406
[ 0ULL ] = X [ 89ULL ] ; tlu2_linear_linear_prelookup ( & jc_efOut . mField0
[ 0ULL ] , & jc_efOut . mField1 [ 0ULL ] , & jc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ]
, & t66 [ 0ULL ] ) ; t44 = jc_efOut ; tlu2_2d_linear_linear_value ( &
kc_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , &
t49 . mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ;
t471 [ 0 ] = kc_efOut [ 0 ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_B_rho = t471 [ 0ULL ] ; t406
[ 0ULL ] = X [ 86ULL ] ; tlu2_linear_nearest_prelookup ( & lc_efOut . mField0
[ 0ULL ] , & lc_efOut . mField1 [ 0ULL ] , & lc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ]
, & t66 [ 0ULL ] ) ; t54 = lc_efOut ; tlu2_2d_linear_nearest_value ( &
mc_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , &
t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField4 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471
[ 0 ] = mc_efOut [ 0 ] ; Pressure_Relief_Valve_TL_relief_valve_p_diff_c =
t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 89ULL ] ; tlu2_linear_nearest_prelookup (
& nc_efOut . mField0 [ 0ULL ] , & nc_efOut . mField1 [ 0ULL ] , & nc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [
0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44 = nc_efOut ;
tlu2_2d_linear_nearest_value ( & oc_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ]
, & t44 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = oc_efOut [ 0 ] ;
Pressure_Relief_Valve_TL_relief_valve_rho_avg = t471 [ 0ULL ] ; t481 =
Pressure_Relief_Valve_TL_relief_valve_p_diff_c +
Pressure_Relief_Valve_TL_relief_valve_rho_avg ;
Pressure_Relief_Valve_TL_relief_valve_rho_avg = (
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho +
Pressure_Relief_Valve_TL_relief_valve_convection_B_rho ) / 2.0 ;
Pressure_Relief_Valve_TL1_relief_valve_area_ratio =
Pressure_Relief_Valve_TL_relief_valve_orifice_area *
Pressure_Relief_Valve_TL_relief_valve_rho_avg * 8.0 ; t484 = t481 / 2.0 *
150.0 ; Pressure_Relief_Valve_TL_relief_valve_p_diff_c = 3.1415926535897931 /
( Pressure_Relief_Valve_TL1_relief_valve_area_ratio == 0.0 ? 1.0E-16 :
Pressure_Relief_Valve_TL1_relief_valve_area_ratio ) * ( t484 / 0.64 ) * (
t484 / 0.64 ) ; t482 = ( ( X [ 11ULL ] - 1.01325 ) - 3.0 ) /
0.14999999999999991 ; if ( t482 <= 0.0 ) {
Pressure_Relief_Valve_TL1_relief_valve_area_ratio = 0.0 ; } else if ( t482 <=
0.005 ) { Pressure_Relief_Valve_TL1_relief_valve_area_ratio = t482 * t482 *
100.50251256281406 ; } else if ( t482 <= 0.995 ) {
Pressure_Relief_Valve_TL1_relief_valve_area_ratio = t482 * 1.0050251256281406
- 0.0025125628140703518 ; } else if ( t482 <= 1.0 ) {
Pressure_Relief_Valve_TL1_relief_valve_area_ratio = ( 1.0 - t482 ) * ( 1.0 -
t482 ) * - 100.50251256281406 + 1.0 ; } else {
Pressure_Relief_Valve_TL1_relief_valve_area_ratio = 1.0 ; } t482 =
Pressure_Relief_Valve_TL1_relief_valve_area_ratio * 9.9999900000000011E-5 +
1.0E-10 ; Pressure_Relief_Valve_TL1_relief_valve_area_ratio = t482 / 0.01 ;
t484 = pmf_sqrt ( X [ 68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 ) ; t406
[ 0ULL ] = X [ 91ULL ] ; tlu2_linear_linear_prelookup ( & pc_efOut . mField0
[ 0ULL ] , & pc_efOut . mField1 [ 0ULL ] , & pc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ]
, & t66 [ 0ULL ] ) ; t44 = pc_efOut ; tlu2_2d_linear_linear_value ( &
qc_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , &
t27 . mField0 [ 0ULL ] , & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ;
t471 [ 0 ] = qc_efOut [ 0 ] ; t486 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [
93ULL ] ; tlu2_linear_linear_prelookup ( & rc_efOut . mField0 [ 0ULL ] , &
rc_efOut . mField1 [ 0ULL ] , & rc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t44 = rc_efOut ; tlu2_2d_linear_linear_value ( & sc_efOut
[ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t49 .
mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0
] = sc_efOut [ 0 ] ; Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho
= t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 91ULL ] ; tlu2_linear_nearest_prelookup
( & tc_efOut . mField0 [ 0ULL ] , & tc_efOut . mField1 [ 0ULL ] , & tc_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [
0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44 = tc_efOut ; t406 [ 0ULL ] =
X [ 11ULL ] ; tlu2_linear_nearest_prelookup ( & uc_efOut . mField0 [ 0ULL ] ,
& uc_efOut . mField1 [ 0ULL ] , & uc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t406 [ 0ULL ] , & t68 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t45 = uc_efOut ; tlu2_2d_linear_nearest_value ( & vc_efOut
[ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t45 .
mField0 [ 0ULL ] , & t45 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0
] = vc_efOut [ 0 ] ; Pressure_Relief_Valve_TL1_relief_valve_p_diff_c = t471 [
0ULL ] ; t406 [ 0ULL ] = X [ 93ULL ] ; tlu2_linear_nearest_prelookup ( &
wc_efOut . mField0 [ 0ULL ] , & wc_efOut . mField1 [ 0ULL ] , & wc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [
0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44 = wc_efOut ;
tlu2_2d_linear_nearest_value ( & xc_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ]
, & t44 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = xc_efOut [ 0 ] ;
Pressure_Relief_Valve_TL1_relief_valve_rho_avg = t471 [ 0ULL ] ; t487 =
Pressure_Relief_Valve_TL1_relief_valve_p_diff_c +
Pressure_Relief_Valve_TL1_relief_valve_rho_avg ;
Pressure_Relief_Valve_TL1_relief_valve_rho_avg = ( t486 +
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho ) / 2.0 ; t489 = t482
* Pressure_Relief_Valve_TL1_relief_valve_rho_avg * 8.0 ; t490 = t487 / 2.0 *
150.0 ; Pressure_Relief_Valve_TL1_relief_valve_p_diff_c = 3.1415926535897931
/ ( t489 == 0.0 ? 1.0E-16 : t489 ) * ( t490 / 0.64 ) * ( t490 / 0.64 ) ; t487
= X [ 30ULL ] >= 1.0E-5 ? X [ 30ULL ] : 1.0E-5 ; t488 = 1.01325 / ( t487 ==
0.0 ? 1.0E-16 : t487 ) * 0.0050251256281407036 ; t489 = pmf_exp ( ( t487 -
1.01325 ) / 21791.0 ) ; t493 = 1.0 / ( t489 == 0.0 ? 1.0E-16 : t489 ) + t488
; t490 = 998.21615577889452 / ( t493 == 0.0 ? 1.0E-16 : t493 ) ; t493 = ( - X
[ 33ULL ] - X [ 79ULL ] ) - X [ 87ULL ] ; Reservoir_TL_convection_A_mdot_abs
= pmf_sqrt ( t493 * t493 + 6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [
94ULL ] ; tlu2_linear_linear_prelookup ( & yc_efOut . mField0 [ 0ULL ] , &
yc_efOut . mField1 [ 0ULL ] , & yc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t44 = yc_efOut ; tlu2_2d_linear_linear_value ( & ad_efOut
[ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t49 .
mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0
] = ad_efOut [ 0 ] ; Reservoir_TL_convection_A_rho = t471 [ 0ULL ] ;
Reservoir_TL1_convection_A_mdot_abs = pmf_sqrt ( X [ 87ULL ] * X [ 87ULL ] +
6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 96ULL ] ;
tlu2_linear_linear_prelookup ( & bd_efOut . mField0 [ 0ULL ] , & bd_efOut .
mField1 [ 0ULL ] , & bd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= bd_efOut ; tlu2_2d_linear_linear_value ( & cd_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t49 . mField0 [ 0ULL ] , &
t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = cd_efOut [ 0 ] ;
Reservoir_TL1_convection_A_rho = t471 [ 0ULL ] ;
Reservoir_TL2_convection_A_mdot = X [ 68ULL ] + X [ 69ULL ] ;
Reservoir_TL2_convection_A_mdot_abs = pmf_sqrt (
Reservoir_TL2_convection_A_mdot * Reservoir_TL2_convection_A_mdot +
6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 97ULL ] ;
tlu2_linear_linear_prelookup ( & dd_efOut . mField0 [ 0ULL ] , & dd_efOut .
mField1 [ 0ULL ] , & dd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t7
= dd_efOut ; tlu2_2d_linear_linear_value ( & ed_efOut [ 0ULL ] , & t7 .
mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = ed_efOut [ 0 ] ;
Reservoir_TL2_convection_A_rho = t471 [ 0ULL ] ;
Servovalve2_Nozzle_A_Nozzle_A_rho_avg = X [ 101ULL ] * - 0.12820512820512822
+ 1.01325 ; Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff = X [ 30ULL ]
- Servovalve2_Nozzle_A_Nozzle_A_rho_avg ; intrm_sf_mf_33 =
Servovalve2_Nozzle_A_Nozzle_A_rho_avg >= 1.0E-5 ?
Servovalve2_Nozzle_A_Nozzle_A_rho_avg : 1.0E-5 ; intrm_sf_mf_37 = 1.01325 / (
intrm_sf_mf_33 == 0.0 ? 1.0E-16 : intrm_sf_mf_33 ) * 0.0050251256281407036 ;
intrm_sf_mf_38 = pmf_exp ( ( intrm_sf_mf_33 - 1.01325 ) / 21791.0 ) ; t495 =
1.0 / ( intrm_sf_mf_38 == 0.0 ? 1.0E-16 : intrm_sf_mf_38 ) + intrm_sf_mf_37 ;
intrm_sf_mf_39 = 998.21615577889452 / ( t495 == 0.0 ? 1.0E-16 : t495 ) ; t495
= ( t490 + intrm_sf_mf_39 ) / 2.0 ; t496 = t495 * 0.78539816339744828 /
4.0E-6 * 4.6231143061224496E-8 ; Servovalve2_Nozzle_B_Nozzle_B_rho_avg = X [
105ULL ] * 0.12820512820512822 + 1.01325 ;
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff = X [ 30ULL ] -
Servovalve2_Nozzle_B_Nozzle_B_rho_avg ; intrm_sf_mf_47 =
Servovalve2_Nozzle_B_Nozzle_B_rho_avg >= 1.0E-5 ?
Servovalve2_Nozzle_B_Nozzle_B_rho_avg : 1.0E-5 ; intrm_sf_mf_51 = 1.01325 / (
intrm_sf_mf_47 == 0.0 ? 1.0E-16 : intrm_sf_mf_47 ) * 0.0050251256281407036 ;
intrm_sf_mf_52 = pmf_exp ( ( intrm_sf_mf_47 - 1.01325 ) / 21791.0 ) ; t499 =
1.0 / ( intrm_sf_mf_52 == 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) + intrm_sf_mf_51 ;
intrm_sf_mf_53 = 998.21615577889452 / ( t499 == 0.0 ? 1.0E-16 : t499 ) ; t499
= ( t490 + intrm_sf_mf_53 ) / 2.0 ; t500 = t499 * 0.78539816339744828 /
4.0E-6 * 4.6231143061224496E-8 ; if ( - ( X [ 18ULL ] - 1.0E-5 ) <= 0.0 ) {
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc2 = 0.0 ; }
else { Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc2 = - (
X [ 18ULL ] - 1.0E-5 ) >= 1.0 ? 1.0 : - ( X [ 18ULL ] - 1.0E-5 ) ; } t501 =
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc2 * 0.0245 ;
Servovalve2_Main_Valve_Orifice_AT_Orifice_orifice_area = t501 + 1.0E-9 ;
intrm_sf_mf_58 = X [ 26ULL ] >= 1.0E-5 ? X [ 26ULL ] : 1.0E-5 ;
intrm_sf_mf_62 = 1.01325 / ( intrm_sf_mf_58 == 0.0 ? 1.0E-16 : intrm_sf_mf_58
) * 0.0050251256281407036 ; intrm_sf_mf_63 = pmf_exp ( ( intrm_sf_mf_58 -
1.01325 ) / 21791.0 ) ; t503 = 1.0 / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 :
intrm_sf_mf_63 ) + intrm_sf_mf_62 ; intrm_sf_mf_64 = 998.21615577889452 / (
t503 == 0.0 ? 1.0E-16 : t503 ) ; t503 = ( 993.22507500000017 + intrm_sf_mf_64
) / 2.0 ; t506 = ( t501 + 1.0E-9 ) * 2.0 ; t504 = t503 * 0.78539816339744828
/ ( t506 == 0.0 ? 1.0E-16 : t506 ) * 4.6231143061224496E-8 ; t505 =
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc2 / 5.0E-5 ;
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc2 = t501 +
1.2250000000000001E-6 ; if ( X [ 19ULL ] - - 1.0E-5 <= 0.0 ) { t506 = 0.0 ; }
else { t506 = X [ 19ULL ] - - 1.0E-5 >= 1.0 ? 1.0 : X [ 19ULL ] - - 1.0E-5 ;
} t501 = t506 * 0.0245 ;
Servovalve2_Main_Valve_Orifice_BT_Orifice_orifice_area = t501 + 1.0E-9 ;
intrm_sf_mf_87 = X [ 4ULL ] >= 1.0E-5 ? X [ 4ULL ] : 1.0E-5 ; intrm_sf_mf_91
= 1.01325 / ( intrm_sf_mf_87 == 0.0 ? 1.0E-16 : intrm_sf_mf_87 ) *
0.0050251256281407036 ; intrm_sf_mf_92 = pmf_exp ( ( intrm_sf_mf_87 - 1.01325
) / 21791.0 ) ; t508 = 1.0 / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 :
intrm_sf_mf_92 ) + intrm_sf_mf_91 ; intrm_sf_mf_93 = 998.21615577889452 / (
t508 == 0.0 ? 1.0E-16 : t508 ) ; t508 = ( 993.22507500000017 + intrm_sf_mf_93
) / 2.0 ; t511 = ( t501 + 1.0E-9 ) * 2.0 ; t509 = t508 * 0.78539816339744828
/ ( t511 == 0.0 ? 1.0E-16 : t511 ) * 4.6231143061224496E-8 ; t510 = t506 /
5.0E-5 ; t506 = t501 + 1.2250000000000001E-6 ; if ( X [ 20ULL ] - - 1.0E-5 <=
0.0 ) { t511 = 0.0 ; } else { t511 = X [ 20ULL ] - - 1.0E-5 >= 1.0 ? 1.0 : X
[ 20ULL ] - - 1.0E-5 ; } t501 = t511 * 0.0245 ;
Servovalve2_Main_Valve_Orifice_PA_Orifice_orifice_area = t501 + 1.0E-9 ;
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff = X [ 30ULL ] - X [ 26ULL ]
; Servovalve2_Main_Valve_Orifice_PA_Orifice_rho_avg = ( t490 + intrm_sf_mf_64
) / 2.0 ; Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 = (
t501 + 1.0E-9 ) * 2.0 ; t512 =
Servovalve2_Main_Valve_Orifice_PA_Orifice_rho_avg * 0.78539816339744828 / (
Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 == 0.0 ?
1.0E-16 : Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 ) *
4.6231143061224496E-8 ; t513 = t511 / 5.0E-5 ; t511 = t501 +
1.2250000000000001E-6 ; if ( - ( X [ 21ULL ] - 1.0E-5 ) <= 0.0 ) {
Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 = 0.0 ; }
else { Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 = - (
X [ 21ULL ] - 1.0E-5 ) >= 1.0 ? 1.0 : - ( X [ 21ULL ] - 1.0E-5 ) ; } t501 =
Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 * 0.0245 ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_orifice_area = t501 + 1.0E-9 ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff = X [ 30ULL ] - X [ 4ULL ] ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg = ( t490 + intrm_sf_mf_93 )
/ 2.0 ; t517 = ( t501 + 1.0E-9 ) * 2.0 ; t515 =
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg * 0.78539816339744828 / (
t517 == 0.0 ? 1.0E-16 : t517 ) * 4.6231143061224496E-8 ; t516 =
Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 / 5.0E-5 ;
Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 = t501 +
1.2250000000000001E-6 ; t501 = ( X [ 15ULL ] - - 0.00029980999999999996 ) *
0.0052333238858972009 + 1.0E-9 ; t517 = Servovalve2_Nozzle_A_Nozzle_A_rho_avg
- 1.01325 ; Servovalve2_Nozzle_A_Nozzle_A_rho_avg = ( 993.22507500000017 +
intrm_sf_mf_39 ) / 2.0 ; if ( t501 <= 1.0E-9 ) { t518 = 1.0E-9 ; } else {
t518 = t501 >= 3.14E-6 ? 3.14E-6 : t501 ; } t520 = t518 * 2.0 ; t501 =
Servovalve2_Nozzle_A_Nozzle_A_rho_avg * 0.78539816339744828 / ( t520 == 0.0 ?
1.0E-16 : t520 ) * 4.6231143061224496E-8 ; t519 = ( X [ 15ULL ] -
0.00029980999999999996 ) * - 0.0052333238858972009 + 1.0E-9 ; t520 =
Servovalve2_Nozzle_B_Nozzle_B_rho_avg - 1.01325 ;
Servovalve2_Nozzle_B_Nozzle_B_rho_avg = ( 993.22507500000017 + intrm_sf_mf_53
) / 2.0 ; if ( t519 <= 1.0E-9 ) { t521 = 1.0E-9 ; } else { t521 = t519 >=
3.14E-6 ? 3.14E-6 : t519 ; } t523 = t521 * 2.0 ; t519 =
Servovalve2_Nozzle_B_Nozzle_B_rho_avg * 0.78539816339744828 / ( t523 == 0.0 ?
1.0E-16 : t523 ) * 4.6231143061224496E-8 ; t406 [ 0ULL ] = X [ 63ULL ] ;
tlu2_linear_linear_prelookup ( & fd_efOut . mField0 [ 0ULL ] , & fd_efOut .
mField1 [ 0ULL ] , & fd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= fd_efOut ; tlu2_2d_linear_linear_value ( & gd_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t27 . mField0 [ 0ULL ] , &
t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = gd_efOut [ 0 ] ;
t522 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 29ULL ] ;
tlu2_linear_linear_prelookup ( & hd_efOut . mField0 [ 0ULL ] , & hd_efOut .
mField1 [ 0ULL ] , & hd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t62
= hd_efOut ; tlu2_2d_linear_linear_value ( & id_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t51 . mField0 [ 0ULL ] , &
t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = id_efOut [ 0 ] ;
t523 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 52ULL ] ;
tlu2_linear_linear_prelookup ( & jd_efOut . mField0 [ 0ULL ] , & jd_efOut .
mField1 [ 0ULL ] , & jd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= jd_efOut ; tlu2_2d_linear_linear_value ( & kd_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t49 . mField0 [ 0ULL ] , &
t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = kd_efOut [ 0 ] ;
flow_sensor3_Flow_Rate_Sensor_TL3_rho = t471 [ 0ULL ] ; intrm_sf_mf_228 = ( (
( - U_idx_2 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( intrm_sf_mf_228 <= 0.0 ) { intrm_sf_mf_234 = 0.0
; } else if ( intrm_sf_mf_228 <= 0.005 ) { intrm_sf_mf_234 = intrm_sf_mf_228
* intrm_sf_mf_228 * 100.50251256281406 ; } else if ( intrm_sf_mf_228 <= 0.995
) { intrm_sf_mf_234 = intrm_sf_mf_228 * 1.0050251256281406 -
0.0025125628140703518 ; } else if ( intrm_sf_mf_228 <= 1.0 ) {
intrm_sf_mf_234 = ( 1.0 - intrm_sf_mf_228 ) * ( 1.0 - intrm_sf_mf_228 ) * -
100.50251256281406 + 1.0 ; } else { intrm_sf_mf_234 = 1.0 ; } intrm_sf_mf_228
= intrm_sf_mf_234 * 9.9999900000000011E-5 + 1.0E-10 ; intrm_sf_mf_234 = ( ( (
U_idx_2 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( intrm_sf_mf_234 <= 0.0 ) { intrm_sf_mf_233 = 0.0
; } else if ( intrm_sf_mf_234 <= 0.005 ) { intrm_sf_mf_233 = intrm_sf_mf_234
* intrm_sf_mf_234 * 100.50251256281406 ; } else if ( intrm_sf_mf_234 <= 0.995
) { intrm_sf_mf_233 = intrm_sf_mf_234 * 1.0050251256281406 -
0.0025125628140703518 ; } else if ( intrm_sf_mf_234 <= 1.0 ) {
intrm_sf_mf_233 = ( 1.0 - intrm_sf_mf_234 ) * ( 1.0 - intrm_sf_mf_234 ) * -
100.50251256281406 + 1.0 ; } else { intrm_sf_mf_233 = 1.0 ; } intrm_sf_mf_234
= intrm_sf_mf_233 * 9.9999900000000011E-5 + 1.0E-10 ; intrm_sf_mf_233 = ( ( (
- U_idx_3 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( intrm_sf_mf_233 <= 0.0 ) { intrm_sf_mf_242 = 0.0
; } else if ( intrm_sf_mf_233 <= 0.005 ) { intrm_sf_mf_242 = intrm_sf_mf_233
* intrm_sf_mf_233 * 100.50251256281406 ; } else if ( intrm_sf_mf_233 <= 0.995
) { intrm_sf_mf_242 = intrm_sf_mf_233 * 1.0050251256281406 -
0.0025125628140703518 ; } else if ( intrm_sf_mf_233 <= 1.0 ) {
intrm_sf_mf_242 = ( 1.0 - intrm_sf_mf_233 ) * ( 1.0 - intrm_sf_mf_233 ) * -
100.50251256281406 + 1.0 ; } else { intrm_sf_mf_242 = 1.0 ; } intrm_sf_mf_233
= intrm_sf_mf_242 * 9.9999900000000011E-5 + 1.0E-10 ; intrm_sf_mf_242 = ( ( (
U_idx_3 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( intrm_sf_mf_242 <= 0.0 ) {
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio = 0.0 ; } else if (
intrm_sf_mf_242 <= 0.005 ) {
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio = intrm_sf_mf_242 *
intrm_sf_mf_242 * 100.50251256281406 ; } else if ( intrm_sf_mf_242 <= 0.995 )
{ x3_Way_Directional_Valve_TL_orifice_AT_area_ratio = intrm_sf_mf_242 *
1.0050251256281406 - 0.0025125628140703518 ; } else if ( intrm_sf_mf_242 <=
1.0 ) { x3_Way_Directional_Valve_TL_orifice_AT_area_ratio = ( 1.0 -
intrm_sf_mf_242 ) * ( 1.0 - intrm_sf_mf_242 ) * - 100.50251256281406 + 1.0 ;
} else { x3_Way_Directional_Valve_TL_orifice_AT_area_ratio = 1.0 ; }
intrm_sf_mf_242 = x3_Way_Directional_Valve_TL_orifice_AT_area_ratio *
9.9999900000000011E-5 + 1.0E-10 ;
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio = intrm_sf_mf_228 / 0.01 ;
t406 [ 0ULL ] = X [ 114ULL ] ; tlu2_linear_linear_prelookup ( & ld_efOut .
mField0 [ 0ULL ] , & ld_efOut . mField1 [ 0ULL ] , & ld_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , &
t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t59 = ld_efOut ;
tlu2_2d_linear_linear_value ( & md_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = md_efOut [ 0 ] ; t481 = t471 [
0ULL ] ; t406 [ 0ULL ] = X [ 116ULL ] ; tlu2_linear_linear_prelookup ( &
nd_efOut . mField0 [ 0ULL ] , & nd_efOut . mField1 [ 0ULL ] , & nd_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [
0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t57 = nd_efOut ;
tlu2_2d_linear_linear_value ( & od_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = od_efOut [ 0 ] ; U_idx_2 =
t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 114ULL ] ; tlu2_linear_nearest_prelookup
( & pd_efOut . mField0 [ 0ULL ] , & pd_efOut . mField1 [ 0ULL ] , & pd_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [
0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t54 = pd_efOut ;
tlu2_2d_linear_nearest_value ( & qd_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [ 0ULL ] , & t68 [
0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = qd_efOut [ 0 ] ; U_idx_3 = t471 [
0ULL ] ; t406 [ 0ULL ] = X [ 116ULL ] ; tlu2_linear_nearest_prelookup ( &
rd_efOut . mField0 [ 0ULL ] , & rd_efOut . mField1 [ 0ULL ] , & rd_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [
0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44 = rd_efOut ;
tlu2_2d_linear_nearest_value ( & sd_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ]
, & t44 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [ 0ULL ] , &
t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = sd_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg = t471 [ 0ULL ] ; U_idx_3 = (
U_idx_3 + x3_Way_Directional_Valve_TL_orifice_AT_rho_avg ) / 2.0 ;
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg = ( t481 + U_idx_2 ) / 2.0 ;
t531 = intrm_sf_mf_228 * x3_Way_Directional_Valve_TL_orifice_AT_rho_avg * 2.0
; U_idx_3 = U_idx_3 * U_idx_3 * 0.78539816339744828 / ( t531 == 0.0 ? 1.0E-16
: t531 ) * 54931.640625 ; t528 = intrm_sf_mf_234 / 0.01 ; t406 [ 0ULL ] = X [
117ULL ] ; tlu2_linear_linear_prelookup ( & td_efOut . mField0 [ 0ULL ] , &
td_efOut . mField1 [ 0ULL ] , & td_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t57 = td_efOut ; tlu2_2d_linear_linear_value ( & ud_efOut
[ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0
] = ud_efOut [ 0 ] ; t529 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 119ULL ] ;
tlu2_linear_linear_prelookup ( & vd_efOut . mField0 [ 0ULL ] , & vd_efOut .
mField1 [ 0ULL ] , & vd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= vd_efOut ; tlu2_2d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , &
t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = wd_efOut [ 0 ] ;
t530 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_nearest_prelookup ( & xd_efOut . mField0 [ 0ULL ] , & xd_efOut .
mField1 [ 0ULL ] , & xd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= xd_efOut ; tlu2_2d_linear_nearest_value ( & yd_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , &
t43 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = yd_efOut [ 0 ] ;
t531 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 119ULL ] ;
tlu2_linear_nearest_prelookup ( & ae_efOut . mField0 [ 0ULL ] , & ae_efOut .
mField1 [ 0ULL ] , & ae_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t7
= ae_efOut ; tlu2_2d_linear_nearest_value ( & be_efOut [ 0ULL ] , & t7 .
mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [
0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = be_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL_orifice_PA_p_diff = t471 [ 0ULL ] ; t531 = ( t531
+ x3_Way_Directional_Valve_TL_orifice_PA_p_diff ) / 2.0 ;
x3_Way_Directional_Valve_TL_orifice_PA_p_diff = X [ 28ULL ] - X [ 54ULL ] ;
t532 = ( t529 + t530 ) / 2.0 ; t535 = intrm_sf_mf_234 * t532 * 2.0 ; t531 =
t531 * t531 * 0.78539816339744828 / ( t535 == 0.0 ? 1.0E-16 : t535 ) *
54931.640625 ; t533 = intrm_sf_mf_233 / 0.01 ; t534 = pmf_sqrt ( X [ 69ULL ]
* X [ 69ULL ] + 6.4274470286298247E-10 ) ; t406 [ 0ULL ] = X [ 120ULL ] ;
tlu2_linear_linear_prelookup ( & ce_efOut . mField0 [ 0ULL ] , & ce_efOut .
mField1 [ 0ULL ] , & ce_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= ce_efOut ; tlu2_2d_linear_linear_value ( & de_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t27 . mField0 [ 0ULL ] , &
t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = de_efOut [ 0 ] ;
t535 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 122ULL ] ;
tlu2_linear_linear_prelookup ( & ee_efOut . mField0 [ 0ULL ] , & ee_efOut .
mField1 [ 0ULL ] , & ee_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t44
= ee_efOut ; tlu2_2d_linear_linear_value ( & fe_efOut [ 0ULL ] , & t44 .
mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t49 . mField0 [ 0ULL ] , &
t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = fe_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho = t471 [ 0ULL ] ;
t406 [ 0ULL ] = X [ 120ULL ] ; tlu2_linear_nearest_prelookup ( & ge_efOut .
mField0 [ 0ULL ] , & ge_efOut . mField1 [ 0ULL ] , & ge_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , &
t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t3 = ge_efOut ;
tlu2_2d_linear_nearest_value ( & he_efOut [ 0ULL ] , & t3 . mField0 [ 0ULL ]
, & t3 . mField2 [ 0ULL ] , & t45 . mField0 [ 0ULL ] , & t45 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65 [ 0ULL ] , & t68 [
0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = he_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c = t471 [ 0ULL ] ; t406 [
0ULL ] = X [ 122ULL ] ; tlu2_linear_nearest_prelookup ( & ie_efOut . mField0
[ 0ULL ] , & ie_efOut . mField1 [ 0ULL ] , & ie_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ]
, & t66 [ 0ULL ] ) ; t44 = ie_efOut ; tlu2_2d_linear_nearest_value ( &
je_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , &
t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ;
t471 [ 0 ] = je_efOut [ 0 ] ; x3_Way_Directional_Valve_TL1_orifice_AT_rho_avg
= t471 [ 0ULL ] ; x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c = (
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c +
x3_Way_Directional_Valve_TL1_orifice_AT_rho_avg ) / 2.0 ;
x3_Way_Directional_Valve_TL1_orifice_AT_rho_avg = ( t535 +
x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho ) / 2.0 ; t539 =
intrm_sf_mf_233 * x3_Way_Directional_Valve_TL1_orifice_AT_rho_avg * 2.0 ;
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c =
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c * 0.78539816339744828 / (
t539 == 0.0 ? 1.0E-16 : t539 ) * 54931.640625 ; t536 = intrm_sf_mf_242 / 0.01
; t537 = pmf_sqrt ( X [ 70ULL ] * X [ 70ULL ] + 6.4274470286298247E-10 ) ;
t406 [ 0ULL ] = X [ 123ULL ] ; tlu2_linear_linear_prelookup ( & ke_efOut .
mField0 [ 0ULL ] , & ke_efOut . mField1 [ 0ULL ] , & ke_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , &
t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t7 = ke_efOut ; tlu2_2d_linear_linear_value
( & le_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , &
t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ;
t471 [ 0 ] = le_efOut [ 0 ] ; t538 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [
125ULL ] ; tlu2_linear_linear_prelookup ( & me_efOut . mField0 [ 0ULL ] , &
me_efOut . mField1 [ 0ULL ] , & me_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] ,
& t66 [ 0ULL ] ) ; t44 = me_efOut ; tlu2_2d_linear_linear_value ( & ne_efOut
[ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , & t27 .
mField0 [ 0ULL ] , & t27 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0
] = ne_efOut [ 0 ] ; t539 = t471 [ 0ULL ] ; t406 [ 0ULL ] = X [ 123ULL ] ;
tlu2_linear_nearest_prelookup ( & oe_efOut . mField0 [ 0ULL ] , & oe_efOut .
mField1 [ 0ULL ] , & oe_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ] , & t66 [ 0ULL ] ) ; t54
= oe_efOut ; tlu2_2d_linear_nearest_value ( & pe_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , & t47 . mField0 [ 0ULL ] , &
t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t65
[ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ; t471 [ 0 ] = pe_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c = t471 [ 0ULL ] ; t406 [
0ULL ] = X [ 125ULL ] ; tlu2_linear_nearest_prelookup ( & qe_efOut . mField0
[ 0ULL ] , & qe_efOut . mField1 [ 0ULL ] , & qe_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t406 [ 0ULL ] , & t65 [ 0ULL ]
, & t66 [ 0ULL ] ) ; t44 = qe_efOut ; tlu2_2d_linear_nearest_value ( &
re_efOut [ 0ULL ] , & t44 . mField0 [ 0ULL ] , & t44 . mField2 [ 0ULL ] , &
t45 . mField0 [ 0ULL ] , & t45 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t65 [ 0ULL ] , & t68 [ 0ULL ] , & t66 [ 0ULL ] ) ;
t406 [ 0 ] = re_efOut [ 0 ] ; x3_Way_Directional_Valve_TL1_orifice_PA_p_diff
= t406 [ 0ULL ] ; x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c = (
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c +
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff ) / 2.0 ;
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff = X [ 30ULL ] - X [ 11ULL ] ;
t540 = ( t538 + t539 ) / 2.0 ; t543 = intrm_sf_mf_242 * t540 * 2.0 ;
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c =
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c * 0.78539816339744828 / (
t543 == 0.0 ? 1.0E-16 : t543 ) * 54931.640625 ; t418 [ 0ULL ] = ( int32_T ) (
M_idx_13 != 0 ) ; t418 [ 1ULL ] = ( int32_T ) ( M_idx_14 != 0 ) ; t418 [ 2ULL
] = ( int32_T ) ( M_idx_15 != 0 ) ; t418 [ 3ULL ] = ( int32_T ) ( M_idx_16 !=
0 ) ; t418 [ 4ULL ] = ( int32_T ) ( M_idx_18 != 0 ) ; t418 [ 5ULL ] = (
int32_T ) ( M_idx_19 != 0 ) ; t418 [ 6ULL ] = ( int32_T ) ( M_idx_20 != 0 ) ;
t418 [ 7ULL ] = ( int32_T ) ( M_idx_21 != 0 ) ; t418 [ 8ULL ] = ( int32_T ) (
M_idx_22 != 0 ) ; t418 [ 9ULL ] = ( int32_T ) ( M_idx_23 != 0 ) ; t418 [
10ULL ] = ( int32_T ) ( M_idx_24 != 0 ) ; t418 [ 11ULL ] = ( int32_T ) (
M_idx_25 != 0 ) ; t418 [ 12ULL ] = ( int32_T ) ( M_idx_26 != 0 ) ; t418 [
13ULL ] = ( int32_T ) ( M_idx_27 != 0 ) ; t418 [ 14ULL ] = ( int32_T ) (
M_idx_29 != 0 ) ; t418 [ 15ULL ] = ( int32_T ) ( M_idx_30 != 0 ) ; t418 [
16ULL ] = ( int32_T ) ( M_idx_31 != 0 ) ; t418 [ 17ULL ] = ( int32_T ) (
M_idx_32 != 0 ) ; t418 [ 18ULL ] = ( int32_T ) ( M_idx_33 != 0 ) ; t418 [
19ULL ] = ( int32_T ) ( M_idx_34 != 0 ) ; t418 [ 20ULL ] = ( int32_T ) (
M_idx_35 != 0 ) ; t418 [ 21ULL ] = ( int32_T ) ( M_idx_36 != 0 ) ; t418 [
22ULL ] = ( int32_T ) ( M_idx_37 != 0 ) ; t418 [ 23ULL ] = ( int32_T ) (
M_idx_38 != 0 ) ; t418 [ 24ULL ] = ( int32_T ) ( M_idx_40 != 0 ) ; t418 [
25ULL ] = ( int32_T ) ( M_idx_41 != 0 ) ; t418 [ 26ULL ] = ( int32_T ) (
M_idx_42 != 0 ) ; t418 [ 27ULL ] = ( int32_T ) ( M_idx_43 != 0 ) ; t418 [
28ULL ] = ( int32_T ) ( M_idx_40 != 0 ) ; t418 [ 29ULL ] = ( int32_T ) (
M_idx_41 != 0 ) ; t418 [ 30ULL ] = ( int32_T ) ( M_idx_44 != 0 ) ; t418 [
31ULL ] = ( int32_T ) ( M_idx_45 != 0 ) ; t418 [ 32ULL ] = ( int32_T ) (
M_idx_46 != 0 ) ; t418 [ 33ULL ] = ( int32_T ) ( M_idx_22 != 0 ) ; t418 [
34ULL ] = ( int32_T ) ( M_idx_23 != 0 ) ; t418 [ 35ULL ] = ( int32_T ) (
M_idx_47 != 0 ) ; t418 [ 36ULL ] = ( int32_T ) ( M_idx_48 != 0 ) ; t418 [
37ULL ] = ( int32_T ) ( M_idx_49 != 0 ) ; t418 [ 38ULL ] = ( int32_T ) (
M_idx_51 != 0 ) ; t418 [ 39ULL ] = ( int32_T ) ( M_idx_52 != 0 ) ; t418 [
40ULL ] = ( int32_T ) ( M_idx_53 != 0 ) ; t418 [ 41ULL ] = ( int32_T ) (
M_idx_54 != 0 ) ; t418 [ 42ULL ] = ( int32_T ) ( M_idx_35 != 0 ) ; t418 [
43ULL ] = ( int32_T ) ( M_idx_36 != 0 ) ; t418 [ 44ULL ] = ( int32_T ) (
M_idx_37 != 0 ) ; t418 [ 45ULL ] = ( int32_T ) ( M_idx_38 != 0 ) ; t418 [
46ULL ] = ( int32_T ) ( M_idx_33 != 0 ) ; t418 [ 47ULL ] = ( int32_T ) (
M_idx_34 != 0 ) ; t418 [ 48ULL ] = ( int32_T ) ( M_idx_40 != 0 ) ; t418 [
49ULL ] = ( int32_T ) ( M_idx_41 != 0 ) ; t418 [ 50ULL ] = ( int32_T ) (
M_idx_42 != 0 ) ; t418 [ 51ULL ] = ( int32_T ) ( M_idx_43 != 0 ) ; t418 [
52ULL ] = ( int32_T ) ( M_idx_55 != 0 ) ; t418 [ 53ULL ] = ( int32_T ) (
M_idx_56 != 0 ) ; t418 [ 54ULL ] = ( int32_T ) ( M_idx_57 != 0 ) ; t418 [
55ULL ] = ( int32_T ) ( M_idx_58 != 0 ) ; t418 [ 56ULL ] = ( int32_T ) (
M_idx_57 != 0 ) ; t418 [ 57ULL ] = ( int32_T ) ( M_idx_59 != 0 ) ; t418 [
58ULL ] = ( int32_T ) ( M_idx_60 != 0 ) ; t418 [ 59ULL ] = ( int32_T ) (
M_idx_62 != 0 ) ; t418 [ 60ULL ] = ( int32_T ) ( M_idx_57 != 0 ) ; t418 [
61ULL ] = ( int32_T ) ( M_idx_60 != 0 ) ; t418 [ 62ULL ] = ( int32_T ) (
M_idx_57 != 0 ) ; t418 [ 63ULL ] = ( int32_T ) ( M_idx_62 != 0 ) ; t418 [
64ULL ] = ( int32_T ) ( M_idx_63 != 0 ) ; t418 [ 65ULL ] = ( int32_T ) (
M_idx_58 != 0 ) ; t418 [ 66ULL ] = ( int32_T ) ( M_idx_64 != 0 ) ; t418 [
67ULL ] = ( int32_T ) ( M_idx_59 != 0 ) ; t418 [ 68ULL ] = ( int32_T ) (
M_idx_58 != 0 ) ; t418 [ 69ULL ] = ( int32_T ) ( M_idx_59 != 0 ) ; t418 [
70ULL ] = ( int32_T ) ( M_idx_35 != 0 ) ; t418 [ 71ULL ] = ( int32_T ) (
M_idx_36 != 0 ) ; t418 [ 72ULL ] = ( int32_T ) ( M_idx_37 != 0 ) ; t418 [
73ULL ] = ( int32_T ) ( M_idx_38 != 0 ) ; t418 [ 74ULL ] = ( int32_T ) (
M_idx_65 != 0 ) ; t418 [ 75ULL ] = ( int32_T ) ( M_idx_66 != 0 ) ; t418 [
76ULL ] = ( int32_T ) ( M_idx_13 != 0 ) ; t418 [ 77ULL ] = ( int32_T ) (
M_idx_14 != 0 ) ; t418 [ 78ULL ] = ( int32_T ) ( M_idx_15 != 0 ) ; t418 [
79ULL ] = ( int32_T ) ( M_idx_16 != 0 ) ; t418 [ 80ULL ] = ( int32_T ) (
M_idx_35 != 0 ) ; t418 [ 81ULL ] = ( int32_T ) ( M_idx_36 != 0 ) ; t418 [
82ULL ] = ( int32_T ) ( M_idx_37 != 0 ) ; t418 [ 83ULL ] = ( int32_T ) (
M_idx_38 != 0 ) ; t418 [ 84ULL ] = ( int32_T ) ( M_idx_40 != 0 ) ; t418 [
85ULL ] = ( int32_T ) ( M_idx_41 != 0 ) ; t418 [ 86ULL ] = ( int32_T ) (
M_idx_42 != 0 ) ; t418 [ 87ULL ] = ( int32_T ) ( M_idx_43 != 0 ) ; t418 [
88ULL ] = ( int32_T ) ( M_idx_55 != 0 ) ; t418 [ 89ULL ] = ( int32_T ) (
M_idx_56 != 0 ) ; t418 [ 90ULL ] = ( int32_T ) ( M_idx_18 != 0 ) ; t418 [
91ULL ] = ( int32_T ) ( M_idx_19 != 0 ) ; t418 [ 92ULL ] = ( int32_T ) (
M_idx_20 != 0 ) ; t418 [ 93ULL ] = ( int32_T ) ( M_idx_21 != 0 ) ; t418 [
94ULL ] = ( int32_T ) ( M_idx_40 != 0 ) ; t418 [ 95ULL ] = ( int32_T ) (
M_idx_41 != 0 ) ; t418 [ 96ULL ] = ( int32_T ) ( M_idx_42 != 0 ) ; t418 [
97ULL ] = ( int32_T ) ( M_idx_43 != 0 ) ; t418 [ 98ULL ] = 1 ; t418 [ 99ULL ]
= 1 ; t418 [ 100ULL ] = 1 ; t418 [ 101ULL ] = 1 ; t418 [ 102ULL ] = 1 ; t418
[ 103ULL ] = 1 ; t418 [ 104ULL ] = 1 ; t418 [ 105ULL ] = 1 ; t418 [ 106ULL ]
= 1 ; t418 [ 107ULL ] = 1 ; t418 [ 108ULL ] = 1 ; t418 [ 109ULL ] = 1 ; t418
[ 110ULL ] = 1 ; t418 [ 111ULL ] = 1 ; t418 [ 112ULL ] = 1 ; t418 [ 113ULL ]
= 1 ; t418 [ 114ULL ] = ( int32_T ) ( ( X [ 33ULL ] * X [ 33ULL ] +
6.4274470286298247E-10 == X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10
) && ( fabs ( X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 ) !=
pmf_get_inf ( ) ) ) ; t418 [ 115ULL ] = ( int32_T ) ( ( ! ( X [ 33ULL ] * X [
33ULL ] + 6.4274470286298247E-10 == X [ 33ULL ] * X [ 33ULL ] +
6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 33ULL ] * X [ 33ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 33ULL ] * X [ 33ULL
] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 116ULL ] = ( int32_T ) (
Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 117ULL ] = ( int32_T )
( ( ! ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ) || ( t547 != 0.0 ) )
; t418 [ 118ULL ] = ( int32_T ) ( Check_Valve_TL_convection_A_mdot_abs != 0.0
) ; t418 [ 119ULL ] = 1 ; t418 [ 120ULL ] = ( int32_T ) (
Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 121ULL ] = 1 ; t418 [
122ULL ] = 1 ; t418 [ 123ULL ] = 1 ; t418 [ 124ULL ] = ( int32_T ) ( ( X [
33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 == X [ 33ULL ] * X [ 33ULL ] +
6.4274470286298247E-10 ) && ( fabs ( X [ 33ULL ] * X [ 33ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 125ULL ] = ( int32_T
) ( ( ! ( X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 == X [ 33ULL ] *
X [ 33ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 33ULL ] * X [
33ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 33ULL ] *
X [ 33ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 126ULL ] = ( int32_T
) ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 127ULL ] = (
int32_T ) ( ( ! ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ) || (
Check_Valve_TL_convection_B_rho != 0.0 ) ) ; t418 [ 128ULL ] = ( int32_T ) (
Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 129ULL ] = 1 ; t418 [
130ULL ] = ( int32_T ) ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418
[ 131ULL ] = 1 ; t418 [ 132ULL ] = ( int32_T ) ( ( t573 * 0.78539816339744828
== t573 * 0.78539816339744828 ) && ( fabs ( t573 * 0.78539816339744828 ) !=
pmf_get_inf ( ) ) ) ; t418 [ 133ULL ] = ( int32_T ) ( ( ! ( t573 *
0.78539816339744828 == t573 * 0.78539816339744828 ) ) || ( ! ( fabs ( t573 *
0.78539816339744828 ) != pmf_get_inf ( ) ) ) || ( t573 * 0.78539816339744828
>= 0.0 ) ) ; t418 [ 134ULL ] = 1 ; t418 [ 135ULL ] = 1 ; t418 [ 136ULL ] = 1
; t418 [ 137ULL ] = 1 ; t418 [ 138ULL ] = ( int32_T ) ( ( X [ 33ULL ] * X [
33ULL ] + Check_Valve_TL_mdot_c * Check_Valve_TL_mdot_c == X [ 33ULL ] * X [
33ULL ] + Check_Valve_TL_mdot_c * Check_Valve_TL_mdot_c ) && ( fabs ( X [
33ULL ] * X [ 33ULL ] + Check_Valve_TL_mdot_c * Check_Valve_TL_mdot_c ) !=
pmf_get_inf ( ) ) ) ; t418 [ 139ULL ] = ( int32_T ) ( ( ! ( X [ 33ULL ] * X [
33ULL ] + Check_Valve_TL_mdot_c * Check_Valve_TL_mdot_c == X [ 33ULL ] * X [
33ULL ] + Check_Valve_TL_mdot_c * Check_Valve_TL_mdot_c ) ) || ( ! ( fabs ( X
[ 33ULL ] * X [ 33ULL ] + Check_Valve_TL_mdot_c * Check_Valve_TL_mdot_c ) !=
pmf_get_inf ( ) ) ) || ( X [ 33ULL ] * X [ 33ULL ] + Check_Valve_TL_mdot_c *
Check_Valve_TL_mdot_c >= 0.0 ) ) ; t418 [ 140ULL ] = ( int32_T ) ( t547 !=
0.0 ) ; t418 [ 141ULL ] = ( int32_T ) ( Check_Valve_TL_convection_B_rho !=
0.0 ) ; t418 [ 142ULL ] = 1 ; t418 [ 143ULL ] = 1 ; t418 [ 144ULL ] = (
int32_T ) ( ( X [ 43ULL ] * X [ 43ULL ] + 6.4242428173257682E-10 == X [ 43ULL
] * X [ 43ULL ] + 6.4242428173257682E-10 ) && ( fabs ( X [ 43ULL ] * X [
43ULL ] + 6.4242428173257682E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 145ULL ] =
( int32_T ) ( ( ! ( X [ 43ULL ] * X [ 43ULL ] + 6.4242428173257682E-10 == X [
43ULL ] * X [ 43ULL ] + 6.4242428173257682E-10 ) ) || ( ! ( fabs ( X [ 43ULL
] * X [ 43ULL ] + 6.4242428173257682E-10 ) != pmf_get_inf ( ) ) ) || ( X [
43ULL ] * X [ 43ULL ] + 6.4242428173257682E-10 >= 0.0 ) ) ; t418 [ 146ULL ] =
( int32_T ) ( t475 != 0.0 ) ; t418 [ 147ULL ] = ( int32_T ) ( ( ! ( t475 !=
0.0 ) ) || ( Double_Acting_Actuator_TL_chamber_A_convection_A_rho != 0.0 ) )
; t418 [ 148ULL ] = ( int32_T ) ( t475 != 0.0 ) ; t418 [ 149ULL ] = 1 ; t418
[ 150ULL ] = ( int32_T ) ( t475 != 0.0 ) ; t418 [ 151ULL ] = 1 ; t418 [
152ULL ] = ( int32_T ) ( Double_Acting_Actuator_TL_chamber_A_rho_I != 0.0 ) ;
t418 [ 153ULL ] = ( int32_T ) ( t474 != 0.0 ) ; t418 [ 154ULL ] = 1 ; t418 [
155ULL ] = 1 ; t418 [ 156ULL ] = ( int32_T ) ( ( X [ 48ULL ] * X [ 48ULL ] +
6.4242428173257682E-10 == X [ 48ULL ] * X [ 48ULL ] + 6.4242428173257682E-10
) && ( fabs ( X [ 48ULL ] * X [ 48ULL ] + 6.4242428173257682E-10 ) !=
pmf_get_inf ( ) ) ) ; t418 [ 157ULL ] = ( int32_T ) ( ( ! ( X [ 48ULL ] * X [
48ULL ] + 6.4242428173257682E-10 == X [ 48ULL ] * X [ 48ULL ] +
6.4242428173257682E-10 ) ) || ( ! ( fabs ( X [ 48ULL ] * X [ 48ULL ] +
6.4242428173257682E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 48ULL ] * X [ 48ULL
] + 6.4242428173257682E-10 >= 0.0 ) ) ; t418 [ 158ULL ] = ( int32_T ) (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ; t418 [
159ULL ] = ( int32_T ) ( ( ! (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ) || (
Double_Acting_Actuator_TL_chamber_B_convection_A_rho != 0.0 ) ) ; t418 [
160ULL ] = ( int32_T ) (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ; t418 [
161ULL ] = 1 ; t418 [ 162ULL ] = ( int32_T ) (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ; t418 [
163ULL ] = 1 ; t418 [ 164ULL ] = ( int32_T ) (
Double_Acting_Actuator_TL_chamber_B_rho_I != 0.0 ) ; t418 [ 165ULL ] = (
int32_T ) ( Double_Acting_Actuator_TL_chamber_B_beta_I != 0.0 ) ; t418 [
166ULL ] = 1 ; t418 [ 167ULL ] = 1 ; t418 [ 168ULL ] = ( int32_T ) ( ( X [
59ULL ] * X [ 59ULL ] + 6.4274470286298247E-10 == X [ 59ULL ] * X [ 59ULL ] +
6.4274470286298247E-10 ) && ( fabs ( X [ 59ULL ] * X [ 59ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 169ULL ] = ( int32_T
) ( ( ! ( X [ 59ULL ] * X [ 59ULL ] + 6.4274470286298247E-10 == X [ 59ULL ] *
X [ 59ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 59ULL ] * X [
59ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 59ULL ] *
X [ 59ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 170ULL ] = ( int32_T
) ( Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ; t418 [
171ULL ] = ( int32_T ) ( ( ! (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ) || (
Fixed_Displacement_Motor_TL_convection_A_rho != 0.0 ) ) ; t418 [ 172ULL ] = (
int32_T ) ( Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ; t418
[ 173ULL ] = 1 ; t418 [ 174ULL ] = ( int32_T ) (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 175ULL ]
= 1 ; t418 [ 176ULL ] = 1 ; t418 [ 177ULL ] = 1 ; t418 [ 178ULL ] = ( int32_T
) ( ( X [ 59ULL ] * X [ 59ULL ] + 6.4274470286298247E-10 == X [ 59ULL ] * X [
59ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 59ULL ] * X [ 59ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 179ULL ] = ( int32_T
) ( ( ! ( X [ 59ULL ] * X [ 59ULL ] + 6.4274470286298247E-10 == X [ 59ULL ] *
X [ 59ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 59ULL ] * X [
59ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 59ULL ] *
X [ 59ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 180ULL ] = ( int32_T
) ( Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ; t418 [
181ULL ] = ( int32_T ) ( ( ! (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ) || ( t430_idx_0
!= 0.0 ) ) ; t418 [ 182ULL ] = ( int32_T ) (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 183ULL ]
= 1 ; t418 [ 184ULL ] = ( int32_T ) (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 185ULL ]
= 1 ; t418 [ 186ULL ] = ( int32_T ) ( (
Fixed_Displacement_Motor_TL_convection_A_rho + t430_idx_0 ) / 2.0 != 0.0 ) ;
t418 [ 187ULL ] = ( int32_T ) ( t476 != 0.0 ) ; t418 [ 188ULL ] = ( int32_T )
( Fixed_Displacement_Motor_TL_convection_A_rho != 0.0 ) ; t418 [ 189ULL ] = (
int32_T ) ( t430_idx_0 != 0.0 ) ; t418 [ 190ULL ] = ( int32_T ) ( ( ! ( X [
72ULL ] * 0.001 >= 0.004 ) ) || ( Gas_Charged_Accumulator_TL_rho_I != 0.0 ) )
; t418 [ 191ULL ] = ( int32_T ) ( ( ! ( X [ 72ULL ] * 0.001 <= 0.0 ) ) || ( X
[ 72ULL ] * 0.001 >= 0.004 ) || ( Gas_Charged_Accumulator_TL_rho_I != 0.0 ) )
; t418 [ 192ULL ] = 1 ; t418 [ 193ULL ] = 1 ; t418 [ 194ULL ] = ( int32_T ) (
( t477 * t477 + 6.4274470286298247E-10 == t477 * t477 +
6.4274470286298247E-10 ) && ( fabs ( t477 * t477 + 6.4274470286298247E-10 )
!= pmf_get_inf ( ) ) ) ; t418 [ 195ULL ] = ( int32_T ) ( ( ! ( t477 * t477 +
6.4274470286298247E-10 == t477 * t477 + 6.4274470286298247E-10 ) ) || ( ! (
fabs ( t477 * t477 + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || (
t477 * t477 + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 196ULL ] = ( int32_T
) ( Gas_Charged_Accumulator_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 197ULL
] = ( int32_T ) ( ( ! ( Gas_Charged_Accumulator_TL_convection_A_mdot_abs !=
0.0 ) ) || ( Gas_Charged_Accumulator_TL_convection_A_rho != 0.0 ) ) ; t418 [
198ULL ] = ( int32_T ) ( Gas_Charged_Accumulator_TL_convection_A_mdot_abs !=
0.0 ) ; t418 [ 199ULL ] = 1 ; t418 [ 200ULL ] = ( int32_T ) (
Gas_Charged_Accumulator_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 201ULL ] =
1 ; t418 [ 202ULL ] = ( int32_T ) ( Gas_Charged_Accumulator_TL_rho_I != 0.0 )
; t418 [ 203ULL ] = ( int32_T ) ( Gas_Charged_Accumulator_TL_beta_I != 0.0 )
; t418 [ 204ULL ] = ( int32_T ) ( Gas_Charged_Accumulator_TL_gas_volume_sat
!= 0.0 ) ; t418 [ 205ULL ] = 1 ; t418 [ 206ULL ] = ( int32_T ) ( ( ! (
Gas_Charged_Accumulator_TL_gas_volume_sat != 0.0 ) ) || ( 0.008 / (
Gas_Charged_Accumulator_TL_gas_volume_sat == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_gas_volume_sat ) >= 0.0 ) ) ; t418 [ 207ULL ] = (
int32_T ) ( Gas_Charged_Accumulator_TL_gas_volume_sat != 0.0 ) ; t418 [
208ULL ] = ( int32_T ) ( ( ! ( X [ 72ULL ] * 0.001 >= 0.004 ) ) || (
Gas_Charged_Accumulator_TL_rho_I != 0.0 ) ) ; t418 [ 209ULL ] = ( int32_T ) (
( ! ( X [ 72ULL ] * 0.001 >= 0.004 ) ) || ( ! (
Gas_Charged_Accumulator_TL_rho_I != 0.0 ) ) || ( (
Gas_Charged_Accumulator_TL_volume_coeff * 100000.0 + ( t477 > 0.0 ? t477 :
0.0 ) * 1.0E+10 / ( Gas_Charged_Accumulator_TL_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_rho_I ) ) + 1.0E+10 != 0.0 ) ) ; t418 [ 210ULL ] =
( int32_T ) ( ( ! ( X [ 72ULL ] * 0.001 <= 0.0 ) ) || ( X [ 72ULL ] * 0.001
>= 0.004 ) || ( Gas_Charged_Accumulator_TL_rho_I != 0.0 ) ) ; t418 [ 211ULL ]
= ( int32_T ) ( ( ! ( X [ 72ULL ] * 0.001 <= 0.0 ) ) || ( ! (
Gas_Charged_Accumulator_TL_rho_I != 0.0 ) ) || ( X [ 72ULL ] * 0.001 >= 0.004
) || ( ( Gas_Charged_Accumulator_TL_volume_coeff * 100000.0 + 1.0E+10 ) - (
t477 < 0.0 ? t477 : 0.0 ) * 1.0E+10 / ( Gas_Charged_Accumulator_TL_rho_I ==
0.0 ? 1.0E-16 : Gas_Charged_Accumulator_TL_rho_I ) != 0.0 ) ) ; t418 [ 212ULL
] = ( int32_T ) ( ( X [ 72ULL ] * 0.001 <= 0.0 ) || ( X [ 72ULL ] * 0.001 >=
0.004 ) || ( Gas_Charged_Accumulator_TL_volume_coeff != 0.0 ) ) ; t418 [
213ULL ] = ( int32_T ) ( ( ! ( X [ 75ULL ] * 0.001 >= 0.00796 ) ) || (
Gas_Charged_Accumulator_TL1_rho_I != 0.0 ) ) ; t418 [ 214ULL ] = ( int32_T )
( ( ! ( X [ 75ULL ] * 0.001 <= 0.0 ) ) || ( X [ 75ULL ] * 0.001 >= 0.00796 )
|| ( Gas_Charged_Accumulator_TL1_rho_I != 0.0 ) ) ; t418 [ 215ULL ] = 1 ;
t418 [ 216ULL ] = 1 ; t418 [ 217ULL ] = ( int32_T ) ( ( X [ 43ULL ] * X [
43ULL ] + 6.4242428173257682E-10 == X [ 43ULL ] * X [ 43ULL ] +
6.4242428173257682E-10 ) && ( fabs ( X [ 43ULL ] * X [ 43ULL ] +
6.4242428173257682E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 218ULL ] = ( int32_T
) ( ( ! ( X [ 43ULL ] * X [ 43ULL ] + 6.4242428173257682E-10 == X [ 43ULL ] *
X [ 43ULL ] + 6.4242428173257682E-10 ) ) || ( ! ( fabs ( X [ 43ULL ] * X [
43ULL ] + 6.4242428173257682E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 43ULL ] *
X [ 43ULL ] + 6.4242428173257682E-10 >= 0.0 ) ) ; t418 [ 219ULL ] = ( int32_T
) ( t475 != 0.0 ) ; t418 [ 220ULL ] = ( int32_T ) ( ( ! ( t475 != 0.0 ) ) ||
( Gas_Charged_Accumulator_TL1_convection_A_rho != 0.0 ) ) ; t418 [ 221ULL ] =
( int32_T ) ( t475 != 0.0 ) ; t418 [ 222ULL ] = 1 ; t418 [ 223ULL ] = (
int32_T ) ( t475 != 0.0 ) ; t418 [ 224ULL ] = 1 ; t418 [ 225ULL ] = ( int32_T
) ( Gas_Charged_Accumulator_TL1_rho_I != 0.0 ) ; t418 [ 226ULL ] = ( int32_T
) ( t478 != 0.0 ) ; t418 [ 227ULL ] = ( int32_T ) (
Gas_Charged_Accumulator_TL1_gas_volume_sat != 0.0 ) ; t418 [ 228ULL ] = 1 ;
t418 [ 229ULL ] = ( int32_T ) ( ( ! (
Gas_Charged_Accumulator_TL1_gas_volume_sat != 0.0 ) ) || ( 0.008 / (
Gas_Charged_Accumulator_TL1_gas_volume_sat == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_gas_volume_sat ) >= 0.0 ) ) ; t418 [ 230ULL ] = (
int32_T ) ( Gas_Charged_Accumulator_TL1_gas_volume_sat != 0.0 ) ; t418 [
231ULL ] = ( int32_T ) ( ( ! ( X [ 75ULL ] * 0.001 >= 0.00796 ) ) || (
Gas_Charged_Accumulator_TL1_rho_I != 0.0 ) ) ; t418 [ 232ULL ] = ( int32_T )
( ( ! ( X [ 75ULL ] * 0.001 >= 0.00796 ) ) || ( ! (
Gas_Charged_Accumulator_TL1_rho_I != 0.0 ) ) || ( (
Gas_Charged_Accumulator_TL1_volume_coeff * 100000.0 +
Gas_Charged_Accumulator_TL1_mdot_pos * 1.0E+10 / (
Gas_Charged_Accumulator_TL1_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_rho_I ) ) + 1.0E+10 != 0.0 ) ) ; t418 [ 233ULL ]
= ( int32_T ) ( ( ! ( X [ 75ULL ] * 0.001 <= 0.0 ) ) || ( X [ 75ULL ] * 0.001
>= 0.00796 ) || ( Gas_Charged_Accumulator_TL1_rho_I != 0.0 ) ) ; t418 [
234ULL ] = ( int32_T ) ( ( ! ( X [ 75ULL ] * 0.001 <= 0.0 ) ) || ( ! (
Gas_Charged_Accumulator_TL1_rho_I != 0.0 ) ) || ( X [ 75ULL ] * 0.001 >=
0.00796 ) || ( ( Gas_Charged_Accumulator_TL1_volume_coeff * 100000.0 +
1.0E+10 ) - Gas_Charged_Accumulator_TL1_mdot_neg * 1.0E+10 / (
Gas_Charged_Accumulator_TL1_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_rho_I ) != 0.0 ) ) ; t418 [ 235ULL ] = ( int32_T
) ( ( X [ 75ULL ] * 0.001 <= 0.0 ) || ( X [ 75ULL ] * 0.001 >= 0.00796 ) || (
Gas_Charged_Accumulator_TL1_volume_coeff != 0.0 ) ) ; t418 [ 236ULL ] = 1 ;
t418 [ 237ULL ] = 1 ; t418 [ 238ULL ] = ( int32_T ) ( ( X [ 79ULL ] * X [
79ULL ] + 6.4274470286298247E-10 == X [ 79ULL ] * X [ 79ULL ] +
6.4274470286298247E-10 ) && ( fabs ( X [ 79ULL ] * X [ 79ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 239ULL ] = ( int32_T
) ( ( ! ( X [ 79ULL ] * X [ 79ULL ] + 6.4274470286298247E-10 == X [ 79ULL ] *
X [ 79ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 79ULL ] * X [
79ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 79ULL ] *
X [ 79ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 240ULL ] = ( int32_T
) ( t479 != 0.0 ) ; t418 [ 241ULL ] = ( int32_T ) ( ( ! ( t479 != 0.0 ) ) ||
( Interface_TL_IL1_convection_TL_rho != 0.0 ) ) ; t418 [ 242ULL ] = ( int32_T
) ( t479 != 0.0 ) ; t418 [ 243ULL ] = 1 ; t418 [ 244ULL ] = ( int32_T ) (
t479 != 0.0 ) ; t418 [ 245ULL ] = 1 ; t418 [ 246ULL ] = 1 ; t418 [ 247ULL ] =
1 ; t418 [ 248ULL ] = ( int32_T ) ( ( Interface_TL_IL2_convection_TL_mdot *
Interface_TL_IL2_convection_TL_mdot + 6.4274470286298247E-10 ==
Interface_TL_IL2_convection_TL_mdot * Interface_TL_IL2_convection_TL_mdot +
6.4274470286298247E-10 ) && ( fabs ( Interface_TL_IL2_convection_TL_mdot *
Interface_TL_IL2_convection_TL_mdot + 6.4274470286298247E-10 ) != pmf_get_inf
( ) ) ) ; t418 [ 249ULL ] = ( int32_T ) ( ( ! (
Interface_TL_IL2_convection_TL_mdot * Interface_TL_IL2_convection_TL_mdot +
6.4274470286298247E-10 == Interface_TL_IL2_convection_TL_mdot *
Interface_TL_IL2_convection_TL_mdot + 6.4274470286298247E-10 ) ) || ( ! (
fabs ( Interface_TL_IL2_convection_TL_mdot *
Interface_TL_IL2_convection_TL_mdot + 6.4274470286298247E-10 ) != pmf_get_inf
( ) ) ) || ( Interface_TL_IL2_convection_TL_mdot *
Interface_TL_IL2_convection_TL_mdot + 6.4274470286298247E-10 >= 0.0 ) ) ;
t418 [ 250ULL ] = ( int32_T ) ( Interface_TL_IL2_convection_TL_mdot_abs !=
0.0 ) ; t418 [ 251ULL ] = ( int32_T ) ( ( ! (
Interface_TL_IL2_convection_TL_mdot_abs != 0.0 ) ) || (
Interface_TL_IL2_convection_TL_rho != 0.0 ) ) ; t418 [ 252ULL ] = ( int32_T )
( Interface_TL_IL2_convection_TL_mdot_abs != 0.0 ) ; t418 [ 253ULL ] = 1 ;
t418 [ 254ULL ] = ( int32_T ) ( Interface_TL_IL2_convection_TL_mdot_abs !=
0.0 ) ; t418 [ 255ULL ] = 1 ; t418 [ 256ULL ] = 1 ; t418 [ 257ULL ] = 1 ;
t418 [ 258ULL ] = ( int32_T ) ( ( X [ 48ULL ] * X [ 48ULL ] +
6.4242428173257682E-10 == X [ 48ULL ] * X [ 48ULL ] + 6.4242428173257682E-10
) && ( fabs ( X [ 48ULL ] * X [ 48ULL ] + 6.4242428173257682E-10 ) !=
pmf_get_inf ( ) ) ) ; t418 [ 259ULL ] = ( int32_T ) ( ( ! ( X [ 48ULL ] * X [
48ULL ] + 6.4242428173257682E-10 == X [ 48ULL ] * X [ 48ULL ] +
6.4242428173257682E-10 ) ) || ( ! ( fabs ( X [ 48ULL ] * X [ 48ULL ] +
6.4242428173257682E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 48ULL ] * X [ 48ULL
] + 6.4242428173257682E-10 >= 0.0 ) ) ; t418 [ 260ULL ] = ( int32_T ) (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ; t418 [
261ULL ] = ( int32_T ) ( ( ! (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ) || (
Interface_TL_IL3_convection_TL_rho != 0.0 ) ) ; t418 [ 262ULL ] = ( int32_T )
( Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ; t418 [
263ULL ] = 1 ; t418 [ 264ULL ] = ( int32_T ) (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ; t418 [
265ULL ] = 1 ; t418 [ 266ULL ] = ( int32_T ) (
Interface_TL_IL4_convection_TL_rho != 0.0 ) ; t418 [ 267ULL ] = 1 ; t418 [
268ULL ] = 1 ; t418 [ 269ULL ] = 1 ; t418 [ 270ULL ] = 1 ; t418 [ 271ULL ] =
1 ; t418 [ 272ULL ] = 1 ; t418 [ 273ULL ] = 1 ; t418 [ 274ULL ] = 1 ; t418 [
275ULL ] = 1 ; t418 [ 276ULL ] = 1 ; t418 [ 277ULL ] = 1 ; t418 [ 278ULL ] =
1 ; t418 [ 279ULL ] = 1 ; t418 [ 280ULL ] = 1 ; t418 [ 281ULL ] = 1 ; t418 [
282ULL ] = 1 ; t418 [ 283ULL ] = ( int32_T ) ( (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ==
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) && ( fabs (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 284ULL ] = ( int32_T
) ( ( ! ( Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ==
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) ) || ( ! ( fabs (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 285ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
286ULL ] = ( int32_T ) ( ( ! (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ) || (
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho != 0.0 ) ) ; t418 [
287ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
288ULL ] = 1 ; t418 [ 289ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
290ULL ] = 1 ; t418 [ 291ULL ] = 1 ; t418 [ 292ULL ] = 1 ; t418 [ 293ULL ] =
( int32_T ) ( ( Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ==
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) && ( fabs (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 294ULL ] = ( int32_T
) ( ( ! ( Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ==
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) ) || ( ! ( fabs (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot *
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot +
6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 295ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
296ULL ] = ( int32_T ) ( ( ! (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ) || (
Pressure_Relief_Valve_TL_relief_valve_convection_B_rho != 0.0 ) ) ; t418 [
297ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
298ULL ] = 1 ; t418 [ 299ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
300ULL ] = 1 ; t418 [ 301ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_orifice_area *
Pressure_Relief_Valve_TL_relief_valve_rho_avg * 8.0 != 0.0 ) ; t418 [ 302ULL
] = 1 ; t418 [ 303ULL ] = 1 ; t418 [ 304ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_rho != 0.0 ) ; t418 [
305ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_B_rho != 0.0 ) ; t418 [
306ULL ] = 1 ; t418 [ 307ULL ] = 1 ; t418 [ 308ULL ] = 1 ; t418 [ 309ULL ] =
1 ; t418 [ 310ULL ] = 1 ; t418 [ 311ULL ] = 1 ; t418 [ 312ULL ] = 1 ; t418 [
313ULL ] = 1 ; t418 [ 314ULL ] = 1 ; t418 [ 315ULL ] = 1 ; t418 [ 316ULL ] =
1 ; t418 [ 317ULL ] = 1 ; t418 [ 318ULL ] = 1 ; t418 [ 319ULL ] = 1 ; t418 [
320ULL ] = 1 ; t418 [ 321ULL ] = 1 ; t418 [ 322ULL ] = ( int32_T ) ( ( X [
68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 == X [ 68ULL ] * X [ 68ULL ] +
6.4274470286298247E-10 ) && ( fabs ( X [ 68ULL ] * X [ 68ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 323ULL ] = ( int32_T
) ( ( ! ( X [ 68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 == X [ 68ULL ] *
X [ 68ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 68ULL ] * X [
68ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 68ULL ] *
X [ 68ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 324ULL ] = ( int32_T
) ( t484 != 0.0 ) ; t418 [ 325ULL ] = ( int32_T ) ( ( ! ( t484 != 0.0 ) ) ||
( t486 != 0.0 ) ) ; t418 [ 326ULL ] = ( int32_T ) ( t484 != 0.0 ) ; t418 [
327ULL ] = 1 ; t418 [ 328ULL ] = ( int32_T ) ( t484 != 0.0 ) ; t418 [ 329ULL
] = 1 ; t418 [ 330ULL ] = 1 ; t418 [ 331ULL ] = 1 ; t418 [ 332ULL ] = (
int32_T ) ( ( X [ 68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 == X [ 68ULL
] * X [ 68ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 68ULL ] * X [
68ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 333ULL ] =
( int32_T ) ( ( ! ( X [ 68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 == X [
68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 68ULL
] * X [ 68ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [
68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 334ULL ] =
( int32_T ) ( t484 != 0.0 ) ; t418 [ 335ULL ] = ( int32_T ) ( ( ! ( t484 !=
0.0 ) ) || ( Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho != 0.0 )
) ; t418 [ 336ULL ] = ( int32_T ) ( t484 != 0.0 ) ; t418 [ 337ULL ] = 1 ;
t418 [ 338ULL ] = ( int32_T ) ( t484 != 0.0 ) ; t418 [ 339ULL ] = 1 ; t418 [
340ULL ] = ( int32_T ) ( t482 *
Pressure_Relief_Valve_TL1_relief_valve_rho_avg * 8.0 != 0.0 ) ; t418 [ 341ULL
] = 1 ; t418 [ 342ULL ] = 1 ; t418 [ 343ULL ] = ( int32_T ) ( t486 != 0.0 ) ;
t418 [ 344ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL1_relief_valve_convection_B_rho != 0.0 ) ; t418 [
345ULL ] = ( int32_T ) ( t487 != 0.0 ) ; t418 [ 346ULL ] = 1 ; t418 [ 347ULL
] = 1 ; t418 [ 348ULL ] = ( int32_T ) ( ( t487 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 349ULL ] = ( int32_T ) ( t489 != 0.0 ) ; t418 [
350ULL ] = ( int32_T ) ( ( ! ( t489 != 0.0 ) ) || ( 1.0 / ( t489 == 0.0 ?
1.0E-16 : t489 ) + t488 != 0.0 ) ) ; t418 [ 351ULL ] = ( int32_T ) ( t490 !=
0.0 ) ; t418 [ 352ULL ] = 1 ; t418 [ 353ULL ] = 1 ; t418 [ 354ULL ] = (
int32_T ) ( ( t493 * t493 + 6.4274470286298247E-10 == t493 * t493 +
6.4274470286298247E-10 ) && ( fabs ( t493 * t493 + 6.4274470286298247E-10 )
!= pmf_get_inf ( ) ) ) ; t418 [ 355ULL ] = ( int32_T ) ( ( ! ( t493 * t493 +
6.4274470286298247E-10 == t493 * t493 + 6.4274470286298247E-10 ) ) || ( ! (
fabs ( t493 * t493 + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || (
t493 * t493 + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 356ULL ] = ( int32_T
) ( Reservoir_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 357ULL ] = ( int32_T
) ( ( ! ( Reservoir_TL_convection_A_mdot_abs != 0.0 ) ) || (
Reservoir_TL_convection_A_rho != 0.0 ) ) ; t418 [ 358ULL ] = ( int32_T ) (
Reservoir_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 359ULL ] = 1 ; t418 [
360ULL ] = ( int32_T ) ( Reservoir_TL_convection_A_mdot_abs != 0.0 ) ; t418 [
361ULL ] = 1 ; t418 [ 362ULL ] = 1 ; t418 [ 363ULL ] = 1 ; t418 [ 364ULL ] =
( int32_T ) ( ( X [ 87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 == X [
87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 87ULL ] * X
[ 87ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 365ULL ]
= ( int32_T ) ( ( ! ( X [ 87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 == X
[ 87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [
87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || (
X [ 87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 366ULL
] = ( int32_T ) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418 [
367ULL ] = ( int32_T ) ( ( ! ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) )
|| ( Reservoir_TL1_convection_A_rho != 0.0 ) ) ; t418 [ 368ULL ] = ( int32_T
) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418 [ 369ULL ] = 1 ; t418
[ 370ULL ] = ( int32_T ) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ;
t418 [ 371ULL ] = 1 ; t418 [ 372ULL ] = 1 ; t418 [ 373ULL ] = 1 ; t418 [
374ULL ] = ( int32_T ) ( ( Reservoir_TL2_convection_A_mdot *
Reservoir_TL2_convection_A_mdot + 6.4274470286298247E-10 ==
Reservoir_TL2_convection_A_mdot * Reservoir_TL2_convection_A_mdot +
6.4274470286298247E-10 ) && ( fabs ( Reservoir_TL2_convection_A_mdot *
Reservoir_TL2_convection_A_mdot + 6.4274470286298247E-10 ) != pmf_get_inf ( )
) ) ; t418 [ 375ULL ] = ( int32_T ) ( ( ! ( Reservoir_TL2_convection_A_mdot *
Reservoir_TL2_convection_A_mdot + 6.4274470286298247E-10 ==
Reservoir_TL2_convection_A_mdot * Reservoir_TL2_convection_A_mdot +
6.4274470286298247E-10 ) ) || ( ! ( fabs ( Reservoir_TL2_convection_A_mdot *
Reservoir_TL2_convection_A_mdot + 6.4274470286298247E-10 ) != pmf_get_inf ( )
) ) || ( Reservoir_TL2_convection_A_mdot * Reservoir_TL2_convection_A_mdot +
6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 376ULL ] = ( int32_T ) (
Reservoir_TL2_convection_A_mdot_abs != 0.0 ) ; t418 [ 377ULL ] = ( int32_T )
( ( ! ( Reservoir_TL2_convection_A_mdot_abs != 0.0 ) ) || (
Reservoir_TL2_convection_A_rho != 0.0 ) ) ; t418 [ 378ULL ] = ( int32_T ) (
Reservoir_TL2_convection_A_mdot_abs != 0.0 ) ; t418 [ 379ULL ] = 1 ; t418 [
380ULL ] = ( int32_T ) ( Reservoir_TL2_convection_A_mdot_abs != 0.0 ) ; t418
[ 381ULL ] = 1 ; t418 [ 382ULL ] = 1 ; t418 [ 383ULL ] = 1 ; t418 [ 384ULL ]
= ( int32_T ) ( t487 != 0.0 ) ; t418 [ 385ULL ] = 1 ; t418 [ 386ULL ] = 1 ;
t418 [ 387ULL ] = ( int32_T ) ( ( t487 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 388ULL ] = ( int32_T ) ( t489 != 0.0 ) ; t418 [
389ULL ] = ( int32_T ) ( ( ! ( t489 != 0.0 ) ) || ( 1.0 / ( t489 == 0.0 ?
1.0E-16 : t489 ) + t488 != 0.0 ) ) ; t418 [ 390ULL ] = ( int32_T ) (
intrm_sf_mf_33 != 0.0 ) ; t418 [ 391ULL ] = 1 ; t418 [ 392ULL ] = 1 ; t418 [
393ULL ] = ( int32_T ) ( ( intrm_sf_mf_33 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 394ULL ] = ( int32_T ) ( intrm_sf_mf_38 != 0.0
) ; t418 [ 395ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_38 != 0.0 ) ) || ( 1.0
/ ( intrm_sf_mf_38 == 0.0 ? 1.0E-16 : intrm_sf_mf_38 ) + intrm_sf_mf_37 !=
0.0 ) ) ; t418 [ 396ULL ] = ( int32_T ) ( t490 != 0.0 ) ; t418 [ 397ULL ] = (
int32_T ) ( intrm_sf_mf_39 != 0.0 ) ; t418 [ 398ULL ] = ( int32_T ) ( t487 !=
0.0 ) ; t418 [ 399ULL ] = 1 ; t418 [ 400ULL ] = 1 ; t418 [ 401ULL ] = (
int32_T ) ( ( t487 - 1.01325 ) / 21791.0 < 663.67513503334737 ) ; t418 [
402ULL ] = ( int32_T ) ( t489 != 0.0 ) ; t418 [ 403ULL ] = ( int32_T ) ( ( !
( t489 != 0.0 ) ) || ( 1.0 / ( t489 == 0.0 ? 1.0E-16 : t489 ) + t488 != 0.0 )
) ; t418 [ 404ULL ] = ( int32_T ) ( intrm_sf_mf_47 != 0.0 ) ; t418 [ 405ULL ]
= 1 ; t418 [ 406ULL ] = 1 ; t418 [ 407ULL ] = ( int32_T ) ( ( intrm_sf_mf_47
- 1.01325 ) / 21791.0 < 663.67513503334737 ) ; t418 [ 408ULL ] = ( int32_T )
( intrm_sf_mf_52 != 0.0 ) ; t418 [ 409ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_52 != 0.0 ) ) || ( 1.0 / ( intrm_sf_mf_52 == 0.0 ? 1.0E-16 :
intrm_sf_mf_52 ) + intrm_sf_mf_51 != 0.0 ) ) ; t418 [ 410ULL ] = ( int32_T )
( t490 != 0.0 ) ; t418 [ 411ULL ] = ( int32_T ) ( intrm_sf_mf_53 != 0.0 ) ;
t418 [ 412ULL ] = 1 ; t418 [ 413ULL ] = 1 ; t418 [ 414ULL ] = ( int32_T ) (
intrm_sf_mf_58 != 0.0 ) ; t418 [ 415ULL ] = 1 ; t418 [ 416ULL ] = 1 ; t418 [
417ULL ] = ( int32_T ) ( ( intrm_sf_mf_58 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 418ULL ] = ( int32_T ) ( intrm_sf_mf_63 != 0.0
) ; t418 [ 419ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_63 != 0.0 ) ) || ( 1.0
/ ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 : intrm_sf_mf_63 ) + intrm_sf_mf_62 !=
0.0 ) ) ; t418 [ 420ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_AT_Orifice_orifice_area * 2.0 != 0.0 ) ; t418
[ 421ULL ] = ( int32_T ) ( intrm_sf_mf_64 != 0.0 ) ; t418 [ 422ULL ] = (
int32_T ) ( - t505 / 1.848 < 663.67513503334737 ) ; t418 [ 423ULL ] = (
int32_T ) ( intrm_sf_mf_87 != 0.0 ) ; t418 [ 424ULL ] = 1 ; t418 [ 425ULL ] =
1 ; t418 [ 426ULL ] = ( int32_T ) ( ( intrm_sf_mf_87 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 427ULL ] = ( int32_T ) ( intrm_sf_mf_92 != 0.0
) ; t418 [ 428ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_92 != 0.0 ) ) || ( 1.0
/ ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) + intrm_sf_mf_91 !=
0.0 ) ) ; t418 [ 429ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_BT_Orifice_orifice_area * 2.0 != 0.0 ) ; t418
[ 430ULL ] = ( int32_T ) ( intrm_sf_mf_93 != 0.0 ) ; t418 [ 431ULL ] = (
int32_T ) ( - t510 / 1.848 < 663.67513503334737 ) ; t418 [ 432ULL ] = (
int32_T ) ( t487 != 0.0 ) ; t418 [ 433ULL ] = 1 ; t418 [ 434ULL ] = 1 ; t418
[ 435ULL ] = ( int32_T ) ( ( t487 - 1.01325 ) / 21791.0 < 663.67513503334737
) ; t418 [ 436ULL ] = ( int32_T ) ( t489 != 0.0 ) ; t418 [ 437ULL ] = (
int32_T ) ( ( ! ( t489 != 0.0 ) ) || ( 1.0 / ( t489 == 0.0 ? 1.0E-16 : t489 )
+ t488 != 0.0 ) ) ; t418 [ 438ULL ] = ( int32_T ) ( intrm_sf_mf_58 != 0.0 ) ;
t418 [ 439ULL ] = 1 ; t418 [ 440ULL ] = 1 ; t418 [ 441ULL ] = ( int32_T ) ( (
intrm_sf_mf_58 - 1.01325 ) / 21791.0 < 663.67513503334737 ) ; t418 [ 442ULL ]
= ( int32_T ) ( intrm_sf_mf_63 != 0.0 ) ; t418 [ 443ULL ] = ( int32_T ) ( ( !
( intrm_sf_mf_63 != 0.0 ) ) || ( 1.0 / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 :
intrm_sf_mf_63 ) + intrm_sf_mf_62 != 0.0 ) ) ; t418 [ 444ULL ] = ( int32_T )
( Servovalve2_Main_Valve_Orifice_PA_Orifice_orifice_area * 2.0 != 0.0 ) ;
t418 [ 445ULL ] = ( int32_T ) ( t490 != 0.0 ) ; t418 [ 446ULL ] = ( int32_T )
( intrm_sf_mf_64 != 0.0 ) ; t418 [ 447ULL ] = ( int32_T ) ( - t513 / 1.848 <
663.67513503334737 ) ; t418 [ 448ULL ] = ( int32_T ) ( t487 != 0.0 ) ; t418 [
449ULL ] = 1 ; t418 [ 450ULL ] = 1 ; t418 [ 451ULL ] = ( int32_T ) ( ( t487 -
1.01325 ) / 21791.0 < 663.67513503334737 ) ; t418 [ 452ULL ] = ( int32_T ) (
t489 != 0.0 ) ; t418 [ 453ULL ] = ( int32_T ) ( ( ! ( t489 != 0.0 ) ) || (
1.0 / ( t489 == 0.0 ? 1.0E-16 : t489 ) + t488 != 0.0 ) ) ; t418 [ 454ULL ] =
( int32_T ) ( intrm_sf_mf_87 != 0.0 ) ; t418 [ 455ULL ] = 1 ; t418 [ 456ULL ]
= 1 ; t418 [ 457ULL ] = ( int32_T ) ( ( intrm_sf_mf_87 - 1.01325 ) / 21791.0
< 663.67513503334737 ) ; t418 [ 458ULL ] = ( int32_T ) ( intrm_sf_mf_92 !=
0.0 ) ; t418 [ 459ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_92 != 0.0 ) ) || (
1.0 / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) + intrm_sf_mf_91
!= 0.0 ) ) ; t418 [ 460ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_PB_Orifice_orifice_area * 2.0 != 0.0 ) ; t418
[ 461ULL ] = ( int32_T ) ( t490 != 0.0 ) ; t418 [ 462ULL ] = ( int32_T ) (
intrm_sf_mf_93 != 0.0 ) ; t418 [ 463ULL ] = ( int32_T ) ( - t516 / 1.848 <
663.67513503334737 ) ; t418 [ 464ULL ] = 1 ; t418 [ 465ULL ] = 1 ; t418 [
466ULL ] = ( int32_T ) ( intrm_sf_mf_33 != 0.0 ) ; t418 [ 467ULL ] = 1 ; t418
[ 468ULL ] = 1 ; t418 [ 469ULL ] = ( int32_T ) ( ( intrm_sf_mf_33 - 1.01325 )
/ 21791.0 < 663.67513503334737 ) ; t418 [ 470ULL ] = ( int32_T ) (
intrm_sf_mf_38 != 0.0 ) ; t418 [ 471ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_38 != 0.0 ) ) || ( 1.0 / ( intrm_sf_mf_38 == 0.0 ? 1.0E-16 :
intrm_sf_mf_38 ) + intrm_sf_mf_37 != 0.0 ) ) ; t418 [ 472ULL ] = ( int32_T )
( t518 * 2.0 != 0.0 ) ; t418 [ 473ULL ] = ( int32_T ) ( intrm_sf_mf_39 != 0.0
) ; t418 [ 474ULL ] = ( int32_T ) ( intrm_sf_mf_47 != 0.0 ) ; t418 [ 475ULL ]
= 1 ; t418 [ 476ULL ] = 1 ; t418 [ 477ULL ] = ( int32_T ) ( ( intrm_sf_mf_47
- 1.01325 ) / 21791.0 < 663.67513503334737 ) ; t418 [ 478ULL ] = ( int32_T )
( intrm_sf_mf_52 != 0.0 ) ; t418 [ 479ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_52 != 0.0 ) ) || ( 1.0 / ( intrm_sf_mf_52 == 0.0 ? 1.0E-16 :
intrm_sf_mf_52 ) + intrm_sf_mf_51 != 0.0 ) ) ; t418 [ 480ULL ] = ( int32_T )
( t521 * 2.0 != 0.0 ) ; t418 [ 481ULL ] = ( int32_T ) ( intrm_sf_mf_53 != 0.0
) ; t418 [ 482ULL ] = 1 ; t418 [ 483ULL ] = 1 ; t418 [ 484ULL ] = ( int32_T )
( intrm_sf_mf_87 != 0.0 ) ; t418 [ 485ULL ] = 1 ; t418 [ 486ULL ] = 1 ; t418
[ 487ULL ] = ( int32_T ) ( ( intrm_sf_mf_87 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 488ULL ] = ( int32_T ) ( intrm_sf_mf_92 != 0.0
) ; t418 [ 489ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_92 != 0.0 ) ) || ( 1.0
/ ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) + intrm_sf_mf_91 !=
0.0 ) ) ; t418 [ 490ULL ] = ( int32_T ) ( intrm_sf_mf_93 != 0.0 ) ; t418 [
491ULL ] = ( int32_T ) ( t522 != 0.0 ) ; t418 [ 492ULL ] = ( int32_T ) ( t523
!= 0.0 ) ; t418 [ 493ULL ] = ( int32_T ) (
flow_sensor3_Flow_Rate_Sensor_TL3_rho != 0.0 ) ; t418 [ 494ULL ] = ( int32_T
) ( intrm_sf_mf_58 != 0.0 ) ; t418 [ 495ULL ] = 1 ; t418 [ 496ULL ] = 1 ;
t418 [ 497ULL ] = ( int32_T ) ( ( intrm_sf_mf_58 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 498ULL ] = ( int32_T ) ( intrm_sf_mf_63 != 0.0
) ; t418 [ 499ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_63 != 0.0 ) ) || ( 1.0
/ ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 : intrm_sf_mf_63 ) + intrm_sf_mf_62 !=
0.0 ) ) ; t418 [ 500ULL ] = ( int32_T ) ( intrm_sf_mf_87 != 0.0 ) ; t418 [
501ULL ] = 1 ; t418 [ 502ULL ] = 1 ; t418 [ 503ULL ] = ( int32_T ) ( (
intrm_sf_mf_87 - 1.01325 ) / 21791.0 < 663.67513503334737 ) ; t418 [ 504ULL ]
= ( int32_T ) ( intrm_sf_mf_92 != 0.0 ) ; t418 [ 505ULL ] = ( int32_T ) ( ( !
( intrm_sf_mf_92 != 0.0 ) ) || ( 1.0 / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 :
intrm_sf_mf_92 ) + intrm_sf_mf_91 != 0.0 ) ) ; t418 [ 506ULL ] = ( int32_T )
( intrm_sf_mf_33 != 0.0 ) ; t418 [ 507ULL ] = 1 ; t418 [ 508ULL ] = 1 ; t418
[ 509ULL ] = ( int32_T ) ( ( intrm_sf_mf_33 - 1.01325 ) / 21791.0 <
663.67513503334737 ) ; t418 [ 510ULL ] = ( int32_T ) ( intrm_sf_mf_38 != 0.0
) ; t418 [ 511ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_38 != 0.0 ) ) || ( 1.0
/ ( intrm_sf_mf_38 == 0.0 ? 1.0E-16 : intrm_sf_mf_38 ) + intrm_sf_mf_37 !=
0.0 ) ) ; t418 [ 512ULL ] = ( int32_T ) ( intrm_sf_mf_47 != 0.0 ) ; t418 [
513ULL ] = 1 ; t418 [ 514ULL ] = 1 ; t418 [ 515ULL ] = ( int32_T ) ( (
intrm_sf_mf_47 - 1.01325 ) / 21791.0 < 663.67513503334737 ) ; t418 [ 516ULL ]
= ( int32_T ) ( intrm_sf_mf_52 != 0.0 ) ; t418 [ 517ULL ] = ( int32_T ) ( ( !
( intrm_sf_mf_52 != 0.0 ) ) || ( 1.0 / ( intrm_sf_mf_52 == 0.0 ? 1.0E-16 :
intrm_sf_mf_52 ) + intrm_sf_mf_51 != 0.0 ) ) ; t418 [ 518ULL ] = 1 ; t418 [
519ULL ] = 1 ; t418 [ 520ULL ] = 1 ; t418 [ 521ULL ] = 1 ; t418 [ 522ULL ] =
1 ; t418 [ 523ULL ] = 1 ; t418 [ 524ULL ] = 1 ; t418 [ 525ULL ] = 1 ; t418 [
526ULL ] = 1 ; t418 [ 527ULL ] = 1 ; t418 [ 528ULL ] = 1 ; t418 [ 529ULL ] =
1 ; t418 [ 530ULL ] = 1 ; t418 [ 531ULL ] = 1 ; t418 [ 532ULL ] = 1 ; t418 [
533ULL ] = 1 ; t418 [ 534ULL ] = 1 ; t418 [ 535ULL ] = 1 ; t418 [ 536ULL ] =
1 ; t418 [ 537ULL ] = 1 ; t418 [ 538ULL ] = 1 ; t418 [ 539ULL ] = 1 ; t418 [
540ULL ] = 1 ; t418 [ 541ULL ] = 1 ; t418 [ 542ULL ] = 1 ; t418 [ 543ULL ] =
1 ; t418 [ 544ULL ] = 1 ; t418 [ 545ULL ] = 1 ; t418 [ 546ULL ] = 1 ; t418 [
547ULL ] = 1 ; t418 [ 548ULL ] = 1 ; t418 [ 549ULL ] = 1 ; t418 [ 550ULL ] =
1 ; t418 [ 551ULL ] = 1 ; t418 [ 552ULL ] = 1 ; t418 [ 553ULL ] = 1 ; t418 [
554ULL ] = 1 ; t418 [ 555ULL ] = 1 ; t418 [ 556ULL ] = 1 ; t418 [ 557ULL ] =
1 ; t418 [ 558ULL ] = 1 ; t418 [ 559ULL ] = 1 ; t418 [ 560ULL ] = 1 ; t418 [
561ULL ] = 1 ; t418 [ 562ULL ] = 1 ; t418 [ 563ULL ] = 1 ; t418 [ 564ULL ] =
1 ; t418 [ 565ULL ] = 1 ; t418 [ 566ULL ] = 1 ; t418 [ 567ULL ] = 1 ; t418 [
568ULL ] = 1 ; t418 [ 569ULL ] = 1 ; t418 [ 570ULL ] = 1 ; t418 [ 571ULL ] =
1 ; t418 [ 572ULL ] = 1 ; t418 [ 573ULL ] = 1 ; t418 [ 574ULL ] = 1 ; t418 [
575ULL ] = 1 ; t418 [ 576ULL ] = 1 ; t418 [ 577ULL ] = 1 ; t418 [ 578ULL ] =
1 ; t418 [ 579ULL ] = 1 ; t418 [ 580ULL ] = 1 ; t418 [ 581ULL ] = 1 ; t418 [
582ULL ] = 1 ; t418 [ 583ULL ] = 1 ; t418 [ 584ULL ] = ( int32_T ) ( ( X [
87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 == X [ 87ULL ] * X [ 87ULL ] +
6.4274470286298247E-10 ) && ( fabs ( X [ 87ULL ] * X [ 87ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 585ULL ] = ( int32_T
) ( ( ! ( X [ 87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 == X [ 87ULL ] *
X [ 87ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 87ULL ] * X [
87ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 87ULL ] *
X [ 87ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 586ULL ] = ( int32_T
) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418 [ 587ULL ] = (
int32_T ) ( ( ! ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ) || ( t481 !=
0.0 ) ) ; t418 [ 588ULL ] = ( int32_T ) ( Reservoir_TL1_convection_A_mdot_abs
!= 0.0 ) ; t418 [ 589ULL ] = 1 ; t418 [ 590ULL ] = ( int32_T ) (
Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418 [ 591ULL ] = 1 ; t418 [
592ULL ] = 1 ; t418 [ 593ULL ] = 1 ; t418 [ 594ULL ] = ( int32_T ) ( ( X [
87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 == X [ 87ULL ] * X [ 87ULL ] +
6.4274470286298247E-10 ) && ( fabs ( X [ 87ULL ] * X [ 87ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 595ULL ] = ( int32_T
) ( ( ! ( X [ 87ULL ] * X [ 87ULL ] + 6.4274470286298247E-10 == X [ 87ULL ] *
X [ 87ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 87ULL ] * X [
87ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 87ULL ] *
X [ 87ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 596ULL ] = ( int32_T
) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418 [ 597ULL ] = (
int32_T ) ( ( ! ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ) || ( U_idx_2
!= 0.0 ) ) ; t418 [ 598ULL ] = ( int32_T ) (
Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418 [ 599ULL ] = 1 ; t418 [
600ULL ] = ( int32_T ) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418
[ 601ULL ] = 1 ; t418 [ 602ULL ] = 1 ; t418 [ 603ULL ] = 1 ; t418 [ 604ULL ]
= ( int32_T ) ( intrm_sf_mf_228 *
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg * 2.0 != 0.0 ) ; t418 [ 605ULL
] = ( int32_T ) ( t481 != 0.0 ) ; t418 [ 606ULL ] = ( int32_T ) ( U_idx_2 !=
0.0 ) ; t418 [ 607ULL ] = 1 ; t418 [ 608ULL ] = 1 ; t418 [ 609ULL ] = (
int32_T ) ( ( X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 == X [ 33ULL
] * X [ 33ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 33ULL ] * X [
33ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 610ULL ] =
( int32_T ) ( ( ! ( X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 == X [
33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 33ULL
] * X [ 33ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [
33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 611ULL ] =
( int32_T ) ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 612ULL ]
= ( int32_T ) ( ( ! ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ) || (
t529 != 0.0 ) ) ; t418 [ 613ULL ] = ( int32_T ) (
Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 614ULL ] = 1 ; t418 [
615ULL ] = ( int32_T ) ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418
[ 616ULL ] = 1 ; t418 [ 617ULL ] = 1 ; t418 [ 618ULL ] = 1 ; t418 [ 619ULL ]
= ( int32_T ) ( ( X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 == X [
33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 33ULL ] * X
[ 33ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 620ULL ]
= ( int32_T ) ( ( ! ( X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 == X
[ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [
33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || (
X [ 33ULL ] * X [ 33ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 621ULL
] = ( int32_T ) ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [
622ULL ] = ( int32_T ) ( ( ! ( Check_Valve_TL_convection_A_mdot_abs != 0.0 )
) || ( t530 != 0.0 ) ) ; t418 [ 623ULL ] = ( int32_T ) (
Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 624ULL ] = 1 ; t418 [
625ULL ] = ( int32_T ) ( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418
[ 626ULL ] = 1 ; t418 [ 627ULL ] = 1 ; t418 [ 628ULL ] = 1 ; t418 [ 629ULL ]
= ( int32_T ) ( intrm_sf_mf_234 * t532 * 2.0 != 0.0 ) ; t418 [ 630ULL ] = (
int32_T ) ( t529 != 0.0 ) ; t418 [ 631ULL ] = ( int32_T ) ( t530 != 0.0 ) ;
t418 [ 632ULL ] = 1 ; t418 [ 633ULL ] = 1 ; t418 [ 634ULL ] = ( int32_T ) ( (
X [ 69ULL ] * X [ 69ULL ] + 6.4274470286298247E-10 == X [ 69ULL ] * X [ 69ULL
] + 6.4274470286298247E-10 ) && ( fabs ( X [ 69ULL ] * X [ 69ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 635ULL ] = ( int32_T
) ( ( ! ( X [ 69ULL ] * X [ 69ULL ] + 6.4274470286298247E-10 == X [ 69ULL ] *
X [ 69ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 69ULL ] * X [
69ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 69ULL ] *
X [ 69ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 636ULL ] = ( int32_T
) ( t534 != 0.0 ) ; t418 [ 637ULL ] = ( int32_T ) ( ( ! ( t534 != 0.0 ) ) ||
( t535 != 0.0 ) ) ; t418 [ 638ULL ] = ( int32_T ) ( t534 != 0.0 ) ; t418 [
639ULL ] = 1 ; t418 [ 640ULL ] = ( int32_T ) ( t534 != 0.0 ) ; t418 [ 641ULL
] = 1 ; t418 [ 642ULL ] = 1 ; t418 [ 643ULL ] = 1 ; t418 [ 644ULL ] = (
int32_T ) ( ( X [ 69ULL ] * X [ 69ULL ] + 6.4274470286298247E-10 == X [ 69ULL
] * X [ 69ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 69ULL ] * X [
69ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 645ULL ] =
( int32_T ) ( ( ! ( X [ 69ULL ] * X [ 69ULL ] + 6.4274470286298247E-10 == X [
69ULL ] * X [ 69ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 69ULL
] * X [ 69ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [
69ULL ] * X [ 69ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 646ULL ] =
( int32_T ) ( t534 != 0.0 ) ; t418 [ 647ULL ] = ( int32_T ) ( ( ! ( t534 !=
0.0 ) ) || ( x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho != 0.0
) ) ; t418 [ 648ULL ] = ( int32_T ) ( t534 != 0.0 ) ; t418 [ 649ULL ] = 1 ;
t418 [ 650ULL ] = ( int32_T ) ( t534 != 0.0 ) ; t418 [ 651ULL ] = 1 ; t418 [
652ULL ] = 1 ; t418 [ 653ULL ] = 1 ; t418 [ 654ULL ] = ( int32_T ) (
intrm_sf_mf_233 * x3_Way_Directional_Valve_TL1_orifice_AT_rho_avg * 2.0 !=
0.0 ) ; t418 [ 655ULL ] = ( int32_T ) ( t535 != 0.0 ) ; t418 [ 656ULL ] = (
int32_T ) ( x3_Way_Directional_Valve_TL1_orifice_AT_convection_B_rho != 0.0 )
; t418 [ 657ULL ] = 1 ; t418 [ 658ULL ] = 1 ; t418 [ 659ULL ] = ( int32_T ) (
( X [ 70ULL ] * X [ 70ULL ] + 6.4274470286298247E-10 == X [ 70ULL ] * X [
70ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 70ULL ] * X [ 70ULL ] +
6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 660ULL ] = ( int32_T
) ( ( ! ( X [ 70ULL ] * X [ 70ULL ] + 6.4274470286298247E-10 == X [ 70ULL ] *
X [ 70ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 70ULL ] * X [
70ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [ 70ULL ] *
X [ 70ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 661ULL ] = ( int32_T
) ( t537 != 0.0 ) ; t418 [ 662ULL ] = ( int32_T ) ( ( ! ( t537 != 0.0 ) ) ||
( t538 != 0.0 ) ) ; t418 [ 663ULL ] = ( int32_T ) ( t537 != 0.0 ) ; t418 [
664ULL ] = 1 ; t418 [ 665ULL ] = ( int32_T ) ( t537 != 0.0 ) ; t418 [ 666ULL
] = 1 ; t418 [ 667ULL ] = 1 ; t418 [ 668ULL ] = 1 ; t418 [ 669ULL ] = (
int32_T ) ( ( X [ 70ULL ] * X [ 70ULL ] + 6.4274470286298247E-10 == X [ 70ULL
] * X [ 70ULL ] + 6.4274470286298247E-10 ) && ( fabs ( X [ 70ULL ] * X [
70ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) ; t418 [ 670ULL ] =
( int32_T ) ( ( ! ( X [ 70ULL ] * X [ 70ULL ] + 6.4274470286298247E-10 == X [
70ULL ] * X [ 70ULL ] + 6.4274470286298247E-10 ) ) || ( ! ( fabs ( X [ 70ULL
] * X [ 70ULL ] + 6.4274470286298247E-10 ) != pmf_get_inf ( ) ) ) || ( X [
70ULL ] * X [ 70ULL ] + 6.4274470286298247E-10 >= 0.0 ) ) ; t418 [ 671ULL ] =
( int32_T ) ( t537 != 0.0 ) ; t418 [ 672ULL ] = ( int32_T ) ( ( ! ( t537 !=
0.0 ) ) || ( t539 != 0.0 ) ) ; t418 [ 673ULL ] = ( int32_T ) ( t537 != 0.0 )
; t418 [ 674ULL ] = 1 ; t418 [ 675ULL ] = ( int32_T ) ( t537 != 0.0 ) ; t418
[ 676ULL ] = 1 ; t418 [ 677ULL ] = 1 ; t418 [ 678ULL ] = 1 ; t418 [ 679ULL ]
= ( int32_T ) ( intrm_sf_mf_242 * t540 * 2.0 != 0.0 ) ; t418 [ 680ULL ] = (
int32_T ) ( t538 != 0.0 ) ; t418 [ 681ULL ] = ( int32_T ) ( t539 != 0.0 ) ;
t418 [ 682ULL ] = ( int32_T ) ( t474 != 0.0 ) ; t418 [ 683ULL ] = ( int32_T )
( Double_Acting_Actuator_TL_chamber_B_beta_I != 0.0 ) ; t418 [ 684ULL ] = (
int32_T ) ( Gas_Charged_Accumulator_TL_beta_I != 0.0 ) ; t418 [ 685ULL ] = (
int32_T ) ( t478 != 0.0 ) ; t418 [ 686ULL ] = ( int32_T ) (
Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 687ULL ] = ( int32_T )
( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 688ULL ] = 1 ; t418
[ 689ULL ] = 1 ; t418 [ 690ULL ] = 1 ; t418 [ 691ULL ] = 1 ; t418 [ 692ULL ]
= ( int32_T ) ( t573 * t573 * Check_Valve_TL_rho_avg * 0.8192 != 0.0 ) ; t418
[ 693ULL ] = 1 ; t418 [ 694ULL ] = 1 ; t418 [ 695ULL ] = ( int32_T ) ( ( 1.0
- t473 * t473 * 0.5904 == 1.0 - t473 * t473 * 0.5904 ) && ( fabs ( 1.0 - t473
* t473 * 0.5904 ) != pmf_get_inf ( ) ) ) ; t418 [ 696ULL ] = ( int32_T ) ( (
! ( 1.0 - t473 * t473 * 0.5904 == 1.0 - t473 * t473 * 0.5904 ) ) || ( ! (
fabs ( 1.0 - t473 * t473 * 0.5904 ) != pmf_get_inf ( ) ) ) || ( 1.0 - t473 *
t473 * 0.5904 >= 0.0 ) ) ; t418 [ 697ULL ] = 1 ; t418 [ 698ULL ] = 1 ; t418 [
699ULL ] = ( int32_T ) ( ( 1.0 - t473 * t473 * 0.5904 == 1.0 - t473 * t473 *
0.5904 ) && ( fabs ( 1.0 - t473 * t473 * 0.5904 ) != pmf_get_inf ( ) ) ) ;
t418 [ 700ULL ] = ( int32_T ) ( ( ! ( 1.0 - t473 * t473 * 0.5904 == 1.0 -
t473 * t473 * 0.5904 ) ) || ( ! ( fabs ( 1.0 - t473 * t473 * 0.5904 ) !=
pmf_get_inf ( ) ) ) || ( 1.0 - t473 * t473 * 0.5904 >= 0.0 ) ) ; t418 [
701ULL ] = ( int32_T ) ( ( ! ( t573 * t573 * Check_Valve_TL_rho_avg * 0.8192
!= 0.0 ) ) || ( ( ! ( 1.0 - t473 * t473 * 0.5904 == 1.0 - t473 * t473 *
0.5904 ) ) || ( ! ( fabs ( 1.0 - t473 * t473 * 0.5904 ) != pmf_get_inf ( ) )
) ) || ( ( 1.0 - t473 * t473 * 0.5904 == 1.0 - t473 * t473 * 0.5904 ) && (
fabs ( 1.0 - t473 * t473 * 0.5904 ) != pmf_get_inf ( ) ) && ( ! ( 1.0 - t473
* t473 * 0.5904 >= 0.0 ) ) ) || ( ( ! ( 1.0 - t473 * t473 * 0.5904 == 1.0 -
t473 * t473 * 0.5904 ) ) || ( ! ( fabs ( 1.0 - t473 * t473 * 0.5904 ) !=
pmf_get_inf ( ) ) ) ) || ( ( 1.0 - t473 * t473 * 0.5904 == 1.0 - t473 * t473
* 0.5904 ) && ( fabs ( 1.0 - t473 * t473 * 0.5904 ) != pmf_get_inf ( ) ) && (
! ( 1.0 - t473 * t473 * 0.5904 >= 0.0 ) ) ) || ( t473 * 0.64 + pmf_sqrt ( 1.0
- t473 * t473 * 0.5904 ) != 0.0 ) ) ; t418 [ 702ULL ] = ( int32_T ) ( t475 !=
0.0 ) ; t418 [ 703ULL ] = ( int32_T ) (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0 ) ; t418 [
704ULL ] = ( int32_T ) ( Fixed_Displacement_Motor_TL_convection_A_mdot_abs !=
0.0 ) ; t418 [ 705ULL ] = ( int32_T ) (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 706ULL ]
= ( int32_T ) ( Gas_Charged_Accumulator_TL_convection_A_mdot_abs != 0.0 ) ;
t418 [ 707ULL ] = ( int32_T ) ( t475 != 0.0 ) ; t418 [ 708ULL ] = ( int32_T )
( t479 != 0.0 ) ; t418 [ 709ULL ] = ( int32_T ) (
Interface_TL_IL2_convection_TL_mdot_abs != 0.0 ) ; t418 [ 710ULL ] = (
int32_T ) ( Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs != 0.0
) ; t418 [ 711ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
712ULL ] = ( int32_T ) (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs != 0.0 ) ; t418 [
713ULL ] = 1 ; t418 [ 714ULL ] = 1 ; t418 [ 715ULL ] = 1 ; t418 [ 716ULL ] =
1 ; t418 [ 717ULL ] = 1 ; t418 [ 718ULL ] = ( int32_T ) ( ( X [ 54ULL ] -
1.01325 ) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 +
Pressure_Relief_Valve_TL_relief_valve_p_diff_c *
Pressure_Relief_Valve_TL_relief_valve_p_diff_c >= 0.0 ) ; t418 [ 719ULL ] = (
int32_T ) ( ( ! ( ( X [ 54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) *
1.0E+10 + Pressure_Relief_Valve_TL_relief_valve_p_diff_c *
Pressure_Relief_Valve_TL_relief_valve_p_diff_c >= 0.0 ) ) || ( pmf_sqrt (
pmf_sqrt ( ( X [ 54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 +
Pressure_Relief_Valve_TL_relief_valve_p_diff_c *
Pressure_Relief_Valve_TL_relief_valve_p_diff_c ) ) != 0.0 ) ) ; t418 [ 720ULL
] = 1 ; t418 [ 721ULL ] = 1 ; t418 [ 722ULL ] = ( int32_T ) ( 1.0 - t480 *
t480 != 0.0 ) ; t418 [ 723ULL ] = 1 ; t573 = 1.0 - t480 * t480 ; t418 [
724ULL ] = ( int32_T ) ( ( ! ( 1.0 - t480 * t480 != 0.0 ) ) || (
Pressure_Relief_Valve_TL_relief_valve_rho_avg * 2.0 / ( t573 == 0.0 ? 1.0E-16
: t573 ) >= 0.0 ) ) ; t418 [ 725ULL ] = ( int32_T ) ( t484 != 0.0 ) ; t418 [
726ULL ] = ( int32_T ) ( t484 != 0.0 ) ; t418 [ 727ULL ] = 1 ; t418 [ 728ULL
] = 1 ; t418 [ 729ULL ] = 1 ; t418 [ 730ULL ] = 1 ; t418 [ 731ULL ] = 1 ;
t418 [ 732ULL ] = ( int32_T ) ( ( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] -
1.01325 ) * 1.0E+10 + Pressure_Relief_Valve_TL1_relief_valve_p_diff_c *
Pressure_Relief_Valve_TL1_relief_valve_p_diff_c >= 0.0 ) ; t418 [ 733ULL ] =
( int32_T ) ( ( ! ( ( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) *
1.0E+10 + Pressure_Relief_Valve_TL1_relief_valve_p_diff_c *
Pressure_Relief_Valve_TL1_relief_valve_p_diff_c >= 0.0 ) ) || ( pmf_sqrt (
pmf_sqrt ( ( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
Pressure_Relief_Valve_TL1_relief_valve_p_diff_c *
Pressure_Relief_Valve_TL1_relief_valve_p_diff_c ) ) != 0.0 ) ) ; t418 [
734ULL ] = 1 ; t418 [ 735ULL ] = 1 ; t418 [ 736ULL ] = ( int32_T ) ( 1.0 -
Pressure_Relief_Valve_TL1_relief_valve_area_ratio *
Pressure_Relief_Valve_TL1_relief_valve_area_ratio != 0.0 ) ; t418 [ 737ULL ]
= 1 ; t573 = 1.0 - Pressure_Relief_Valve_TL1_relief_valve_area_ratio *
Pressure_Relief_Valve_TL1_relief_valve_area_ratio ; t418 [ 738ULL ] = (
int32_T ) ( ( ! ( 1.0 - Pressure_Relief_Valve_TL1_relief_valve_area_ratio *
Pressure_Relief_Valve_TL1_relief_valve_area_ratio != 0.0 ) ) || (
Pressure_Relief_Valve_TL1_relief_valve_rho_avg * 2.0 / ( t573 == 0.0 ?
1.0E-16 : t573 ) >= 0.0 ) ) ; t418 [ 739ULL ] = ( int32_T ) (
Reservoir_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 740ULL ] = ( int32_T ) (
Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418 [ 741ULL ] = ( int32_T )
( Reservoir_TL2_convection_A_mdot_abs != 0.0 ) ; t418 [ 742ULL ] = 1 ; t418 [
743ULL ] = 1 ; t418 [ 744ULL ] = 1 ; t418 [ 745ULL ] = 1 ; t418 [ 746ULL ] =
1 ; t418 [ 747ULL ] = ( int32_T ) (
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff *
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff * 1.0E+10 + t496 * t496 >=
0.0 ) ; t418 [ 748ULL ] = ( int32_T ) ( ( ! (
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff *
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff * 1.0E+10 + t496 * t496 >=
0.0 ) ) || ( pmf_sqrt ( pmf_sqrt (
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff *
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff * 1.0E+10 + t496 * t496 )
) != 0.0 ) ) ; t418 [ 749ULL ] = 1 ; t418 [ 750ULL ] = ( int32_T ) ( t495 *
2.0 >= 0.0 ) ; t418 [ 751ULL ] = 1 ; t418 [ 752ULL ] = 1 ; t418 [ 753ULL ] =
1 ; t418 [ 754ULL ] = 1 ; t418 [ 755ULL ] = 1 ; t418 [ 756ULL ] = ( int32_T )
( Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff *
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff * 1.0E+10 + t500 * t500 >=
0.0 ) ; t418 [ 757ULL ] = ( int32_T ) ( ( ! (
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff *
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff * 1.0E+10 + t500 * t500 >=
0.0 ) ) || ( pmf_sqrt ( pmf_sqrt (
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff *
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_p_diff * 1.0E+10 + t500 * t500 )
) != 0.0 ) ) ; t418 [ 758ULL ] = 1 ; t418 [ 759ULL ] = ( int32_T ) ( t499 *
2.0 >= 0.0 ) ; t418 [ 760ULL ] = 1 ; t418 [ 761ULL ] = 1 ; t418 [ 762ULL ] =
1 ; t418 [ 763ULL ] = 1 ; t418 [ 764ULL ] = 1 ; t418 [ 765ULL ] = ( int32_T )
( ( X [ 26ULL ] - 1.01325 ) * ( X [ 26ULL ] - 1.01325 ) * 1.0E+10 + t504 *
t504 >= 0.0 ) ; t418 [ 766ULL ] = ( int32_T ) ( ( ! ( ( X [ 26ULL ] - 1.01325
) * ( X [ 26ULL ] - 1.01325 ) * 1.0E+10 + t504 * t504 >= 0.0 ) ) || (
pmf_sqrt ( pmf_sqrt ( ( X [ 26ULL ] - 1.01325 ) * ( X [ 26ULL ] - 1.01325 ) *
1.0E+10 + t504 * t504 ) ) != 0.0 ) ) ; t418 [ 767ULL ] = 1 ; t418 [ 768ULL ]
= ( int32_T ) ( t503 * 2.0 >= 0.0 ) ; t418 [ 769ULL ] = 1 ; t418 [ 770ULL ] =
1 ; t418 [ 771ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_AT_Spool_Orifice_Hydraulic_Forc2 *
993.22507500000017 != 0.0 ) ; t418 [ 772ULL ] = 1 ; t418 [ 773ULL ] = 1 ;
t418 [ 774ULL ] = 1 ; t418 [ 775ULL ] = 1 ; t418 [ 776ULL ] = 1 ; t418 [
777ULL ] = ( int32_T ) ( ( X [ 4ULL ] - 1.01325 ) * ( X [ 4ULL ] - 1.01325 )
* 1.0E+10 + t509 * t509 >= 0.0 ) ; t418 [ 778ULL ] = ( int32_T ) ( ( ! ( ( X
[ 4ULL ] - 1.01325 ) * ( X [ 4ULL ] - 1.01325 ) * 1.0E+10 + t509 * t509 >=
0.0 ) ) || ( pmf_sqrt ( pmf_sqrt ( ( X [ 4ULL ] - 1.01325 ) * ( X [ 4ULL ] -
1.01325 ) * 1.0E+10 + t509 * t509 ) ) != 0.0 ) ) ; t418 [ 779ULL ] = 1 ; t418
[ 780ULL ] = ( int32_T ) ( t508 * 2.0 >= 0.0 ) ; t418 [ 781ULL ] = 1 ; t418 [
782ULL ] = 1 ; t418 [ 783ULL ] = ( int32_T ) ( t506 * 993.22507500000017 !=
0.0 ) ; t418 [ 784ULL ] = 1 ; t418 [ 785ULL ] = 1 ; t418 [ 786ULL ] = 1 ;
t418 [ 787ULL ] = 1 ; t418 [ 788ULL ] = 1 ; t418 [ 789ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff *
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff * 1.0E+10 + t512 * t512 >=
0.0 ) ; t418 [ 790ULL ] = ( int32_T ) ( ( ! (
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff *
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff * 1.0E+10 + t512 * t512 >=
0.0 ) ) || ( pmf_sqrt ( pmf_sqrt (
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff *
Servovalve2_Main_Valve_Orifice_PA_Orifice_p_diff * 1.0E+10 + t512 * t512 ) )
!= 0.0 ) ) ; t418 [ 791ULL ] = 1 ; t418 [ 792ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_PA_Orifice_rho_avg * 2.0 >= 0.0 ) ; t418 [
793ULL ] = 1 ; t418 [ 794ULL ] = 1 ; t418 [ 795ULL ] = ( int32_T ) ( t511 *
intrm_sf_mf_64 != 0.0 ) ; t418 [ 796ULL ] = 1 ; t418 [ 797ULL ] = 1 ; t418 [
798ULL ] = 1 ; t418 [ 799ULL ] = 1 ; t418 [ 800ULL ] = 1 ; t418 [ 801ULL ] =
( int32_T ) ( Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff *
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff * 1.0E+10 + t515 * t515 >=
0.0 ) ; t418 [ 802ULL ] = ( int32_T ) ( ( ! (
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff *
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff * 1.0E+10 + t515 * t515 >=
0.0 ) ) || ( pmf_sqrt ( pmf_sqrt (
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff *
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff * 1.0E+10 + t515 * t515 ) )
!= 0.0 ) ) ; t418 [ 803ULL ] = 1 ; t418 [ 804ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg * 2.0 >= 0.0 ) ; t418 [
805ULL ] = 1 ; t418 [ 806ULL ] = 1 ; t418 [ 807ULL ] = ( int32_T ) (
Servovalve2_Main_Valve_Orifice_PB_Spool_Orifice_Hydraulic_Forc2 *
intrm_sf_mf_93 != 0.0 ) ; t418 [ 808ULL ] = 1 ; t418 [ 809ULL ] = 1 ; t418 [
810ULL ] = 1 ; t418 [ 811ULL ] = 1 ; t418 [ 812ULL ] = 1 ; t418 [ 813ULL ] =
( int32_T ) ( t517 * t517 * 1.0E+10 + t501 * t501 >= 0.0 ) ; t418 [ 814ULL ]
= ( int32_T ) ( ( ! ( t517 * t517 * 1.0E+10 + t501 * t501 >= 0.0 ) ) || (
pmf_sqrt ( pmf_sqrt ( t517 * t517 * 1.0E+10 + t501 * t501 ) ) != 0.0 ) ) ;
t418 [ 815ULL ] = 1 ; t418 [ 816ULL ] = ( int32_T ) (
Servovalve2_Nozzle_A_Nozzle_A_rho_avg * 2.0 >= 0.0 ) ; t418 [ 817ULL ] = 1 ;
t418 [ 818ULL ] = 1 ; t418 [ 819ULL ] = 1 ; t418 [ 820ULL ] = 1 ; t418 [
821ULL ] = 1 ; t418 [ 822ULL ] = ( int32_T ) ( t520 * t520 * 1.0E+10 + t519 *
t519 >= 0.0 ) ; t418 [ 823ULL ] = ( int32_T ) ( ( ! ( t520 * t520 * 1.0E+10 +
t519 * t519 >= 0.0 ) ) || ( pmf_sqrt ( pmf_sqrt ( t520 * t520 * 1.0E+10 +
t519 * t519 ) ) != 0.0 ) ) ; t418 [ 824ULL ] = 1 ; t418 [ 825ULL ] = (
int32_T ) ( Servovalve2_Nozzle_B_Nozzle_B_rho_avg * 2.0 >= 0.0 ) ; t418 [
826ULL ] = ( int32_T ) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ; t418
[ 827ULL ] = ( int32_T ) ( Reservoir_TL1_convection_A_mdot_abs != 0.0 ) ;
t418 [ 828ULL ] = 1 ; t418 [ 829ULL ] = 1 ; t418 [ 830ULL ] = 1 ; t418 [
831ULL ] = 1 ; t418 [ 832ULL ] = 1 ; t418 [ 833ULL ] = ( int32_T ) ( ( X [
54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 + U_idx_3 * U_idx_3
>= 0.0 ) ; t418 [ 834ULL ] = ( int32_T ) ( ( ! ( ( X [ 54ULL ] - 1.01325 ) *
( X [ 54ULL ] - 1.01325 ) * 1.0E+10 + U_idx_3 * U_idx_3 >= 0.0 ) ) || (
pmf_sqrt ( pmf_sqrt ( ( X [ 54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) *
1.0E+10 + U_idx_3 * U_idx_3 ) ) != 0.0 ) ) ; t418 [ 835ULL ] = 1 ; t418 [
836ULL ] = 1 ; t418 [ 837ULL ] = ( int32_T ) ( 1.0 -
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio *
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio != 0.0 ) ; t418 [ 838ULL ]
= 1 ; t481 = 1.0 - x3_Way_Directional_Valve_TL_orifice_AT_area_ratio *
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio ; t418 [ 839ULL ] = (
int32_T ) ( ( ! ( 1.0 - x3_Way_Directional_Valve_TL_orifice_AT_area_ratio *
x3_Way_Directional_Valve_TL_orifice_AT_area_ratio != 0.0 ) ) || (
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg * 2.0 / ( t481 == 0.0 ?
1.0E-16 : t481 ) >= 0.0 ) ) ; t418 [ 840ULL ] = ( int32_T ) (
Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 841ULL ] = ( int32_T )
( Check_Valve_TL_convection_A_mdot_abs != 0.0 ) ; t418 [ 842ULL ] = 1 ; t418
[ 843ULL ] = 1 ; t418 [ 844ULL ] = 1 ; t418 [ 845ULL ] = 1 ; t418 [ 846ULL ]
= 1 ; t418 [ 847ULL ] = ( int32_T ) (
x3_Way_Directional_Valve_TL_orifice_PA_p_diff *
x3_Way_Directional_Valve_TL_orifice_PA_p_diff * 1.0E+10 + t531 * t531 >= 0.0
) ; t418 [ 848ULL ] = ( int32_T ) ( ( ! (
x3_Way_Directional_Valve_TL_orifice_PA_p_diff *
x3_Way_Directional_Valve_TL_orifice_PA_p_diff * 1.0E+10 + t531 * t531 >= 0.0
) ) || ( pmf_sqrt ( pmf_sqrt ( x3_Way_Directional_Valve_TL_orifice_PA_p_diff
* x3_Way_Directional_Valve_TL_orifice_PA_p_diff * 1.0E+10 + t531 * t531 ) )
!= 0.0 ) ) ; t418 [ 849ULL ] = 1 ; t418 [ 850ULL ] = 1 ; t418 [ 851ULL ] = (
int32_T ) ( 1.0 - t528 * t528 != 0.0 ) ; t418 [ 852ULL ] = 1 ; t481 = 1.0 -
t528 * t528 ; t418 [ 853ULL ] = ( int32_T ) ( ( ! ( 1.0 - t528 * t528 != 0.0
) ) || ( t532 * 2.0 / ( t481 == 0.0 ? 1.0E-16 : t481 ) >= 0.0 ) ) ; t418 [
854ULL ] = ( int32_T ) ( t534 != 0.0 ) ; t418 [ 855ULL ] = ( int32_T ) ( t534
!= 0.0 ) ; t418 [ 856ULL ] = 1 ; t418 [ 857ULL ] = 1 ; t418 [ 858ULL ] = 1 ;
t418 [ 859ULL ] = 1 ; t418 [ 860ULL ] = 1 ; t418 [ 861ULL ] = ( int32_T ) ( (
X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c >= 0.0 ) ; t418 [ 862ULL ] =
( int32_T ) ( ( ! ( ( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) *
1.0E+10 + x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c >= 0.0 ) ) || ( pmf_sqrt (
pmf_sqrt ( ( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) ) != 0.0 ) ) ; t418 [
863ULL ] = 1 ; t418 [ 864ULL ] = 1 ; t418 [ 865ULL ] = ( int32_T ) ( 1.0 -
t533 * t533 != 0.0 ) ; t418 [ 866ULL ] = 1 ; t481 = 1.0 - t533 * t533 ; t418
[ 867ULL ] = ( int32_T ) ( ( ! ( 1.0 - t533 * t533 != 0.0 ) ) || (
x3_Way_Directional_Valve_TL1_orifice_AT_rho_avg * 2.0 / ( t481 == 0.0 ?
1.0E-16 : t481 ) >= 0.0 ) ) ; t418 [ 868ULL ] = ( int32_T ) ( t537 != 0.0 ) ;
t418 [ 869ULL ] = ( int32_T ) ( t537 != 0.0 ) ; t418 [ 870ULL ] = 1 ; t418 [
871ULL ] = 1 ; t418 [ 872ULL ] = 1 ; t418 [ 873ULL ] = 1 ; t418 [ 874ULL ] =
1 ; t418 [ 875ULL ] = ( int32_T ) (
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff *
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c >= 0.0 ) ; t418 [ 876ULL ] =
( int32_T ) ( ( ! ( x3_Way_Directional_Valve_TL1_orifice_PA_p_diff *
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c >= 0.0 ) ) || ( pmf_sqrt (
pmf_sqrt ( x3_Way_Directional_Valve_TL1_orifice_PA_p_diff *
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_PA_p_diff_c ) ) != 0.0 ) ) ; t418 [
877ULL ] = 1 ; t418 [ 878ULL ] = 1 ; t418 [ 879ULL ] = ( int32_T ) ( 1.0 -
t536 * t536 != 0.0 ) ; t418 [ 880ULL ] = 1 ; t481 = 1.0 - t536 * t536 ; t418
[ 881ULL ] = ( int32_T ) ( ( ! ( 1.0 - t536 * t536 != 0.0 ) ) || ( t540 * 2.0
/ ( t481 == 0.0 ? 1.0E-16 : t481 ) >= 0.0 ) ) ; for ( b = 0 ; b < 882 ; b ++
) { out . mX [ b ] = t418 [ b ] ; } ( void ) LC ; ( void ) t580 ; return 0 ;
}
