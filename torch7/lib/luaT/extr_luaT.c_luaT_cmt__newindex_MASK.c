
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(lua_State *VAR_0)
{
  if(!FUNC_3(VAR_0, 1))
    FUNC_0(VAR_0, "internal error in __newindex: not a constructor table");

  if(!FUNC_1(VAR_0, 1))
    FUNC_0(VAR_0, "internal error in __newindex: no metatable available");

  FUNC_5(VAR_0, "__metatable");
  FUNC_6(VAR_0, -2);

  if(!FUNC_3(VAR_0, -1))
    FUNC_0(VAR_0, "internal error in __newindex: no metaclass available");

  FUNC_2(VAR_0, 2);
  FUNC_4(VAR_0, 1);

  FUNC_7(VAR_0, -3);

  return 0;
}
