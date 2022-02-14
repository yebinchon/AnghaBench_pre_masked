
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int TMS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int const*,int const*,int ,int ) ;

int FUNC_2 (lua_State *VAR_0, const TValue *VAR_1, const TValue *VAR_2,
                      TMS VAR_3) {
  if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->top, VAR_3))
    return -1;
  else
    return !FUNC_0(VAR_0->top);
}
