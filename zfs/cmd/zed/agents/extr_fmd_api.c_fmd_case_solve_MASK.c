
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ui64; } ;
struct TYPE_8__ {TYPE_1__ fmds_value; } ;
struct TYPE_9__ {TYPE_2__ ms_casesolved; } ;
struct TYPE_10__ {TYPE_3__ mod_stats; } ;
typedef TYPE_4__ fmd_module_t ;
typedef int fmd_hdl_t ;
struct TYPE_11__ {scalar_t__ ci_state; int ci_uuid; } ;
typedef TYPE_5__ fmd_case_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1(fmd_hdl_t *VAR_1, fmd_case_t *VAR_2)
{
 fmd_module_t *VAR_3 = (fmd_module_t *)VAR_1;





 if (VAR_2->ci_state >= VAR_0)
  FUNC_0(VAR_1, "case is already solved or closed");

 VAR_2->ci_state = VAR_0;

 FUNC_0(VAR_1, "case solved (%s)", VAR_2->ci_uuid);
 VAR_3->mod_stats.ms_casesolved.fmds_value.ui64++;
}
