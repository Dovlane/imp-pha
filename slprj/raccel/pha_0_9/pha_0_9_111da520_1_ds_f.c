#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_f.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1009 , NeDsMethodOutput * t1010 ) { ETTS0 ab_efOut ;
ETTS0 ad_efOut ; ETTS0 ae_efOut ; ETTS0 b_efOut ; ETTS0 bc_efOut ; ETTS0
bf_efOut ; ETTS0 cb_efOut ; ETTS0 cd_efOut ; ETTS0 d_efOut ; ETTS0 dc_efOut ;
ETTS0 df_efOut ; ETTS0 eb_efOut ; ETTS0 ed_efOut ; ETTS0 ee_efOut ; ETTS0
efOut ; ETTS0 f_efOut ; ETTS0 ff_efOut ; ETTS0 g_efOut ; ETTS0 gc_efOut ;
ETTS0 gd_efOut ; ETTS0 ge_efOut ; ETTS0 hb_efOut ; ETTS0 hf_efOut ; ETTS0
i_efOut ; ETTS0 ib_efOut ; ETTS0 ic_efOut ; ETTS0 id_efOut ; ETTS0 ie_efOut ;
ETTS0 jc_efOut ; ETTS0 jf_efOut ; ETTS0 k_efOut ; ETTS0 kb_efOut ; ETTS0
kd_efOut ; ETTS0 ke_efOut ; ETTS0 l_efOut ; ETTS0 mb_efOut ; ETTS0 mc_efOut ;
ETTS0 md_efOut ; ETTS0 me_efOut ; ETTS0 n_efOut ; ETTS0 nb_efOut ; ETTS0
nd_efOut ; ETTS0 o_efOut ; ETTS0 oc_efOut ; ETTS0 oe_efOut ; ETTS0 pb_efOut ;
ETTS0 pd_efOut ; ETTS0 q_efOut ; ETTS0 qc_efOut ; ETTS0 qe_efOut ; ETTS0
r_efOut ; ETTS0 rb_efOut ; ETTS0 rd_efOut ; ETTS0 sb_efOut ; ETTS0 sc_efOut ;
ETTS0 se_efOut ; ETTS0 t11 ; ETTS0 t13 ; ETTS0 t17 ; ETTS0 t18 ; ETTS0 t20 ;
ETTS0 t22 ; ETTS0 t23 ; ETTS0 t24 ; ETTS0 t25 ; ETTS0 t26 ; ETTS0 t28 ; ETTS0
t29 ; ETTS0 t31 ; ETTS0 t32 ; ETTS0 t33 ; ETTS0 t35 ; ETTS0 t36 ; ETTS0 t38 ;
ETTS0 t39 ; ETTS0 t43 ; ETTS0 t46 ; ETTS0 t49 ; ETTS0 t51 ; ETTS0 t52 ; ETTS0
t53 ; ETTS0 t54 ; ETTS0 t55 ; ETTS0 t56 ; ETTS0 t57 ; ETTS0 t58 ; ETTS0 t60 ;
ETTS0 t62 ; ETTS0 t63 ; ETTS0 t65 ; ETTS0 t66 ; ETTS0 t67 ; ETTS0 t69 ; ETTS0
t70 ; ETTS0 t71 ; ETTS0 t_efOut ; ETTS0 tc_efOut ; ETTS0 td_efOut ; ETTS0
ub_efOut ; ETTS0 ue_efOut ; ETTS0 v_efOut ; ETTS0 vb_efOut ; ETTS0 vc_efOut ;
ETTS0 vd_efOut ; ETTS0 we_efOut ; ETTS0 xb_efOut ; ETTS0 xc_efOut ; ETTS0
xd_efOut ; ETTS0 y_efOut ; ETTS0 yb_efOut ; ETTS0 ye_efOut ; PmRealVector out
; real_T X [ 126 ] ; real_T t563 [ 126 ] ; real_T ac_efOut [ 1 ] ; real_T
af_efOut [ 1 ] ; real_T ag_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ; real_T
bd_efOut [ 1 ] ; real_T be_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ; real_T
c_efOut [ 1 ] ; real_T cc_efOut [ 1 ] ; real_T ce_efOut [ 1 ] ; real_T
cf_efOut [ 1 ] ; real_T cg_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T
dd_efOut [ 1 ] ; real_T de_efOut [ 1 ] ; real_T dg_efOut [ 1 ] ; real_T
e_efOut [ 1 ] ; real_T ec_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ; real_T
eg_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ; real_T
fd_efOut [ 1 ] ; real_T fe_efOut [ 1 ] ; real_T fg_efOut [ 1 ] ; real_T
gb_efOut [ 1 ] ; real_T gf_efOut [ 1 ] ; real_T gg_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T
he_efOut [ 1 ] ; real_T hg_efOut [ 1 ] ; real_T if_efOut [ 1 ] ; real_T
ig_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T
jd_efOut [ 1 ] ; real_T je_efOut [ 1 ] ; real_T jg_efOut [ 1 ] ; real_T
kc_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T kg_efOut [ 1 ] ; real_T
lb_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T ld_efOut [ 1 ] ; real_T
le_efOut [ 1 ] ; real_T lf_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T
m_efOut [ 1 ] ; real_T mf_efOut [ 1 ] ; real_T mg_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T nf_efOut [ 1 ] ; real_T
ob_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T of_efOut [ 1 ] ; real_T
p_efOut [ 1 ] ; real_T pc_efOut [ 1 ] ; real_T pe_efOut [ 1 ] ; real_T
pf_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T
qf_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T re_efOut [ 1 ] ; real_T
rf_efOut [ 1 ] ; real_T s_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T
sf_efOut [ 1 ] ; real_T t623 [ 1 ] ; real_T t628 [ 1 ] ; real_T tb_efOut [ 1
] ; real_T te_efOut [ 1 ] ; real_T tf_efOut [ 1 ] ; real_T u_efOut [ 1 ] ;
real_T uc_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T uf_efOut [ 1 ] ;
real_T ve_efOut [ 1 ] ; real_T vf_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T
wb_efOut [ 1 ] ; real_T wc_efOut [ 1 ] ; real_T wd_efOut [ 1 ] ; real_T
wf_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T
xf_efOut [ 1 ] ; real_T yc_efOut [ 1 ] ; real_T yd_efOut [ 1 ] ; real_T
yf_efOut [ 1 ] ; real_T Check_Valve_TL_convection_A_mdot_abs ; real_T
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs ; real_T
Double_Acting_Actuator_TL_chamber_A_h_I ; real_T
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ; real_T
Double_Acting_Actuator_TL_chamber_B_convection_A_pv ; real_T
Double_Acting_Actuator_TL_chamber_B_convection_A_step_neg ; real_T
Double_Acting_Actuator_TL_chamber_B_h_I ; real_T
Fixed_Displacement_Motor_TL_convection_A_mdot_abs ; real_T
Fixed_Displacement_Motor_TL_convection_A_pv ; real_T
Fixed_Displacement_Motor_TL_convection_B_pv ; real_T
Gas_Charged_Accumulator_TL1_convection_A_pv ; real_T
Gas_Charged_Accumulator_TL_Phi_A ; real_T
Gas_Charged_Accumulator_TL_convection_A_pv ; real_T
Gas_Charged_Accumulator_TL_convection_A_step_neg ; real_T
Gas_Charged_Accumulator_TL_gas_pressure ; real_T
Gas_Charged_Accumulator_TL_u_I ; real_T
Interface_TL_IL1_convection_TL_mdot_abs ; real_T
Interface_TL_IL1_convection_TL_pv ; real_T
Interface_TL_IL1_convection_TL_step_pos ; real_T
Interface_TL_IL2_convection_TL_mdot_abs ; real_T
Interface_TL_IL2_convection_TL_pv ; real_T
Interface_TL_IL2_convection_TL_step_neg ; real_T
Pressure_Relief_Valve_TL_relief_valve_area_ratio ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ; real_T
Pressure_Relief_Valve_TL_relief_valve_convection_A_pv ; real_T
Pressure_Relief_Valve_TL_relief_valve_rho_avg ; real_T
Reservoir_TL2_convection_A_pv ; real_T Reservoir_TL2_convection_A_step_pos ;
real_T Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff ; real_T
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_rho_avg ; real_T
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_rho_avg ; real_T
Servovalve2_Main_Valve_Orifice_AT_Orifice_rho_avg ; real_T
Servovalve2_Main_Valve_Orifice_BT_Orifice_rho_avg ; real_T
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff ; real_T
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg ; real_T
Servovalve2_Nozzle_A_Nozzle_A_p_diff ; real_T
Servovalve2_Nozzle_B_Nozzle_B_p_diff ; real_T
Servovalve2_Nozzle_B_Nozzle_B_rho_avg ; real_T U_idx_2 ; real_T U_idx_3 ;
real_T intrm_sf_mf_228 ; real_T intrm_sf_mf_234 ; real_T intrm_sf_mf_247 ;
real_T intrm_sf_mf_251 ; real_T intrm_sf_mf_252 ; real_T intrm_sf_mf_39 ;
real_T intrm_sf_mf_63 ; real_T intrm_sf_mf_92 ; real_T piece89 ; real_T
t630_idx_0 ; real_T t635_idx_0 ; real_T t636_idx_0 ; real_T t637_idx_0 ;
real_T t638_idx_0 ; real_T t639_idx_0 ; real_T t640_idx_0 ; real_T t641_idx_0
; real_T t642_idx_0 ; real_T t643_idx_0 ; real_T t644_idx_0 ; real_T
t645_idx_0 ; real_T t646_idx_0 ; real_T t647_idx_0 ; real_T t648_idx_0 ;
real_T t649_idx_0 ; real_T t650_idx_0 ; real_T t651_idx_0 ; real_T t652_idx_0
; real_T t653_idx_0 ; real_T t654_idx_0 ; real_T t656 ; real_T t657 ; real_T
t659 ; real_T t661 ; real_T t662 ; real_T t663 ; real_T t665 ; real_T t667 ;
real_T t668 ; real_T t669 ; real_T t670 ; real_T t671 ; real_T t675 ; real_T
t676 ; real_T t677 ; real_T t678 ; real_T t680 ; real_T t682 ; real_T t683 ;
real_T t684 ; real_T t685 ; real_T t687 ; real_T t689 ; real_T t690 ; real_T
t691 ; real_T t693 ; real_T t695 ; real_T t696 ; real_T t697 ; real_T t698 ;
real_T t699 ; real_T t701 ; real_T t702 ; real_T t704 ; real_T t707 ; real_T
t709 ; real_T t710 ; real_T t713 ; real_T t714 ; real_T t715 ; real_T t716 ;
real_T t717 ; real_T t718 ; real_T t722 ; real_T t724 ; real_T t725 ; real_T
t726 ; real_T t727 ; real_T t728 ; real_T t729 ; real_T t733 ; real_T t734 ;
real_T t735 ; real_T t736 ; real_T t737 ; real_T t739 ; real_T t740 ; real_T
t741 ; real_T t743 ; real_T t745 ; real_T t746 ; real_T t747 ; real_T t752 ;
real_T t753 ; real_T t754 ; real_T t755 ; real_T t757 ; real_T t758 ; real_T
t759 ; real_T t760 ; real_T t761 ; real_T t764 ; real_T t766 ; real_T t767 ;
real_T t768 ; real_T t769 ; real_T t771 ; real_T t772 ; real_T t773 ; real_T
t777 ; real_T t778 ; real_T t780 ; real_T t781 ; real_T t782 ; real_T t783 ;
real_T t785 ; real_T t787 ; real_T t788 ; real_T t789 ; real_T t792 ; real_T
t794 ; real_T t795 ; real_T t796 ; real_T t798 ; real_T t801 ; real_T t802 ;
real_T t803 ; real_T t804 ; real_T t806 ; real_T t808 ; real_T t809 ; real_T
t810 ; real_T t812 ; real_T t813 ; real_T t814 ; real_T t816 ; real_T t818 ;
real_T t819 ; real_T t820 ; real_T t822 ; real_T t824 ; real_T t825 ; real_T
t826 ; real_T t827 ; real_T t828 ; real_T t829 ; real_T t830 ; real_T t832 ;
real_T t834 ; real_T t835 ; real_T t836 ; real_T t838 ; real_T t840 ; real_T
t841 ; real_T t842 ; real_T t844 ; real_T t878 ; real_T t879 ; real_T t881 ;
real_T t882 ; real_T t908 ; real_T t910 ; real_T t937 ; real_T
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ; real_T
x3_Way_Directional_Valve_TL_orifice_AT_convection_A_pv ; real_T
x3_Way_Directional_Valve_TL_orifice_AT_convection_B_pv ; real_T
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg ; real_T
x3_Way_Directional_Valve_TL_orifice_PA_rho_avg ; real_T zc_int10 ; real_T
zc_int20 ; real_T zc_int31 ; real_T zc_int4 ; real_T zc_int40 ; real_T
zc_int41 ; real_T zc_int42 ; real_T zc_int43 ; real_T zc_int44 ; size_t t75 [
1 ] ; size_t t76 [ 1 ] ; size_t t78 [ 1 ] ; int32_T M_idx_0 ; int32_T M_idx_1
; int32_T M_idx_10 ; int32_T M_idx_11 ; int32_T M_idx_12 ; int32_T M_idx_17 ;
int32_T M_idx_2 ; int32_T M_idx_28 ; int32_T M_idx_3 ; int32_T M_idx_39 ;
int32_T M_idx_4 ; int32_T M_idx_5 ; int32_T M_idx_50 ; int32_T M_idx_6 ;
int32_T M_idx_61 ; int32_T M_idx_7 ; int32_T M_idx_8 ; int32_T M_idx_9 ;
int32_T b ; M_idx_0 = t1009 -> mM . mX [ 0 ] ; M_idx_1 = t1009 -> mM . mX [ 1
] ; M_idx_2 = t1009 -> mM . mX [ 2 ] ; M_idx_3 = t1009 -> mM . mX [ 3 ] ;
M_idx_4 = t1009 -> mM . mX [ 4 ] ; M_idx_5 = t1009 -> mM . mX [ 5 ] ; M_idx_6
= t1009 -> mM . mX [ 6 ] ; M_idx_7 = t1009 -> mM . mX [ 7 ] ; M_idx_8 = t1009
-> mM . mX [ 8 ] ; M_idx_9 = t1009 -> mM . mX [ 9 ] ; M_idx_10 = t1009 -> mM
. mX [ 10 ] ; M_idx_11 = t1009 -> mM . mX [ 11 ] ; M_idx_12 = t1009 -> mM .
mX [ 12 ] ; M_idx_17 = t1009 -> mM . mX [ 17 ] ; M_idx_28 = t1009 -> mM . mX
[ 28 ] ; M_idx_39 = t1009 -> mM . mX [ 39 ] ; M_idx_50 = t1009 -> mM . mX [
50 ] ; M_idx_61 = t1009 -> mM . mX [ 61 ] ; U_idx_2 = t1009 -> mU . mX [ 2 ]
; U_idx_3 = t1009 -> mU . mX [ 3 ] ; for ( b = 0 ; b < 126 ; b ++ ) { X [ b ]
= t1009 -> mX . mX [ b ] ; } out = t1010 -> mF ; t908 = ( ( X [ 28ULL ] - X [
30ULL ] ) - 0.1 ) / 0.1 ; if ( t908 <= 0.0 ) { t910 = 0.0 ; } else if ( t908
<= 0.005 ) { t910 = t908 * t908 * 100.50251256281406 ; } else if ( t908 <=
0.995 ) { t910 = t908 * 1.0050251256281406 - 0.0025125628140703518 ; } else
if ( t908 <= 1.0 ) { t910 = ( 1.0 - t908 ) * ( 1.0 - t908 ) * -
100.50251256281406 + 1.0 ; } else { t910 = 1.0 ; } t908 = t910 *
9.9999900000000011E-5 + 1.0E-10 ; t910 = t908 / 0.01 ;
Check_Valve_TL_convection_A_mdot_abs = pmf_sqrt ( X [ 33ULL ] * X [ 33ULL ] +
6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 32ULL ] ; t75 [ 0 ] = 11ULL ;
t76 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ]
, & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t70 = efOut ; t628 [ 0ULL ] = X [ 28ULL ] ; t78 [ 0 ] =
12ULL ; tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , &
b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [ 0ULL ] , & t78 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t63 = b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [
0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0
] = c_efOut [ 0 ] ; t937 = t623 [ 0ULL ] ; t878 = X [ 33ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) * X [ 28ULL ] / ( t937 == 0.0 ?
1.0E-16 : t937 ) ; t657 = ( 1.0 - X [ 33ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) ) / 2.0 ; t659 = ( X [ 33ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [
27ULL ] ; tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , &
d_efOut . mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t62 = d_efOut ; tlu2_2d_linear_linear_value ( & e_efOut [
0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t63 .
mField0 [ 0ULL ] , & t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t630_idx_0 = e_efOut [ 0 ] ; t661 = t630_idx_0 ; t628 [ 0ULL ] = X [ 35ULL ]
; tlu2_linear_linear_prelookup ( & f_efOut . mField0 [ 0ULL ] , & f_efOut .
mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t54
= f_efOut ; t628 [ 0ULL ] = X [ 30ULL ] ; tlu2_linear_linear_prelookup ( &
g_efOut . mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [
0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t57 = g_efOut ;
tlu2_2d_linear_linear_value ( & h_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] ,
& t54 . mField2 [ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75 [ 0ULL ] , & t78 [
0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = h_efOut [ 0 ] ; intrm_sf_mf_247 =
t630_idx_0 ; t881 = - X [ 33ULL ] / ( Check_Valve_TL_convection_A_mdot_abs ==
0.0 ? 1.0E-16 : Check_Valve_TL_convection_A_mdot_abs ) * X [ 30ULL ] / (
t630_idx_0 == 0.0 ? 1.0E-16 : t630_idx_0 ) ; t663 = ( 1.0 - - X [ 33ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) ) / 2.0 ; t665 = ( - X [ 33ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [
29ULL ] ; tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , &
i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t35 = i_efOut ; tlu2_2d_linear_linear_value ( & j_efOut [
0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t57 .
mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t630_idx_0 = j_efOut [ 0 ] ; t667 = t630_idx_0 ; t628 [ 0ULL ] = X [ 32ULL ]
; tlu2_linear_nearest_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= k_efOut ; t628 [ 0ULL ] = X [ 28ULL ] ; tlu2_linear_nearest_prelookup ( &
l_efOut . mField0 [ 0ULL ] , & l_efOut . mField1 [ 0ULL ] , & l_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [
0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t60 = l_efOut ;
tlu2_2d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ]
, & t62 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , & t60 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = m_efOut [ 0 ] ; t882 =
t630_idx_0 ; t628 [ 0ULL ] = X [ 35ULL ] ; tlu2_linear_nearest_prelookup ( &
n_efOut . mField0 [ 0ULL ] , & n_efOut . mField1 [ 0ULL ] , & n_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t67 = n_efOut ; t628 [ 0ULL ] =
X [ 30ULL ] ; tlu2_linear_nearest_prelookup ( & o_efOut . mField0 [ 0ULL ] ,
& o_efOut . mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [ 0ULL ] , & t78 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t52 = o_efOut ; tlu2_2d_linear_nearest_value ( & p_efOut [
0ULL ] , & t67 . mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t52 .
mField0 [ 0ULL ] , & t52 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t630_idx_0 = p_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs = pmf_sqrt ( t908 *
0.78539816339744828 ) * ( ( t882 + t630_idx_0 ) / 2.0 ) * 150.0 ; t882 =
pmf_sqrt ( X [ 33ULL ] * X [ 33ULL ] +
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs *
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs ) * X [ 33ULL ] ;
t937 = ( t937 + intrm_sf_mf_247 ) / 2.0 ; intrm_sf_mf_247 = X [ 38ULL ] *
0.001 ; Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs = pmf_sqrt
( X [ 43ULL ] * X [ 43ULL ] + 6.4242428173257682E-10 ) ; t628 [ 0ULL ] = X [
42ULL ] ; tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , &
q_efOut . mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t58 = q_efOut ; t628 [ 0ULL ] = X [ 1ULL ] ;
tlu2_linear_linear_prelookup ( & r_efOut . mField0 [ 0ULL ] , & r_efOut .
mField1 [ 0ULL ] , & r_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t628 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t66
= r_efOut ; tlu2_2d_linear_linear_value ( & s_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , & t66 . mField0 [ 0ULL ] , &
t66 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = s_efOut [ 0 ] ;
t669 = X [ 43ULL ] / (
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs ) * X [ 1ULL ] / (
t630_idx_0 == 0.0 ? 1.0E-16 : t630_idx_0 ) ; t668 = ( 1.0 - X [ 43ULL ] / (
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs ) ) / 2.0 ; t670 =
( X [ 43ULL ] / ( Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs
== 0.0 ? 1.0E-16 : Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs
) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 36ULL ] ; tlu2_linear_linear_prelookup
( & t_efOut . mField0 [ 0ULL ] , & t_efOut . mField1 [ 0ULL ] , & t_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62 = t_efOut ;
tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ] ,
& t62 . mField2 [ 0ULL ] , & t66 . mField0 [ 0ULL ] , & t66 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , & t78 [
0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = u_efOut [ 0 ] ; t671 = t630_idx_0 ;
t628 [ 0ULL ] = X [ 0ULL ] ; tlu2_linear_linear_prelookup ( & v_efOut .
mField0 [ 0ULL ] , & v_efOut . mField1 [ 0ULL ] , & v_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [
0ULL ] , & t76 [ 0ULL ] ) ; t62 = v_efOut ; tlu2_2d_linear_linear_value ( &
w_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , &
t66 . mField0 [ 0ULL ] , & t66 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t630_idx_0 = w_efOut [ 0 ] ; t879 = t630_idx_0 ; tlu2_2d_linear_linear_value
( & x_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] ,
& t66 . mField0 [ 0ULL ] , & t66 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t630_idx_0 = x_efOut [ 0 ] ; t675 = t630_idx_0 ;
Double_Acting_Actuator_TL_chamber_A_h_I = X [ 1ULL ] / ( t879 == 0.0 ?
1.0E-16 : t879 ) * 100.0 + t630_idx_0 ; t676 = intrm_sf_mf_247 * 0.01 ;
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs = pmf_sqrt ( X [
48ULL ] * X [ 48ULL ] + 6.4242428173257682E-10 ) ; t628 [ 0ULL ] = X [ 47ULL
] ; tlu2_linear_linear_prelookup ( & y_efOut . mField0 [ 0ULL ] , & y_efOut .
mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t71
= y_efOut ; t628 [ 0ULL ] = X [ 4ULL ] ; tlu2_linear_linear_prelookup ( &
ab_efOut . mField0 [ 0ULL ] , & ab_efOut . mField1 [ 0ULL ] , & ab_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [
0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t43 = ab_efOut ;
tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t71 . mField0 [ 0ULL ]
, & t71 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , & t43 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = bb_efOut [ 0 ] ;
Double_Acting_Actuator_TL_chamber_B_convection_A_pv = X [ 48ULL ] / (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ) * X [ 4ULL ] / (
t630_idx_0 == 0.0 ? 1.0E-16 : t630_idx_0 ) ;
Double_Acting_Actuator_TL_chamber_B_convection_A_step_neg = ( 1.0 - X [ 48ULL
] / ( Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs == 0.0 ?
1.0E-16 : Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ) ) / 2.0
; t677 = ( X [ 48ULL ] / (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ) + 1.0 ) / 2.0 ;
t628 [ 0ULL ] = X [ 37ULL ] ; tlu2_linear_linear_prelookup ( & cb_efOut .
mField0 [ 0ULL ] , & cb_efOut . mField1 [ 0ULL ] , & cb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t35 = cb_efOut ;
tlu2_2d_linear_linear_value ( & db_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , & t43 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = db_efOut [ 0 ] ; t678 =
t630_idx_0 ; t628 [ 0ULL ] = X [ 3ULL ] ; tlu2_linear_linear_prelookup ( &
eb_efOut . mField0 [ 0ULL ] , & eb_efOut . mField1 [ 0ULL ] , & eb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62 = eb_efOut ;
tlu2_2d_linear_linear_value ( & fb_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ]
, & t62 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , & t43 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = fb_efOut [ 0 ] ; t680 =
t630_idx_0 ; tlu2_2d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , &
t43 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = gb_efOut [ 0 ] ;
t682 = t630_idx_0 ; Double_Acting_Actuator_TL_chamber_B_h_I = X [ 4ULL ] / (
t680 == 0.0 ? 1.0E-16 : t680 ) * 100.0 + t630_idx_0 ; t683 = intrm_sf_mf_247
* - 0.01 ; Fixed_Displacement_Motor_TL_convection_A_mdot_abs = pmf_sqrt ( X [
59ULL ] * X [ 59ULL ] + 6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 58ULL
] ; tlu2_linear_linear_prelookup ( & hb_efOut . mField0 [ 0ULL ] , & hb_efOut
. mField1 [ 0ULL ] , & hb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t38 = hb_efOut ; t628 [ 0 ] = 1.01325 ; tlu2_linear_linear_prelookup ( &
ib_efOut . mField0 [ 0ULL ] , & ib_efOut . mField1 [ 0ULL ] , & ib_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [
0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t55 = ib_efOut ;
tlu2_2d_linear_linear_value ( & jb_efOut [ 0ULL ] , & t38 . mField0 [ 0ULL ]
, & t38 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = jb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_Phi_A = t630_idx_0 ;
Fixed_Displacement_Motor_TL_convection_A_pv = X [ 59ULL ] / (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) * 1.01325 / ( t630_idx_0
== 0.0 ? 1.0E-16 : t630_idx_0 ) ; t685 = ( 1.0 - X [ 59ULL ] / (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) ) / 2.0 ; t684 = ( X [
59ULL ] / ( Fixed_Displacement_Motor_TL_convection_A_mdot_abs == 0.0 ?
1.0E-16 : Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) + 1.0 ) / 2.0 ;
t623 [ 0ULL ] = X [ 52ULL ] ; tlu2_linear_linear_prelookup ( & kb_efOut .
mField0 [ 0ULL ] , & kb_efOut . mField1 [ 0ULL ] , & kb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t623 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62 = kb_efOut ;
tlu2_2d_linear_linear_value ( & lb_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ]
, & t62 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = lb_efOut [ 0 ] ; t687 =
t630_idx_0 ; t623 [ 0ULL ] = X [ 61ULL ] ; tlu2_linear_linear_prelookup ( &
mb_efOut . mField0 [ 0ULL ] , & mb_efOut . mField1 [ 0ULL ] , & mb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t623 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t69 = mb_efOut ; t623 [ 0ULL ] =
X [ 54ULL ] ; tlu2_linear_linear_prelookup ( & nb_efOut . mField0 [ 0ULL ] ,
& nb_efOut . mField1 [ 0ULL ] , & nb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t623 [ 0ULL ] , & t78 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t36 = nb_efOut ; tlu2_2d_linear_linear_value ( & ob_efOut
[ 0ULL ] , & t69 . mField0 [ 0ULL ] , & t69 . mField2 [ 0ULL ] , & t36 .
mField0 [ 0ULL ] , & t36 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t630_idx_0 = ob_efOut [ 0 ] ; t689 = t630_idx_0 ;
Fixed_Displacement_Motor_TL_convection_B_pv = - X [ 59ULL ] / (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) * X [ 54ULL ] / (
t630_idx_0 == 0.0 ? 1.0E-16 : t630_idx_0 ) ; t691 = ( 1.0 - - X [ 59ULL ] / (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) ) / 2.0 ; t690 = ( - X [
59ULL ] / ( Fixed_Displacement_Motor_TL_convection_A_mdot_abs == 0.0 ?
1.0E-16 : Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) + 1.0 ) / 2.0 ;
t623 [ 0ULL ] = X [ 53ULL ] ; tlu2_linear_linear_prelookup ( & pb_efOut .
mField0 [ 0ULL ] , & pb_efOut . mField1 [ 0ULL ] , & pb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t623 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t35 = pb_efOut ;
tlu2_2d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , & t36 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = qb_efOut [ 0 ] ; t693 =
t630_idx_0 ; zc_int20 = tanh ( X [ 8ULL ] * 4.0 / 0.00942477796076938 ) ;
Gas_Charged_Accumulator_TL_Phi_A = ( Gas_Charged_Accumulator_TL_Phi_A + t689
) / 2.0 ; t689 = X [ 59ULL ] * ( 1.01325 - X [ 54ULL ] ) / (
Gas_Charged_Accumulator_TL_Phi_A == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_Phi_A ) ; t697 = X [ 8ULL ] *
Gas_Charged_Accumulator_TL_Phi_A * 4.77464829275686E-6 ; t623 [ 0ULL ] = X [
58ULL ] ; tlu2_linear_nearest_prelookup ( & rb_efOut . mField0 [ 0ULL ] , &
rb_efOut . mField1 [ 0ULL ] , & rb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t623 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t35 = rb_efOut ; tlu2_linear_nearest_prelookup ( &
sb_efOut . mField0 [ 0ULL ] , & sb_efOut . mField1 [ 0ULL ] , & sb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [
0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t32 = sb_efOut ;
tlu2_2d_linear_nearest_value ( & tb_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = tb_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_Phi_A = t623 [ 0ULL ] ; t628 [ 0ULL ] = X [ 61ULL
] ; tlu2_linear_nearest_prelookup ( & ub_efOut . mField0 [ 0ULL ] , &
ub_efOut . mField1 [ 0ULL ] , & ub_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t67 = ub_efOut ; t628 [ 0ULL ] = X [ 54ULL ] ;
tlu2_linear_nearest_prelookup ( & vb_efOut . mField0 [ 0ULL ] , & vb_efOut .
mField1 [ 0ULL ] , & vb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t628 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t31
= vb_efOut ; tlu2_2d_linear_nearest_value ( & wb_efOut [ 0ULL ] , & t67 .
mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , &
t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = wb_efOut [ 0 ] ;
t695 = t623 [ 0ULL ] ; Gas_Charged_Accumulator_TL_Phi_A = (
Gas_Charged_Accumulator_TL_Phi_A + t695 ) / 2.0 ; t698 = ( - X [ 68ULL ] - X
[ 69ULL ] ) + X [ 70ULL ] ; t699 = pmf_sqrt ( t698 * t698 +
6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 67ULL ] ;
tlu2_linear_linear_prelookup ( & xb_efOut . mField0 [ 0ULL ] , & xb_efOut .
mField1 [ 0ULL ] , & xb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t49
= xb_efOut ; t628 [ 0ULL ] = X [ 11ULL ] ; tlu2_linear_linear_prelookup ( &
yb_efOut . mField0 [ 0ULL ] , & yb_efOut . mField1 [ 0ULL ] , & yb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [
0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t46 = yb_efOut ;
tlu2_2d_linear_linear_value ( & ac_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ]
, & t49 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = ac_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_convection_A_step_neg = t623 [ 0ULL ] ;
Gas_Charged_Accumulator_TL_convection_A_pv = t698 / ( t699 == 0.0 ? 1.0E-16 :
t699 ) * X [ 11ULL ] / ( Gas_Charged_Accumulator_TL_convection_A_step_neg ==
0.0 ? 1.0E-16 : Gas_Charged_Accumulator_TL_convection_A_step_neg ) ;
Gas_Charged_Accumulator_TL_convection_A_step_neg = ( 1.0 - t698 / ( t699 ==
0.0 ? 1.0E-16 : t699 ) ) / 2.0 ; t701 = ( t698 / ( t699 == 0.0 ? 1.0E-16 :
t699 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 63ULL ] ;
tlu2_linear_linear_prelookup ( & bc_efOut . mField0 [ 0ULL ] , & bc_efOut .
mField1 [ 0ULL ] , & bc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t35
= bc_efOut ; tlu2_2d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t35 .
mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , &
t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = cc_efOut [ 0 ] ;
t702 = t623 [ 0ULL ] ; t628 [ 0ULL ] = X [ 10ULL ] ;
tlu2_linear_linear_prelookup ( & dc_efOut . mField0 [ 0ULL ] , & dc_efOut .
mField1 [ 0ULL ] , & dc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t26
= dc_efOut ; tlu2_2d_linear_linear_value ( & ec_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , &
t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = ec_efOut [ 0 ] ;
zc_int31 = t623 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & fc_efOut [ 0ULL ]
, & t26 . mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , & t46 . mField0 [
0ULL ] , & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] =
fc_efOut [ 0 ] ; Gas_Charged_Accumulator_TL_u_I = t623 [ 0ULL ] ;
Gas_Charged_Accumulator_TL_gas_pressure = 0.008 - X [ 72ULL ] * 0.001 ;
zc_int4 = Gas_Charged_Accumulator_TL_gas_pressure > 4.0E-9 ?
Gas_Charged_Accumulator_TL_gas_pressure : 4.0E-9 ;
Gas_Charged_Accumulator_TL_gas_pressure = pmf_pow ( 0.008 / ( zc_int4 == 0.0
? 1.0E-16 : zc_int4 ) , 1.4 ) * 1.01325 ; zc_int4 = t698 < 0.0 ? t698 : 0.0 ;
zc_int40 = t698 > 0.0 ? t698 : 0.0 ; t628 [ 0ULL ] = X [ 73ULL ] ;
tlu2_linear_linear_prelookup ( & gc_efOut . mField0 [ 0ULL ] , & gc_efOut .
mField1 [ 0ULL ] , & gc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t28
= gc_efOut ; tlu2_2d_linear_linear_value ( & hc_efOut [ 0ULL ] , & t28 .
mField0 [ 0ULL ] , & t28 . mField2 [ 0ULL ] , & t66 . mField0 [ 0ULL ] , &
t66 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = hc_efOut [ 0 ] ;
t698 = t623 [ 0ULL ] ; Gas_Charged_Accumulator_TL1_convection_A_pv = - X [
43ULL ] / ( Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs == 0.0
? 1.0E-16 : Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs ) * X [
1ULL ] / ( t698 == 0.0 ? 1.0E-16 : t698 ) ; t698 = ( 1.0 - - X [ 43ULL ] / (
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs ) ) / 2.0 ; t704 =
( - X [ 43ULL ] / ( Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs
== 0.0 ? 1.0E-16 : Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs
) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup
( & ic_efOut . mField0 [ 0ULL ] , & ic_efOut . mField1 [ 0ULL ] , & ic_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t35 = ic_efOut ; t628 [ 0ULL ] =
X [ 13ULL ] ; tlu2_linear_linear_prelookup ( & jc_efOut . mField0 [ 0ULL ] ,
& jc_efOut . mField1 [ 0ULL ] , & jc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [ 0ULL ] , & t78 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t62 = jc_efOut ; tlu2_2d_linear_linear_value ( & kc_efOut
[ 0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0
] = kc_efOut [ 0 ] ; zc_int41 = t623 [ 0ULL ] ; tlu2_2d_linear_linear_value (
& lc_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , &
t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField3 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t623 [ 0 ] = lc_efOut [ 0 ] ; t707 = t623 [ 0ULL ] ; t709 = 0.008 - X [ 75ULL
] * 0.001 ; zc_int42 = t709 > 4.0000000000000004E-11 ? t709 :
4.0000000000000004E-11 ; t709 = pmf_pow ( 0.008 / ( zc_int42 == 0.0 ? 1.0E-16
: zc_int42 ) , 1.4 ) * 1.01325 ; if ( - X [ 43ULL ] < 0.0 ) { zc_int42 = - X
[ 43ULL ] ; } else { zc_int42 = 0.0 ; } if ( - X [ 43ULL ] > 0.0 ) { zc_int43
= - X [ 43ULL ] ; } else { zc_int43 = 0.0 ; }
Interface_TL_IL1_convection_TL_mdot_abs = pmf_sqrt ( X [ 79ULL ] * X [ 79ULL
] + 6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 78ULL ] ;
tlu2_linear_linear_prelookup ( & mc_efOut . mField0 [ 0ULL ] , & mc_efOut .
mField1 [ 0ULL ] , & mc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t53
= mc_efOut ; tlu2_2d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t53 .
mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = nc_efOut [ 0 ] ;
Interface_TL_IL1_convection_TL_step_pos = t623 [ 0ULL ] ;
Interface_TL_IL1_convection_TL_pv = X [ 79ULL ] / (
Interface_TL_IL1_convection_TL_mdot_abs == 0.0 ? 1.0E-16 :
Interface_TL_IL1_convection_TL_mdot_abs ) * 1.01325 / (
Interface_TL_IL1_convection_TL_step_pos == 0.0 ? 1.0E-16 :
Interface_TL_IL1_convection_TL_step_pos ) ;
Interface_TL_IL1_convection_TL_step_pos = ( X [ 79ULL ] / (
Interface_TL_IL1_convection_TL_mdot_abs == 0.0 ? 1.0E-16 :
Interface_TL_IL1_convection_TL_mdot_abs ) + 1.0 ) / 2.0 ; t713 = - X [ 70ULL
] + X [ 33ULL ] ; Interface_TL_IL2_convection_TL_mdot_abs = pmf_sqrt ( t713 *
t713 + 6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 80ULL ] ;
tlu2_linear_linear_prelookup ( & oc_efOut . mField0 [ 0ULL ] , & oc_efOut .
mField1 [ 0ULL ] , & oc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t25
= oc_efOut ; tlu2_2d_linear_linear_value ( & pc_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , & t57 . mField0 [ 0ULL ] , &
t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = pc_efOut [ 0 ] ;
Interface_TL_IL2_convection_TL_step_neg = t623 [ 0ULL ] ;
Interface_TL_IL2_convection_TL_pv = t713 / (
Interface_TL_IL2_convection_TL_mdot_abs == 0.0 ? 1.0E-16 :
Interface_TL_IL2_convection_TL_mdot_abs ) * X [ 30ULL ] / (
Interface_TL_IL2_convection_TL_step_neg == 0.0 ? 1.0E-16 :
Interface_TL_IL2_convection_TL_step_neg ) ;
Interface_TL_IL2_convection_TL_step_neg = ( 1.0 - t713 / (
Interface_TL_IL2_convection_TL_mdot_abs == 0.0 ? 1.0E-16 :
Interface_TL_IL2_convection_TL_mdot_abs ) ) / 2.0 ; t713 = ( t713 / (
Interface_TL_IL2_convection_TL_mdot_abs == 0.0 ? 1.0E-16 :
Interface_TL_IL2_convection_TL_mdot_abs ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [
82ULL ] ; tlu2_linear_linear_prelookup ( & qc_efOut . mField0 [ 0ULL ] , &
qc_efOut . mField1 [ 0ULL ] , & qc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t23 = qc_efOut ; tlu2_2d_linear_linear_value ( & rc_efOut
[ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , & t43 .
mField0 [ 0ULL ] , & t43 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0
] = rc_efOut [ 0 ] ; t714 = t623 [ 0ULL ] ; t715 = - X [ 48ULL ] / (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ) * X [ 4ULL ] / (
t714 == 0.0 ? 1.0E-16 : t714 ) ; t714 = ( 1.0 - - X [ 48ULL ] / (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ) ) / 2.0 ; t716 =
( - X [ 48ULL ] / ( Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs
== 0.0 ? 1.0E-16 : Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs
) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 84ULL ] ; tlu2_linear_linear_prelookup
( & sc_efOut . mField0 [ 0ULL ] , & sc_efOut . mField1 [ 0ULL ] , & sc_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t51 = sc_efOut ; t628 [ 0ULL ] =
X [ 26ULL ] ; tlu2_linear_linear_prelookup ( & tc_efOut . mField0 [ 0ULL ] ,
& tc_efOut . mField1 [ 0ULL ] , & tc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [ 0ULL ] , & t78 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t33 = tc_efOut ; tlu2_2d_linear_linear_value ( & uc_efOut
[ 0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , & t33 .
mField0 [ 0ULL ] , & t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0
] = uc_efOut [ 0 ] ; t717 = t623 [ 0ULL ] ; t718 = 0.0 * X [ 26ULL ] / ( t717
== 0.0 ? 1.0E-16 : t717 ) ; t628 [ 0ULL ] = X [ 25ULL ] ;
tlu2_linear_linear_prelookup ( & vc_efOut . mField0 [ 0ULL ] , & vc_efOut .
mField1 [ 0ULL ] , & vc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= vc_efOut ; tlu2_2d_linear_linear_value ( & wc_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , &
t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = wc_efOut [ 0 ] ;
t717 = t623 [ 0ULL ] ; t722 = ( ( X [ 54ULL ] - 1.01325 ) - 3.0 ) /
0.14999999999999991 ; if ( t722 <= 0.0 ) {
Pressure_Relief_Valve_TL_relief_valve_area_ratio = 0.0 ; } else if ( t722 <=
0.005 ) { Pressure_Relief_Valve_TL_relief_valve_area_ratio = t722 * t722 *
100.50251256281406 ; } else if ( t722 <= 0.995 ) {
Pressure_Relief_Valve_TL_relief_valve_area_ratio = t722 * 1.0050251256281406
- 0.0025125628140703518 ; } else if ( t722 <= 1.0 ) {
Pressure_Relief_Valve_TL_relief_valve_area_ratio = ( 1.0 - t722 ) * ( 1.0 -
t722 ) * - 100.50251256281406 + 1.0 ; } else {
Pressure_Relief_Valve_TL_relief_valve_area_ratio = 1.0 ; } t722 =
Pressure_Relief_Valve_TL_relief_valve_area_ratio * 9.9999900000000011E-5 +
1.0E-10 ; Pressure_Relief_Valve_TL_relief_valve_area_ratio = t722 / 0.01 ;
t724 = ( - X [ 33ULL ] - X [ 87ULL ] ) + X [ 59ULL ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs = pmf_sqrt ( t724
* t724 + 6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 86ULL ] ;
tlu2_linear_linear_prelookup ( & xc_efOut . mField0 [ 0ULL ] , & xc_efOut .
mField1 [ 0ULL ] , & xc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t20
= xc_efOut ; tlu2_2d_linear_linear_value ( & yc_efOut [ 0ULL ] , & t20 .
mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , &
t36 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = yc_efOut [ 0 ] ;
Pressure_Relief_Valve_TL_relief_valve_rho_avg = t623 [ 0ULL ] ;
Pressure_Relief_Valve_TL_relief_valve_convection_A_pv = t724 / (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs == 0.0 ? 1.0E-16
: Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) * X [ 54ULL ]
/ ( Pressure_Relief_Valve_TL_relief_valve_rho_avg == 0.0 ? 1.0E-16 :
Pressure_Relief_Valve_TL_relief_valve_rho_avg ) ; t725 = ( 1.0 - t724 / (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs == 0.0 ? 1.0E-16
: Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) ) / 2.0 ;
t726 = ( t724 / ( Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs
== 0.0 ? 1.0E-16 :
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) + 1.0 ) / 2.0 ;
t628 [ 0ULL ] = X [ 89ULL ] ; tlu2_linear_linear_prelookup ( & ad_efOut .
mField0 [ 0ULL ] , & ad_efOut . mField1 [ 0ULL ] , & ad_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t39 = ad_efOut ;
tlu2_2d_linear_linear_value ( & bd_efOut [ 0ULL ] , & t39 . mField0 [ 0ULL ]
, & t39 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = bd_efOut [ 0 ] ; t727 = t623 [
0ULL ] ; t728 = - t724 ; t724 = - t724 / (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs == 0.0 ? 1.0E-16
: Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) * 1.01325 / (
t727 == 0.0 ? 1.0E-16 : t727 ) ; t729 = ( 1.0 - t728 / (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs == 0.0 ? 1.0E-16
: Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) ) / 2.0 ;
t728 = ( t728 / ( Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs
== 0.0 ? 1.0E-16 :
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) + 1.0 ) / 2.0 ;
t628 [ 0ULL ] = X [ 86ULL ] ; tlu2_linear_nearest_prelookup ( & cd_efOut .
mField0 [ 0ULL ] , & cd_efOut . mField1 [ 0ULL ] , & cd_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62 = cd_efOut ;
tlu2_2d_linear_nearest_value ( & dd_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ]
, & t62 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = dd_efOut [ 0 ] ; t695 = t623 [
0ULL ] ; t628 [ 0ULL ] = X [ 89ULL ] ; tlu2_linear_nearest_prelookup ( &
ed_efOut . mField0 [ 0ULL ] , & ed_efOut . mField1 [ 0ULL ] , & ed_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62 = ed_efOut ;
tlu2_2d_linear_nearest_value ( & fd_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ]
, & t62 . mField2 [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = fd_efOut [ 0 ] ; t733 = t623 [
0ULL ] ; Pressure_Relief_Valve_TL_relief_valve_rho_avg = (
Pressure_Relief_Valve_TL_relief_valve_rho_avg + t727 ) / 2.0 ; t736 = t722 *
Pressure_Relief_Valve_TL_relief_valve_rho_avg * 8.0 ; t737 = ( t695 + t733 )
/ 2.0 * 150.0 ; t727 = 3.1415926535897931 / ( t736 == 0.0 ? 1.0E-16 : t736 )
* ( t737 / 0.64 ) * ( t737 / 0.64 ) ; t733 = ( ( X [ 11ULL ] - 1.01325 ) -
3.0 ) / 0.14999999999999991 ; if ( t733 <= 0.0 ) { t734 = 0.0 ; } else if (
t733 <= 0.005 ) { t734 = t733 * t733 * 100.50251256281406 ; } else if ( t733
<= 0.995 ) { t734 = t733 * 1.0050251256281406 - 0.0025125628140703518 ; }
else if ( t733 <= 1.0 ) { t734 = ( 1.0 - t733 ) * ( 1.0 - t733 ) * -
100.50251256281406 + 1.0 ; } else { t734 = 1.0 ; } t733 = t734 *
9.9999900000000011E-5 + 1.0E-10 ; t734 = t733 / 0.01 ; t735 = pmf_sqrt ( X [
68ULL ] * X [ 68ULL ] + 6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 91ULL
] ; tlu2_linear_linear_prelookup ( & gd_efOut . mField0 [ 0ULL ] , & gd_efOut
. mField1 [ 0ULL ] , & gd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t18 = gd_efOut ; tlu2_2d_linear_linear_value ( & hd_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , &
t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = hd_efOut [ 0 ] ;
t736 = t623 [ 0ULL ] ; t737 = X [ 68ULL ] / ( t735 == 0.0 ? 1.0E-16 : t735 )
* X [ 11ULL ] / ( t736 == 0.0 ? 1.0E-16 : t736 ) ; t739 = ( 1.0 - X [ 68ULL ]
/ ( t735 == 0.0 ? 1.0E-16 : t735 ) ) / 2.0 ; t740 = ( X [ 68ULL ] / ( t735 ==
0.0 ? 1.0E-16 : t735 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 93ULL ] ;
tlu2_linear_linear_prelookup ( & id_efOut . mField0 [ 0ULL ] , & id_efOut .
mField1 [ 0ULL ] , & id_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t17
= id_efOut ; tlu2_2d_linear_linear_value ( & jd_efOut [ 0ULL ] , & t17 .
mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = jd_efOut [ 0 ] ;
t741 = t623 [ 0ULL ] ; t743 = - X [ 68ULL ] / ( t735 == 0.0 ? 1.0E-16 : t735
) * 1.01325 / ( t741 == 0.0 ? 1.0E-16 : t741 ) ; t745 = ( 1.0 - - X [ 68ULL ]
/ ( t735 == 0.0 ? 1.0E-16 : t735 ) ) / 2.0 ; t746 = ( - X [ 68ULL ] / ( t735
== 0.0 ? 1.0E-16 : t735 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 90ULL ] ;
tlu2_linear_linear_prelookup ( & kd_efOut . mField0 [ 0ULL ] , & kd_efOut .
mField1 [ 0ULL ] , & kd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= kd_efOut ; tlu2_2d_linear_linear_value ( & ld_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = ld_efOut [ 0 ] ;
t747 = t623 [ 0ULL ] ; t628 [ 0ULL ] = X [ 91ULL ] ;
tlu2_linear_nearest_prelookup ( & md_efOut . mField0 [ 0ULL ] , & md_efOut .
mField1 [ 0ULL ] , & md_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= md_efOut ; t628 [ 0ULL ] = X [ 11ULL ] ; tlu2_linear_nearest_prelookup ( &
nd_efOut . mField0 [ 0ULL ] , & nd_efOut . mField1 [ 0ULL ] , & nd_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t628 [
0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t24 = nd_efOut ;
tlu2_2d_linear_nearest_value ( & od_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ]
, & t62 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , & t24 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = od_efOut [ 0 ] ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg = t623 [ 0ULL ] ; t628 [
0ULL ] = X [ 93ULL ] ; tlu2_linear_nearest_prelookup ( & pd_efOut . mField0 [
0ULL ] , & pd_efOut . mField1 [ 0ULL ] , & pd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t62 = pd_efOut ; tlu2_2d_linear_nearest_value ( & qd_efOut
[ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0
] = qd_efOut [ 0 ] ; piece89 = t623 [ 0ULL ] ; t736 = ( t736 + t741 ) / 2.0 ;
t754 = t733 * t736 * 8.0 ; t755 = (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg + piece89 ) / 2.0 * 150.0 ;
t741 = 3.1415926535897931 / ( t754 == 0.0 ? 1.0E-16 : t754 ) * ( t755 / 0.64
) * ( t755 / 0.64 ) ; Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg = X [
30ULL ] >= 1.0E-5 ? X [ 30ULL ] : 1.0E-5 ; piece89 = 1.01325 / (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg == 0.0 ? 1.0E-16 :
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg ) * 0.0050251256281407036 ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg = pmf_exp ( (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg - 1.01325 ) / 21791.0 ) ;
t758 = 1.0 / ( Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg == 0.0 ?
1.0E-16 : Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg ) + piece89 ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg = 998.21615577889452 / (
t758 == 0.0 ? 1.0E-16 : t758 ) ; piece89 = ( - X [ 33ULL ] - X [ 79ULL ] ) -
X [ 87ULL ] ; t752 = pmf_sqrt ( piece89 * piece89 + 6.4274470286298247E-10 )
; t628 [ 0ULL ] = X [ 94ULL ] ; tlu2_linear_linear_prelookup ( & rd_efOut .
mField0 [ 0ULL ] , & rd_efOut . mField1 [ 0ULL ] , & rd_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , &
t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t13 = rd_efOut ;
tlu2_2d_linear_linear_value ( & sd_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ]
, & t13 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = sd_efOut [ 0 ] ; t753 = t623 [
0ULL ] ; t754 = piece89 / ( t752 == 0.0 ? 1.0E-16 : t752 ) * 1.01325 / ( t753
== 0.0 ? 1.0E-16 : t753 ) ; t753 = ( piece89 / ( t752 == 0.0 ? 1.0E-16 : t752
) + 1.0 ) / 2.0 ; t755 = pmf_sqrt ( X [ 87ULL ] * X [ 87ULL ] +
6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 96ULL ] ;
tlu2_linear_linear_prelookup ( & td_efOut . mField0 [ 0ULL ] , & td_efOut .
mField1 [ 0ULL ] , & td_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t11
= td_efOut ; tlu2_2d_linear_linear_value ( & ud_efOut [ 0ULL ] , & t11 .
mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = ud_efOut [ 0 ] ;
t757 = t623 [ 0ULL ] ; t758 = X [ 87ULL ] / ( t755 == 0.0 ? 1.0E-16 : t755 )
* 1.01325 / ( t757 == 0.0 ? 1.0E-16 : t757 ) ; t757 = ( 1.0 - X [ 87ULL ] / (
t755 == 0.0 ? 1.0E-16 : t755 ) ) / 2.0 ; t759 = ( X [ 87ULL ] / ( t755 == 0.0
? 1.0E-16 : t755 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 95ULL ] ;
tlu2_linear_linear_prelookup ( & vd_efOut . mField0 [ 0ULL ] , & vd_efOut .
mField1 [ 0ULL ] , & vd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= vd_efOut ; tlu2_2d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = wd_efOut [ 0 ] ;
t760 = t623 [ 0ULL ] ; t764 = X [ 68ULL ] + X [ 69ULL ] ; t766 = pmf_sqrt (
t764 * t764 + 6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 97ULL ] ;
tlu2_linear_linear_prelookup ( & xd_efOut . mField0 [ 0ULL ] , & xd_efOut .
mField1 [ 0ULL ] , & xd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t29
= xd_efOut ; tlu2_2d_linear_linear_value ( & yd_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = yd_efOut [ 0 ] ;
Reservoir_TL2_convection_A_step_pos = t623 [ 0ULL ] ;
Reservoir_TL2_convection_A_pv = t764 / ( t766 == 0.0 ? 1.0E-16 : t766 ) *
1.01325 / ( Reservoir_TL2_convection_A_step_pos == 0.0 ? 1.0E-16 :
Reservoir_TL2_convection_A_step_pos ) ; Reservoir_TL2_convection_A_step_pos =
( t764 / ( t766 == 0.0 ? 1.0E-16 : t766 ) + 1.0 ) / 2.0 ; t768 = X [ 101ULL ]
* - 0.12820512820512822 + 1.01325 ;
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff = X [ 30ULL ] - t768 ;
intrm_sf_mf_39 = t768 >= 1.0E-5 ? t768 : 1.0E-5 ;
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_rho_avg = 1.01325 / (
intrm_sf_mf_39 == 0.0 ? 1.0E-16 : intrm_sf_mf_39 ) * 0.0050251256281407036 ;
intrm_sf_mf_39 = pmf_exp ( ( intrm_sf_mf_39 - 1.01325 ) / 21791.0 ) ;
Servovalve2_Nozzle_B_Nozzle_B_rho_avg = 1.0 / ( intrm_sf_mf_39 == 0.0 ?
1.0E-16 : intrm_sf_mf_39 ) +
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_rho_avg ; intrm_sf_mf_39 =
998.21615577889452 / ( Servovalve2_Nozzle_B_Nozzle_B_rho_avg == 0.0 ? 1.0E-16
: Servovalve2_Nozzle_B_Nozzle_B_rho_avg ) ;
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_rho_avg = (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg + intrm_sf_mf_39 ) / 2.0 ;
t769 = Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_rho_avg *
0.78539816339744828 / 4.0E-6 * 4.6231143061224496E-8 ;
Servovalve2_Nozzle_B_Nozzle_B_rho_avg = X [ 105ULL ] * 0.12820512820512822 +
1.01325 ; t771 = X [ 30ULL ] - Servovalve2_Nozzle_B_Nozzle_B_rho_avg ; t772 =
Servovalve2_Nozzle_B_Nozzle_B_rho_avg >= 1.0E-5 ?
Servovalve2_Nozzle_B_Nozzle_B_rho_avg : 1.0E-5 ;
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_rho_avg = 1.01325 / ( t772 == 0.0
? 1.0E-16 : t772 ) * 0.0050251256281407036 ; t772 = pmf_exp ( ( t772 -
1.01325 ) / 21791.0 ) ; zc_int10 = 1.0 / ( t772 == 0.0 ? 1.0E-16 : t772 ) +
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_rho_avg ; t772 =
998.21615577889452 / ( zc_int10 == 0.0 ? 1.0E-16 : zc_int10 ) ;
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_rho_avg = (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg + t772 ) / 2.0 ; t773 =
Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_rho_avg * 0.78539816339744828 /
4.0E-6 * 4.6231143061224496E-8 ; intrm_sf_mf_63 = X [ 26ULL ] >= 1.0E-5 ? X [
26ULL ] : 1.0E-5 ; Servovalve2_Main_Valve_Orifice_AT_Orifice_rho_avg =
1.01325 / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 : intrm_sf_mf_63 ) *
0.0050251256281407036 ; intrm_sf_mf_63 = pmf_exp ( ( intrm_sf_mf_63 - 1.01325
) / 21791.0 ) ; t778 = 1.0 / ( intrm_sf_mf_63 == 0.0 ? 1.0E-16 :
intrm_sf_mf_63 ) + Servovalve2_Main_Valve_Orifice_AT_Orifice_rho_avg ;
intrm_sf_mf_63 = 998.21615577889452 / ( t778 == 0.0 ? 1.0E-16 : t778 ) ;
Servovalve2_Main_Valve_Orifice_AT_Orifice_rho_avg = ( 993.22507500000017 +
intrm_sf_mf_63 ) / 2.0 ; t778 = - X [ 48ULL ] + X [ 104ULL ] ; intrm_sf_mf_92
= X [ 4ULL ] >= 1.0E-5 ? X [ 4ULL ] : 1.0E-5 ;
Servovalve2_Main_Valve_Orifice_BT_Orifice_rho_avg = 1.01325 / (
intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) * 0.0050251256281407036 ;
intrm_sf_mf_92 = pmf_exp ( ( intrm_sf_mf_92 - 1.01325 ) / 21791.0 ) ; t781 =
1.0 / ( intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92 ) +
Servovalve2_Main_Valve_Orifice_BT_Orifice_rho_avg ; intrm_sf_mf_92 =
998.21615577889452 / ( t781 == 0.0 ? 1.0E-16 : t781 ) ;
Servovalve2_Main_Valve_Orifice_BT_Orifice_rho_avg = ( 993.22507500000017 +
intrm_sf_mf_92 ) / 2.0 ; t781 = X [ 30ULL ] - X [ 26ULL ] ; t782 = (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg + intrm_sf_mf_63 ) / 2.0 ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff = X [ 30ULL ] - X [ 4ULL ] ;
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg = (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg + intrm_sf_mf_92 ) / 2.0 ;
Servovalve2_Nozzle_A_Nozzle_A_p_diff = t768 - 1.01325 ; t768 = (
993.22507500000017 + intrm_sf_mf_39 ) / 2.0 ;
Servovalve2_Nozzle_B_Nozzle_B_p_diff = Servovalve2_Nozzle_B_Nozzle_B_rho_avg
- 1.01325 ; Servovalve2_Nozzle_B_Nozzle_B_rho_avg = ( 993.22507500000017 +
t772 ) / 2.0 ; intrm_sf_mf_228 = ( ( ( - U_idx_2 + 0.00050000000000000044 ) *
0.01999998 + 1.0E-10 ) - 1.0E-10 ) / 9.9999900000000011E-5 ; if (
intrm_sf_mf_228 <= 0.0 ) { intrm_sf_mf_234 = 0.0 ; } else if (
intrm_sf_mf_228 <= 0.005 ) { intrm_sf_mf_234 = intrm_sf_mf_228 *
intrm_sf_mf_228 * 100.50251256281406 ; } else if ( intrm_sf_mf_228 <= 0.995 )
{ intrm_sf_mf_234 = intrm_sf_mf_228 * 1.0050251256281406 -
0.0025125628140703518 ; } else if ( intrm_sf_mf_228 <= 1.0 ) {
intrm_sf_mf_234 = ( 1.0 - intrm_sf_mf_228 ) * ( 1.0 - intrm_sf_mf_228 ) * -
100.50251256281406 + 1.0 ; } else { intrm_sf_mf_234 = 1.0 ; } intrm_sf_mf_228
= intrm_sf_mf_234 * 9.9999900000000011E-5 + 1.0E-10 ; intrm_sf_mf_234 = ( ( (
U_idx_2 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( intrm_sf_mf_234 <= 0.0 ) { t787 = 0.0 ; } else
if ( intrm_sf_mf_234 <= 0.005 ) { t787 = intrm_sf_mf_234 * intrm_sf_mf_234 *
100.50251256281406 ; } else if ( intrm_sf_mf_234 <= 0.995 ) { t787 =
intrm_sf_mf_234 * 1.0050251256281406 - 0.0025125628140703518 ; } else if (
intrm_sf_mf_234 <= 1.0 ) { t787 = ( 1.0 - intrm_sf_mf_234 ) * ( 1.0 -
intrm_sf_mf_234 ) * - 100.50251256281406 + 1.0 ; } else { t787 = 1.0 ; }
intrm_sf_mf_234 = t787 * 9.9999900000000011E-5 + 1.0E-10 ; t787 = ( ( ( -
U_idx_3 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( t787 <= 0.0 ) { t788 = 0.0 ; } else if ( t787 <=
0.005 ) { t788 = t787 * t787 * 100.50251256281406 ; } else if ( t787 <= 0.995
) { t788 = t787 * 1.0050251256281406 - 0.0025125628140703518 ; } else if (
t787 <= 1.0 ) { t788 = ( 1.0 - t787 ) * ( 1.0 - t787 ) * - 100.50251256281406
+ 1.0 ; } else { t788 = 1.0 ; } t787 = t788 * 9.9999900000000011E-5 + 1.0E-10
; t788 = ( ( ( U_idx_3 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) -
1.0E-10 ) / 9.9999900000000011E-5 ; if ( t788 <= 0.0 ) { t789 = 0.0 ; } else
if ( t788 <= 0.005 ) { t789 = t788 * t788 * 100.50251256281406 ; } else if (
t788 <= 0.995 ) { t789 = t788 * 1.0050251256281406 - 0.0025125628140703518 ;
} else if ( t788 <= 1.0 ) { t789 = ( 1.0 - t788 ) * ( 1.0 - t788 ) * -
100.50251256281406 + 1.0 ; } else { t789 = 1.0 ; } t788 = t789 *
9.9999900000000011E-5 + 1.0E-10 ; t789 = ( X [ 6ULL ] - 0.1 ) * 1.0E+10 +
intrm_sf_mf_247 * 150.0 ; U_idx_2 = X [ 6ULL ] * 1.0E+10 + intrm_sf_mf_247 *
150.0 ; intrm_sf_mf_247 = ( X [ 6ULL ] - 0.1 ) / 0.0001 ; U_idx_3 =
intrm_sf_mf_247 * intrm_sf_mf_247 * 3.0 - intrm_sf_mf_247 * intrm_sf_mf_247 *
intrm_sf_mf_247 * 2.0 ; intrm_sf_mf_247 = - X [ 6ULL ] / 0.0001 ; t792 =
intrm_sf_mf_247 * intrm_sf_mf_247 * 3.0 - intrm_sf_mf_247 * intrm_sf_mf_247 *
intrm_sf_mf_247 * 2.0 ; t628 [ 0 ] = 293.15 ; tlu2_linear_linear_prelookup (
& ae_efOut . mField0 [ 0ULL ] , & ae_efOut . mField1 [ 0ULL ] , & ae_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t67 = ae_efOut ;
tlu2_2d_linear_linear_value ( & be_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = be_efOut [ 0 ] ;
intrm_sf_mf_247 = t623 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & ce_efOut [
0ULL ] , & t67 . mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t43 .
mField0 [ 0ULL ] , & t43 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0
] = ce_efOut [ 0 ] ; intrm_sf_mf_251 = t623 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & de_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = de_efOut [ 0 ] ;
intrm_sf_mf_252 = t623 [ 0ULL ] ; t767 = intrm_sf_mf_228 / 0.01 ; t628 [ 0ULL
] = X [ 114ULL ] ; tlu2_linear_linear_prelookup ( & ee_efOut . mField0 [ 0ULL
] , & ee_efOut . mField1 [ 0ULL ] , & ee_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] ,
& t76 [ 0ULL ] ) ; t56 = ee_efOut ; tlu2_2d_linear_linear_value ( & fe_efOut
[ 0ULL ] , & t56 . mField0 [ 0ULL ] , & t56 . mField2 [ 0ULL ] , & t36 .
mField0 [ 0ULL ] , & t36 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t75 [ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0
] = fe_efOut [ 0 ] ; x3_Way_Directional_Valve_TL_orifice_AT_rho_avg = t623 [
0ULL ] ; x3_Way_Directional_Valve_TL_orifice_AT_convection_A_pv = X [ 87ULL ]
/ ( t755 == 0.0 ? 1.0E-16 : t755 ) * X [ 54ULL ] / (
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg == 0.0 ? 1.0E-16 :
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg ) ; t628 [ 0ULL ] = X [ 116ULL
] ; tlu2_linear_linear_prelookup ( & ge_efOut . mField0 [ 0ULL ] , & ge_efOut
. mField1 [ 0ULL ] , & ge_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t22 = ge_efOut ; tlu2_2d_linear_linear_value ( & he_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = he_efOut [ 0 ] ;
t794 = t623 [ 0ULL ] ; x3_Way_Directional_Valve_TL_orifice_AT_convection_B_pv
= - X [ 87ULL ] / ( t755 == 0.0 ? 1.0E-16 : t755 ) * 1.01325 / ( t794 == 0.0
? 1.0E-16 : t794 ) ; t796 = ( 1.0 - - X [ 87ULL ] / ( t755 == 0.0 ? 1.0E-16 :
t755 ) ) / 2.0 ; t795 = ( - X [ 87ULL ] / ( t755 == 0.0 ? 1.0E-16 : t755 ) +
1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 114ULL ] ; tlu2_linear_nearest_prelookup (
& ie_efOut . mField0 [ 0ULL ] , & ie_efOut . mField1 [ 0ULL ] , & ie_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t35 = ie_efOut ;
tlu2_2d_linear_nearest_value ( & je_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = je_efOut [ 0 ] ; t798 = t623 [
0ULL ] ; t628 [ 0ULL ] = X [ 116ULL ] ; tlu2_linear_nearest_prelookup ( &
ke_efOut . mField0 [ 0ULL ] , & ke_efOut . mField1 [ 0ULL ] , & ke_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t628 [
0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62 = ke_efOut ;
tlu2_2d_linear_nearest_value ( & le_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ]
, & t62 . mField2 [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = le_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL_orifice_PA_rho_avg = t623 [ 0ULL ] ; t798 = (
t798 + x3_Way_Directional_Valve_TL_orifice_PA_rho_avg ) / 2.0 ;
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg = (
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg + t794 ) / 2.0 ; t804 =
intrm_sf_mf_228 * x3_Way_Directional_Valve_TL_orifice_AT_rho_avg * 2.0 ; t794
= t798 * t798 * 0.78539816339744828 / ( t804 == 0.0 ? 1.0E-16 : t804 ) *
54931.640625 ; t798 = intrm_sf_mf_234 / 0.01 ; t628 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_linear_prelookup ( & me_efOut . mField0 [ 0ULL ] , & me_efOut .
mField1 [ 0ULL ] , & me_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t65
= me_efOut ; tlu2_2d_linear_linear_value ( & ne_efOut [ 0ULL ] , & t65 .
mField0 [ 0ULL ] , & t65 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = ne_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL_orifice_PA_rho_avg = t623 [ 0ULL ] ; t662 = - X [
33ULL ] / ( Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) * X [ 28ULL ] / (
x3_Way_Directional_Valve_TL_orifice_PA_rho_avg == 0.0 ? 1.0E-16 :
x3_Way_Directional_Valve_TL_orifice_PA_rho_avg ) ; t628 [ 0ULL ] = X [ 119ULL
] ; tlu2_linear_linear_prelookup ( & oe_efOut . mField0 [ 0ULL ] , & oe_efOut
. mField1 [ 0ULL ] , & oe_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t26 = oe_efOut ; tlu2_2d_linear_linear_value ( & pe_efOut [ 0ULL ] , & t26 .
mField0 [ 0ULL ] , & t26 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , &
t36 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = pe_efOut [ 0 ] ;
t801 = t623 [ 0ULL ] ; t656 = X [ 33ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) * X [ 54ULL ] / ( t801 == 0.0 ?
1.0E-16 : t801 ) ; t628 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_nearest_prelookup ( & qe_efOut . mField0 [ 0ULL ] , & qe_efOut .
mField1 [ 0ULL ] , & qe_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= qe_efOut ; tlu2_2d_linear_nearest_value ( & re_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t60 . mField0 [ 0ULL ] , &
t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = re_efOut [ 0 ] ;
t802 = t623 [ 0ULL ] ; t628 [ 0ULL ] = X [ 119ULL ] ;
tlu2_linear_nearest_prelookup ( & se_efOut . mField0 [ 0ULL ] , & se_efOut .
mField1 [ 0ULL ] , & se_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t67
= se_efOut ; tlu2_2d_linear_nearest_value ( & te_efOut [ 0ULL ] , & t67 .
mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t31 . mField0 [ 0ULL ] , &
t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = te_efOut [ 0 ] ;
t803 = t623 [ 0ULL ] ; t802 = ( t802 + t803 ) / 2.0 ; t803 = X [ 28ULL ] - X
[ 54ULL ] ; x3_Way_Directional_Valve_TL_orifice_PA_rho_avg = (
x3_Way_Directional_Valve_TL_orifice_PA_rho_avg + t801 ) / 2.0 ; t812 =
intrm_sf_mf_234 * x3_Way_Directional_Valve_TL_orifice_PA_rho_avg * 2.0 ; t801
= t802 * t802 * 0.78539816339744828 / ( t812 == 0.0 ? 1.0E-16 : t812 ) *
54931.640625 ; t802 = t787 / 0.01 ; t804 = pmf_sqrt ( X [ 69ULL ] * X [ 69ULL
] + 6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 120ULL ] ;
tlu2_linear_linear_prelookup ( & ue_efOut . mField0 [ 0ULL ] , & ue_efOut .
mField1 [ 0ULL ] , & ue_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t31
= ue_efOut ; tlu2_2d_linear_linear_value ( & ve_efOut [ 0ULL ] , & t31 .
mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , &
t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = ve_efOut [ 0 ] ;
t806 = t623 [ 0ULL ] ; t808 = X [ 69ULL ] / ( t804 == 0.0 ? 1.0E-16 : t804 )
* X [ 11ULL ] / ( t806 == 0.0 ? 1.0E-16 : t806 ) ; t809 = ( 1.0 - X [ 69ULL ]
/ ( t804 == 0.0 ? 1.0E-16 : t804 ) ) / 2.0 ; t810 = ( X [ 69ULL ] / ( t804 ==
0.0 ? 1.0E-16 : t804 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 122ULL ] ;
tlu2_linear_linear_prelookup ( & we_efOut . mField0 [ 0ULL ] , & we_efOut .
mField1 [ 0ULL ] , & we_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t60
= we_efOut ; tlu2_2d_linear_linear_value ( & xe_efOut [ 0ULL ] , & t60 .
mField0 [ 0ULL ] , & t60 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , &
t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = xe_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c = t623 [ 0ULL ] ; t812 = - X
[ 69ULL ] / ( t804 == 0.0 ? 1.0E-16 : t804 ) * 1.01325 / (
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c == 0.0 ? 1.0E-16 :
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) ; t813 = ( 1.0 - - X [
69ULL ] / ( t804 == 0.0 ? 1.0E-16 : t804 ) ) / 2.0 ; t814 = ( - X [ 69ULL ] /
( t804 == 0.0 ? 1.0E-16 : t804 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 120ULL ]
; tlu2_linear_nearest_prelookup ( & ye_efOut . mField0 [ 0ULL ] , & ye_efOut
. mField1 [ 0ULL ] , & ye_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t62 = ye_efOut ; tlu2_2d_linear_nearest_value ( & af_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , &
t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = af_efOut [ 0 ] ;
t816 = t623 [ 0ULL ] ; t628 [ 0ULL ] = X [ 122ULL ] ;
tlu2_linear_nearest_prelookup ( & bf_efOut . mField0 [ 0ULL ] , & bf_efOut .
mField1 [ 0ULL ] , & bf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= bf_efOut ; tlu2_2d_linear_nearest_value ( & cf_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t32 . mField0 [ 0ULL ] , &
t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = cf_efOut [ 0 ] ;
t818 = t623 [ 0ULL ] ; t816 = ( t816 + t818 ) / 2.0 ; t806 = ( t806 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) / 2.0 ; t828 = t787 * t806
* 2.0 ; x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c = t816 * t816 *
0.78539816339744828 / ( t828 == 0.0 ? 1.0E-16 : t828 ) * 54931.640625 ; t816
= t788 / 0.01 ; t818 = pmf_sqrt ( X [ 70ULL ] * X [ 70ULL ] +
6.4274470286298247E-10 ) ; t628 [ 0ULL ] = X [ 123ULL ] ;
tlu2_linear_linear_prelookup ( & df_efOut . mField0 [ 0ULL ] , & df_efOut .
mField1 [ 0ULL ] , & df_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t67
= df_efOut ; tlu2_2d_linear_linear_value ( & ef_efOut [ 0ULL ] , & t67 .
mField0 [ 0ULL ] , & t67 . mField2 [ 0ULL ] , & t57 . mField0 [ 0ULL ] , &
t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = ef_efOut [ 0 ] ;
t819 = t623 [ 0ULL ] ; t820 = X [ 70ULL ] / ( t818 == 0.0 ? 1.0E-16 : t818 )
* X [ 30ULL ] / ( t819 == 0.0 ? 1.0E-16 : t819 ) ; t822 = ( 1.0 - X [ 70ULL ]
/ ( t818 == 0.0 ? 1.0E-16 : t818 ) ) / 2.0 ; t824 = ( X [ 70ULL ] / ( t818 ==
0.0 ? 1.0E-16 : t818 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_linear_prelookup ( & ff_efOut . mField0 [ 0ULL ] , & ff_efOut .
mField1 [ 0ULL ] , & ff_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t35
= ff_efOut ; tlu2_2d_linear_linear_value ( & gf_efOut [ 0ULL ] , & t35 .
mField0 [ 0ULL ] , & t35 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , &
t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = gf_efOut [ 0 ] ;
t825 = t623 [ 0ULL ] ; t826 = - X [ 70ULL ] / ( t818 == 0.0 ? 1.0E-16 : t818
) * X [ 11ULL ] / ( t825 == 0.0 ? 1.0E-16 : t825 ) ; t827 = ( 1.0 - - X [
70ULL ] / ( t818 == 0.0 ? 1.0E-16 : t818 ) ) / 2.0 ; t828 = ( - X [ 70ULL ] /
( t818 == 0.0 ? 1.0E-16 : t818 ) + 1.0 ) / 2.0 ; t628 [ 0ULL ] = X [ 123ULL ]
; tlu2_linear_nearest_prelookup ( & hf_efOut . mField0 [ 0ULL ] , & hf_efOut
. mField1 [ 0ULL ] , & hf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ;
t32 = hf_efOut ; tlu2_2d_linear_nearest_value ( & if_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t52 . mField0 [ 0ULL ] , &
t52 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = if_efOut [ 0 ] ;
t829 = t623 [ 0ULL ] ; t628 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_nearest_prelookup ( & jf_efOut . mField0 [ 0ULL ] , & jf_efOut .
mField1 [ 0ULL ] , & jf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t628 [ 0ULL ] , & t75 [ 0ULL ] , & t76 [ 0ULL ] ) ; t62
= jf_efOut ; tlu2_2d_linear_nearest_value ( & kf_efOut [ 0ULL ] , & t62 .
mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , &
t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t628 [ 0 ] = kf_efOut [ 0 ] ;
t830 = t628 [ 0ULL ] ; t829 = ( t829 + t830 ) / 2.0 ; t830 = X [ 30ULL ] - X
[ 11ULL ] ; t819 = ( t819 + t825 ) / 2.0 ; t844 = t788 * t819 * 2.0 ; t825 =
t829 * t829 * 0.78539816339744828 / ( t844 == 0.0 ? 1.0E-16 : t844 ) *
54931.640625 ; if ( M_idx_50 != 0 ) { t829 = 0.0 ; } else { t829 = M_idx_61
!= 0 ? 1.0 : - ( X [ 18ULL ] - 1.0E-5 ) ; } zc_int10 = t829 * 0.0245 ; t832 =
zc_int10 + 1.2250000000000001E-6 ; t829 = ( 1.0 - pmf_exp ( - ( t829 / 5.0E-5
) / 1.848 ) ) * 0.8373 + 0.3663 ; if ( M_idx_2 != 0 ) { t834 = 0.0 ; } else {
t834 = M_idx_3 != 0 ? 1.0 : X [ 19ULL ] - - 1.0E-5 ; } t777 = t834 * 0.0245 ;
t835 = t777 + 1.0E-9 ; t695 = ( t777 + 1.0E-9 ) * 2.0 ; t836 =
Servovalve2_Main_Valve_Orifice_BT_Orifice_rho_avg * 0.78539816339744828 / (
t695 == 0.0 ? 1.0E-16 : t695 ) * 4.6231143061224496E-8 ; t838 = fabs (
1.01325 - X [ 54ULL ] ) * zc_int20 * 0.057295779513082311 ; zc_int20 = t777 +
1.2250000000000001E-6 ; t696 = ( 1.0 - pmf_exp ( - ( t834 / 5.0E-5 ) / 1.848
) ) * 0.8373 + 0.3663 ; if ( M_idx_4 != 0 ) { t777 = 0.0 ; } else { t777 =
M_idx_5 != 0 ? 1.0 : X [ 20ULL ] - - 1.0E-5 ; } t780 = t777 * 0.0245 ; t834 =
t780 + 1.0E-9 ; t695 = ( t780 + 1.0E-9 ) * 2.0 ; t840 = t782 *
0.78539816339744828 / ( t695 == 0.0 ? 1.0E-16 : t695 ) *
4.6231143061224496E-8 ; t841 = t780 + 1.2250000000000001E-6 ; if ( M_idx_0 !=
0 ) { t780 = ( zc_int40 * 1.0E+10 / ( zc_int31 == 0.0 ? 1.0E-16 : zc_int31 )
+ 1.0E+10 ) * ( X [ 72ULL ] * 0.001 - 0.004 ) * 1.0E-5 ; } else if ( M_idx_1
!= 0 ) { t780 = ( 1.0E+10 - zc_int4 * 1.0E+10 / ( zc_int31 == 0.0 ? 1.0E-16 :
zc_int31 ) ) * X [ 72ULL ] * 1.0E-8 ; } else { t780 = 0.0 ; } zc_int31 = (
1.0 - pmf_exp ( - ( t777 / 5.0E-5 ) / 1.848 ) ) * 0.8373 + 0.3663 ; if (
M_idx_6 != 0 ) { zc_int4 = 0.0 ; } else { zc_int4 = M_idx_7 != 0 ? 1.0 : - (
X [ 21ULL ] - 1.0E-5 ) ; } zc_int40 = zc_int4 * 0.0245 ; t777 = zc_int40 +
1.0E-9 ; t695 = ( zc_int40 + 1.0E-9 ) * 2.0 ; t783 =
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg * 0.78539816339744828 / (
t695 == 0.0 ? 1.0E-16 : t695 ) * 4.6231143061224496E-8 ; t842 = zc_int40 +
1.2250000000000001E-6 ; zc_int40 = zc_int4 / 5.0E-5 ; if ( M_idx_8 != 0 ) {
zc_int4 = ( zc_int43 * 1.0E+10 / ( zc_int41 == 0.0 ? 1.0E-16 : zc_int41 ) +
1.0E+10 ) * ( X [ 75ULL ] * 0.001 - 0.00796 ) * 1.0E-5 ; } else if ( M_idx_17
!= 0 ) { zc_int4 = ( 1.0E+10 - zc_int42 * 1.0E+10 / ( zc_int41 == 0.0 ?
1.0E-16 : zc_int41 ) ) * X [ 75ULL ] * 1.0E-8 ; } else { zc_int4 = 0.0 ; }
zc_int40 = ( 1.0 - pmf_exp ( - zc_int40 / 1.848 ) ) * 0.8373 + 0.3663 ; if (
M_idx_9 != 0 ) { zc_int41 = 1.0E-9 ; } else { zc_int41 = M_idx_10 != 0 ?
3.14E-6 : ( X [ 15ULL ] - - 0.00029980999999999996 ) * 0.0052333238858972009
+ 1.0E-9 ; } t695 = zc_int41 * 2.0 ; zc_int42 = t768 * 0.78539816339744828 /
( t695 == 0.0 ? 1.0E-16 : t695 ) * 4.6231143061224496E-8 ; if ( M_idx_11 != 0
) { zc_int43 = 1.0E-9 ; } else { zc_int43 = M_idx_12 != 0 ? 3.14E-6 : ( X [
15ULL ] - 0.00029980999999999996 ) * - 0.0052333238858972009 + 1.0E-9 ; }
t695 = zc_int43 * 2.0 ; zc_int44 = Servovalve2_Nozzle_B_Nozzle_B_rho_avg *
0.78539816339744828 / ( t695 == 0.0 ? 1.0E-16 : t695 ) *
4.6231143061224496E-8 ; t785 = zc_int10 + 1.0E-9 ; t695 = ( zc_int10 + 1.0E-9
) * 2.0 ; zc_int10 = Servovalve2_Main_Valve_Orifice_AT_Orifice_rho_avg *
0.78539816339744828 / ( t695 == 0.0 ? 1.0E-16 : t695 ) *
4.6231143061224496E-8 ; t710 = - ( X [ 79ULL ] / (
Interface_TL_IL1_convection_TL_mdot_abs == 0.0 ? 1.0E-16 :
Interface_TL_IL1_convection_TL_mdot_abs ) ) / 2.0 ; piece89 = - ( piece89 / (
t752 == 0.0 ? 1.0E-16 : t752 ) ) / 2.0 ; t761 = - ( X [ 87ULL ] / ( t755 ==
0.0 ? 1.0E-16 : t755 ) ) / 2.0 ; t764 = - ( t764 / ( t766 == 0.0 ? 1.0E-16 :
t766 ) ) / 2.0 ; if ( X [ 6ULL ] >= 0.10010000000000001 ) { t844 = X [ 51ULL
] - ( real_T ) ( t789 >= 0.0 ) * t789 ; } else if ( X [ 6ULL ] >= 0.1 ) {
t844 = X [ 51ULL ] - ( real_T ) ( t789 >= 0.0 ) * t789 * U_idx_3 ; } else if
( X [ 6ULL ] > 0.0 ) { t844 = X [ 51ULL ] ; } else if ( X [ 6ULL ] > - 0.0001
) { t844 = X [ 51ULL ] - ( real_T ) ( U_idx_2 <= 0.0 ) * U_idx_2 * t792 ; }
else { t844 = X [ 51ULL ] - ( real_T ) ( U_idx_2 <= 0.0 ) * U_idx_2 ; } if (
M_idx_28 != 0 ) { t789 = X [ 99ULL ] - ( ( X [ 14ULL ] - 0.0005 ) * 1.0E+6 +
X [ 9ULL ] * 150.0 ) ; } else if ( M_idx_39 != 0 ) { t789 = X [ 99ULL ] ; }
else { t789 = X [ 99ULL ] - ( ( X [ 14ULL ] - - 0.0005 ) * 1.0E+6 + X [ 9ULL
] * 150.0 ) ; } tlu2_2d_linear_linear_value ( & lf_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , &
t63 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75
[ 0ULL ] , & t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t628 [ 0 ] = lf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & mf_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t623 [ 0 ] = mf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & nf_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , & t66 . mField0 [ 0ULL ] , & t66 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t630_idx_0 = nf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & of_efOut [ 0ULL ] , & t71 . mField0 [ 0ULL ]
, & t71 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , & t43 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t695 = of_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & pf_efOut [ 0ULL ] , & t38 . mField0 [ 0ULL ]
, & t38 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; U_idx_2 = pf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & qf_efOut [ 0ULL ] , & t69 . mField0 [ 0ULL ]
, & t69 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , & t36 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; U_idx_3 = qf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & rf_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ]
, & t49 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t792 = rf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & sf_efOut [ 0ULL ] , & t28 . mField0 [ 0ULL ]
, & t28 . mField2 [ 0ULL ] , & t66 . mField0 [ 0ULL ] , & t66 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t635_idx_0 = sf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & tf_efOut [ 0ULL ] , & t53 . mField0 [ 0ULL ]
, & t53 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t636_idx_0 = tf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & uf_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t637_idx_0 = uf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & vf_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , & t43 . mField0 [ 0ULL ] , & t43 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t638_idx_0 = vf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & wf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , & t33 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t639_idx_0 = wf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & xf_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , & t36 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t640_idx_0 = xf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & yf_efOut [ 0ULL ] , & t39 . mField0 [ 0ULL ]
, & t39 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t641_idx_0 = yf_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & ag_efOut [ 0ULL ] , & t18 . mField0 [ 0ULL ]
, & t18 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t642_idx_0 = ag_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & bg_efOut [ 0ULL ] , & t17 . mField0 [ 0ULL ]
, & t17 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t643_idx_0 = bg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & cg_efOut [ 0ULL ] , & t13 . mField0 [ 0ULL ]
, & t13 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t644_idx_0 = cg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & dg_efOut [ 0ULL ] , & t11 . mField0 [ 0ULL ]
, & t11 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t645_idx_0 = dg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & eg_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t646_idx_0 = eg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & fg_efOut [ 0ULL ] , & t56 . mField0 [ 0ULL ]
, & t56 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , & t36 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t647_idx_0 = fg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & gg_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t648_idx_0 = gg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & hg_efOut [ 0ULL ] , & t65 . mField0 [ 0ULL ]
, & t65 . mField2 [ 0ULL ] , & t63 . mField0 [ 0ULL ] , & t63 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t649_idx_0 = hg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & ig_efOut [ 0ULL ] , & t26 . mField0 [ 0ULL ]
, & t26 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , & t36 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t650_idx_0 = ig_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & jg_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ]
, & t31 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t651_idx_0 = jg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & kg_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ]
, & t60 . mField2 [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t652_idx_0 = kg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & lg_efOut [ 0ULL ] , & t67 . mField0 [ 0ULL ]
, & t67 . mField2 [ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t653_idx_0 = lg_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & mg_efOut [ 0ULL ] , & t35 . mField0 [ 0ULL ]
, & t35 . mField2 [ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t75 [ 0ULL ] , &
t78 [ 0ULL ] , & t76 [ 0ULL ] ) ; t654_idx_0 = mg_efOut [ 0 ] ; t563 [ 0ULL ]
= 0.0 ; t563 [ 1ULL ] = - ( t676 * t879 / 9.9826885 ) ; t563 [ 2ULL ] = - (
t676 * Double_Acting_Actuator_TL_chamber_A_h_I * t879 / 840.0178709300053 ) ;
t563 [ 3ULL ] = 0.0 ; t563 [ 4ULL ] = - ( t683 * t680 / 9.9820209492500016 )
; t563 [ 5ULL ] = - ( t683 * Double_Acting_Actuator_TL_chamber_B_h_I * t680 /
838.56501655005513 ) ; t563 [ 6ULL ] = - 0.0 ; t563 [ 7ULL ] = - 0.0 ; t563 [
8ULL ] = - 0.0 ; t563 [ 9ULL ] = 0.0 ; t563 [ 10ULL ] = - 0.0 ; t563 [ 11ULL
] = - 0.0 ; t563 [ 12ULL ] = - 0.0 ; t563 [ 13ULL ] = - 0.0 ; t563 [ 14ULL ]
= - 0.0 ; t563 [ 15ULL ] = - 0.0 ; t563 [ 16ULL ] = - 0.0 ; t563 [ 17ULL ] =
- 0.0 ; t563 [ 18ULL ] = - 0.0 ; t563 [ 19ULL ] = - 0.0 ; t563 [ 20ULL ] = -
0.0 ; t563 [ 21ULL ] = - 0.0 ; t563 [ 22ULL ] = 0.0 ; t563 [ 23ULL ] = 0.0 ;
t563 [ 24ULL ] = - 0.0 ; t563 [ 25ULL ] = ( X [ 31ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) - ( ( t659 * t661 - t657 * X [ 34ULL ]
) + t878 * 100.0 ) ) / 3.8999865911501488E+6 ; t878 = t628 [ 0ULL ] - ( t659
* t661 + t657 * X [ 34ULL ] ) ; t563 [ 26ULL ] = t878 / 543289.72639146936 ;
t563 [ 27ULL ] = ( - X [ 31ULL ] / ( Check_Valve_TL_convection_A_mdot_abs ==
0.0 ? 1.0E-16 : Check_Valve_TL_convection_A_mdot_abs ) - ( ( t665 * t667 - X
[ 34ULL ] * t663 ) + t881 * 100.0 ) ) / 3.8999865911501488E+6 ; t881 = t623 [
0ULL ] - ( t665 * t667 + X [ 34ULL ] * t663 ) ; t563 [ 28ULL ] = t881 /
543289.72639146936 ; t881 = ( 1.0 - t910 * t910 ) * t882 ; t882 = t908 * t908
* t937 * 0.8192 ; t908 = ( pmf_sqrt ( 1.0 - t910 * t910 * 0.5904 ) - t910 *
0.64 ) * ( t881 / ( t882 == 0.0 ? 1.0E-16 : t882 ) ) ; t937 = t910 * 0.64 +
pmf_sqrt ( 1.0 - t910 * t910 * 0.5904 ) ; t563 [ 29ULL ] = - ( t908 / ( t937
== 0.0 ? 1.0E-16 : t937 ) * 1.0E-5 ) / 1.4031189267149412E+6 ; t563 [ 30ULL ]
= ( X [ 39ULL ] / ( Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs
== 0.0 ? 1.0E-16 : Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs
) - ( ( t670 * t671 - t668 * X [ 44ULL ] ) + t669 * 100.0 ) ) /
3.9066553009103443E+6 ; t563 [ 31ULL ] = ( t630_idx_0 - ( t670 * t671 + t668
* X [ 44ULL ] ) ) / 543182.64585967362 ; t563 [ 32ULL ] = - 1.01325 ; t563 [
33ULL ] = - t675 / 4.1882734693877541 ; t563 [ 34ULL ] = ( X [ 46ULL ] / (
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs ) - ( ( t677 * t678
- Double_Acting_Actuator_TL_chamber_B_convection_A_step_neg * X [ 49ULL ] ) +
Double_Acting_Actuator_TL_chamber_B_convection_A_pv * 100.0 ) ) /
3.9010095147902463E+6 ; t563 [ 35ULL ] = ( t695 - ( t677 * t678 +
Double_Acting_Actuator_TL_chamber_B_convection_A_step_neg * X [ 49ULL ] ) ) /
543423.05492031155 ; t563 [ 36ULL ] = 0.0 ; t563 [ 37ULL ] = 1.01325 ; t563 [
38ULL ] = - t682 / 4.1887953489795917 ; t563 [ 39ULL ] = t844 ; t563 [ 40ULL
] = ( X [ 55ULL ] / ( Fixed_Displacement_Motor_TL_convection_A_mdot_abs ==
0.0 ? 1.0E-16 : Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) - ( (
t684 * t687 - t685 * X [ 60ULL ] ) +
Fixed_Displacement_Motor_TL_convection_A_pv * 100.0 ) ) /
3.9000368960016938E+6 ; t563 [ 41ULL ] = ( U_idx_2 - ( t684 * t687 + t685 * X
[ 60ULL ] ) ) / 543287.58438645373 ; t563 [ 42ULL ] = ( ( ( - X [ 31ULL ] - X
[ 56ULL ] ) - X [ 57ULL ] ) / (
Fixed_Displacement_Motor_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Fixed_Displacement_Motor_TL_convection_A_mdot_abs ) - ( ( t690 * t693 - X [
60ULL ] * t691 ) + Fixed_Displacement_Motor_TL_convection_B_pv * 100.0 ) ) /
3.8999865911501488E+6 ; t563 [ 43ULL ] = ( U_idx_3 - ( t690 * t693 + X [
60ULL ] * t691 ) ) / 543289.72639146936 ; t563 [ 44ULL ] = - ( ( 1.01325 - X
[ 54ULL ] ) * 7.04347826086956E-15 / ( Gas_Charged_Accumulator_TL_Phi_A ==
0.0 ? 1.0E-16 : Gas_Charged_Accumulator_TL_Phi_A ) * 100000.0 + t697 ) ; t563
[ 45ULL ] = - 0.48379123826358883 + t838 ; t563 [ 46ULL ] = - ( t689 * 100.0
) ; t563 [ 47ULL ] = ( ( ( - X [ 64ULL ] - X [ 65ULL ] ) + X [ 66ULL ] ) / (
t699 == 0.0 ? 1.0E-16 : t699 ) - ( ( t701 * t702 -
Gas_Charged_Accumulator_TL_convection_A_step_neg * X [ 71ULL ] ) +
Gas_Charged_Accumulator_TL_convection_A_pv * 100.0 ) ) /
3.9000368960016938E+6 ; t563 [ 48ULL ] = ( t792 - ( t701 * t702 +
Gas_Charged_Accumulator_TL_convection_A_step_neg * X [ 71ULL ] ) ) /
543287.58438645373 ; t563 [ 49ULL ] = - (
Gas_Charged_Accumulator_TL_gas_pressure + t780 ) / 100.17731875000001 ; t563
[ 50ULL ] = - Gas_Charged_Accumulator_TL_u_I / 4.1887953489795917 ; t563 [
51ULL ] = ( - X [ 39ULL ] / (
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Double_Acting_Actuator_TL_chamber_A_convection_A_mdot_abs ) - ( ( t671 * t704
- t698 * X [ 74ULL ] ) + Gas_Charged_Accumulator_TL1_convection_A_pv * 100.0
) ) / 3.9066553009103443E+6 ; t563 [ 52ULL ] = ( t635_idx_0 - ( t671 * t704 +
t698 * X [ 74ULL ] ) ) / 543182.64585967362 ; t563 [ 53ULL ] = - ( t709 +
zc_int4 ) / 100.17731875000001 ; t563 [ 54ULL ] = 0.0 ; t563 [ 55ULL ] = 0.0
; t563 [ 56ULL ] = - t707 / 4.1887953489795917 ; t563 [ 57ULL ] = 0.0 ; t908
= 41.953015867642748 ; t563 [ 58ULL ] = t908 / 3.9000368960016938E+6 + ( ( (
- X [ 55ULL ] - X [ 77ULL ] ) + X [ 56ULL ] ) / (
Interface_TL_IL1_convection_TL_mdot_abs == 0.0 ? 1.0E-16 :
Interface_TL_IL1_convection_TL_mdot_abs ) - ( ( t687 *
Interface_TL_IL1_convection_TL_step_pos - 83.9060317352855 * t710 ) +
Interface_TL_IL1_convection_TL_pv * 100.0 ) ) / 3.9000368960016938E+6 ; t910
= - 41.953015867642748 ; t563 [ 59ULL ] = t910 / 543287.58438645373 + (
t636_idx_0 - ( t687 * Interface_TL_IL1_convection_TL_step_pos +
83.9060317352855 * t710 ) ) / 543287.58438645373 ; t563 [ 60ULL ] = ( ( - X [
66ULL ] + X [ 31ULL ] ) / ( Interface_TL_IL2_convection_TL_mdot_abs == 0.0 ?
1.0E-16 : Interface_TL_IL2_convection_TL_mdot_abs ) - ( ( t667 * t713 -
Interface_TL_IL2_convection_TL_step_neg * X [ 81ULL ] ) +
Interface_TL_IL2_convection_TL_pv * 100.0 ) ) / 3.8999865911501488E+6 ; t563
[ 61ULL ] = ( t637_idx_0 - ( t667 * t713 +
Interface_TL_IL2_convection_TL_step_neg * X [ 81ULL ] ) ) /
543289.72639146936 ; t563 [ 62ULL ] = - intrm_sf_mf_247 ; t563 [ 63ULL ] = (
- X [ 46ULL ] / ( Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs
== 0.0 ? 1.0E-16 : Double_Acting_Actuator_TL_chamber_B_convection_A_mdot_abs
) - ( ( t678 * t716 - t714 * X [ 83ULL ] ) + t715 * 100.0 ) ) /
3.9010095147902463E+6 ; t563 [ 64ULL ] = ( t638_idx_0 - ( t678 * t716 + t714
* X [ 83ULL ] ) ) / 543423.05492031155 ; t563 [ 65ULL ] = - intrm_sf_mf_251 ;
t563 [ 66ULL ] = - ( 0.5 * t717 + t718 * 100.0 ) / 2.0906000000000002 ; t563
[ 67ULL ] = ( t639_idx_0 - 0.5 * t717 ) / 4.1812000000000005 ; t563 [ 68ULL ]
= - intrm_sf_mf_252 ; t563 [ 69ULL ] = ( X [ 56ULL ] / (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs == 0.0 ? 1.0E-16
: Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) - ( ( t693 *
t726 - t725 * X [ 88ULL ] ) +
Pressure_Relief_Valve_TL_relief_valve_convection_A_pv * 100.0 ) ) /
3.8999865911501488E+6 ; t563 [ 70ULL ] = ( t640_idx_0 - ( t693 * t726 + t725
* X [ 88ULL ] ) ) / 543289.72639146936 ; t563 [ 71ULL ] = ( - X [ 56ULL ] / (
Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs == 0.0 ? 1.0E-16
: Pressure_Relief_Valve_TL_relief_valve_convection_A_mdot_abs ) - ( ( t687 *
t728 - X [ 88ULL ] * t729 ) + t724 * 100.0 ) ) / 3.9000368960016938E+6 ; t563
[ 72ULL ] = ( t641_idx_0 - ( t687 * t728 + X [ 88ULL ] * t729 ) ) /
543287.58438645373 ; U_idx_2 = pmf_sqrt ( pmf_sqrt ( ( X [ 54ULL ] - 1.01325
) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 + t727 * t727 ) ) ; t937 = 1.0 -
Pressure_Relief_Valve_TL_relief_valve_area_ratio *
Pressure_Relief_Valve_TL_relief_valve_area_ratio ; t563 [ 73ULL ] = - ( ( X [
54ULL ] - 1.01325 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) * pmf_sqrt (
Pressure_Relief_Valve_TL_relief_valve_rho_avg * 2.0 / ( t937 == 0.0 ? 1.0E-16
: t937 ) ) * t722 * 64000.0 ) ; t563 [ 74ULL ] = ( X [ 64ULL ] / ( t735 ==
0.0 ? 1.0E-16 : t735 ) - ( ( t702 * t740 - t739 * X [ 92ULL ] ) + t737 *
100.0 ) ) / 3.9000368960016938E+6 ; t563 [ 75ULL ] = ( t642_idx_0 - ( t702 *
t740 + t739 * X [ 92ULL ] ) ) / 543287.58438645373 ; t563 [ 76ULL ] = ( - X [
64ULL ] / ( t735 == 0.0 ? 1.0E-16 : t735 ) - ( ( t746 * t747 - X [ 92ULL ] *
t745 ) + t743 * 100.0 ) ) / 3.9000368960016938E+6 ; t563 [ 77ULL ] = (
t643_idx_0 - ( t746 * t747 + X [ 92ULL ] * t745 ) ) / 543287.58438645373 ;
U_idx_2 = pmf_sqrt ( pmf_sqrt ( ( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] -
1.01325 ) * 1.0E+10 + t741 * t741 ) ) ; t937 = 1.0 - t734 * t734 ; t563 [
78ULL ] = - ( ( X [ 11ULL ] - 1.01325 ) / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) * pmf_sqrt ( t736 * 2.0 / ( t937 == 0.0 ? 1.0E-16 : t937 ) ) * t733
* 64000.0 ) ; t563 [ 79ULL ] = t908 / 3.9000368960016938E+6 + ( X [ 77ULL ] /
( t752 == 0.0 ? 1.0E-16 : t752 ) - ( ( t687 * t753 - 83.9060317352855 *
piece89 ) + t754 * 100.0 ) ) / 3.9000368960016938E+6 ; t563 [ 80ULL ] = t910
/ 543287.58438645373 + ( t644_idx_0 - ( t687 * t753 + 83.9060317352855 *
piece89 ) ) / 543287.58438645373 ; t563 [ 81ULL ] = t908 /
3.9000368960016938E+6 + ( X [ 57ULL ] / ( t755 == 0.0 ? 1.0E-16 : t755 ) - (
( t759 * t760 - 83.9060317352855 * t761 ) + t758 * 100.0 ) ) /
3.9000368960016938E+6 ; t563 [ 82ULL ] = t910 / 543287.58438645373 + (
t645_idx_0 - ( t759 * t760 + 83.9060317352855 * t761 ) ) / 543287.58438645373
; t563 [ 83ULL ] = t908 / 3.9000368960016938E+6 + ( ( X [ 64ULL ] + X [ 65ULL
] ) / ( t766 == 0.0 ? 1.0E-16 : t766 ) - ( ( t747 *
Reservoir_TL2_convection_A_step_pos - 83.9060317352855 * t764 ) +
Reservoir_TL2_convection_A_pv * 100.0 ) ) / 3.9000368960016938E+6 ; t563 [
84ULL ] = t910 / 543287.58438645373 + ( t646_idx_0 - ( t747 *
Reservoir_TL2_convection_A_step_pos + 83.9060317352855 * t764 ) ) /
543287.58438645373 ; t563 [ 85ULL ] = 0.0 ; t563 [ 86ULL ] = t789 ; U_idx_2 =
pmf_sqrt ( pmf_sqrt ( Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff *
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff * 1.0E+10 + t769 * t769 )
) ; t563 [ 87ULL ] = - ( Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_p_diff /
( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) * pmf_sqrt (
Servovalve2_Fixed_Orifice_A_Fixed_Orifice_A_rho_avg * 2.0 ) *
0.13999999999999999 ) ; U_idx_2 = pmf_sqrt ( pmf_sqrt ( t771 * t771 * 1.0E+10
+ t773 * t773 ) ) ; t563 [ 88ULL ] = - ( t771 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) * pmf_sqrt ( Servovalve2_Fixed_Orifice_B_Fixed_Orifice_B_rho_avg *
2.0 ) * 0.13999999999999999 ) ; t563 [ 89ULL ] = 0.0 ; U_idx_2 = pmf_sqrt (
pmf_sqrt ( ( X [ 26ULL ] - 1.01325 ) * ( X [ 26ULL ] - 1.01325 ) * 1.0E+10 +
zc_int10 * zc_int10 ) ) ; t695 = - ( ( X [ 26ULL ] - 1.01325 ) / ( U_idx_2 ==
0.0 ? 1.0E-16 : U_idx_2 ) * pmf_sqrt (
Servovalve2_Main_Valve_Orifice_AT_Orifice_rho_avg * 2.0 ) * t785 * 70000.0 )
; t563 [ 90ULL ] = t695 / 27.844144285538341 ; t695 = 993.22507500000017 *
t832 ; t563 [ 91ULL ] = - ( X [ 103ULL ] * X [ 103ULL ] ) / ( t695 == 0.0 ?
1.0E-16 : t695 ) * cos ( t829 ) ; U_idx_2 = pmf_sqrt ( pmf_sqrt ( ( X [ 4ULL
] - 1.01325 ) * ( X [ 4ULL ] - 1.01325 ) * 1.0E+10 + t836 * t836 ) ) ; t563 [
92ULL ] = - ( ( X [ 4ULL ] - 1.01325 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2
) * pmf_sqrt ( Servovalve2_Main_Valve_Orifice_BT_Orifice_rho_avg * 2.0 ) *
t835 * 70000.0 ) ; t695 = 993.22507500000017 * zc_int20 ; t563 [ 93ULL ] = -
( - ( t778 * t778 ) / ( t695 == 0.0 ? 1.0E-16 : t695 ) * cos ( t696 ) ) ;
U_idx_2 = pmf_sqrt ( pmf_sqrt ( t781 * t781 * 1.0E+10 + t840 * t840 ) ) ;
t563 [ 94ULL ] = - ( t781 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) * pmf_sqrt
( t782 * 2.0 ) * t834 * 70000.0 ) ; t695 = intrm_sf_mf_63 * t841 ; t563 [
95ULL ] = - ( - ( X [ 103ULL ] * X [ 103ULL ] ) / ( t695 == 0.0 ? 1.0E-16 :
t695 ) * cos ( zc_int31 ) ) ; U_idx_2 = pmf_sqrt ( pmf_sqrt (
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff *
Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff * 1.0E+10 + t783 * t783 ) )
; t695 = - ( Servovalve2_Main_Valve_Orifice_PB_Orifice_p_diff / ( U_idx_2 ==
0.0 ? 1.0E-16 : U_idx_2 ) * pmf_sqrt (
Servovalve2_Main_Valve_Orifice_PB_Orifice_rho_avg * 2.0 ) * t777 * 70000.0 )
; t563 [ 96ULL ] = t695 / 27.844144285538341 ; t695 = intrm_sf_mf_92 * t842 ;
t563 [ 97ULL ] = - ( X [ 104ULL ] * X [ 104ULL ] ) / ( t695 == 0.0 ? 1.0E-16
: t695 ) * cos ( zc_int40 ) ; t563 [ 98ULL ] = 0.0 ; t563 [ 99ULL ] = X [
16ULL ] * 7.8E-5 * intrm_sf_mf_39 ; t563 [ 100ULL ] = X [ 16ULL ] * - 7.8E-5
* t772 ; U_idx_2 = pmf_sqrt ( pmf_sqrt ( Servovalve2_Nozzle_A_Nozzle_A_p_diff
* Servovalve2_Nozzle_A_Nozzle_A_p_diff * 1.0E+10 + zc_int42 * zc_int42 ) ) ;
t695 = - ( Servovalve2_Nozzle_A_Nozzle_A_p_diff / ( U_idx_2 == 0.0 ? 1.0E-16
: U_idx_2 ) * pmf_sqrt ( t768 * 2.0 ) * zc_int41 * 70000.0 ) ; t563 [ 101ULL
] = t695 / 5.9432407902199156 ; U_idx_2 = pmf_sqrt ( pmf_sqrt (
Servovalve2_Nozzle_B_Nozzle_B_p_diff * Servovalve2_Nozzle_B_Nozzle_B_p_diff *
1.0E+10 + zc_int44 * zc_int44 ) ) ; t695 = - (
Servovalve2_Nozzle_B_Nozzle_B_p_diff / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 )
* pmf_sqrt ( Servovalve2_Nozzle_B_Nozzle_B_rho_avg * 2.0 ) * zc_int43 *
70000.0 ) ; t563 [ 102ULL ] = t695 / 5.9432407902199156 ; t563 [ 103ULL ] = -
0.0 ; t563 [ 104ULL ] = ( X [ 57ULL ] / ( t755 == 0.0 ? 1.0E-16 : t755 ) - (
( t693 * t759 - t757 * X [ 115ULL ] ) +
x3_Way_Directional_Valve_TL_orifice_AT_convection_A_pv * 100.0 ) ) /
3.8999865911501488E+6 ; t563 [ 105ULL ] = ( t647_idx_0 - ( t693 * t759 + t757
* X [ 115ULL ] ) ) / 543289.72639146936 ; t563 [ 106ULL ] = ( - X [ 57ULL ] /
( t755 == 0.0 ? 1.0E-16 : t755 ) - ( ( t760 * t795 - X [ 115ULL ] * t796 ) +
x3_Way_Directional_Valve_TL_orifice_AT_convection_B_pv * 100.0 ) ) /
3.9000368960016938E+6 ; t563 [ 107ULL ] = ( t648_idx_0 - ( t760 * t795 + X [
115ULL ] * t796 ) ) / 543287.58438645373 ; U_idx_2 = pmf_sqrt ( pmf_sqrt ( (
X [ 54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 + t794 * t794 )
) ; t695 = 1.0 - t767 * t767 ; t695 = - ( ( X [ 54ULL ] - 1.01325 ) / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) * pmf_sqrt (
x3_Way_Directional_Valve_TL_orifice_AT_rho_avg * 2.0 / ( t695 == 0.0 ?
1.0E-16 : t695 ) ) * intrm_sf_mf_228 * 64000.0 ) ; t563 [ 108ULL ] = t695 /
20.904547289835946 ; t563 [ 109ULL ] = ( - X [ 31ULL ] / (
Check_Valve_TL_convection_A_mdot_abs == 0.0 ? 1.0E-16 :
Check_Valve_TL_convection_A_mdot_abs ) - ( ( t661 * t665 - t663 * X [ 118ULL
] ) + t662 * 100.0 ) ) / 3.8999865911501488E+6 ; t563 [ 110ULL ] = (
t649_idx_0 - ( t661 * t665 + t663 * X [ 118ULL ] ) ) / 543289.72639146936 ;
t563 [ 111ULL ] = ( X [ 31ULL ] / ( Check_Valve_TL_convection_A_mdot_abs ==
0.0 ? 1.0E-16 : Check_Valve_TL_convection_A_mdot_abs ) - ( ( t659 * t693 -
t657 * X [ 118ULL ] ) + t656 * 100.0 ) ) / 3.8999865911501488E+6 ; t563 [
112ULL ] = ( t650_idx_0 - ( t659 * t693 + t657 * X [ 118ULL ] ) ) /
543289.72639146936 ; t695 = pmf_sqrt ( pmf_sqrt ( t803 * t803 * 1.0E+10 +
t801 * t801 ) ) ; U_idx_2 = 1.0 - t798 * t798 ; t563 [ 113ULL ] = - ( t803 /
( t695 == 0.0 ? 1.0E-16 : t695 ) * pmf_sqrt (
x3_Way_Directional_Valve_TL_orifice_PA_rho_avg * 2.0 / ( U_idx_2 == 0.0 ?
1.0E-16 : U_idx_2 ) ) * intrm_sf_mf_234 * 64000.0 ) ; t563 [ 114ULL ] = ( X [
65ULL ] / ( t804 == 0.0 ? 1.0E-16 : t804 ) - ( ( t702 * t810 - t809 * X [
121ULL ] ) + t808 * 100.0 ) ) / 3.9000368960016938E+6 ; t563 [ 115ULL ] = (
t651_idx_0 - ( t702 * t810 + t809 * X [ 121ULL ] ) ) / 543287.58438645373 ;
t563 [ 116ULL ] = ( - X [ 65ULL ] / ( t804 == 0.0 ? 1.0E-16 : t804 ) - ( (
t747 * t814 - X [ 121ULL ] * t813 ) + t812 * 100.0 ) ) /
3.9000368960016938E+6 ; t563 [ 117ULL ] = ( t652_idx_0 - ( t747 * t814 + X [
121ULL ] * t813 ) ) / 543287.58438645373 ; t695 = pmf_sqrt ( pmf_sqrt ( ( X [
11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) ) ; U_idx_2 = 1.0 - t802 *
t802 ; t563 [ 118ULL ] = - ( ( X [ 11ULL ] - 1.01325 ) / ( t695 == 0.0 ?
1.0E-16 : t695 ) * pmf_sqrt ( t806 * 2.0 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ) * t787 * 64000.0 ) ; t563 [ 119ULL ] = ( X [ 66ULL ] / ( t818 ==
0.0 ? 1.0E-16 : t818 ) - ( ( t667 * t824 - t822 * X [ 124ULL ] ) + t820 *
100.0 ) ) / 3.8999865911501488E+6 ; t563 [ 120ULL ] = ( t653_idx_0 - ( t667 *
t824 + t822 * X [ 124ULL ] ) ) / 543289.72639146936 ; t563 [ 121ULL ] = ( - X
[ 66ULL ] / ( t818 == 0.0 ? 1.0E-16 : t818 ) - ( ( t702 * t828 - X [ 124ULL ]
* t827 ) + t826 * 100.0 ) ) / 3.9000368960016938E+6 ; t563 [ 122ULL ] = (
t654_idx_0 - ( t702 * t828 + X [ 124ULL ] * t827 ) ) / 543287.58438645373 ;
t695 = pmf_sqrt ( pmf_sqrt ( t830 * t830 * 1.0E+10 + t825 * t825 ) ) ;
U_idx_2 = 1.0 - t816 * t816 ; t695 = - ( t830 / ( t695 == 0.0 ? 1.0E-16 :
t695 ) * pmf_sqrt ( t819 * 2.0 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) *
t788 * 64000.0 ) ; t563 [ 123ULL ] = t695 / 20.904547289835946 ; t563 [
124ULL ] = - 0.0 ; t563 [ 125ULL ] = - 0.0 ; for ( b = 0 ; b < 126 ; b ++ ) {
out . mX [ b ] = t563 [ b ] ; } ( void ) LC ; ( void ) t1010 ; return 0 ; }
