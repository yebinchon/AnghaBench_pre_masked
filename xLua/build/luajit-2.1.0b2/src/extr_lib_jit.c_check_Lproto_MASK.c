
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int GCproto ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static GCproto *FUNC_7(lua_State *VAR_1, int VAR_2)
{
  TValue *VAR_3 = VAR_1->base;
  if (VAR_1->top > VAR_3) {
    if (FUNC_6(VAR_3)) {
      return FUNC_4(VAR_3);
    } else if (FUNC_5(VAR_3)) {
      if (FUNC_2(FUNC_0(VAR_3)))
 return FUNC_1(FUNC_0(VAR_3));
      else if (VAR_2)
 return ((void*)0);
    }
  }
  FUNC_3(VAR_1, 1, VAR_0);
  return ((void*)0);
}
