
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fmd_serd_eng_t ;
struct TYPE_2__ {int mod_serds; } ;
typedef TYPE_1__ fmd_module_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;

void
FUNC_4(fmd_hdl_t *VAR_1, const char *VAR_2)
{
 fmd_module_t *VAR_3 = (fmd_module_t *)VAR_1;
 fmd_serd_eng_t *VAR_4;

 if ((VAR_4 = FUNC_1(&VAR_3->mod_serds, VAR_2)) == ((void*)0)) {
  FUNC_3(VAR_0, "serd engine '%s' does not exist", VAR_2);
  return;
 }

 FUNC_2(VAR_4);

 FUNC_0(VAR_1, "serd_reset %s", VAR_2);
}
