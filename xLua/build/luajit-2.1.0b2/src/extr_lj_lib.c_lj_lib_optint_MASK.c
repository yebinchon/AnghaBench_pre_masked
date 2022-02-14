
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int int32_t ;
typedef int TValue ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

int32_t FUNC_2(lua_State *VAR_0, int VAR_1, int32_t VAR_2)
{
  TValue *VAR_3 = VAR_0->base + VAR_1-1;
  return (VAR_3 < VAR_0->top && !FUNC_1(VAR_3)) ? FUNC_0(VAR_0, VAR_1) : VAR_2;
}
