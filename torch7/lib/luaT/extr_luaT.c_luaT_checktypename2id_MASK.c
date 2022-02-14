
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char const*) ;
 char* FUNC_1 (int *,char const*) ;

const char* FUNC_2(lua_State *VAR_0, const char *VAR_1)
{
  const char* VAR_2 = FUNC_1(VAR_0, VAR_1);
  if(!VAR_2)
    FUNC_0(VAR_0, "unknown class <%s>", VAR_1);
  return VAR_2;
}
