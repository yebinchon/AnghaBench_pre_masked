
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * lua_CFunction ;


 int FUNC_0 () ;
 int FUNC_1 (void*,char const*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static lua_CFunction FUNC_3(lua_State *VAR_0, void *VAR_1, const char *VAR_2)
{
  lua_CFunction VAR_3 = (lua_CFunction)FUNC_1(VAR_1, VAR_2);
  if (VAR_3 == ((void*)0)) FUNC_2(VAR_0, FUNC_0());
  return VAR_3;
}
