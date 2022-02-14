
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char const*,int ) ;
 char* FUNC_3 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_1)
{
  const char *VAR_2 = FUNC_3(VAR_1, -1);
  FUNC_2("PANIC: unprotected error in call to Lua API (", VAR_0);
  FUNC_2(VAR_2 ? VAR_2 : "?", VAR_0);
  FUNC_1(')', VAR_0); FUNC_1('\n', VAR_0);
  FUNC_0(VAR_0);
  return 0;
}
