#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_dxy.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_dxy ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t118 , NeDsMethodOutput * t119 ) { ETTS0 b_efOut ;
ETTS0 d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 h_efOut ;
ETTS0 t0 ; ETTS0 t1 ; ETTS0 t2 ; ETTS0 t3 ; ETTS0 t4 ; ETTS0 t5 ;
PmRealVector out ; real_T X [ 126 ] ; real_T c_efOut [ 1 ] ; real_T f_efOut [
1 ] ; real_T i_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T k_efOut [ 1 ] ;
real_T l_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T
t56 [ 1 ] ; real_T intermediate_der537 ; real_T intermediate_der538 ; real_T
intermediate_der541 ; real_T intermediate_der542 ; real_T intermediate_der543
; real_T intermediate_der545 ; real_T t116 ; real_T t117 ; real_T t50_idx_0 ;
real_T t66 ; real_T t67 ; real_T t70 ; real_T t71 ; real_T t74 ; real_T t79 ;
real_T t80 ; real_T t88 ; size_t t10 [ 1 ] ; size_t t7 [ 1 ] ; size_t t8 [ 1
] ; int32_T b ; for ( b = 0 ; b < 126 ; b ++ ) { X [ b ] = t118 -> mX . mX [
b ] ; } out = t119 -> mDXY ; intermediate_der543 = ( - X [ 68ULL ] - X [
69ULL ] ) + X [ 70ULL ] ; t71 = X [ 30ULL ] >= 1.0E-5 ? X [ 30ULL ] : 1.0E-5
; intermediate_der538 = 1.01325 / ( t71 == 0.0 ? 1.0E-16 : t71 ) *
0.0050251256281407036 ; t116 = t71 - 1.01325 ; t74 = pmf_exp ( ( t71 -
1.01325 ) / 21791.0 ) ; t66 = 1.0 / ( t74 == 0.0 ? 1.0E-16 : t74 ) +
intermediate_der538 ; intermediate_der537 = 998.21615577889452 / ( t66 == 0.0
? 1.0E-16 : t66 ) ; t66 = X [ 4ULL ] >= 1.0E-5 ? X [ 4ULL ] : 1.0E-5 ;
intermediate_der545 = 1.01325 / ( t66 == 0.0 ? 1.0E-16 : t66 ) *
0.0050251256281407036 ; intermediate_der541 = pmf_exp ( ( t66 - 1.01325 ) /
21791.0 ) ; t70 = 1.0 / ( intermediate_der541 == 0.0 ? 1.0E-16 :
intermediate_der541 ) + intermediate_der545 ; intermediate_der542 =
998.21615577889452 / ( t70 == 0.0 ? 1.0E-16 : t70 ) ; t56 [ 0ULL ] = X [
63ULL ] ; t7 [ 0 ] = 11ULL ; t8 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup (
& efOut . mField0 [ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t56 [ 0ULL ] , & t7
[ 0ULL ] , & t8 [ 0ULL ] ) ; t5 = efOut ; t56 [ 0ULL ] = X [ 11ULL ] ; t10 [
0 ] = 12ULL ; tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , &
b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t56 [ 0ULL ] , & t10 [ 0ULL ] ,
& t8 [ 0ULL ] ) ; t3 = b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [
0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t3 . mField0 [
0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t50_idx_0 =
c_efOut [ 0 ] ; t70 = t50_idx_0 ; t56 [ 0ULL ] = X [ 29ULL ] ;
tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t56 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; t2 =
d_efOut ; t56 [ 0ULL ] = X [ 30ULL ] ; tlu2_linear_linear_prelookup ( &
e_efOut . mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t56 [
0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t1 = e_efOut ;
tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ]
, & t8 [ 0ULL ] ) ; t50_idx_0 = f_efOut [ 0 ] ; t56 [ 0ULL ] = X [ 52ULL ] ;
tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t56 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; t4 =
g_efOut ; t56 [ 0 ] = 1.01325 ; tlu2_linear_linear_prelookup ( & h_efOut .
mField0 [ 0ULL ] , & h_efOut . mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t56 [ 0ULL ] , & t10 [
0ULL ] , & t8 [ 0ULL ] ) ; t0 = h_efOut ; tlu2_2d_linear_linear_value ( &
i_efOut [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t0 .
mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t56 [ 0 ] =
i_efOut [ 0 ] ; t67 = t56 [ 0ULL ] ; t79 = ( real_T ) ( X [ 30ULL ] >= 1.0E-5
) ; t80 = t71 * t71 ; t71 = - 1.01325 / ( t80 == 0.0 ? 1.0E-16 : t80 ) * t79
* 0.0050251256281407036 ; t80 = t79 / 21791.0 * pmf_exp ( t116 / 21791.0 ) ;
t116 = t74 * t74 ; t79 = ( 1.0 / ( t74 == 0.0 ? 1.0E-16 : t74 ) +
intermediate_der538 ) * ( 1.0 / ( t74 == 0.0 ? 1.0E-16 : t74 ) +
intermediate_der538 ) ; intermediate_der538 = ( - 1.0 / ( t116 == 0.0 ?
1.0E-16 : t116 ) * t80 + t71 ) * ( - 998.21615577889452 / ( t79 == 0.0 ?
1.0E-16 : t79 ) ) ; t71 = 1.0 / ( intermediate_der537 == 0.0 ? 1.0E-16 :
intermediate_der537 ) * 1.0E+6 ; t74 = - 1.0 / ( intermediate_der537 == 0.0 ?
1.0E-16 : intermediate_der537 ) * 1.0E+6 ; t79 = intermediate_der537 *
intermediate_der537 ; t88 = - ( - ( - X [ 70ULL ] + X [ 33ULL ] ) / ( t79 ==
0.0 ? 1.0E-16 : t79 ) * intermediate_der538 * 1.0E+6 ) ; intermediate_der538
= ( real_T ) ( X [ 4ULL ] >= 1.0E-5 ) ; t116 = t66 * t66 ;
intermediate_der537 = - 1.01325 / ( t116 == 0.0 ? 1.0E-16 : t116 ) *
intermediate_der538 * 0.0050251256281407036 ; t66 = intermediate_der538 /
21791.0 * pmf_exp ( ( t66 - 1.01325 ) / 21791.0 ) ; t116 =
intermediate_der541 * intermediate_der541 ; t117 = ( 1.0 / (
intermediate_der541 == 0.0 ? 1.0E-16 : intermediate_der541 ) +
intermediate_der545 ) * ( 1.0 / ( intermediate_der541 == 0.0 ? 1.0E-16 :
intermediate_der541 ) + intermediate_der545 ) ; intermediate_der538 = ( - 1.0
/ ( t116 == 0.0 ? 1.0E-16 : t116 ) * t66 + intermediate_der537 ) * ( -
998.21615577889452 / ( t117 == 0.0 ? 1.0E-16 : t117 ) ) ; intermediate_der537
= 1.0 / ( intermediate_der542 == 0.0 ? 1.0E-16 : intermediate_der542 ) *
1.0E+6 ; t117 = intermediate_der542 * intermediate_der542 ;
intermediate_der538 = - X [ 48ULL ] / ( t117 == 0.0 ? 1.0E-16 : t117 ) *
intermediate_der538 * 1.0E+6 ; tlu2_2d_linear_linear_value ( & j_efOut [ 0ULL
] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL
] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 ,
& t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t56 [ 0 ] = j_efOut [ 0 ]
; t66 = t56 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & k_efOut [ 0ULL ] , &
t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , &
t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t7 [
0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t56 [ 0 ] = k_efOut [ 0 ] ;
intermediate_der545 = t56 [ 0ULL ] ; intermediate_der541 = 1.0 / ( t70 == 0.0
? 1.0E-16 : t70 ) * 1.0E+6 ; intermediate_der542 = - 1.0 / ( t70 == 0.0 ?
1.0E-16 : t70 ) * 1.0E+6 ; t116 = intermediate_der543 ; t117 = t70 * t70 ;
intermediate_der543 = intermediate_der543 / ( t117 == 0.0 ? 1.0E-16 : t117 )
* t66 * 1.0E+6 ; t66 = t116 / ( t117 == 0.0 ? 1.0E-16 : t117 ) *
intermediate_der545 * 1.0E+6 ; tlu2_2d_linear_linear_value ( & l_efOut [ 0ULL
] , & t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL
] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 ,
& t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t56 [ 0 ] = l_efOut [ 0 ]
; intermediate_der545 = t56 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
m_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t1 .
mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t56 [ 0 ] =
m_efOut [ 0 ] ; t70 = t56 [ 0ULL ] ; t117 = t50_idx_0 * t50_idx_0 ;
intermediate_der545 = - X [ 33ULL ] / ( t117 == 0.0 ? 1.0E-16 : t117 ) *
intermediate_der545 * 1.0E+6 ; t70 = - X [ 33ULL ] / ( t117 == 0.0 ? 1.0E-16
: t117 ) * t70 * 1.0E+6 ; tlu2_2d_linear_linear_value ( & n_efOut [ 0ULL ] ,
& t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t0 . mField0 [ 0ULL ] ,
& t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t7
[ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t56 [ 0 ] = n_efOut [ 0 ] ; t79
= t56 [ 0ULL ] ; t80 = - 1.0 / ( t67 == 0.0 ? 1.0E-16 : t67 ) * 1.0E+6 ; t117
= t67 * t67 ; out . mX [ 0 ] = 99999.999999999985 ; out . mX [ 1 ] =
intermediate_der538 * 1.0E-6 ; out . mX [ 2 ] = 1.0 ; out . mX [ 3 ] = t66 *
1.0E-6 ; out . mX [ 4 ] = 99999.999999999985 ; out . mX [ 5 ] =
intermediate_der545 * 1.0E-6 ; out . mX [ 6 ] = - t88 * 1.0E-6 ; out . mX [ 7
] = t70 * 1.0E-6 ; out . mX [ 8 ] = 99999.999999999985 ; out . mX [ 9 ] = t71
* 1.0E-6 ; out . mX [ 10 ] = 1.0 / ( t50_idx_0 == 0.0 ? 1.0E-16 : t50_idx_0 )
* 1.0E+6 * 1.0E-6 ; out . mX [ 11 ] = t80 * 1.0E-6 ; out . mX [ 12 ] =
intermediate_der537 * 1.0E-6 ; out . mX [ 13 ] = - ( ( - X [ 33ULL ] - X [
87ULL ] ) + X [ 59ULL ] ) / ( t117 == 0.0 ? 1.0E-16 : t117 ) * t79 * 1.0E+6 *
1.0E-6 ; out . mX [ 14 ] = 1.0 / ( t67 == 0.0 ? 1.0E-16 : t67 ) * 1.0E+6 *
1.0E-6 ; out . mX [ 15 ] = intermediate_der543 * 1.0E-6 ; out . mX [ 16 ] =
intermediate_der541 * 1.0E-6 ; out . mX [ 17 ] = intermediate_der541 * 1.0E-6
; out . mX [ 18 ] = t74 * 1.0E-6 ; out . mX [ 19 ] = intermediate_der542 *
1.0E-6 ; out . mX [ 20 ] = - 0.001006821137696307 ; out . mX [ 21 ] = t80 *
1.0E-6 ; ( void ) LC ; ( void ) t119 ; return 0 ; }
