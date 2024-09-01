#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_dxy_p.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_dxy_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 127 ] = { 0 , 0 , 1 , 1 , 1 , 2 , 2 , 2 , 3 , 3 , 3 , 3 , 5 , 5
, 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 6 , 9 , 9 ,
9 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12
, 13 , 13 , 13 , 13 , 14 , 14 , 14 , 14 , 14 , 14 , 14 , 15 , 15 , 15 , 15 ,
16 , 16 , 16 , 16 , 16 , 17 , 18 , 20 , 20 , 20 , 20 , 20 , 20 , 20 , 20 , 20
, 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 22 , 22 , 22 , 22 , 22 , 22 , 22 ,
22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22
, 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 , 22 ,
22 } ; PmSparsityPattern out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out =
t2 -> mDXY_P ; out . mNumCol = 126ULL ; out . mNumRow = 10ULL ; for ( b = 0 ;
b < 127 ; b ++ ) { out . mJc [ b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] =
9 ; out . mIr [ 1 ] = 3 ; out . mIr [ 2 ] = 0 ; out . mIr [ 3 ] = 4 ; out .
mIr [ 4 ] = 7 ; out . mIr [ 5 ] = 5 ; out . mIr [ 6 ] = 2 ; out . mIr [ 7 ] =
5 ; out . mIr [ 8 ] = 8 ; out . mIr [ 9 ] = 2 ; out . mIr [ 10 ] = 5 ; out .
mIr [ 11 ] = 6 ; out . mIr [ 12 ] = 3 ; out . mIr [ 13 ] = 6 ; out . mIr [ 14
] = 6 ; out . mIr [ 15 ] = 4 ; out . mIr [ 16 ] = 4 ; out . mIr [ 17 ] = 4 ;
out . mIr [ 18 ] = 2 ; out . mIr [ 19 ] = 4 ; out . mIr [ 20 ] = 1 ; out .
mIr [ 21 ] = 6 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
