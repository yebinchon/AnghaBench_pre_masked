
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


struct TYPE_12__ {int fmds_name; } ;
struct TYPE_11__ {int fmds_name; } ;
struct TYPE_10__ {int fmds_name; } ;
struct TYPE_9__ {int fmds_name; } ;
struct TYPE_13__ {TYPE_4__ ms_caseclosed; TYPE_3__ ms_casesolved; TYPE_2__ ms_caseopen; TYPE_1__ ms_accepted; } ;
struct TYPE_14__ {int mod_serds; TYPE_5__ mod_stats; int * mod_spec; scalar_t__ mod_name; TYPE_7__ const* mod_info; } ;
typedef TYPE_6__ fmd_module_t ;
typedef int fmd_hdl_t ;
struct TYPE_15__ {scalar_t__ fmdi_desc; } ;
typedef TYPE_7__ fmd_hdl_info_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(fmd_hdl_t *VAR_0, int VAR_1, const fmd_hdl_info_t *VAR_2)
{
 fmd_module_t *VAR_3 = (fmd_module_t *)VAR_0;

 VAR_3->mod_info = VAR_2;
 VAR_3->mod_name = VAR_2->fmdi_desc + 4;
 VAR_3->mod_spec = ((void*)0);


 (void) FUNC_2(VAR_3->mod_stats.ms_accepted.fmds_name, "fmd.accepted");
 (void) FUNC_2(VAR_3->mod_stats.ms_caseopen.fmds_name, "fmd.caseopen");
 (void) FUNC_2(VAR_3->mod_stats.ms_casesolved.fmds_name, "fmd.casesolved");
 (void) FUNC_2(VAR_3->mod_stats.ms_caseclosed.fmds_name, "fmd.caseclosed");

 FUNC_1(&VAR_3->mod_serds);

 FUNC_0(VAR_0, "register module");

 return (0);
}
