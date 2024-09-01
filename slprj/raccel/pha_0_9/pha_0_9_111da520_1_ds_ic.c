#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_ic.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_ic ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t3 , NeDsMethodOutput * t4 ) { PmRealVector out ;
real_T t0 [ 126 ] ; real_T P_R_idx_0 ; real_T P_R_idx_1 ; real_T P_R_idx_2 ;
real_T P_R_idx_3 ; real_T P_R_idx_4 ; real_T P_R_idx_5 ; real_T P_R_idx_6 ;
real_T P_R_idx_7 ; int32_T b ; ( void ) LC ; P_R_idx_0 = t3 -> mP_R . mX [ 0
] ; P_R_idx_1 = t3 -> mP_R . mX [ 1 ] ; P_R_idx_2 = t3 -> mP_R . mX [ 2 ] ;
P_R_idx_3 = t3 -> mP_R . mX [ 3 ] ; P_R_idx_4 = t3 -> mP_R . mX [ 4 ] ;
P_R_idx_5 = t3 -> mP_R . mX [ 5 ] ; P_R_idx_6 = t3 -> mP_R . mX [ 6 ] ;
P_R_idx_7 = t3 -> mP_R . mX [ 7 ] ; out = t4 -> mIC ; t0 [ 0ULL ] = 293.15 ;
t0 [ 1ULL ] = 2.5 ; t0 [ 2ULL ] = 0.0 ; t0 [ 3ULL ] = 293.15 ; t0 [ 4ULL ] =
1.01325 ; t0 [ 5ULL ] = - 0.1 ; t0 [ 6ULL ] = 0.0 ; t0 [ 7ULL ] = 0.0 ; t0 [
8ULL ] = P_R_idx_0 ; t0 [ 9ULL ] = P_R_idx_1 ; t0 [ 10ULL ] = 293.15 ; t0 [
11ULL ] = 1.01325 ; t0 [ 12ULL ] = 293.15 ; t0 [ 13ULL ] = 1.01325 ; t0 [
14ULL ] = P_R_idx_6 ; t0 [ 15ULL ] = 0.0 ; t0 [ 16ULL ] = P_R_idx_5 ; t0 [
17ULL ] = P_R_idx_7 ; t0 [ 18ULL ] = 0.0 ; t0 [ 19ULL ] = 0.0 ; t0 [ 20ULL ]
= 0.0 ; t0 [ 21ULL ] = 0.0 ; t0 [ 22ULL ] = 0.0 ; t0 [ 23ULL ] = - 0.0 ; t0 [
24ULL ] = 0.0 ; t0 [ 25ULL ] = 300.0 ; t0 [ 26ULL ] = 1.0 ; t0 [ 27ULL ] =
300.0 ; t0 [ 28ULL ] = 1.0 ; t0 [ 29ULL ] = 300.0 ; t0 [ 30ULL ] = 1.0 ; t0 [
31ULL ] = 0.0 ; t0 [ 32ULL ] = 300.0 ; t0 [ 33ULL ] = 0.0 ; t0 [ 34ULL ] =
85.0 ; t0 [ 35ULL ] = 300.0 ; t0 [ 36ULL ] = 300.0 ; t0 [ 37ULL ] = 300.0 ;
t0 [ 38ULL ] = 0.0 ; t0 [ 39ULL ] = 0.0 ; t0 [ 40ULL ] = 0.0 ; t0 [ 41ULL ] =
0.0 ; t0 [ 42ULL ] = 300.0 ; t0 [ 43ULL ] = 0.0 ; t0 [ 44ULL ] = 85.0 ; t0 [
45ULL ] = 0.0 ; t0 [ 46ULL ] = 0.0 ; t0 [ 47ULL ] = 300.0 ; t0 [ 48ULL ] =
0.0 ; t0 [ 49ULL ] = 85.0 ; t0 [ 50ULL ] = 0.0 ; t0 [ 51ULL ] = 0.0 ; t0 [
52ULL ] = 300.0 ; t0 [ 53ULL ] = 300.0 ; t0 [ 54ULL ] = 1.0 ; t0 [ 55ULL ] =
0.0 ; t0 [ 56ULL ] = 0.0 ; t0 [ 57ULL ] = 0.0 ; t0 [ 58ULL ] = 300.0 ; t0 [
59ULL ] = 0.0 ; t0 [ 60ULL ] = 85.0 ; t0 [ 61ULL ] = 300.0 ; t0 [ 62ULL ] =
0.0 ; t0 [ 63ULL ] = 300.0 ; t0 [ 64ULL ] = 0.0 ; t0 [ 65ULL ] = 0.0 ; t0 [
66ULL ] = 0.0 ; t0 [ 67ULL ] = 300.0 ; t0 [ 68ULL ] = 0.0 ; t0 [ 69ULL ] =
0.0 ; t0 [ 70ULL ] = 0.0 ; t0 [ 71ULL ] = 85.0 ; t0 [ 72ULL ] = P_R_idx_2 /
0.001 ; t0 [ 73ULL ] = 300.0 ; t0 [ 74ULL ] = 85.0 ; t0 [ 75ULL ] = P_R_idx_3
/ 0.001 ; t0 [ 76ULL ] = P_R_idx_4 ; t0 [ 77ULL ] = 0.0 ; t0 [ 78ULL ] =
300.0 ; t0 [ 79ULL ] = 0.0 ; t0 [ 80ULL ] = 300.0 ; t0 [ 81ULL ] = 85.0 ; t0
[ 82ULL ] = 300.0 ; t0 [ 83ULL ] = 85.0 ; t0 [ 84ULL ] = 300.0 ; t0 [ 85ULL ]
= 85.0 ; t0 [ 86ULL ] = 300.0 ; t0 [ 87ULL ] = 0.0 ; t0 [ 88ULL ] = 85.0 ; t0
[ 89ULL ] = 300.0 ; t0 [ 90ULL ] = 300.0 ; t0 [ 91ULL ] = 300.0 ; t0 [ 92ULL
] = 85.0 ; t0 [ 93ULL ] = 300.0 ; t0 [ 94ULL ] = 300.0 ; t0 [ 95ULL ] = 300.0
; t0 [ 96ULL ] = 300.0 ; t0 [ 97ULL ] = 300.0 ; t0 [ 98ULL ] = 0.0 ; t0 [
99ULL ] = 0.0 ; t0 [ 100ULL ] = 0.0 ; t0 [ 101ULL ] = 0.0 ; t0 [ 102ULL ] =
0.0 ; t0 [ 103ULL ] = 0.0 ; t0 [ 104ULL ] = 0.0 ; t0 [ 105ULL ] = 0.0 ; t0 [
106ULL ] = 0.0 ; t0 [ 107ULL ] = 0.0 ; t0 [ 108ULL ] = 0.0 ; t0 [ 109ULL ] =
0.0 ; t0 [ 110ULL ] = 0.0 ; t0 [ 111ULL ] = 0.0 ; t0 [ 112ULL ] = 0.0 ; t0 [
113ULL ] = 0.0 ; t0 [ 114ULL ] = 300.0 ; t0 [ 115ULL ] = 85.0 ; t0 [ 116ULL ]
= 300.0 ; t0 [ 117ULL ] = 300.0 ; t0 [ 118ULL ] = 85.0 ; t0 [ 119ULL ] =
300.0 ; t0 [ 120ULL ] = 300.0 ; t0 [ 121ULL ] = 85.0 ; t0 [ 122ULL ] = 300.0
; t0 [ 123ULL ] = 300.0 ; t0 [ 124ULL ] = 85.0 ; t0 [ 125ULL ] = 300.0 ; for
( b = 0 ; b < 126 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; (
void ) t4 ; return 0 ; }
