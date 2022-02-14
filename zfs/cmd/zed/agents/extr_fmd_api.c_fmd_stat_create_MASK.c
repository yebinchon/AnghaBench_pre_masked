
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int fmd_stat_t ;
struct TYPE_2__ {scalar_t__ mod_ustat_cnt; int * mod_ustat; } ;
typedef TYPE_1__ fmd_module_t ;
typedef int fmd_hdl_t ;


 scalar_t__ VAR_0 ;

fmd_stat_t *
FUNC_0(fmd_hdl_t *VAR_1, uint_t VAR_2, uint_t VAR_3, fmd_stat_t *VAR_4)
{
 fmd_module_t *VAR_5 = (fmd_module_t *)VAR_1;

 if (VAR_2 == VAR_0) {
  VAR_5->mod_ustat = VAR_4;
  VAR_5->mod_ustat_cnt = VAR_3;
 }

 return (VAR_4);
}
