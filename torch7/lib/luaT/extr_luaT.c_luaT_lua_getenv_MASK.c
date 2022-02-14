
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(lua_State *VAR_0)
{
  if(!FUNC_2(VAR_0, 1) && !FUNC_4(VAR_0, 1))
    FUNC_0(VAR_0, 1, "function or userdata");
  FUNC_1(VAR_0, 1);
  if (FUNC_3(VAR_0, -1))
    FUNC_5(VAR_0);
  return 1;
}
