
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_t ;
typedef int hrtime_t ;
struct TYPE_2__ {int mod_serds; } ;
typedef TYPE_1__ fmd_module_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,int ) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;

void
FUNC_3(fmd_hdl_t *VAR_1, const char *VAR_2, uint_t VAR_3, hrtime_t VAR_4)
{
 fmd_module_t *VAR_5 = (fmd_module_t *)VAR_1;

 if (FUNC_1(&VAR_5->mod_serds, VAR_2) != ((void*)0)) {
  FUNC_2(VAR_0, "failed to create SERD engine '%s': "
      " name already exists", VAR_2);
  return;
 }

 (void) FUNC_0(&VAR_5->mod_serds, VAR_2, VAR_3, VAR_4);
}
