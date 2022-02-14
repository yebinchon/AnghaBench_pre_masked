
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* tsl_license_on_assign ) (char const*,void*) ;int (* module_shutdown_hook ) () ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int VAR_0 ;
 int FUNC_5 () ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (char const*,void*) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

void
FUNC_9(const char *VAR_4, void *VAR_5)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(FUNC_4(VAR_4));
 if (FUNC_3(VAR_4))
 {
  FUNC_0(FUNC_5());
  FUNC_0(VAR_5 == ((void*)0));
  if (VAR_1->module_shutdown_hook != ((void*)0))
   VAR_1->module_shutdown_hook();
  return;
 }

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_2(VAR_3, FUNC_1(0));




 FUNC_0(VAR_5 != ((void*)0));
 VAR_1->tsl_license_on_assign(VAR_4, VAR_5);
}
