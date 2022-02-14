
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ci; int base_ci; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_1, void *VAR_2) {
  if (VAR_2 != ((void*)0))
    FUNC_0(VAR_1, *(int *)VAR_2);
  while (VAR_1->ci != &VAR_1->base_ci) {
    if (!FUNC_1(VAR_1->ci))
      FUNC_0(VAR_1, VAR_0);
    else {
      FUNC_3(VAR_1);
      FUNC_2(VAR_1);
    }
  }
}
