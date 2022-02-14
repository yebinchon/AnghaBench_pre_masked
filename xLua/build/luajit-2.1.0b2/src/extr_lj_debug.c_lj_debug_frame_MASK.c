
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * base; int stack; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int ) ;

cTValue *FUNC_7(lua_State *VAR_1, int VAR_2, int *VAR_3)
{
  cTValue *VAR_4, *VAR_5, *VAR_6 = FUNC_6(VAR_1->stack)+VAR_0;

  for (VAR_5 = VAR_4 = VAR_1->base-1; VAR_4 > VAR_6; ) {
    if (FUNC_0(VAR_4) == FUNC_5(VAR_1))
      VAR_2++;
    if (VAR_2-- == 0) {
      *VAR_3 = (int)(VAR_5 - VAR_4);
      return VAR_4;
    }
    VAR_5 = VAR_4;
    if (FUNC_1(VAR_4)) {
      VAR_4 = FUNC_4(VAR_4);
    } else {
      if (FUNC_2(VAR_4))
 VAR_2++;
      VAR_4 = FUNC_3(VAR_4);
    }
  }
  *VAR_3 = VAR_2;
  return ((void*)0);
}
