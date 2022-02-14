
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mod_info; } ;
typedef TYPE_1__ fmd_module_t ;
typedef int fmd_hdl_t ;
typedef int boolean_t ;



boolean_t
FUNC_0(fmd_hdl_t *VAR_0)
{
 fmd_module_t *VAR_1 = (fmd_module_t *)VAR_0;

 return (VAR_1->mod_info != ((void*)0));
}
