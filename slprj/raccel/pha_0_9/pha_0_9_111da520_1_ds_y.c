#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_y.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t51 , NeDsMethodOutput * t52 ) { ETTS0 b_efOut ; ETTS0
d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 h_efOut ; ETTS0
t3 ; ETTS0 t5 ; PmRealVector out ; real_T X [ 126 ] ; real_T c_efOut [ 1 ] ;
real_T f_efOut [ 1 ] ; real_T i_efOut [ 1 ] ; real_T t27 [ 1 ] ; real_T
Qpb_Flow_Rate_Sensor_IL_V ; real_T flow_IL_sensor1_Flow_Rate_Sensor_IL_V ;
real_T flow_sensor1_Flow_Rate_Sensor_TL3_V ; real_T t38 ; real_T t39 ; size_t
t10 [ 1 ] ; size_t t7 [ 1 ] ; size_t t8 [ 1 ] ; int32_T b ; for ( b = 0 ; b <
126 ; b ++ ) { X [ b ] = t51 -> mX . mX [ b ] ; } out = t52 -> mY ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = X [ 30ULL ] >= 1.0E-5 ? X [ 30ULL ] :
1.0E-5 ; t38 = 1.01325 / ( flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ?
1.0E-16 : flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) * 0.0050251256281407036 ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = pmf_exp ( (
flow_IL_sensor1_Flow_Rate_Sensor_IL_V - 1.01325 ) / 21791.0 ) ; t38 += 1.0 /
( flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ? 1.0E-16 :
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = 998.21615577889452 / ( t38 == 0.0 ?
1.0E-16 : t38 ) ; Qpb_Flow_Rate_Sensor_IL_V = ( - X [ 70ULL ] + X [ 33ULL ] )
/ ( flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ? 1.0E-16 :
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) * 1.0E+6 ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = X [ 4ULL ] >= 1.0E-5 ? X [ 4ULL ] :
1.0E-5 ; t38 = 1.01325 / ( flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ?
1.0E-16 : flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) * 0.0050251256281407036 ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = pmf_exp ( (
flow_IL_sensor1_Flow_Rate_Sensor_IL_V - 1.01325 ) / 21791.0 ) ; t38 += 1.0 /
( flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ? 1.0E-16 :
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) ;
flow_IL_sensor1_Flow_Rate_Sensor_IL_V = 998.21615577889452 / ( t38 == 0.0 ?
1.0E-16 : t38 ) ; flow_IL_sensor1_Flow_Rate_Sensor_IL_V = X [ 48ULL ] / (
flow_IL_sensor1_Flow_Rate_Sensor_IL_V == 0.0 ? 1.0E-16 :
flow_IL_sensor1_Flow_Rate_Sensor_IL_V ) * 1.0E+6 ; t27 [ 0ULL ] = X [ 63ULL ]
; t7 [ 0 ] = 11ULL ; t8 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut
. mField0 [ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t27 [ 0ULL ] , & t7 [ 0ULL
] , & t8 [ 0ULL ] ) ; t5 = efOut ; t27 [ 0ULL ] = X [ 11ULL ] ; t10 [ 0 ] =
12ULL ; tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0ULL ] , &
b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t27 [ 0ULL ] , & t10 [ 0ULL ] ,
& t8 [ 0ULL ] ) ; t3 = b_efOut ; tlu2_2d_linear_linear_value ( & c_efOut [
0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t3 . mField0 [
0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t38 = c_efOut [
0 ] ; flow_sensor1_Flow_Rate_Sensor_TL3_V = - ( ( - X [ 68ULL ] - X [ 69ULL ]
) + X [ 70ULL ] ) / ( t38 == 0.0 ? 1.0E-16 : t38 ) * 1.0E+6 ; t27 [ 0ULL ] =
X [ 29ULL ] ; tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , &
d_efOut . mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t27 [ 0ULL ] , & t7 [ 0ULL ] , &
t8 [ 0ULL ] ) ; t5 = d_efOut ; t27 [ 0ULL ] = X [ 30ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t27 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t3 =
e_efOut ; tlu2_2d_linear_linear_value ( & f_efOut [ 0ULL ] , & t5 . mField0 [
0ULL ] , & t5 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t7 [ 0ULL ] , & t10
[ 0ULL ] , & t8 [ 0ULL ] ) ; t38 = f_efOut [ 0 ] ; t27 [ 0ULL ] = X [ 52ULL ]
; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t27 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; t5 =
g_efOut ; t27 [ 0 ] = 1.01325 ; tlu2_linear_linear_prelookup ( & h_efOut .
mField0 [ 0ULL ] , & h_efOut . mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t27 [ 0ULL ] , & t10 [
0ULL ] , & t8 [ 0ULL ] ) ; t3 = h_efOut ; tlu2_2d_linear_linear_value ( &
i_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t27 [ 0 ] =
i_efOut [ 0 ] ; t39 = t27 [ 0ULL ] ; out . mX [ 0 ] = X [ 7ULL ] ; out . mX [
1 ] = - X [ 79ULL ] / 993.22507500000017 * 1.0E+6 * 1.0E-6 ; out . mX [ 2 ] =
Qpb_Flow_Rate_Sensor_IL_V * 1.0E-6 ; out . mX [ 3 ] =
flow_IL_sensor1_Flow_Rate_Sensor_IL_V * 1.0E-6 ; out . mX [ 4 ] =
flow_sensor1_Flow_Rate_Sensor_TL3_V * 1.0E-6 ; out . mX [ 5 ] = X [ 33ULL ] /
( t38 == 0.0 ? 1.0E-16 : t38 ) * 1.0E+6 * 1.0E-6 ; out . mX [ 6 ] = ( ( - X [
33ULL ] - X [ 87ULL ] ) + X [ 59ULL ] ) / ( t39 == 0.0 ? 1.0E-16 : t39 ) *
1.0E+6 * 1.0E-6 ; out . mX [ 7 ] = X [ 11ULL ] * 99999.999999999985 ; out .
mX [ 8 ] = X [ 30ULL ] * 99999.999999999985 ; out . mX [ 9 ] = X [ 1ULL ] *
99999.999999999985 ; ( void ) LC ; ( void ) t52 ; return 0 ; }
