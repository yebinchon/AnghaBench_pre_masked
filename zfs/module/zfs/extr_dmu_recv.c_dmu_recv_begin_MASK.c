
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vnode_t ;
typedef scalar_t__ uint32_t ;
typedef int offset_t ;
typedef int nvlist_t ;
struct TYPE_15__ {scalar_t__ drr_magic; int drr_flags; scalar_t__ drr_fromguid; int drr_versioninfo; } ;
struct TYPE_14__ {TYPE_2__ drr_begin; } ;
struct TYPE_16__ {scalar_t__ drr_payloadlen; TYPE_1__ drr_u; } ;
typedef TYPE_3__ dmu_replay_record_t ;
struct TYPE_17__ {char* drc_tosnap; char* drc_tofs; int drc_featureflags; void* drc_next_rrd; int drc_begin_nvl; TYPE_2__* drc_drrb; void* drc_spill; TYPE_3__* drc_drr_begin; int drc_voff; int * drc_vp; int drc_cksum; void* drc_byteswap; int drc_clone; void* drc_cred; void* drc_resumable; void* drc_force; } ;
typedef TYPE_4__ dmu_recv_cookie_t ;
struct TYPE_18__ {char* drba_origin; int drba_dcp; void* drba_cred; TYPE_4__* drba_cookie; int member_0; } ;
typedef TYPE_5__ dmu_recv_begin_arg_t ;
typedef void* boolean_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 void* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int *,int *,int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int ,int ,TYPE_5__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int *) ;
 int FUNC_10 (TYPE_3__*,int,int *) ;
 void* FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (void*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (void*,scalar_t__,int *,int ) ;
 int FUNC_15 (TYPE_4__*,scalar_t__,void*) ;

int
FUNC_16(char *VAR_13, char *VAR_14, dmu_replay_record_t *VAR_15,
    boolean_t VAR_16, boolean_t VAR_17, nvlist_t *VAR_18,
    nvlist_t *VAR_19, char *VAR_20, dmu_recv_cookie_t *VAR_21, vnode_t *VAR_22,
    offset_t *VAR_23)
{
 dmu_recv_begin_arg_t VAR_24 = { 0 };
 int VAR_25;

 FUNC_5(VAR_21, sizeof (dmu_recv_cookie_t));
 VAR_21->drc_drr_begin = VAR_15;
 VAR_21->drc_drrb = &VAR_15->drr_u.drr_begin;
 VAR_21->drc_tosnap = VAR_14;
 VAR_21->drc_tofs = VAR_13;
 VAR_21->drc_force = VAR_16;
 VAR_21->drc_resumable = VAR_17;
 VAR_21->drc_cred = FUNC_1();
 VAR_21->drc_clone = (VAR_20 != ((void*)0));

 if (VAR_21->drc_drrb->drr_magic == FUNC_0(VAR_4)) {
  VAR_21->drc_byteswap = VAR_0;
  (void) FUNC_9(VAR_15,
      sizeof (dmu_replay_record_t), &VAR_21->drc_cksum);
  FUNC_4(VAR_15);
 } else if (VAR_21->drc_drrb->drr_magic == VAR_4) {
  (void) FUNC_10(VAR_15,
      sizeof (dmu_replay_record_t), &VAR_21->drc_cksum);
 } else {
  return (FUNC_3(VAR_6));
 }

 VAR_21->drc_vp = VAR_22;
 VAR_21->drc_voff = *VAR_23;
 VAR_21->drc_featureflags =
     FUNC_2(VAR_21->drc_drrb->drr_versioninfo);

 uint32_t VAR_26 = VAR_21->drc_drr_begin->drr_payloadlen;
 void *VAR_27 = ((void*)0);
 if (VAR_26 != 0)
  VAR_27 = FUNC_11(VAR_26, VAR_7);

 VAR_25 = FUNC_15(VAR_21, VAR_26,
     VAR_27);
 if (VAR_25 != 0) {
  FUNC_12(VAR_27, VAR_26);
  return (VAR_25);
 }
 if (VAR_26 != 0) {
  VAR_25 = FUNC_14(VAR_27, VAR_26, &VAR_21->drc_begin_nvl,
      VAR_7);
  FUNC_12(VAR_27, VAR_26);
  if (VAR_25 != 0) {
   FUNC_12(VAR_21->drc_next_rrd,
       sizeof (*VAR_21->drc_next_rrd));
   return (VAR_25);
  }
 }

 if (VAR_21->drc_drrb->drr_flags & VAR_5)
  VAR_21->drc_spill = VAR_0;

 VAR_24.drba_origin = VAR_20;
 VAR_24.drba_cookie = VAR_21;
 VAR_24.drba_cred = FUNC_1();

 if (VAR_21->drc_featureflags & VAR_3) {
  VAR_25 = FUNC_8(VAR_13,
      VAR_11, VAR_12,
      &VAR_24, 5, VAR_8);
 } else {
  if ((FUNC_2(VAR_21->drc_drrb->drr_versioninfo) &
      VAR_2) == 0 &&
      VAR_20 == ((void*)0) && VAR_21->drc_drrb->drr_fromguid == 0) {
   VAR_25 = FUNC_6(VAR_1,
       VAR_18, VAR_19, &VAR_24.drba_dcp);
  }

  if (VAR_25 == 0) {
   VAR_25 = FUNC_8(VAR_13,
       VAR_9, VAR_10,
       &VAR_24, 5, VAR_8);
   FUNC_7(VAR_24.drba_dcp, !!VAR_25);
  }
 }

 if (VAR_25 != 0) {
  FUNC_12(VAR_21->drc_next_rrd, sizeof (*VAR_21->drc_next_rrd));
  FUNC_13(VAR_21->drc_begin_nvl);
 }
 return (VAR_25);
}
