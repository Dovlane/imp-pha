#include "ne_ds.h"
#include "pha_0_9_111da520_1_ds_sys_struct.h"
#include "pha_0_9_111da520_1_ds_lv.h"
#include "pha_0_9_111da520_1_ds.h"
#include "pha_0_9_111da520_1_ds_externals.h"
#include "pha_0_9_111da520_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pha_0_9_111da520_1_ds_lv ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static boolean_T
_cg_const_1 [ 126 ] = { false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , false , false , false , true , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , true , false , true , false , false
, false , false , false , true , false , false , false , false , true , true
, false , false , false , false , false , false , false , false , false ,
false , false , false , false } ; PmBoolVector out ; int32_T b ; boolean_T t0
[ 126 ] ; ( void ) t1 ; ( void ) LC ; out = t2 -> mLV ; for ( b = 0 ; b < 126
; b ++ ) { t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 126 ; b ++ ) {
out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }
