#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_duf.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_duf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t263 , NeDsMethodOutput * t264 ) { ETTS0 ab_efOut ;
ETTS0 b_efOut ; ETTS0 cb_efOut ; ETTS0 d_efOut ; ETTS0 db_efOut ; ETTS0
e_efOut ; ETTS0 efOut ; ETTS0 fb_efOut ; ETTS0 g_efOut ; ETTS0 h_efOut ;
ETTS0 hb_efOut ; ETTS0 ib_efOut ; ETTS0 j_efOut ; ETTS0 k_efOut ; ETTS0
kb_efOut ; ETTS0 m_efOut ; ETTS0 mb_efOut ; ETTS0 n_efOut ; ETTS0 nb_efOut ;
ETTS0 p_efOut ; ETTS0 pb_efOut ; ETTS0 r_efOut ; ETTS0 s_efOut ; ETTS0 t12 ;
ETTS0 t14 ; ETTS0 t21 ; ETTS0 t22 ; ETTS0 t23 ; ETTS0 t24 ; ETTS0 t25 ; ETTS0
t5 ; ETTS0 u_efOut ; ETTS0 w_efOut ; ETTS0 x_efOut ; PmRealVector out ;
real_T X [ 126 ] ; real_T bb_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T
eb_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T
i_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T
lb_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T
q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T t167 [ 1 ] ; real_T t168 [ 1 ]
; real_T t_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T intermediate_der569 ; real_T
intermediate_der675 ; real_T intermediate_der718 ; real_T intrm_sf_mf_233 ;
real_T t176 ; real_T t181 ; real_T t182 ; real_T t183 ; real_T t188 ; real_T
t190 ; real_T t191 ; real_T t192 ; real_T t193 ; real_T t194 ; real_T t197 ;
real_T t198 ; real_T t200 ; real_T t216 ; real_T t220 ; real_T t229 ; real_T
t232 ; real_T t233 ; real_T t238 ; real_T t241 ; real_T t245 ; real_T t253 ;
real_T t256 ; real_T t257 ; real_T t262 ; real_T
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ; real_T
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio ; size_t t27 [ 1 ] ;
size_t t28 [ 1 ] ; size_t t30 [ 1 ] ; int32_T b ; U_idx_2 = t263 -> mU . mX [
2 ] ; U_idx_3 = t263 -> mU . mX [ 3 ] ; for ( b = 0 ; b < 126 ; b ++ ) { X [
b ] = t263 -> mX . mX [ b ] ; } out = t264 -> mDUF ; t176 = ( ( ( - U_idx_2 +
0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( t176 <= 0.0 ) { t183 = 0.0 ; } else if ( t176 <=
0.005 ) { t183 = t176 * t176 * 100.50251256281406 ; } else if ( t176 <= 0.995
) { t183 = t176 * 1.0050251256281406 - 0.0025125628140703518 ; } else if (
t176 <= 1.0 ) { t183 = ( 1.0 - t176 ) * ( 1.0 - t176 ) * - 100.50251256281406
+ 1.0 ; } else { t183 = 1.0 ; } t181 = t183 * 9.9999900000000011E-5 + 1.0E-10
; t183 = ( ( ( U_idx_2 + 0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) -
1.0E-10 ) / 9.9999900000000011E-5 ; if ( t183 <= 0.0 ) { intrm_sf_mf_233 =
0.0 ; } else if ( t183 <= 0.005 ) { intrm_sf_mf_233 = t183 * t183 *
100.50251256281406 ; } else if ( t183 <= 0.995 ) { intrm_sf_mf_233 = t183 *
1.0050251256281406 - 0.0025125628140703518 ; } else if ( t183 <= 1.0 ) {
intrm_sf_mf_233 = ( 1.0 - t183 ) * ( 1.0 - t183 ) * - 100.50251256281406 +
1.0 ; } else { intrm_sf_mf_233 = 1.0 ; } t238 = intrm_sf_mf_233 *
9.9999900000000011E-5 + 1.0E-10 ; intrm_sf_mf_233 = ( ( ( - U_idx_3 +
0.00050000000000000044 ) * 0.01999998 + 1.0E-10 ) - 1.0E-10 ) /
9.9999900000000011E-5 ; if ( intrm_sf_mf_233 <= 0.0 ) { intermediate_der569 =
0.0 ; } else if ( intrm_sf_mf_233 <= 0.005 ) { intermediate_der569 =
intrm_sf_mf_233 * intrm_sf_mf_233 * 100.50251256281406 ; } else if (
intrm_sf_mf_233 <= 0.995 ) { intermediate_der569 = intrm_sf_mf_233 *
1.0050251256281406 - 0.0025125628140703518 ; } else if ( intrm_sf_mf_233 <=
1.0 ) { intermediate_der569 = ( 1.0 - intrm_sf_mf_233 ) * ( 1.0 -
intrm_sf_mf_233 ) * - 100.50251256281406 + 1.0 ; } else { intermediate_der569
= 1.0 ; } t253 = intermediate_der569 * 9.9999900000000011E-5 + 1.0E-10 ;
intermediate_der569 = ( ( ( U_idx_3 + 0.00050000000000000044 ) * 0.01999998 +
1.0E-10 ) - 1.0E-10 ) / 9.9999900000000011E-5 ; if ( intermediate_der569 <=
0.0 ) { t182 = 0.0 ; } else if ( intermediate_der569 <= 0.005 ) { t182 =
intermediate_der569 * intermediate_der569 * 100.50251256281406 ; } else if (
intermediate_der569 <= 0.995 ) { t182 = intermediate_der569 *
1.0050251256281406 - 0.0025125628140703518 ; } else if ( intermediate_der569
<= 1.0 ) { t182 = ( 1.0 - intermediate_der569 ) * ( 1.0 - intermediate_der569
) * - 100.50251256281406 + 1.0 ; } else { t182 = 1.0 ; } t188 = t182 *
9.9999900000000011E-5 + 1.0E-10 ; t182 = t181 / 0.01 ; t168 [ 0ULL ] = X [
114ULL ] ; t27 [ 0 ] = 11ULL ; t28 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25 = efOut ;
t168 [ 0ULL ] = X [ 54ULL ] ; t30 [ 0 ] = 12ULL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t168 [ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t21
= b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , & t21 . mField0 [ 0ULL ] , &
t21 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = c_efOut [ 0 ] ;
t256 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 116ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25
= d_efOut ; t168 [ 0 ] = 1.01325 ; tlu2_linear_linear_prelookup ( & e_efOut .
mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t168 [ 0ULL ] , & t30 [
0ULL ] , & t28 [ 0ULL ] ) ; t24 = e_efOut ; tlu2_2d_linear_linear_value ( &
f_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , &
t24 . mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField0 , & t27 [ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ;
U_idx_2 = f_efOut [ 0 ] ; t257 = U_idx_2 ; t167 [ 0ULL ] = X [ 114ULL ] ;
tlu2_linear_nearest_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t167 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25
= g_efOut ; t167 [ 0ULL ] = X [ 54ULL ] ; tlu2_linear_nearest_prelookup ( &
h_efOut . mField0 [ 0ULL ] , & h_efOut . mField1 [ 0ULL ] , & h_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t167 [
0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t14 = h_efOut ;
tlu2_2d_linear_nearest_value ( & i_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ] , & t14 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27 [ 0ULL ] , &
t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; U_idx_2 = i_efOut [ 0 ] ; t167 [ 0ULL ] = X
[ 116ULL ] ; tlu2_linear_nearest_prelookup ( & j_efOut . mField0 [ 0ULL ] , &
j_efOut . mField1 [ 0ULL ] , & j_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t167 [ 0ULL ] , & t27 [ 0ULL ] ,
& t28 [ 0ULL ] ) ; t25 = j_efOut ; tlu2_linear_nearest_prelookup ( & k_efOut
. mField0 [ 0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t168 [ 0ULL ] , &
t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t23 = k_efOut ;
tlu2_2d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27 [ 0ULL ] , &
t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = l_efOut [ 0 ] ; t262 = t167 [
0ULL ] ; t241 = ( U_idx_2 + t262 ) / 2.0 ; t256 = ( t256 + t257 ) / 2.0 ;
t192 = t181 * t256 * 2.0 ; t257 = t241 * t241 * 0.78539816339744828 / ( t192
== 0.0 ? 1.0E-16 : t192 ) * 54931.640625 ; t262 = t238 / 0.01 ; t168 [ 0ULL ]
= X [ 117ULL ] ; tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ]
, & m_efOut . mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] ,
& t28 [ 0ULL ] ) ; t12 = m_efOut ; t168 [ 0ULL ] = X [ 28ULL ] ;
tlu2_linear_linear_prelookup ( & n_efOut . mField0 [ 0ULL ] , & n_efOut .
mField1 [ 0ULL ] , & n_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t168 [ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25
= n_efOut ; tlu2_2d_linear_linear_value ( & o_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , & t25 . mField0 [ 0ULL ] , &
t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = o_efOut [ 0 ] ;
t245 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 119ULL ] ;
tlu2_linear_linear_prelookup ( & p_efOut . mField0 [ 0ULL ] , & p_efOut .
mField1 [ 0ULL ] , & p_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25
= p_efOut ; tlu2_2d_linear_linear_value ( & q_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , & t21 . mField0 [ 0ULL ] , &
t21 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = q_efOut [ 0 ] ;
t190 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 117ULL ] ;
tlu2_linear_nearest_prelookup ( & r_efOut . mField0 [ 0ULL ] , & r_efOut .
mField1 [ 0ULL ] , & r_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t12
= r_efOut ; t168 [ 0ULL ] = X [ 28ULL ] ; tlu2_linear_nearest_prelookup ( &
s_efOut . mField0 [ 0ULL ] , & s_efOut . mField1 [ 0ULL ] , & s_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t168 [
0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25 = s_efOut ;
tlu2_2d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27 [ 0ULL ] , &
t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = t_efOut [ 0 ] ; t191 = t167 [
0ULL ] ; t168 [ 0ULL ] = X [ 119ULL ] ; tlu2_linear_nearest_prelookup ( &
u_efOut . mField0 [ 0ULL ] , & u_efOut . mField1 [ 0ULL ] , & u_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t168 [
0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t21 = u_efOut ;
tlu2_2d_linear_nearest_value ( & v_efOut [ 0ULL ] , & t21 . mField0 [ 0ULL ]
, & t21 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ] , & t14 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27 [ 0ULL ] , &
t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = v_efOut [ 0 ] ; t192 = t167 [
0ULL ] ; t191 = ( t191 + t192 ) / 2.0 ; t192 = X [ 28ULL ] - X [ 54ULL ] ;
t245 = ( t245 + t190 ) / 2.0 ; intermediate_der675 = t238 * t245 * 2.0 ; t190
= t191 * t191 * 0.78539816339744828 / ( intermediate_der675 == 0.0 ? 1.0E-16
: intermediate_der675 ) * 54931.640625 ; t193 = t253 / 0.01 ; t168 [ 0ULL ] =
X [ 120ULL ] ; tlu2_linear_linear_prelookup ( & w_efOut . mField0 [ 0ULL ] ,
& w_efOut . mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] ,
& t28 [ 0ULL ] ) ; t14 = w_efOut ; t168 [ 0ULL ] = X [ 11ULL ] ;
tlu2_linear_linear_prelookup ( & x_efOut . mField0 [ 0ULL ] , & x_efOut .
mField1 [ 0ULL ] , & x_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t168 [ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t5
= x_efOut ; tlu2_2d_linear_linear_value ( & y_efOut [ 0ULL ] , & t14 .
mField0 [ 0ULL ] , & t14 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t27 [
0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = y_efOut [ 0 ] ;
t194 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 122ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t22
= ab_efOut ; tlu2_2d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , & t24 . mField0 [ 0ULL ] , &
t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = bb_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c = t167 [ 0ULL ] ; t168 [
0ULL ] = X [ 120ULL ] ; tlu2_linear_nearest_prelookup ( & cb_efOut . mField0
[ 0ULL ] , & cb_efOut . mField1 [ 0ULL ] , & cb_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ]
, & t28 [ 0ULL ] ) ; t21 = cb_efOut ; t168 [ 0ULL ] = X [ 11ULL ] ;
tlu2_linear_nearest_prelookup ( & db_efOut . mField0 [ 0ULL ] , & db_efOut .
mField1 [ 0ULL ] , & db_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t168 [ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t14
= db_efOut ; tlu2_2d_linear_nearest_value ( & eb_efOut [ 0ULL ] , & t21 .
mField0 [ 0ULL ] , & t21 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ] , &
t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = eb_efOut [ 0 ] ;
intermediate_der675 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 122ULL ] ;
tlu2_linear_nearest_prelookup ( & fb_efOut . mField0 [ 0ULL ] , & fb_efOut .
mField1 [ 0ULL ] , & fb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25
= fb_efOut ; tlu2_2d_linear_nearest_value ( & gb_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , &
t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = gb_efOut [ 0 ] ;
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio = t167 [ 0ULL ] ;
intermediate_der675 = ( intermediate_der675 +
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio ) / 2.0 ; t194 = ( t194 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) / 2.0 ; t200 = t253 * t194
* 2.0 ; x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c =
intermediate_der675 * intermediate_der675 * 0.78539816339744828 / ( t200 ==
0.0 ? 1.0E-16 : t200 ) * 54931.640625 ;
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio = t188 / 0.01 ; t168 [
0ULL ] = X [ 123ULL ] ; tlu2_linear_linear_prelookup ( & hb_efOut . mField0 [
0ULL ] , & hb_efOut . mField1 [ 0ULL ] , & hb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] ,
& t28 [ 0ULL ] ) ; t21 = hb_efOut ; t168 [ 0ULL ] = X [ 30ULL ] ;
tlu2_linear_linear_prelookup ( & ib_efOut . mField0 [ 0ULL ] , & ib_efOut .
mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t168 [ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t23
= ib_efOut ; tlu2_2d_linear_linear_value ( & jb_efOut [ 0ULL ] , & t21 .
mField0 [ 0ULL ] , & t21 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , &
t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = jb_efOut [ 0 ] ;
t197 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_linear_prelookup ( & kb_efOut . mField0 [ 0ULL ] , & kb_efOut .
mField1 [ 0ULL ] , & kb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25
= kb_efOut ; tlu2_2d_linear_linear_value ( & lb_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t27 [
0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = lb_efOut [ 0 ] ;
t198 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 123ULL ] ;
tlu2_linear_nearest_prelookup ( & mb_efOut . mField0 [ 0ULL ] , & mb_efOut .
mField1 [ 0ULL ] , & mb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t12
= mb_efOut ; t168 [ 0ULL ] = X [ 30ULL ] ; tlu2_linear_nearest_prelookup ( &
nb_efOut . mField0 [ 0ULL ] , & nb_efOut . mField1 [ 0ULL ] , & nb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t168 [
0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25 = nb_efOut ;
tlu2_2d_linear_nearest_value ( & ob_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27 [ 0ULL ] , &
t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t167 [ 0 ] = ob_efOut [ 0 ] ;
intermediate_der718 = t167 [ 0ULL ] ; t168 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_nearest_prelookup ( & pb_efOut . mField0 [ 0ULL ] , & pb_efOut .
mField1 [ 0ULL ] , & pb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t168 [ 0ULL ] , & t27 [ 0ULL ] , & t28 [ 0ULL ] ) ; t25
= pb_efOut ; tlu2_2d_linear_nearest_value ( & qb_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , & t14 . mField0 [ 0ULL ] , &
t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t27
[ 0ULL ] , & t30 [ 0ULL ] , & t28 [ 0ULL ] ) ; t168 [ 0 ] = qb_efOut [ 0 ] ;
t200 = t168 [ 0ULL ] ; intermediate_der718 = ( intermediate_der718 + t200 ) /
2.0 ; t200 = X [ 30ULL ] - X [ 11ULL ] ; t197 = ( t197 + t198 ) / 2.0 ;
U_idx_2 = t188 * t197 * 2.0 ; t198 = intermediate_der718 *
intermediate_der718 * 0.78539816339744828 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) * 54931.640625 ; U_idx_3 = - 0.01999998 ; t229 = U_idx_3 /
9.9999900000000011E-5 ; if ( t176 <= 0.0 ) { U_idx_2 = 0.0 ; } else if ( t176
<= 0.005 ) { U_idx_2 = t229 * t176 * 201.00502512562812 ; } else if ( t176 <=
0.995 ) { U_idx_2 = t229 * 1.0050251256281406 ; } else if ( t176 <= 1.0 ) {
U_idx_2 = - t229 * ( 1.0 - t176 ) * - 201.00502512562812 ; } else { U_idx_2 =
0.0 ; } t176 = U_idx_2 * 9.9999900000000011E-5 ; t229 = 0.01999998 ; U_idx_2
= t229 / 9.9999900000000011E-5 ; if ( t183 <= 0.0 ) { U_idx_2 = 0.0 ; } else
if ( t183 <= 0.005 ) { U_idx_2 = U_idx_2 * t183 * 201.00502512562812 ; } else
if ( t183 <= 0.995 ) { U_idx_2 *= 1.0050251256281406 ; } else if ( t183 <=
1.0 ) { U_idx_2 = - U_idx_2 * ( 1.0 - t183 ) * - 201.00502512562812 ; } else
{ U_idx_2 = 0.0 ; } t183 = U_idx_2 * 9.9999900000000011E-5 ; U_idx_2 =
U_idx_3 / 9.9999900000000011E-5 ; if ( intrm_sf_mf_233 <= 0.0 ) { U_idx_3 =
0.0 ; } else if ( intrm_sf_mf_233 <= 0.005 ) { U_idx_3 = U_idx_2 *
intrm_sf_mf_233 * 201.00502512562812 ; } else if ( intrm_sf_mf_233 <= 0.995 )
{ U_idx_3 = U_idx_2 * 1.0050251256281406 ; } else if ( intrm_sf_mf_233 <= 1.0
) { U_idx_3 = - U_idx_2 * ( 1.0 - intrm_sf_mf_233 ) * - 201.00502512562812 ;
} else { U_idx_3 = 0.0 ; } intrm_sf_mf_233 = U_idx_3 * 9.9999900000000011E-5
; U_idx_2 = t229 / 9.9999900000000011E-5 ; if ( intermediate_der569 <= 0.0 )
{ t229 = 0.0 ; } else if ( intermediate_der569 <= 0.005 ) { t229 = U_idx_2 *
intermediate_der569 * 201.00502512562812 ; } else if ( intermediate_der569 <=
0.995 ) { t229 = U_idx_2 * 1.0050251256281406 ; } else if (
intermediate_der569 <= 1.0 ) { t229 = - U_idx_2 * ( 1.0 - intermediate_der569
) * - 201.00502512562812 ; } else { t229 = 0.0 ; } intermediate_der569 = t229
* 9.9999900000000011E-5 ; t233 = t181 * t181 * t256 * t256 * 4.0 ; t241 = - (
t241 * t241 * 0.78539816339744828 ) / ( t233 == 0.0 ? 1.0E-16 : t233 ) * t176
* t256 * 109863.28125 ; U_idx_2 = t238 * t238 * t245 * t245 * 4.0 ; t191 = -
( t191 * t191 * 0.78539816339744828 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2
) * t183 * t245 * 109863.28125 ; U_idx_2 = t253 * t253 * t194 * t194 * 4.0 ;
intermediate_der675 = - ( intermediate_der675 * intermediate_der675 *
0.78539816339744828 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) *
intrm_sf_mf_233 * t194 * 109863.28125 ; U_idx_2 = t188 * t188 * t197 * t197 *
4.0 ; intermediate_der718 = - ( intermediate_der718 * intermediate_der718 *
0.78539816339744828 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) *
intermediate_der569 * t197 * 109863.28125 ; t232 = pmf_sqrt ( ( X [ 54ULL ] -
1.01325 ) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 + t257 * t257 ) * pmf_sqrt (
pmf_sqrt ( ( X [ 54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 +
t257 * t257 ) ) ; U_idx_3 = t256 * 2.0 ; U_idx_2 = 1.0 - t182 * t182 ; t233 =
pmf_sqrt ( U_idx_3 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) ; t216 =
pmf_sqrt ( pmf_sqrt ( ( X [ 54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) *
1.0E+10 + t257 * t257 ) ) * pmf_sqrt ( pmf_sqrt ( ( X [ 54ULL ] - 1.01325 ) *
( X [ 54ULL ] - 1.01325 ) * 1.0E+10 + t257 * t257 ) ) ; t229 = pmf_sqrt (
pmf_sqrt ( ( X [ 54ULL ] - 1.01325 ) * ( X [ 54ULL ] - 1.01325 ) * 1.0E+10 +
t257 * t257 ) ) ; t220 = - ( t256 * 2.0 ) ; t256 = ( 1.0 - t182 * t182 ) * (
1.0 - t182 * t182 ) ; U_idx_3 = - ( ( ( - ( X [ 54ULL ] - 1.01325 ) / ( t216
== 0.0 ? 1.0E-16 : t216 ) * pmf_sqrt ( U_idx_3 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ) * ( 1.0 / ( t232 == 0.0 ? 1.0E-16 : t232 ) ) * t241 * t257 * 0.5
+ - ( t176 / 0.01 * t182 * 2.0 ) * ( ( X [ 54ULL ] - 1.01325 ) / ( t229 ==
0.0 ? 1.0E-16 : t229 ) ) * ( t220 / ( t256 == 0.0 ? 1.0E-16 : t256 ) ) * (
1.0 / ( t233 == 0.0 ? 1.0E-16 : t233 ) ) * 0.5 ) * t181 * 0.64 + ( X [ 54ULL
] - 1.01325 ) / ( t229 == 0.0 ? 1.0E-16 : t229 ) * pmf_sqrt ( U_idx_3 / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * t176 * 0.64 ) * 100000.0 ) ; t216 =
pmf_sqrt ( t192 * t192 * 1.0E+10 + t190 * t190 ) * pmf_sqrt ( pmf_sqrt ( t192
* t192 * 1.0E+10 + t190 * t190 ) ) ; t256 = t245 * 2.0 ; t257 = 1.0 - t262 *
t262 ; t176 = pmf_sqrt ( t256 / ( t257 == 0.0 ? 1.0E-16 : t257 ) ) ; t229 =
pmf_sqrt ( pmf_sqrt ( t192 * t192 * 1.0E+10 + t190 * t190 ) ) * pmf_sqrt (
pmf_sqrt ( t192 * t192 * 1.0E+10 + t190 * t190 ) ) ; t232 = pmf_sqrt (
pmf_sqrt ( t192 * t192 * 1.0E+10 + t190 * t190 ) ) ; t233 = - ( t245 * 2.0 )
; t245 = ( 1.0 - t262 * t262 ) * ( 1.0 - t262 * t262 ) ; t182 = - ( ( ( -
t192 / ( t229 == 0.0 ? 1.0E-16 : t229 ) * pmf_sqrt ( t256 / ( t257 == 0.0 ?
1.0E-16 : t257 ) ) * ( 1.0 / ( t216 == 0.0 ? 1.0E-16 : t216 ) ) * t191 * t190
* 0.5 + - ( t183 / 0.01 * t262 * 2.0 ) * ( t192 / ( t232 == 0.0 ? 1.0E-16 :
t232 ) ) * ( t233 / ( t245 == 0.0 ? 1.0E-16 : t245 ) ) * ( 1.0 / ( t176 ==
0.0 ? 1.0E-16 : t176 ) ) * 0.5 ) * t238 * 0.64 + t192 / ( t232 == 0.0 ?
1.0E-16 : t232 ) * pmf_sqrt ( t256 / ( t257 == 0.0 ? 1.0E-16 : t257 ) ) *
t183 * 0.64 ) * 100000.0 ) ; t216 = pmf_sqrt ( ( X [ 11ULL ] - 1.01325 ) * (
X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) * pmf_sqrt ( pmf_sqrt ( (
X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) ) ; t238 = t194 * 2.0 ;
t256 = 1.0 - t193 * t193 ; t176 = pmf_sqrt ( t238 / ( t256 == 0.0 ? 1.0E-16 :
t256 ) ) ; t241 = pmf_sqrt ( pmf_sqrt ( ( X [ 11ULL ] - 1.01325 ) * ( X [
11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) ) * pmf_sqrt ( pmf_sqrt (
( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) ) ; t262 = pmf_sqrt (
pmf_sqrt ( ( X [ 11ULL ] - 1.01325 ) * ( X [ 11ULL ] - 1.01325 ) * 1.0E+10 +
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c *
x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c ) ) ; t190 = ( 1.0 - t193 *
t193 ) * ( 1.0 - t193 * t193 ) ; t183 = - ( ( ( - ( X [ 11ULL ] - 1.01325 ) /
( t241 == 0.0 ? 1.0E-16 : t241 ) * pmf_sqrt ( t238 / ( t256 == 0.0 ? 1.0E-16
: t256 ) ) * ( 1.0 / ( t216 == 0.0 ? 1.0E-16 : t216 ) ) * intermediate_der675
* x3_Way_Directional_Valve_TL1_orifice_AT_p_diff_c * 0.5 + - (
intrm_sf_mf_233 / 0.01 * t193 * 2.0 ) * ( ( X [ 11ULL ] - 1.01325 ) / ( t262
== 0.0 ? 1.0E-16 : t262 ) ) * ( - ( t194 * 2.0 ) / ( t190 == 0.0 ? 1.0E-16 :
t190 ) ) * ( 1.0 / ( t176 == 0.0 ? 1.0E-16 : t176 ) ) * 0.5 ) * t253 * 0.64 +
( X [ 11ULL ] - 1.01325 ) / ( t262 == 0.0 ? 1.0E-16 : t262 ) * pmf_sqrt (
t238 / ( t256 == 0.0 ? 1.0E-16 : t256 ) ) * intrm_sf_mf_233 * 0.64 ) *
100000.0 ) ; t216 = pmf_sqrt ( t200 * t200 * 1.0E+10 + t198 * t198 ) *
pmf_sqrt ( pmf_sqrt ( t200 * t200 * 1.0E+10 + t198 * t198 ) ) ; t176 = t197 *
2.0 ; intrm_sf_mf_233 = 1.0 -
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio *
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio ; U_idx_2 = pmf_sqrt (
t176 / ( intrm_sf_mf_233 == 0.0 ? 1.0E-16 : intrm_sf_mf_233 ) ) ; t253 =
pmf_sqrt ( pmf_sqrt ( t200 * t200 * 1.0E+10 + t198 * t198 ) ) * pmf_sqrt (
pmf_sqrt ( t200 * t200 * 1.0E+10 + t198 * t198 ) ) ; t256 = pmf_sqrt (
pmf_sqrt ( t200 * t200 * 1.0E+10 + t198 * t198 ) ) ; t241 = ( 1.0 -
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio *
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio ) * ( 1.0 -
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio *
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio ) ; t262 = - ( ( ( - t200
/ ( t253 == 0.0 ? 1.0E-16 : t253 ) * pmf_sqrt ( t176 / ( intrm_sf_mf_233 ==
0.0 ? 1.0E-16 : intrm_sf_mf_233 ) ) * ( 1.0 / ( t216 == 0.0 ? 1.0E-16 : t216
) ) * intermediate_der718 * t198 * 0.5 + - ( intermediate_der569 / 0.01 *
x3_Way_Directional_Valve_TL1_orifice_PA_area_ratio * 2.0 ) * ( t200 / ( t256
== 0.0 ? 1.0E-16 : t256 ) ) * ( - ( t197 * 2.0 ) / ( t241 == 0.0 ? 1.0E-16 :
t241 ) ) * ( 1.0 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 0.5 ) * t188 *
0.64 + t200 / ( t256 == 0.0 ? 1.0E-16 : t256 ) * pmf_sqrt ( t176 / (
intrm_sf_mf_233 == 0.0 ? 1.0E-16 : intrm_sf_mf_233 ) ) * intermediate_der569
* 0.64 ) * 100000.0 ) ; out . mX [ 0 ] = U_idx_3 / 20.904547289835946 ; out .
mX [ 1 ] = t182 ; out . mX [ 2 ] = t183 ; out . mX [ 3 ] = t262 /
20.904547289835946 ; ( void ) LC ; ( void ) t264 ; return 0 ; }
