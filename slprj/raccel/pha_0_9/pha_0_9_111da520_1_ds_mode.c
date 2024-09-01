#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_mode.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_mode ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmIntVector out ;
real_T X [ 126 ] ; real_T Servovalve2_Nozzle_A_Nozzle_A_area_opening ; real_T
Servovalve2_Nozzle_B_Nozzle_B_area_opening ; int32_T b ; ( void ) LC ; for (
b = 0 ; b < 126 ; b ++ ) { X [ b ] = t1 -> mX . mX [ b ] ; } out = t2 ->
mMODE ; Servovalve2_Nozzle_A_Nozzle_A_area_opening = ( X [ 15ULL ] - -
0.00029980999999999996 ) * 0.0052333238858972009 + 1.0E-9 ;
Servovalve2_Nozzle_B_Nozzle_B_area_opening = ( X [ 15ULL ] -
0.00029980999999999996 ) * - 0.0052333238858972009 + 1.0E-9 ; out . mX [ 0 ]
= ( int32_T ) ( X [ 72ULL ] * 0.001 >= 0.004 ) ; out . mX [ 1 ] = ( int32_T )
( X [ 72ULL ] * 0.001 <= 0.0 ) ; out . mX [ 2 ] = ( int32_T ) ( X [ 19ULL ] -
- 1.0E-5 <= 0.0 ) ; out . mX [ 3 ] = ( int32_T ) ( X [ 19ULL ] - - 1.0E-5 >=
1.0 ) ; out . mX [ 4 ] = ( int32_T ) ( X [ 20ULL ] - - 1.0E-5 <= 0.0 ) ; out
. mX [ 5 ] = ( int32_T ) ( X [ 20ULL ] - - 1.0E-5 >= 1.0 ) ; out . mX [ 6 ] =
( int32_T ) ( - ( X [ 21ULL ] - 1.0E-5 ) <= 0.0 ) ; out . mX [ 7 ] = (
int32_T ) ( - ( X [ 21ULL ] - 1.0E-5 ) >= 1.0 ) ; out . mX [ 8 ] = ( int32_T
) ( X [ 75ULL ] * 0.001 >= 0.00796 ) ; out . mX [ 9 ] = ( int32_T ) (
Servovalve2_Nozzle_A_Nozzle_A_area_opening <= 1.0E-9 ) ; out . mX [ 10 ] = (
int32_T ) ( Servovalve2_Nozzle_A_Nozzle_A_area_opening >= 3.14E-6 ) ; out .
mX [ 11 ] = ( int32_T ) ( Servovalve2_Nozzle_B_Nozzle_B_area_opening <=
1.0E-9 ) ; out . mX [ 12 ] = ( int32_T ) (
Servovalve2_Nozzle_B_Nozzle_B_area_opening >= 3.14E-6 ) ; out . mX [ 13 ] = (
int32_T ) ( X [ 28ULL ] >= 0.5 ) ; out . mX [ 14 ] = ( int32_T ) ( X [ 28ULL
] <= 500.0 ) ; out . mX [ 15 ] = ( int32_T ) ( X [ 27ULL ] >= 273.16 ) ; out
. mX [ 16 ] = ( int32_T ) ( X [ 27ULL ] <= 363.16 ) ; out . mX [ 17 ] = (
int32_T ) ( X [ 75ULL ] * 0.001 <= 0.0 ) ; out . mX [ 18 ] = ( int32_T ) ( X
[ 30ULL ] >= 0.5 ) ; out . mX [ 19 ] = ( int32_T ) ( X [ 30ULL ] <= 500.0 ) ;
out . mX [ 20 ] = ( int32_T ) ( X [ 29ULL ] >= 273.16 ) ; out . mX [ 21 ] = (
int32_T ) ( X [ 29ULL ] <= 363.16 ) ; out . mX [ 22 ] = ( int32_T ) ( X [
1ULL ] >= 0.1 ) ; out . mX [ 23 ] = ( int32_T ) ( X [ 1ULL ] <= 500.0 ) ; out
. mX [ 24 ] = ( int32_T ) ( X [ 0ULL ] >= 273.16 ) ; out . mX [ 25 ] = (
int32_T ) ( X [ 0ULL ] <= 373.16 ) ; out . mX [ 26 ] = ( int32_T ) ( X [ 2ULL
] * 0.01 + 1.0E-5 > 1.0E-9 ) ; out . mX [ 27 ] = ( int32_T ) ( X [ 4ULL ] >=
0.1 ) ; out . mX [ 28 ] = ( int32_T ) ( X [ 14ULL ] >= 0.0005 ) ; out . mX [
29 ] = ( int32_T ) ( X [ 4ULL ] <= 500.0 ) ; out . mX [ 30 ] = ( int32_T ) (
X [ 3ULL ] >= 273.16 ) ; out . mX [ 31 ] = ( int32_T ) ( X [ 3ULL ] <= 373.16
) ; out . mX [ 32 ] = ( int32_T ) ( X [ 5ULL ] * - 0.01 + 1.0E-5 > 1.0E-9 ) ;
out . mX [ 33 ] = ( int32_T ) ( X [ 52ULL ] >= 273.16 ) ; out . mX [ 34 ] = (
int32_T ) ( X [ 52ULL ] <= 363.16 ) ; out . mX [ 35 ] = ( int32_T ) ( X [
54ULL ] >= 0.5 ) ; out . mX [ 36 ] = ( int32_T ) ( X [ 54ULL ] <= 500.0 ) ;
out . mX [ 37 ] = ( int32_T ) ( X [ 53ULL ] >= 273.16 ) ; out . mX [ 38 ] = (
int32_T ) ( X [ 53ULL ] <= 363.16 ) ; out . mX [ 39 ] = ( int32_T ) ( X [
14ULL ] > - 0.0005 ) ; out . mX [ 40 ] = ( int32_T ) ( X [ 11ULL ] >= 0.5 ) ;
out . mX [ 41 ] = ( int32_T ) ( X [ 11ULL ] <= 500.0 ) ; out . mX [ 42 ] = (
int32_T ) ( X [ 63ULL ] >= 273.16 ) ; out . mX [ 43 ] = ( int32_T ) ( X [
63ULL ] <= 363.16 ) ; out . mX [ 44 ] = ( int32_T ) ( X [ 10ULL ] >= 273.16 )
; out . mX [ 45 ] = ( int32_T ) ( X [ 10ULL ] <= 363.16 ) ; out . mX [ 46 ] =
( int32_T ) ( X [ 72ULL ] * 0.001 < 0.008 ) ; out . mX [ 47 ] = ( int32_T ) (
X [ 36ULL ] >= 273.16 ) ; out . mX [ 48 ] = ( int32_T ) ( X [ 36ULL ] <=
373.16 ) ; out . mX [ 49 ] = ( int32_T ) ( X [ 13ULL ] >= 0.1 ) ; out . mX [
50 ] = ( int32_T ) ( - ( X [ 18ULL ] - 1.0E-5 ) <= 0.0 ) ; out . mX [ 51 ] =
( int32_T ) ( X [ 13ULL ] <= 500.0 ) ; out . mX [ 52 ] = ( int32_T ) ( X [
12ULL ] >= 273.16 ) ; out . mX [ 53 ] = ( int32_T ) ( X [ 12ULL ] <= 373.16 )
; out . mX [ 54 ] = ( int32_T ) ( X [ 75ULL ] * 0.001 < 0.008 ) ; out . mX [
55 ] = ( int32_T ) ( X [ 90ULL ] >= 273.16 ) ; out . mX [ 56 ] = ( int32_T )
( X [ 90ULL ] <= 363.16 ) ; out . mX [ 57 ] = ( int32_T ) ( X [ 30ULL ] >=
1.0E-5 ) ; out . mX [ 58 ] = ( int32_T ) ( X [ 101ULL ] * -
0.12820512820512822 + 1.01325 >= 1.0E-5 ) ; out . mX [ 59 ] = ( int32_T ) ( X
[ 105ULL ] * 0.12820512820512822 + 1.01325 >= 1.0E-5 ) ; out . mX [ 60 ] = (
int32_T ) ( X [ 26ULL ] >= 1.0E-5 ) ; out . mX [ 61 ] = ( int32_T ) ( - ( X [
18ULL ] - 1.0E-5 ) >= 1.0 ) ; out . mX [ 62 ] = ( int32_T ) ( X [ 4ULL ] >=
1.0E-5 ) ; out . mX [ 63 ] = ( int32_T ) ( X [ 22ULL ] * 7.8E-5 + 0.0001 >
1.0E-8 ) ; out . mX [ 64 ] = ( int32_T ) ( X [ 23ULL ] * - 7.8E-5 + 0.0001 >
1.0E-8 ) ; out . mX [ 65 ] = ( int32_T ) ( X [ 95ULL ] >= 273.16 ) ; out . mX
[ 66 ] = ( int32_T ) ( X [ 95ULL ] <= 363.16 ) ; ( void ) LC ; ( void ) t2 ;
return 0 ; }
