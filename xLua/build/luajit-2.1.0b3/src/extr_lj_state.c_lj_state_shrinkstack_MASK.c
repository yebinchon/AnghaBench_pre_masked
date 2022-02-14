
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int stacksize; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_8__ {int cur_L; int jit_base; } ;
typedef int MSize ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int * FUNC_4 (int ) ;

void FUNC_5(lua_State *VAR_3, MSize VAR_4)
{
  if (VAR_3->stacksize > VAR_1)
    return;
  if (4*VAR_4 < VAR_3->stacksize &&
      2*(VAR_2+VAR_0) < VAR_3->stacksize &&

      (FUNC_4(FUNC_0(VAR_3)->jit_base) == ((void*)0) || FUNC_2(VAR_3) != FUNC_1(FUNC_0(VAR_3)->cur_L)))
    FUNC_3(VAR_3, VAR_3->stacksize >> 1);
}
