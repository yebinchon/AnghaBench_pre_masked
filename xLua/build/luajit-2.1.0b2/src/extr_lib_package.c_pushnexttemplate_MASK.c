
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char const* VAR_0 ;
 int FUNC_0 (int *,char const*,size_t) ;
 char* FUNC_1 (char const*,char const) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static const char *FUNC_3(lua_State *VAR_1, const char *VAR_2)
{
  const char *VAR_3;
  while (*VAR_2 == *VAR_0) VAR_2++;
  if (*VAR_2 == '\0') return ((void*)0);
  VAR_3 = FUNC_1(VAR_2, *VAR_0);
  if (VAR_3 == ((void*)0)) VAR_3 = VAR_2 + FUNC_2(VAR_2);
  FUNC_0(VAR_1, VAR_2, (size_t)(VAR_3 - VAR_2));
  return VAR_3;
}
