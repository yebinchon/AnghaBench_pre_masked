
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stacksize; int top; int stack; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(lua_State *VAR_2)
{
  if (VAR_2->stacksize > VAR_1 && VAR_2->top-FUNC_1(VAR_2->stack) < VAR_0-1)
    FUNC_0(VAR_2, VAR_0);
}
