
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0, int VAR_1, const char *VAR_2)
{
  return FUNC_0(VAR_0, "%s expected, got %s", VAR_2, FUNC_1(VAR_0, VAR_1));
}
