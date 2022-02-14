
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,char const*,char*) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{
  const char *VAR_1;
  const char *VAR_2 = FUNC_2(VAR_0, 1);
  VAR_1 = FUNC_0(VAR_0, VAR_2, "path");
  if (VAR_1 == ((void*)0)) return 1;
  if (FUNC_3(VAR_0, VAR_1) != 0)
    FUNC_1(VAR_0, VAR_1);
  return 1;
}
