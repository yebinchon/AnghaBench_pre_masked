
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,char*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static void FUNC_5(lua_State *VAR_0, const char *VAR_1)
{
  const char *VAR_2;
  FUNC_2(VAR_0, -1);
  FUNC_3(VAR_0, -2, "_M");
  FUNC_1(VAR_0, VAR_1);
  FUNC_3(VAR_0, -2, "_NAME");
  VAR_2 = FUNC_4(VAR_1, '.');
  if (VAR_2 == ((void*)0)) VAR_2 = VAR_1; else VAR_2++;

  FUNC_0(VAR_0, VAR_1, (size_t)(VAR_2 - VAR_1));
  FUNC_3(VAR_0, -2, "_PACKAGE");
}
