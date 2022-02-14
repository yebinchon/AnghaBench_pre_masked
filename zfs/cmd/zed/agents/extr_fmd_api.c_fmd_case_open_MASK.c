
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_8__ {int ui64; } ;
struct TYPE_9__ {TYPE_1__ fmds_value; } ;
struct TYPE_10__ {TYPE_2__ ms_caseopen; } ;
struct TYPE_11__ {TYPE_3__ mod_stats; } ;
typedef TYPE_4__ fmd_module_t ;
typedef int fmd_hdl_t ;
struct TYPE_12__ {int ci_uuid; scalar_t__ ci_bufsiz; int * ci_bufptr; void* ci_data; int ci_flags; int ci_state; int * ci_mod; } ;
typedef TYPE_5__ fmd_case_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 TYPE_5__* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

fmd_case_t *
FUNC_4(fmd_hdl_t *VAR_3, void *VAR_4)
{
 fmd_module_t *VAR_5 = (fmd_module_t *)VAR_3;
 uuid_t VAR_6;

 fmd_case_t *VAR_7;

 VAR_7 = FUNC_1(VAR_3, sizeof (fmd_case_t), VAR_2);
 VAR_7->ci_mod = VAR_3;
 VAR_7->ci_state = VAR_0;
 VAR_7->ci_flags = VAR_1;
 VAR_7->ci_data = VAR_4;
 VAR_7->ci_bufptr = ((void*)0);
 VAR_7->ci_bufsiz = 0;

 FUNC_2(VAR_6);
 FUNC_3(VAR_6, VAR_7->ci_uuid);

 FUNC_0(VAR_3, "case opened (%s)", VAR_7->ci_uuid);
 VAR_5->mod_stats.ms_caseopen.fmds_value.ui64++;

 return (VAR_7);
}
