
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(lua_State *VAR_0)
{
  const char* VAR_1 = FUNC_0(VAR_0, 1);
  if(FUNC_1(VAR_0, VAR_1))
  {
    FUNC_2(VAR_0, "__constructor");
    FUNC_3(VAR_0, -2);
    return 1;
  }
  return 0;
}
