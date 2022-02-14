
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (char const*,char) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_4(lua_State *VAR_0, const char *VAR_1)
{
  char *VAR_2, *VAR_3;
  if ((!FUNC_3(VAR_1, "GROUP", 5) || !FUNC_3(VAR_1, "INPUT", 5)) &&
      (VAR_2 = FUNC_1(VAR_1, '('))) {
    while (*++VAR_2 == ' ') ;
    for (VAR_3 = VAR_2; *VAR_3 && *VAR_3 != ' ' && *VAR_3 != ')'; VAR_3++) ;
    return FUNC_2(FUNC_0(VAR_0, VAR_2, VAR_3-VAR_2));
  }
  return ((void*)0);
}
