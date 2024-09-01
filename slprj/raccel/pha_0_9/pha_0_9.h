#ifndef RTW_HEADER_pha_0_9_h_
#define RTW_HEADER_pha_0_9_h_
#ifndef pha_0_9_COMMON_INCLUDES_
#define pha_0_9_COMMON_INCLUDES_
#include <stdio.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "pha_0_9_111da520_1_gateway.h"
#include "nesl_rtw.h"
#include "physmod/common/logging2/core/rtw/SscRTWLogging.h"
#include "stdlib.h"
#include "ssc_rtw_logging.h"
#include "physmod/common/logging2/core/rtw/rtw_log_fcn_manager.h"
#endif
#include "pha_0_9_types.h"
#include <string.h>
#include <stddef.h>
#include <float.h>
#include "mwmathutil.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME pha_0_9
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (51) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (131)   
#elif NCSTATES != 131
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T m0za0b3lr2 ; real_T gucu42oot3 ; real_T ahlgnathrd ;
real_T dnz0rp2bup ; real_T j5oevqcglj ; real_T gj5iwt5ooj ; real_T mdoqbnusrj
; real_T ktf3mjep1c ; real_T hmp5eu1gav ; real_T duxqetgzhc ; real_T
l0wd0por5w ; real_T lhjaesm45e ; real_T ecmrbtctyr ; real_T puaxuhcx5l ;
real_T jm5jkar05r ; real_T kmhipurxo0 ; real_T dm5mtjipdw [ 4 ] ; real_T
fas1v2vrdk ; real_T jadzpkmuj2 ; real_T p3mtxgf5r0 ; real_T aay0cthl5b ;
real_T b0euoqogax ; real_T kdafbgl2kl ; real_T nuwxay5kos ; real_T m502eztgoc
; real_T mkig3ty4kz ; real_T nhkbsimdnx ; real_T po45oiucru [ 4 ] ; real_T
prfmu3c01o [ 4 ] ; real_T gyihakzqep ; real_T f2odyp2mvm ; real_T g0rg3dpy55
; real_T iedigs2ali [ 4 ] ; real_T ivx3cjbvaj ; real_T esxew1bxhz [ 198 ] ;
real_T g2lcupc0vo [ 10 ] ; real_T hyn2mzczou ; real_T mxk10ofmfg ; real_T
i4lj5bxg51 ; real_T brlvfuxaob ; real_T c0jvzaivbg ; real_T onylfjlame ;
real_T ph3e1hmjdr ; real_T i31jk0iy2i ; real_T br544y5c1w ; real_T itggplgumn
; real_T hhcd4btgri ; real_T d3a53bljql ; real_T pvrpxvch23 ; real_T
ox0ur4ecpg ; real_T jfr0g5u1sf ; } B ; typedef struct { real_T jyvbb3c21t [ 2
] ; real_T ii2uylflih ; real_T asvtvarmbc ; real_T k0bdrlkwiq [ 2 ] ; real_T
azokvtooxw [ 2 ] ; real_T m03o3nukj2 [ 5 ] ; real_T o0rehg2mop ; struct {
real_T modelTStart ; } ezt044acxv ; struct { real_T modelTStart ; }
idwjt1x2cd ; struct { real_T modelTStart ; } kesbszygtf ; struct { real_T
modelTStart ; } j3ufwsqibm ; struct { void * TUbufferPtrs [ 2 ] ; }
f3biyympth ; struct { void * TUbufferPtrs [ 2 ] ; } jdknbk1age ; struct {
void * TUbufferPtrs [ 2 ] ; } p5saxr4o0f ; struct { void * TUbufferPtrs [ 2 ]
; } bpuk1pdm3x ; void * gw20xosyr1 ; void * hhsbxeii4m ; void * fj4aqip5oa ;
void * btrddqfwca ; void * izznjfm4pc ; void * isyfafpgzq ; void * bd243nh5y3
; void * acptrjzcqz ; void * olw41uyegm ; void * lse4cj4bwu ; void *
mv4ej4pni5 ; struct { void * LoggedData ; } j1p2hxsfve ; struct { void *
LoggedData ; } dsan2yefar ; struct { void * LoggedData ; } hcmzflxpsq ;
struct { void * LoggedData ; } jz4uhoo0fb ; struct { void * LoggedData ; }
mhzs43sey4 ; struct { void * LoggedData ; } khzguuli43 ; void * mrqszxjji2 ;
void * fikcbckkyr ; void * isk1cpyugg ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; } ngat1pyozl ;
struct { int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } ojok31w2uk ; struct { int_T Tail ; int_T Head ; int_T Last
; int_T CircularBufSize ; int_T MaxNewBufSize ; } hwohqmhrzq ; struct { int_T
Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize
; } df531s2hdp ; int_T dyxglur3eu [ 67 ] ; int_T pondv4ezn4 ; int_T
eqah3tvqef ; int32_T omis1sz1c1 ; boolean_T pka2kvd4xr ; boolean_T lrjwmtodrz
; boolean_T l1sgtau4de ; boolean_T euajuiqyjk ; boolean_T bgrjrvlkdf ;
boolean_T elk1ic4slt ; } DW ; typedef struct { real_T alcp5effvp ; real_T
fegoyxeour ; real_T gcrrfaz50v ; real_T offxl3dkmo ; real_T pjkpdgwqyh ;
real_T huwelhlato [ 126 ] ; } X ; typedef struct { real_T alcp5effvp ; real_T
fegoyxeour ; real_T gcrrfaz50v ; real_T offxl3dkmo ; real_T pjkpdgwqyh ;
real_T huwelhlato [ 126 ] ; } XDot ; typedef struct { boolean_T alcp5effvp ;
boolean_T fegoyxeour ; boolean_T gcrrfaz50v ; boolean_T offxl3dkmo ;
boolean_T pjkpdgwqyh ; boolean_T huwelhlato [ 126 ] ; } XDis ; typedef struct
{ real_T alcp5effvp ; real_T fegoyxeour ; real_T gcrrfaz50v ; real_T
offxl3dkmo ; real_T pjkpdgwqyh ; real_T huwelhlato [ 126 ] ; } CStateAbsTol ;
typedef struct { real_T alcp5effvp ; real_T fegoyxeour ; real_T gcrrfaz50v ;
real_T offxl3dkmo ; real_T pjkpdgwqyh ; real_T huwelhlato [ 126 ] ; } CXPtMin
; typedef struct { real_T alcp5effvp ; real_T fegoyxeour ; real_T gcrrfaz50v
; real_T offxl3dkmo ; real_T pjkpdgwqyh ; real_T huwelhlato [ 126 ] ; }
CXPtMax ; typedef struct { real_T ic25ygsem0 ; real_T ko5chhblpu ; real_T
lwqcq24kt3 ; real_T icaqxvyvdw ; real_T bjfy0vyba2 ; real_T hepy0enbpk ;
real_T bp53nmk0hx ; real_T azavylhuxq ; real_T m55eao1w30 ; real_T mopccmeocc
; real_T huxcrrndwp ; real_T cspzhzy4o2 ; real_T kmvvy3crrl ; real_T
fetxzz2yl3 ; real_T adu2ljk4lx ; real_T jzkg5brk5f ; real_T ei51kcmfff ;
real_T ixvje4aaz4 ; real_T jaosrqomx2 ; real_T nlz2oj1nc1 ; real_T ltt3vncf51
; real_T ik5indzzjy ; real_T ntx4mdfkck ; real_T f1s4tyqjd2 ; real_T
j31unxutuo ; real_T jrtquc2sed ; real_T gda3srlveb ; real_T i4rx3irql2 ;
real_T hl23lz3bf5 ; real_T gwukiqzbih ; real_T bdj4e5zzql ; real_T an0dvwpulk
; real_T ce200artmm ; real_T euncutvpvk ; real_T frowzsyprb ; real_T
g34bo1okro ; real_T gyequ5sstl ; real_T o54vjcncjz ; real_T lu0pq3ywf5 ;
real_T lecndjcrxd ; real_T el4hti44j1 ; real_T pi2k5fbdud ; real_T ku1q3gbatr
; real_T dnl00exyfr ; real_T kiyjd4nzki ; real_T hk1hujx53c ; real_T
owfzp4layc ; real_T ctd0otsvzm ; real_T bkwypjrywb ; real_T jqpezohbro ;
real_T exjvcnqxrh ; real_T ka0qvcbatg ; real_T irejdjker3 ; real_T ppiuwvcqdf
; real_T l3q0nnciix ; real_T arrihgmk5w ; real_T nerwahjtve ; real_T
nkwxzueliz ; real_T ggnnhhwjef ; real_T frgpgyoxug ; real_T m1cno3sqxe ;
real_T gs5pwrzfvo ; real_T g4iezgw3yw ; real_T aqy31pohr5 ; real_T dlsblmkdog
; real_T moxj0oalqq ; real_T fhalsf3zzh ; real_T p4khox3rwa ; real_T
cktw0ofbmn ; real_T jtv5neonve ; real_T dwmni1o0jz ; real_T psy1qfo2zs ;
real_T fewo5rhtjx ; real_T en1l4agloq ; real_T jy3tcbwzer ; real_T oyjuwrkbbl
; real_T c2p354srqa ; real_T nm5es0ykpz ; real_T eok2fhbegj ; real_T
clza32heky ; } ZCV ; typedef struct { int_T ir [ 45 ] ; int_T jc [ 132 ] ;
real_T pr [ 45 ] ; } MassMatrix ; typedef struct { rtwCAPI_ModelMappingInfo
mmi ; } DataMapInfo ; struct P_ { real_T PIDController_D ; real_T
PIDController1_D ; real_T PIDController_I ; real_T PIDController1_I ; real_T
PIDController_InitialConditionForFilter ; real_T
PIDController1_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController1_LowerSaturationLimit ; real_T PIDController_N ; real_T
PIDController1_N ; real_T PIDController_P ; real_T PIDController1_P ; real_T
PIDController1_UpperSaturationLimit ; real_T RepeatingSequence_rep_seq_y [ 5
] ; real_T TransportDelay2_Delay ; real_T TransportDelay2_InitOutput ; real_T
Relay_OnVal ; real_T Relay_OffVal ; real_T Relay_YOn ; real_T Relay_YOff ;
real_T Gain1_Gain ; real_T LookUpTable1_bp01Data [ 5 ] ; real_T
TransportDelay4_Delay ; real_T TransportDelay4_InitOutput ; real_T Gain7_Gain
; real_T TransportDelay5_Delay ; real_T TransportDelay5_InitOutput ; real_T
TransportDelay1_Delay ; real_T TransportDelay1_InitOutput ; real_T
Relay1_OnVal ; real_T Relay1_OffVal ; real_T Relay1_YOn ; real_T Relay1_YOff
; real_T Gain5_Gain ; real_T Gain_Gain ; real_T Gain_Gain_ld3kxi2ge1 ; real_T
Gain3_Gain ; real_T Gain5_Gain_kplrypbnhr ; real_T Gain4_Gain ; real_T
Gain5_Gain_cyso43qiuo ; real_T Gain5_Gain_h1rdjlyvou ; real_T
Gain5_Gain_imrt3sps2q ; real_T Gain5_Gain_cns52zdlxh ; real_T
Gain_Gain_mlk0nba5an ; real_T Gain6_Gain ; real_T Constant_Value ; real_T
Constant1_Value ; real_T Constant2_Value ; real_T Constant5_Value ; real_T
Constant6_Value ; real_T Constant7_Value ; real_T Constant_Value_idbpuu0wz0 ;
real_T RTP_A2061EF3_v_Value ; real_T RTP_7BA69D45_v_Value ; real_T
RTP_E5C208E6_x_Value ; real_T RTP_EE9E4FDB_x_Value ; real_T
RTP_082CD161_liquid_volume_Value ; real_T RTP_7CAF3599_t_Value ; real_T
RTP_7CAF3599_w_Value ; real_T RTP_964844C2_liquid_volume_Value ; } ; extern
const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern MassMatrix rtMassMatrix ; extern P rtP ; extern
mxArray * mr_pha_0_9_GetDWork ( ) ; extern void mr_pha_0_9_SetDWork ( const
mxArray * ssDW ) ; extern mxArray * mr_pha_0_9_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * pha_0_9_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
