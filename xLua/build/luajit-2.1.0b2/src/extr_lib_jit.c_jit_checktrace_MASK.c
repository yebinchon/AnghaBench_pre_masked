
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ sizetrace; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ TraceNo ;
typedef int GCtrace ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static GCtrace *FUNC_3(lua_State *VAR_0)
{
  TraceNo VAR_1 = (TraceNo)FUNC_1(VAR_0, 1);
  jit_State *VAR_2 = FUNC_0(VAR_0);
  if (VAR_1 > 0 && VAR_1 < VAR_2->sizetrace)
    return FUNC_2(VAR_2, VAR_1);
  return ((void*)0);
}
