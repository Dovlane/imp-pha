#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_dxm_p.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_dxm_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 127 ] = { 0 , 4 , 8 , 12 , 16 , 20 , 24 , 24 , 24 , 24 , 24 ,
28 , 32 , 36 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40
, 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 , 40 ,
40 , 40 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42
, 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 44 , 46 , 48 , 48 ,
52 , 52 , 52 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56
, 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 ,
56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56
, 56 , 56 , 56 , 56 , 56 , 56 , 56 } ; PmSparsityPattern out ; int32_T b ; (
void ) t1 ; ( void ) LC ; out = t2 -> mDXM_P ; out . mNumCol = 126ULL ; out .
mNumRow = 33ULL ; for ( b = 0 ; b < 127 ; b ++ ) { out . mJc [ b ] =
_cg_const_1 [ b ] ; } out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] = 1 ; out . mIr [
2 ] = 2 ; out . mIr [ 3 ] = 3 ; out . mIr [ 4 ] = 0 ; out . mIr [ 5 ] = 1 ;
out . mIr [ 6 ] = 2 ; out . mIr [ 7 ] = 3 ; out . mIr [ 8 ] = 0 ; out . mIr [
9 ] = 1 ; out . mIr [ 10 ] = 2 ; out . mIr [ 11 ] = 3 ; out . mIr [ 12 ] = 5
; out . mIr [ 13 ] = 6 ; out . mIr [ 14 ] = 7 ; out . mIr [ 15 ] = 8 ; out .
mIr [ 16 ] = 5 ; out . mIr [ 17 ] = 6 ; out . mIr [ 18 ] = 7 ; out . mIr [ 19
] = 8 ; out . mIr [ 20 ] = 5 ; out . mIr [ 21 ] = 6 ; out . mIr [ 22 ] = 7 ;
out . mIr [ 23 ] = 8 ; out . mIr [ 24 ] = 14 ; out . mIr [ 25 ] = 15 ; out .
mIr [ 26 ] = 16 ; out . mIr [ 27 ] = 17 ; out . mIr [ 28 ] = 14 ; out . mIr [
29 ] = 15 ; out . mIr [ 30 ] = 16 ; out . mIr [ 31 ] = 17 ; out . mIr [ 32 ]
= 18 ; out . mIr [ 33 ] = 19 ; out . mIr [ 34 ] = 20 ; out . mIr [ 35 ] = 21
; out . mIr [ 36 ] = 18 ; out . mIr [ 37 ] = 19 ; out . mIr [ 38 ] = 20 ; out
. mIr [ 39 ] = 21 ; out . mIr [ 40 ] = 20 ; out . mIr [ 41 ] = 21 ; out . mIr
[ 42 ] = 16 ; out . mIr [ 43 ] = 17 ; out . mIr [ 44 ] = 16 ; out . mIr [ 45
] = 17 ; out . mIr [ 46 ] = 16 ; out . mIr [ 47 ] = 17 ; out . mIr [ 48 ] =
14 ; out . mIr [ 49 ] = 15 ; out . mIr [ 50 ] = 16 ; out . mIr [ 51 ] = 17 ;
out . mIr [ 52 ] = 18 ; out . mIr [ 53 ] = 19 ; out . mIr [ 54 ] = 20 ; out .
mIr [ 55 ] = 21 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
