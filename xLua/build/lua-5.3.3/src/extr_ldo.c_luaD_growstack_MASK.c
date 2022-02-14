
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int stacksize; scalar_t__ stack; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;

void FUNC_4 (lua_State *VAR_4, int VAR_5) {
  int VAR_6 = VAR_4->stacksize;
  if (VAR_6 > VAR_2)
    FUNC_2(VAR_4, VAR_3);
  else {
    int VAR_7 = FUNC_0(VAR_4->top - VAR_4->stack) + VAR_5 + VAR_1;
    int VAR_8 = 2 * VAR_6;
    if (VAR_8 > VAR_2) VAR_8 = VAR_2;
    if (VAR_8 < VAR_7) VAR_8 = VAR_7;
    if (VAR_8 > VAR_2) {
      FUNC_1(VAR_4, VAR_0);
      FUNC_3(VAR_4, "stack overflow");
    }
    else
      FUNC_1(VAR_4, VAR_8);
  }
}
