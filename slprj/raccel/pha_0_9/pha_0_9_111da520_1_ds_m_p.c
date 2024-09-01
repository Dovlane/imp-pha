#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_m_p.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_m_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 127 ] = { 0 , 2 , 4 , 5 , 7 , 9 , 10 , 11 , 12 , 13 , 14 , 16 ,
18 , 20 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 33 , 33
, 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 ,
33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33
, 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 ,
33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33
, 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 ,
33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33 , 33
, 33 , 33 , 33 , 33 , 33 , 33 } ; PmSparsityPattern out ; int32_T b ; ( void
) t1 ; ( void ) LC ; out = t2 -> mM_P ; out . mNumCol = 126ULL ; out .
mNumRow = 126ULL ; for ( b = 0 ; b < 127 ; b ++ ) { out . mJc [ b ] =
_cg_const_1 [ b ] ; } out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 2 ; out . mIr [
2 ] = 1 ; out . mIr [ 3 ] = 2 ; out . mIr [ 4 ] = 0 ; out . mIr [ 5 ] = 4 ;
out . mIr [ 6 ] = 5 ; out . mIr [ 7 ] = 4 ; out . mIr [ 8 ] = 5 ; out . mIr [
9 ] = 3 ; out . mIr [ 10 ] = 6 ; out . mIr [ 11 ] = 7 ; out . mIr [ 12 ] = 12
; out . mIr [ 13 ] = 14 ; out . mIr [ 14 ] = 8 ; out . mIr [ 15 ] = 9 ; out .
mIr [ 16 ] = 8 ; out . mIr [ 17 ] = 9 ; out . mIr [ 18 ] = 10 ; out . mIr [
19 ] = 11 ; out . mIr [ 20 ] = 10 ; out . mIr [ 21 ] = 11 ; out . mIr [ 22 ]
= 13 ; out . mIr [ 23 ] = 15 ; out . mIr [ 24 ] = 21 ; out . mIr [ 25 ] = 16
; out . mIr [ 26 ] = 17 ; out . mIr [ 27 ] = 18 ; out . mIr [ 28 ] = 19 ; out
. mIr [ 29 ] = 20 ; out . mIr [ 30 ] = 22 ; out . mIr [ 31 ] = 23 ; out . mIr
[ 32 ] = 24 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
