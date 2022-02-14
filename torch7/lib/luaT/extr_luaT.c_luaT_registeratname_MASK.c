
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luaL_Reg {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,struct luaL_Reg const*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

void FUNC_9(lua_State *VAR_1, const struct luaL_Reg *VAR_2, const char *VAR_3)
{
  int VAR_4 = FUNC_2(VAR_1);

  FUNC_0(VAR_1, VAR_4, VAR_0);
  FUNC_6(VAR_1, VAR_3);
  FUNC_7(VAR_1, VAR_4);

  if(FUNC_3(VAR_1, -1))
  {
    FUNC_5(VAR_1, 1);
    FUNC_6(VAR_1, VAR_3);
    FUNC_4(VAR_1);
    FUNC_8(VAR_1, VAR_4);

    FUNC_6(VAR_1, VAR_3);
    FUNC_7(VAR_1, VAR_4);
  }

  FUNC_1(VAR_1, VAR_2, 0);
  FUNC_5(VAR_1, 1);
}
