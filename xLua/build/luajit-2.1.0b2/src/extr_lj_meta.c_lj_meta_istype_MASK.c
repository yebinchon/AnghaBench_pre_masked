
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int BCReg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int * VAR_3 ;
 int FUNC_5 (int) ;

void FUNC_6(lua_State *VAR_4, BCReg VAR_5, BCReg VAR_6)
{
  VAR_4->top = FUNC_0(VAR_4);
  VAR_5++; VAR_6--;
  FUNC_5(VAR_0 || VAR_6 != ~VAR_1);
  if (VAR_0 && VAR_6 == ~VAR_1) FUNC_2(VAR_4, VAR_5);
  else if (VAR_6 == ~VAR_1+1) FUNC_3(VAR_4, VAR_5);
  else if (VAR_6 == ~VAR_2) FUNC_4(VAR_4, VAR_5);
  else FUNC_1(VAR_4, VAR_5, VAR_3[VAR_6]);
}
