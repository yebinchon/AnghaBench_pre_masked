
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 char* FUNC_0 (int *,int *,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,size_t) ;
 char FUNC_3 (int ) ;
 int FUNC_4 (char const) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0) {
  size_t VAR_1;
  size_t VAR_2;
  luaL_Buffer VAR_3;
  const char *VAR_4 = FUNC_1(VAR_0, 1, &VAR_1);
  char *VAR_5 = FUNC_0(VAR_0, &VAR_3, VAR_1);
  for (VAR_2=0; VAR_2<VAR_1; VAR_2++)
    VAR_5[VAR_2] = FUNC_3(FUNC_4(VAR_4[VAR_2]));
  FUNC_2(&VAR_3, VAR_1);
  return 1;
}
