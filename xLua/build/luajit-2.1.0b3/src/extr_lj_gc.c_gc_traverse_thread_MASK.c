
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int stacksize; int env; int stack; int * top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_11__ {scalar_t__ state; } ;
struct TYPE_13__ {TYPE_1__ gc; } ;
typedef TYPE_3__ global_State ;
typedef int TValue ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(global_State *VAR_2, lua_State *VAR_3)
{
  TValue *VAR_4, *VAR_5 = VAR_3->top;
  for (VAR_4 = FUNC_6(VAR_3->stack)+1+VAR_1; VAR_4 < VAR_5; VAR_4++)
    FUNC_1(VAR_2, VAR_4);
  if (VAR_2->gc.state == VAR_0) {
    VAR_5 = FUNC_6(VAR_3->stack) + VAR_3->stacksize;
    for (; VAR_4 < VAR_5; VAR_4++)
      FUNC_4(VAR_4);
  }
  FUNC_0(VAR_2, FUNC_5(VAR_3->env));
  FUNC_3(VAR_3, FUNC_2(VAR_2, VAR_3));
}
