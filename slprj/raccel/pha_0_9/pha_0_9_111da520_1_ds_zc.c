#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_zc.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t14 , NeDsMethodOutput * t15 ) { PmRealVector out ;
real_T X [ 126 ] ; real_T Servovalve2_Nozzle_A_Nozzle_A_area_opening ; real_T
Servovalve2_Nozzle_B_Nozzle_B_area_opening ; real_T t0 ; real_T t1 ; real_T
t10 ; real_T t11 ; real_T t12 ; real_T t2 ; real_T t3 ; real_T t4 ; real_T t5
; real_T t6 ; real_T t7 ; real_T t8 ; real_T t9 ; int32_T M_idx_0 ; int32_T
M_idx_11 ; int32_T M_idx_2 ; int32_T M_idx_28 ; int32_T M_idx_4 ; int32_T
M_idx_50 ; int32_T M_idx_6 ; int32_T M_idx_8 ; int32_T M_idx_9 ; int32_T b ;
( void ) LC ; M_idx_0 = t14 -> mM . mX [ 0 ] ; M_idx_2 = t14 -> mM . mX [ 2 ]
; M_idx_4 = t14 -> mM . mX [ 4 ] ; M_idx_6 = t14 -> mM . mX [ 6 ] ; M_idx_8 =
t14 -> mM . mX [ 8 ] ; M_idx_9 = t14 -> mM . mX [ 9 ] ; M_idx_11 = t14 -> mM
. mX [ 11 ] ; M_idx_28 = t14 -> mM . mX [ 28 ] ; M_idx_50 = t14 -> mM . mX [
50 ] ; for ( b = 0 ; b < 126 ; b ++ ) { X [ b ] = t14 -> mX . mX [ b ] ; }
out = t15 -> mZC ; Servovalve2_Nozzle_A_Nozzle_A_area_opening = ( X [ 15ULL ]
- - 0.00029980999999999996 ) * 0.0052333238858972009 + 1.0E-9 ;
Servovalve2_Nozzle_B_Nozzle_B_area_opening = ( X [ 15ULL ] -
0.00029980999999999996 ) * - 0.0052333238858972009 + 1.0E-9 ; if ( M_idx_0 ==
0 ) { t0 = - ( X [ 72ULL ] * 0.001 ) ; } else { t0 = 0.0 ; } if ( M_idx_8 ==
0 ) { t1 = - ( X [ 75ULL ] * 0.001 ) ; } else { t1 = 0.0 ; } if ( M_idx_28 ==
0 ) { t2 = X [ 14ULL ] - - 0.0005 ; } else { t2 = 0.0 ; } if ( M_idx_50 == 0
) { t3 = - ( X [ 18ULL ] - 1.0E-5 ) - 1.0 ; } else { t3 = 0.0 ; } if (
M_idx_50 == 0 ) { t4 = - ( X [ 18ULL ] - 1.0E-5 ) - 1.0 ; } else { t4 = 0.0 ;
} if ( M_idx_2 == 0 ) { t5 = ( X [ 19ULL ] - - 1.0E-5 ) - 1.0 ; } else { t5 =
0.0 ; } if ( M_idx_2 == 0 ) { t6 = ( X [ 19ULL ] - - 1.0E-5 ) - 1.0 ; } else
{ t6 = 0.0 ; } if ( M_idx_4 == 0 ) { t7 = ( X [ 20ULL ] - - 1.0E-5 ) - 1.0 ;
} else { t7 = 0.0 ; } if ( M_idx_4 == 0 ) { t8 = ( X [ 20ULL ] - - 1.0E-5 ) -
1.0 ; } else { t8 = 0.0 ; } if ( M_idx_6 == 0 ) { t9 = - ( X [ 21ULL ] -
1.0E-5 ) - 1.0 ; } else { t9 = 0.0 ; } if ( M_idx_6 == 0 ) { t10 = - ( X [
21ULL ] - 1.0E-5 ) - 1.0 ; } else { t10 = 0.0 ; } if ( M_idx_9 == 0 ) { t11 =
Servovalve2_Nozzle_A_Nozzle_A_area_opening - 3.14E-6 ; } else { t11 = 0.0 ; }
if ( M_idx_11 == 0 ) { t12 = Servovalve2_Nozzle_B_Nozzle_B_area_opening -
3.14E-6 ; } else { t12 = 0.0 ; } out . mX [ 0 ] = X [ 28ULL ] - 0.5 ; out .
mX [ 1 ] = 500.0 - X [ 28ULL ] ; out . mX [ 2 ] = X [ 27ULL ] - 273.16 ; out
. mX [ 3 ] = 363.16 - X [ 27ULL ] ; out . mX [ 4 ] = X [ 30ULL ] - 0.5 ; out
. mX [ 5 ] = 500.0 - X [ 30ULL ] ; out . mX [ 6 ] = X [ 29ULL ] - 273.16 ;
out . mX [ 7 ] = 363.16 - X [ 29ULL ] ; out . mX [ 8 ] = ( X [ 2ULL ] * 0.01
+ 1.0E-5 ) - 1.0E-9 ; out . mX [ 9 ] = X [ 1ULL ] - 0.1 ; out . mX [ 10 ] =
500.0 - X [ 1ULL ] ; out . mX [ 11 ] = X [ 0ULL ] - 273.16 ; out . mX [ 12 ]
= 373.16 - X [ 0ULL ] ; out . mX [ 13 ] = ( X [ 5ULL ] * - 0.01 + 1.0E-5 ) -
1.0E-9 ; out . mX [ 14 ] = X [ 4ULL ] - 0.1 ; out . mX [ 15 ] = 500.0 - X [
4ULL ] ; out . mX [ 16 ] = X [ 3ULL ] - 273.16 ; out . mX [ 17 ] = 373.16 - X
[ 3ULL ] ; out . mX [ 18 ] = X [ 52ULL ] - 273.16 ; out . mX [ 19 ] = 363.16
- X [ 52ULL ] ; out . mX [ 20 ] = X [ 54ULL ] - 0.5 ; out . mX [ 21 ] = 500.0
- X [ 54ULL ] ; out . mX [ 22 ] = X [ 53ULL ] - 273.16 ; out . mX [ 23 ] =
363.16 - X [ 53ULL ] ; out . mX [ 24 ] = X [ 72ULL ] * 0.001 - 0.004 ; out .
mX [ 25 ] = t0 ; out . mX [ 26 ] = 0.008 - X [ 72ULL ] * 0.001 ; out . mX [
27 ] = X [ 11ULL ] - 0.5 ; out . mX [ 28 ] = 500.0 - X [ 11ULL ] ; out . mX [
29 ] = X [ 63ULL ] - 273.16 ; out . mX [ 30 ] = 363.16 - X [ 63ULL ] ; out .
mX [ 31 ] = X [ 10ULL ] - 273.16 ; out . mX [ 32 ] = 363.16 - X [ 10ULL ] ;
out . mX [ 33 ] = X [ 75ULL ] * 0.001 - 0.00796 ; out . mX [ 34 ] = t1 ; out
. mX [ 35 ] = 0.008 - X [ 75ULL ] * 0.001 ; out . mX [ 36 ] = X [ 36ULL ] -
273.16 ; out . mX [ 37 ] = 373.16 - X [ 36ULL ] ; out . mX [ 38 ] = X [ 13ULL
] - 0.1 ; out . mX [ 39 ] = 500.0 - X [ 13ULL ] ; out . mX [ 40 ] = X [ 12ULL
] - 273.16 ; out . mX [ 41 ] = 373.16 - X [ 12ULL ] ; out . mX [ 42 ] = X [
90ULL ] - 273.16 ; out . mX [ 43 ] = 363.16 - X [ 90ULL ] ; out . mX [ 44 ] =
X [ 14ULL ] - 0.0005 ; out . mX [ 45 ] = t2 ; out . mX [ 46 ] = X [ 30ULL ] -
1.0E-5 ; out . mX [ 47 ] = ( X [ 101ULL ] * - 0.12820512820512822 + 1.01325 )
- 1.0E-5 ; out . mX [ 48 ] = ( X [ 105ULL ] * 0.12820512820512822 + 1.01325 )
- 1.0E-5 ; out . mX [ 49 ] = X [ 26ULL ] - 1.0E-5 ; out . mX [ 50 ] = X [
4ULL ] - 1.0E-5 ; out . mX [ 51 ] = ( X [ 22ULL ] * 7.8E-5 + 0.0001 ) -
1.0E-8 ; out . mX [ 52 ] = ( X [ 23ULL ] * - 7.8E-5 + 0.0001 ) - 1.0E-8 ; out
. mX [ 53 ] = X [ 95ULL ] - 273.16 ; out . mX [ 54 ] = 363.16 - X [ 95ULL ] ;
out . mX [ 55 ] = X [ 18ULL ] - 1.0E-5 ; out . mX [ 56 ] = t3 ; out . mX [ 57
] = X [ 18ULL ] - 1.0E-5 ; out . mX [ 58 ] = t4 ; out . mX [ 59 ] = - ( X [
19ULL ] - - 1.0E-5 ) ; out . mX [ 60 ] = t5 ; out . mX [ 61 ] = - ( X [ 19ULL
] - - 1.0E-5 ) ; out . mX [ 62 ] = t6 ; out . mX [ 63 ] = - ( X [ 20ULL ] - -
1.0E-5 ) ; out . mX [ 64 ] = t7 ; out . mX [ 65 ] = - ( X [ 20ULL ] - -
1.0E-5 ) ; out . mX [ 66 ] = t8 ; out . mX [ 67 ] = X [ 21ULL ] - 1.0E-5 ;
out . mX [ 68 ] = t9 ; out . mX [ 69 ] = X [ 21ULL ] - 1.0E-5 ; out . mX [ 70
] = t10 ; out . mX [ 71 ] = 1.0E-9 -
Servovalve2_Nozzle_A_Nozzle_A_area_opening ; out . mX [ 72 ] = t11 ; out . mX
[ 73 ] = 1.0E-9 - Servovalve2_Nozzle_B_Nozzle_B_area_opening ; out . mX [ 74
] = t12 ; ( void ) LC ; ( void ) t15 ; return 0 ; }
