
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;


 int FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static TValue *FUNC_2(lua_State *VAR_0, int VAR_1)
{
  if (VAR_1 > 0) {
    TValue *VAR_2 = VAR_0->base + (VAR_1 - 1);
    return VAR_2 < VAR_0->top ? VAR_2 : FUNC_1(VAR_0);
  } else {
    FUNC_0(VAR_0, VAR_1 != 0 && -VAR_1 <= VAR_0->top - VAR_0->base);
    return VAR_0->top + VAR_1;
  }
}
