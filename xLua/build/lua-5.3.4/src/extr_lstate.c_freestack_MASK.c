
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nci; int stacksize; int * stack; int base_ci; int * ci; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_0) {
  if (VAR_0->stack == ((void*)0))
    return;
  VAR_0->ci = &VAR_0->base_ci;
  FUNC_0(VAR_0);
  FUNC_2(VAR_0->nci == 0);
  FUNC_1(VAR_0, VAR_0->stack, VAR_0->stacksize);
}
