
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod_serds; } ;
typedef TYPE_1__ fmd_module_t ;
typedef int fmd_hdl_t ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char const*) ;

void
FUNC_2(fmd_hdl_t *VAR_0, const char *VAR_1)
{
 fmd_module_t *VAR_2 = (fmd_module_t *)VAR_0;

 FUNC_1(&VAR_2->mod_serds, VAR_1);

 FUNC_0(VAR_0, "serd_destroy %s", VAR_1);
}
