
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fmd_serd_eng_t ;
struct TYPE_4__ {int mod_serds; } ;
typedef TYPE_1__ fmd_module_t ;
typedef int fmd_hdl_t ;
struct TYPE_5__ {int ev_hrt; } ;
typedef TYPE_2__ fmd_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,char const*) ;

int
FUNC_3(fmd_hdl_t *VAR_2, const char *VAR_3, fmd_event_t *VAR_4)
{
 fmd_module_t *VAR_5 = (fmd_module_t *)VAR_2;
 fmd_serd_eng_t *VAR_6;
 int VAR_7;

 if ((VAR_6 = FUNC_0(&VAR_5->mod_serds, VAR_3)) == ((void*)0)) {
  FUNC_2(VAR_1, "failed to add record to SERD engine '%s'",
      VAR_3);
  return (VAR_0);
 }
 VAR_7 = FUNC_1(VAR_6, VAR_4->ev_hrt);

 return (VAR_7);
}
