
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_23__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef scalar_t__ uint_t ;
struct TYPE_33__ {TYPE_20__* ks_data; } ;
typedef TYPE_19__ kstat_t ;
struct TYPE_31__ {int ui32; } ;
struct TYPE_32__ {TYPE_17__ value; } ;
struct TYPE_29__ {int ui32; } ;
struct TYPE_30__ {TYPE_15__ value; } ;
struct TYPE_27__ {int ui32; } ;
struct TYPE_28__ {TYPE_13__ value; } ;
struct TYPE_25__ {int ui32; } ;
struct TYPE_26__ {TYPE_11__ value; } ;
struct TYPE_45__ {int ui32; } ;
struct TYPE_24__ {TYPE_9__ value; } ;
struct TYPE_43__ {int ui32; } ;
struct TYPE_44__ {TYPE_7__ value; } ;
struct TYPE_41__ {int ui32; } ;
struct TYPE_42__ {TYPE_5__ value; } ;
struct TYPE_39__ {scalar_t__ ui32; } ;
struct TYPE_40__ {TYPE_3__ value; } ;
struct TYPE_34__ {scalar_t__ ui32; } ;
struct TYPE_38__ {TYPE_1__ value; } ;
struct TYPE_35__ {TYPE_18__ ks_taskq_maxalloc; TYPE_16__ ks_taskq_minalloc; TYPE_14__ ks_taskq_threads; TYPE_12__ ks_swq_maxjobs; TYPE_10__ ks_swq_njobs; TYPE_8__ ks_maxthrs; TYPE_6__ ks_minthrs; TYPE_4__ ks_idle_thrs; TYPE_2__ ks_thrs_in_pool; } ;
typedef TYPE_20__ kcf_stats_t ;
struct TYPE_37__ {int gs_maxjobs; int gs_njobs; } ;
struct TYPE_36__ {scalar_t__ kp_threads; scalar_t__ kp_idlethreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_23__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_21__* VAR_8 ;

__attribute__((used)) static int
FUNC_0(kstat_t *VAR_9, int VAR_10)
{
 uint_t VAR_11;
 kcf_stats_t *VAR_12;

 if (VAR_10 == VAR_1)
  return (VAR_0);

 VAR_12 = VAR_9->ks_data;

 VAR_12->ks_thrs_in_pool.value.ui32 = VAR_8->kp_threads;





 if ((VAR_11 = VAR_8->kp_idlethreads) == (VAR_8->kp_threads + 1))
  VAR_11--;
 VAR_12->ks_idle_thrs.value.ui32 = VAR_11;
 VAR_12->ks_minthrs.value.ui32 = VAR_7;
 VAR_12->ks_maxthrs.value.ui32 = VAR_6;
 VAR_12->ks_swq_njobs.value.ui32 = VAR_5->gs_njobs;
 VAR_12->ks_swq_maxjobs.value.ui32 = VAR_5->gs_maxjobs;
 VAR_12->ks_taskq_threads.value.ui32 = VAR_4;
 VAR_12->ks_taskq_minalloc.value.ui32 = VAR_3;
 VAR_12->ks_taskq_maxalloc.value.ui32 = VAR_2;

 return (0);
}
