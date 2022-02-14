
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int int32_t ;
typedef int TValue ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

int32_t FUNC_8(lua_State *VAR_2, int VAR_3)
{
  TValue *VAR_4 = VAR_2->base + VAR_3-1;
  if (!(VAR_4 < VAR_2->top && FUNC_4(VAR_4)))
    FUNC_2(VAR_2, VAR_3, VAR_1);
  if (FUNC_0(FUNC_7(VAR_4))) {
    return FUNC_1(VAR_4);
  } else {
    int32_t VAR_5 = FUNC_3(FUNC_5(VAR_4));
    if (VAR_0) FUNC_6(VAR_4, VAR_5);
    return VAR_5;
  }
}
