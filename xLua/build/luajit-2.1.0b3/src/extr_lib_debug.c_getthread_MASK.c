
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static lua_State *FUNC_2(lua_State *VAR_0, int *VAR_1)
{
  if (VAR_0->base < VAR_0->top && FUNC_1(VAR_0->base)) {
    *VAR_1 = 1;
    return FUNC_0(VAR_0->base);
  } else {
    *VAR_1 = 0;
    return VAR_0;
  }
}
