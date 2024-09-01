#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_m.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_m ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t183 , NeDsMethodOutput * t184 ) { ETTS0 b_efOut ;
ETTS0 efOut ; ETTS0 h_efOut ; ETTS0 i_efOut ; ETTS0 o_efOut ; ETTS0 p_efOut ;
ETTS0 t5 ; ETTS0 t6 ; ETTS0 v_efOut ; ETTS0 w_efOut ; PmRealVector out ;
real_T X [ 126 ] ; real_T ab_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ; real_T
c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T e_efOut
[ 1 ] ; real_T f_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T j_efOut [ 1 ] ;
real_T k_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T s_efOut
[ 1 ] ; real_T t116 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T u_efOut [ 1 ] ;
real_T x_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
Double_Acting_Actuator_TL_chamber_A_dUdp ; real_T
Gas_Charged_Accumulator_TL1_h_I ; real_T Gas_Charged_Accumulator_TL1_mdot_neg
; real_T Gas_Charged_Accumulator_TL1_mdot_pos ; real_T
Gas_Charged_Accumulator_TL1_rho_I ; real_T Gas_Charged_Accumulator_TL_dUdT ;
real_T Gas_Charged_Accumulator_TL_h_I ; real_T
Gas_Charged_Accumulator_TL_rho_I ; real_T t11 ; real_T t110_idx_0 ; real_T
t133 ; real_T t135 ; real_T t137 ; real_T t138 ; real_T t139 ; real_T t140 ;
real_T t141 ; real_T t142 ; real_T t143 ; real_T t144 ; real_T t147 ; real_T
t148 ; real_T t149 ; real_T t151 ; real_T t152 ; real_T t153 ; real_T t154 ;
real_T t155 ; real_T t156 ; real_T t157 ; size_t t13 [ 1 ] ; size_t t14 [ 1 ]
; size_t t16 [ 1 ] ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_17 ;
int32_T M_idx_8 ; int32_T b ; M_idx_0 = t183 -> mM . mX [ 0 ] ; M_idx_1 =
t183 -> mM . mX [ 1 ] ; M_idx_8 = t183 -> mM . mX [ 8 ] ; M_idx_17 = t183 ->
mM . mX [ 17 ] ; for ( b = 0 ; b < 126 ; b ++ ) { X [ b ] = t183 -> mX . mX [
b ] ; } out = t184 -> mM ; t116 [ 0ULL ] = X [ 0ULL ] ; t13 [ 0 ] = 11ULL ;
t14 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ]
, & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t116 [ 0ULL ] , & t13 [ 0ULL ] ,
& t14 [ 0ULL ] ) ; t5 = efOut ; t116 [ 0ULL ] = X [ 1ULL ] ; t16 [ 0 ] =
12ULL ; tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , &
b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t116 [ 0ULL ] , & t16 [ 0ULL ] ,
& t14 [ 0ULL ] ) ; t6 = b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [
0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField5 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 =
c_efOut [ 0 ] ; t133 = t110_idx_0 ; tlu2_2d_linear_linear_value ( & d_efOut [
0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField6 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 =
d_efOut [ 0 ] ; t135 = t110_idx_0 ; tlu2_2d_linear_linear_value ( & e_efOut [
0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 =
e_efOut [ 0 ] ; Double_Acting_Actuator_TL_chamber_A_dUdp = t110_idx_0 ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] ,
& t5 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t13 [ 0ULL ] , & t16 [ 0ULL
] , & t14 [ 0ULL ] ) ; t110_idx_0 = f_efOut [ 0 ] ; t137 = t110_idx_0 ;
tlu2_2d_linear_linear_value ( & g_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] ,
& t5 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t13 [ 0ULL ] , & t16 [ 0ULL
] , & t14 [ 0ULL ] ) ; t110_idx_0 = g_efOut [ 0 ] ; t139 = X [ 1ULL ] / (
t137 == 0.0 ? 1.0E-16 : t137 ) * 100.0 + t110_idx_0 ; t138 = X [ 2ULL ] *
0.01 + 1.0E-5 ; t149 = ( Double_Acting_Actuator_TL_chamber_A_dUdp - t133 *
t139 * 1000.0 ) * t137 * t138 ; Double_Acting_Actuator_TL_chamber_A_dUdp = (
t139 * t137 / ( t135 == 0.0 ? 1.0E-16 : t135 ) * 0.01 - X [ 0ULL ] * t133 ) *
t138 ; t116 [ 0ULL ] = X [ 3ULL ] ; tlu2_linear_linear_prelookup ( & h_efOut
. mField0 [ 0ULL ] , & h_efOut . mField1 [ 0ULL ] , & h_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t116 [ 0ULL ] , &
t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t5 = h_efOut ; t116 [ 0ULL ] = X [ 4ULL ] ;
tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t116 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t6
= i_efOut ; tlu2_2d_linear_linear_value ( & j_efOut [ 0ULL ] , & t5 . mField0
[ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t13 [ 0ULL ] , &
t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 = j_efOut [ 0 ] ; t139 =
t110_idx_0 ; tlu2_2d_linear_linear_value ( & k_efOut [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t13 [
0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 = k_efOut [ 0 ] ;
t140 = t110_idx_0 ; tlu2_2d_linear_linear_value ( & l_efOut [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t13 [
0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 = l_efOut [ 0 ] ;
t141 = t110_idx_0 ; tlu2_2d_linear_linear_value ( & m_efOut [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t13 [
0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 = m_efOut [ 0 ] ;
t142 = t110_idx_0 ; tlu2_2d_linear_linear_value ( & n_efOut [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t13 [
0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t110_idx_0 = n_efOut [ 0 ] ;
t144 = X [ 4ULL ] / ( t142 == 0.0 ? 1.0E-16 : t142 ) * 100.0 + t110_idx_0 ;
t143 = X [ 5ULL ] * - 0.01 + 1.0E-5 ; t151 = ( t141 - t139 * t144 * 1000.0 )
* t142 * t143 ; t141 = ( t144 * t142 / ( t140 == 0.0 ? 1.0E-16 : t140 ) *
0.01 - X [ 3ULL ] * t139 ) * t143 ; t116 [ 0ULL ] = X [ 10ULL ] ;
tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t116 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t6
= o_efOut ; t116 [ 0ULL ] = X [ 11ULL ] ; tlu2_linear_linear_prelookup ( &
p_efOut . mField0 [ 0ULL ] , & p_efOut . mField1 [ 0ULL ] , & p_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t116 [
0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t5 = p_efOut ;
tlu2_2d_linear_linear_value ( & q_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t13 [ 0ULL ] , & t16 [ 0ULL
] , & t14 [ 0ULL ] ) ; t110_idx_0 = q_efOut [ 0 ] ; t144 = t110_idx_0 ;
tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t13 [ 0ULL ] , & t16 [ 0ULL
] , & t14 [ 0ULL ] ) ; t110_idx_0 = r_efOut [ 0 ] ; t152 = t110_idx_0 ; t148
= ( - X [ 68ULL ] - X [ 69ULL ] ) + X [ 70ULL ] ; tlu2_2d_linear_linear_value
( & s_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , &
t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField8 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ;
t110_idx_0 = s_efOut [ 0 ] ; t147 = t110_idx_0 ; tlu2_2d_linear_linear_value
( & t_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , &
t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ;
t110_idx_0 = t_efOut [ 0 ] ; Gas_Charged_Accumulator_TL_rho_I = t110_idx_0 ;
tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t13 [ 0ULL ] , & t16 [ 0ULL
] , & t14 [ 0ULL ] ) ; t110_idx_0 = u_efOut [ 0 ] ;
Gas_Charged_Accumulator_TL_h_I = X [ 11ULL ] / (
Gas_Charged_Accumulator_TL_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_rho_I ) * 100.0 + t110_idx_0 ;
Gas_Charged_Accumulator_TL_dUdT = ( t147 - t144 *
Gas_Charged_Accumulator_TL_h_I * 1000.0 ) * X [ 72ULL ] *
Gas_Charged_Accumulator_TL_rho_I * 0.001 ; t153 = 0.008 - X [ 72ULL ] * 0.001
; t154 = t153 > 4.0E-9 ? t153 : 4.0E-9 ; t153 = pmf_pow ( 0.008 / ( t154 ==
0.0 ? 1.0E-16 : t154 ) , 1.4 ) * 1.01325 ; t11 = t148 < 0.0 ? t148 : 0.0 ;
t147 = t148 > 0.0 ? t148 : 0.0 ; t148 = t153 * 1.4 / ( t154 == 0.0 ? 1.0E-16
: t154 ) ; t116 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup ( &
v_efOut . mField0 [ 0ULL ] , & v_efOut . mField1 [ 0ULL ] , & v_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t116 [
0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t6 = v_efOut ; t116 [ 0ULL ] = X
[ 13ULL ] ; tlu2_linear_linear_prelookup ( & w_efOut . mField0 [ 0ULL ] , &
w_efOut . mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t116 [ 0ULL ] , & t16 [ 0ULL ] ,
& t14 [ 0ULL ] ) ; t5 = w_efOut ; tlu2_2d_linear_linear_value ( & x_efOut [
0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , & t5 . mField0 [
0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField5 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t116 [ 0 ] =
x_efOut [ 0 ] ; t153 = t116 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
y_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t116 [ 0
] = y_efOut [ 0 ] ; t154 = t116 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
ab_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , & t5
. mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField8 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t116 [
0 ] = ab_efOut [ 0 ] ; t155 = t116 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
bb_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , & t5
. mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField7 , & t13 [ 0ULL ] , & t16 [ 0ULL ] , & t14 [ 0ULL ] ) ; t116 [
0 ] = bb_efOut [ 0 ] ; Gas_Charged_Accumulator_TL1_rho_I = t116 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t13 [ 0ULL ] , & t16 [ 0ULL
] , & t14 [ 0ULL ] ) ; t116 [ 0 ] = cb_efOut [ 0 ] ; t110_idx_0 = t116 [ 0ULL
] ; Gas_Charged_Accumulator_TL1_h_I = X [ 13ULL ] / (
Gas_Charged_Accumulator_TL1_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_rho_I ) * 100.0 + t110_idx_0 ; t156 = 0.008 - X [
75ULL ] * 0.001 ; t157 = t156 > 4.0000000000000004E-11 ? t156 :
4.0000000000000004E-11 ; t156 = pmf_pow ( 0.008 / ( t157 == 0.0 ? 1.0E-16 :
t157 ) , 1.4 ) * 1.01325 ; if ( - X [ 43ULL ] < 0.0 ) {
Gas_Charged_Accumulator_TL1_mdot_neg = - X [ 43ULL ] ; } else {
Gas_Charged_Accumulator_TL1_mdot_neg = 0.0 ; } if ( - X [ 43ULL ] > 0.0 ) {
Gas_Charged_Accumulator_TL1_mdot_pos = - X [ 43ULL ] ; } else {
Gas_Charged_Accumulator_TL1_mdot_pos = 0.0 ; } t156 = t156 * 1.4 / ( t157 ==
0.0 ? 1.0E-16 : t157 ) ; if ( M_idx_0 != 0 ) { t110_idx_0 = ( t148 * 100000.0
+ t147 * 1.0E+10 / ( Gas_Charged_Accumulator_TL_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_rho_I ) ) + 1.0E+10 ; t157 = 1.0 / ( t110_idx_0 ==
0.0 ? 1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else if ( M_idx_1 != 0 ) {
t110_idx_0 = ( t148 * 100000.0 + 1.0E+10 ) - t11 * 1.0E+10 / (
Gas_Charged_Accumulator_TL_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_rho_I ) ; t157 = 1.0 / ( t110_idx_0 == 0.0 ?
1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else { t157 = 1.0 / ( t148 == 0.0 ?
1.0E-16 : t148 ) * 1.0E+6 ; } if ( M_idx_0 != 0 ) { t110_idx_0 = ( t148 *
100000.0 + t147 * 1.0E+10 / ( Gas_Charged_Accumulator_TL_rho_I == 0.0 ?
1.0E-16 : Gas_Charged_Accumulator_TL_rho_I ) ) + 1.0E+10 ; t147 = 1.0 / (
t110_idx_0 == 0.0 ? 1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else if ( M_idx_1 !=
0 ) { t110_idx_0 = ( t148 * 100000.0 + 1.0E+10 ) - t11 * 1.0E+10 / (
Gas_Charged_Accumulator_TL_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL_rho_I ) ; t147 = 1.0 / ( t110_idx_0 == 0.0 ?
1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else { t147 = 1.0 / ( t148 == 0.0 ?
1.0E-16 : t148 ) * 1.0E+6 ; } if ( M_idx_8 != 0 ) { t110_idx_0 = ( t156 *
100000.0 + Gas_Charged_Accumulator_TL1_mdot_pos * 1.0E+10 / (
Gas_Charged_Accumulator_TL1_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_rho_I ) ) + 1.0E+10 ; t148 = 1.0 / ( t110_idx_0
== 0.0 ? 1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else if ( M_idx_17 != 0 ) {
t110_idx_0 = ( t156 * 100000.0 + 1.0E+10 ) -
Gas_Charged_Accumulator_TL1_mdot_neg * 1.0E+10 / (
Gas_Charged_Accumulator_TL1_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_rho_I ) ; t148 = 1.0 / ( t110_idx_0 == 0.0 ?
1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else { t148 = 1.0 / ( t156 == 0.0 ?
1.0E-16 : t156 ) * 1.0E+6 ; } if ( M_idx_8 != 0 ) { t110_idx_0 = ( t156 *
100000.0 + Gas_Charged_Accumulator_TL1_mdot_pos * 1.0E+10 / (
Gas_Charged_Accumulator_TL1_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_rho_I ) ) + 1.0E+10 ; t11 = 1.0 / ( t110_idx_0 ==
0.0 ? 1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else if ( M_idx_17 != 0 ) {
t110_idx_0 = ( t156 * 100000.0 + 1.0E+10 ) -
Gas_Charged_Accumulator_TL1_mdot_neg * 1.0E+10 / (
Gas_Charged_Accumulator_TL1_rho_I == 0.0 ? 1.0E-16 :
Gas_Charged_Accumulator_TL1_rho_I ) ; t11 = 1.0 / ( t110_idx_0 == 0.0 ?
1.0E-16 : t110_idx_0 ) * 1.0E+11 ; } else { t11 = 1.0 / ( t156 == 0.0 ?
1.0E-16 : t156 ) * 1.0E+6 ; } t133 = - t133 * t137 * t138 / 9.9826885 ; t149
= t149 * 0.001 / 840.0178709300053 ; t135 = 1.0 / ( t135 == 0.0 ? 1.0E-16 :
t135 ) * t137 * t138 / 9.9826885 ; Double_Acting_Actuator_TL_chamber_A_dUdp =
Double_Acting_Actuator_TL_chamber_A_dUdp * 100.0 / 840.0178709300053 ; t137 =
- t139 * t142 * t143 / 9.9820209492500016 ; t139 = 1.0 / ( t140 == 0.0 ?
1.0E-16 : t140 ) * t142 * t143 / 9.9820209492500016 ; t140 = t141 * 100.0 /
838.56501655005513 ; t141 = - t144 * X [ 72ULL ] *
Gas_Charged_Accumulator_TL_rho_I * 0.001 ; t144 = (
Gas_Charged_Accumulator_TL_h_I * Gas_Charged_Accumulator_TL_rho_I / ( t152 ==
0.0 ? 1.0E-16 : t152 ) * 0.01 - X [ 10ULL ] * t144 ) * X [ 72ULL ] * 0.001 *
100.0 + t147 * Gas_Charged_Accumulator_TL_h_I *
Gas_Charged_Accumulator_TL_rho_I * 1.0E-6 ; out . mX [ 0 ] = t133 ; out . mX
[ 1 ] = t149 ; out . mX [ 2 ] = t135 ; out . mX [ 3 ] =
Double_Acting_Actuator_TL_chamber_A_dUdp ; out . mX [ 4 ] = 1.0 ; out . mX [
5 ] = t137 ; out . mX [ 6 ] = t151 * 0.001 / 838.56501655005513 ; out . mX [
7 ] = t139 ; out . mX [ 8 ] = t140 ; out . mX [ 9 ] = 1.0 ; out . mX [ 10 ] =
1.0 ; out . mX [ 11 ] = 1.0 ; out . mX [ 12 ] = - 0.01 ; out . mX [ 13 ] = -
0.035 ; out . mX [ 14 ] = t141 ; out . mX [ 15 ] =
Gas_Charged_Accumulator_TL_dUdT * 0.001 ; out . mX [ 16 ] = 1.0 / ( t152 ==
0.0 ? 1.0E-16 : t152 ) * X [ 72ULL ] * Gas_Charged_Accumulator_TL_rho_I *
0.001 + t157 * Gas_Charged_Accumulator_TL_rho_I * 1.0E-6 ; out . mX [ 17 ] =
t144 ; out . mX [ 18 ] = - t153 * X [ 75ULL ] *
Gas_Charged_Accumulator_TL1_rho_I * 0.001 ; out . mX [ 19 ] = ( t155 - t153 *
Gas_Charged_Accumulator_TL1_h_I * 1000.0 ) * X [ 75ULL ] *
Gas_Charged_Accumulator_TL1_rho_I * 0.001 * 0.001 ; out . mX [ 20 ] = 1.0 / (
t154 == 0.0 ? 1.0E-16 : t154 ) * X [ 75ULL ] *
Gas_Charged_Accumulator_TL1_rho_I * 0.001 + t148 *
Gas_Charged_Accumulator_TL1_rho_I * 1.0E-6 ; out . mX [ 21 ] = (
Gas_Charged_Accumulator_TL1_h_I * Gas_Charged_Accumulator_TL1_rho_I / ( t154
== 0.0 ? 1.0E-16 : t154 ) * 0.01 - X [ 12ULL ] * t153 ) * X [ 75ULL ] * 0.001
* 100.0 + t11 * Gas_Charged_Accumulator_TL1_h_I *
Gas_Charged_Accumulator_TL1_rho_I * 1.0E-6 ; out . mX [ 22 ] = 1.0 ; out . mX
[ 23 ] = 1.0 ; out . mX [ 24 ] = - 0.124 ; out . mX [ 25 ] = - 1.0 ; out . mX
[ 26 ] = 1.0 ; out . mX [ 27 ] = 1.0 ; out . mX [ 28 ] = 1.0 ; out . mX [ 29
] = 1.0 ; out . mX [ 30 ] = 1.0 ; out . mX [ 31 ] = 1.0 ; out . mX [ 32 ] = -
1.0 ; ( void ) LC ; ( void ) t184 ; return 0 ; }
