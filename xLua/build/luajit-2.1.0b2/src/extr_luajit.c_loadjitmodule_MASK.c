
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int) ;
 int VAR_0 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_1)
{
  FUNC_3(VAR_1, "require");
  FUNC_6(VAR_1, "jit.");
  FUNC_7(VAR_1, -3);
  FUNC_1(VAR_1, 2);
  if (FUNC_5(VAR_1, 1, 1, 0)) {
    const char *VAR_2 = FUNC_9(VAR_1, -1);
    if (VAR_2 && !FUNC_11(VAR_2, "module ", 7))
      goto nomodule;
    return FUNC_10(VAR_1, 1);
  }
  FUNC_2(VAR_1, -1, "start");
  if (FUNC_4(VAR_1, -1)) {
  nomodule:
    FUNC_0(VAR_0,
       "unknown luaJIT command or jit.* modules not installed");
    return 1;
  }
  FUNC_8(VAR_1, -2);
  return 0;
}
