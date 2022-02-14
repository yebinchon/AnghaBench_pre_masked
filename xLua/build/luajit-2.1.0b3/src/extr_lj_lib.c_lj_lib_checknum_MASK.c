
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int lua_Number ;
typedef int TValue ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

lua_Number FUNC_10(lua_State *VAR_1, int VAR_2)
{
  TValue *VAR_3 = VAR_1->base + VAR_2-1;
  if (!(VAR_3 < VAR_1->top &&
 (FUNC_8(VAR_3) || (FUNC_9(VAR_3) && FUNC_3(FUNC_6(VAR_3), VAR_3)))))
    FUNC_2(VAR_1, VAR_2, VAR_0);
  if (FUNC_0(FUNC_7(VAR_3))) {
    lua_Number VAR_4 = (lua_Number)FUNC_1(VAR_3);
    FUNC_5(VAR_3, VAR_4);
    return VAR_4;
  } else {
    return FUNC_4(VAR_3);
  }
}
