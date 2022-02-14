
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_14__ {TYPE_12__* ks_data; scalar_t__ ks_private; } ;
typedef TYPE_10__ kstat_t ;
struct TYPE_25__ {scalar_t__ ks_nbusy_rval; scalar_t__ ks_nfails; scalar_t__ ks_ndispatches; } ;
struct TYPE_15__ {TYPE_9__ pd_sched_info; } ;
typedef TYPE_11__ kcf_provider_desc_t ;
struct TYPE_23__ {scalar_t__ ui64; } ;
struct TYPE_24__ {TYPE_7__ value; } ;
struct TYPE_21__ {scalar_t__ ui64; } ;
struct TYPE_22__ {TYPE_5__ value; } ;
struct TYPE_19__ {scalar_t__ ui64; } ;
struct TYPE_20__ {TYPE_3__ value; } ;
struct TYPE_17__ {scalar_t__ ui64; } ;
struct TYPE_18__ {TYPE_1__ value; } ;
struct TYPE_16__ {TYPE_8__ ps_ops_passed; TYPE_6__ ps_ops_busy_rval; TYPE_4__ ps_ops_failed; TYPE_2__ ps_ops_total; } ;
typedef TYPE_12__ kcf_prov_stats_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(kstat_t *VAR_2, int VAR_3)
{
 kcf_prov_stats_t *VAR_4;
 kcf_provider_desc_t *VAR_5 = (kcf_provider_desc_t *)VAR_2->ks_private;

 if (VAR_3 == VAR_1)
  return (VAR_0);

 VAR_4 = VAR_2->ks_data;

 VAR_4->ps_ops_total.value.ui64 = VAR_5->pd_sched_info.ks_ndispatches;
 VAR_4->ps_ops_failed.value.ui64 = VAR_5->pd_sched_info.ks_nfails;
 VAR_4->ps_ops_busy_rval.value.ui64 = VAR_5->pd_sched_info.ks_nbusy_rval;
 VAR_4->ps_ops_passed.value.ui64 =
     VAR_5->pd_sched_info.ks_ndispatches -
     VAR_5->pd_sched_info.ks_nfails -
     VAR_5->pd_sched_info.ks_nbusy_rval;

 return (0);
}
