
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int GCstr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

GCstr *FUNC_7(lua_State *VAR_1, int VAR_2)
{
  TValue *VAR_3 = VAR_1->base + VAR_2-1;
  if (VAR_3 < VAR_1->top) {
    if (FUNC_0(FUNC_6(VAR_3))) {
      return FUNC_4(VAR_3);
    } else if (FUNC_5(VAR_3)) {
      GCstr *VAR_4 = FUNC_2(VAR_1, VAR_3);
      FUNC_3(VAR_1, VAR_3, VAR_4);
      return VAR_4;
    }
  }
  FUNC_1(VAR_1, VAR_2, VAR_0);
  return ((void*)0);
}
