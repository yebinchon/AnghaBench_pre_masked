
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint_t ;
typedef int nvlist_t ;
typedef int int64_t ;
struct TYPE_9__ {int ui64; } ;
struct TYPE_10__ {TYPE_1__ fmds_value; } ;
struct TYPE_11__ {TYPE_2__ ms_accepted; } ;
struct TYPE_13__ {TYPE_3__ mod_stats; TYPE_4__* mod_info; } ;
typedef TYPE_5__ fmd_module_t ;
typedef int fmd_hdl_t ;
struct TYPE_14__ {int (* fmdo_recv ) (int *,TYPE_7__*,int *,char const*) ;} ;
typedef TYPE_6__ fmd_hdl_ops_t ;
struct TYPE_15__ {int ev_hrt; int member_0; } ;
typedef TYPE_7__ fmd_event_t ;
struct TYPE_12__ {TYPE_6__* fmdi_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int**,int *) ;
 int FUNC_1 (int *,TYPE_7__*,int *,char const*) ;

void
FUNC_2(fmd_hdl_t *VAR_2, nvlist_t *VAR_3, const char *VAR_4)
{
 fmd_module_t *VAR_5 = (fmd_module_t *)VAR_2;
 const fmd_hdl_ops_t *VAR_6 = VAR_5->mod_info->fmdi_ops;
 fmd_event_t VAR_7 = {0};
 int64_t *VAR_8;
 uint_t VAR_9;




 if (FUNC_0(VAR_3, VAR_0, &VAR_8, &VAR_9) == 0)
  VAR_7.ev_hrt = VAR_8[0] * VAR_1 + VAR_8[1];
 else
  VAR_7.ev_hrt = 0;

 VAR_6->fmdo_recv(VAR_2, &VAR_7, VAR_3, VAR_4);

 VAR_5->mod_stats.ms_accepted.fmds_value.ui64++;


}
