
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef size_t lua_Integer ;
typedef int luaL_Buffer ;


 size_t VAR_0 ;
 char* FUNC_0 (int *,int *,size_t) ;
 size_t FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int,char*,size_t*) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_1) {
  size_t VAR_2, VAR_3;
  const char *VAR_4 = FUNC_2(VAR_1, 1, &VAR_2);
  lua_Integer VAR_5 = FUNC_1(VAR_1, 2);
  const char *VAR_6 = FUNC_4(VAR_1, 3, "", &VAR_3);
  if (VAR_5 <= 0) FUNC_6(VAR_1, "");
  else if (VAR_2 + VAR_3 < VAR_2 || VAR_2 + VAR_3 > VAR_0 / VAR_5)
    return FUNC_3(VAR_1, "resulting string too large");
  else {
    size_t VAR_7 = (size_t)VAR_5 * VAR_2 + (size_t)(VAR_5 - 1) * VAR_3;
    luaL_Buffer VAR_8;
    char *VAR_9 = FUNC_0(VAR_1, &VAR_8, VAR_7);
    while (VAR_5-- > 1) {
      FUNC_7(VAR_9, VAR_4, VAR_2 * sizeof(char)); VAR_9 += VAR_2;
      if (VAR_3 > 0) {
        FUNC_7(VAR_9, VAR_6, VAR_3 * sizeof(char));
        VAR_9 += VAR_3;
      }
    }
    FUNC_7(VAR_9, VAR_4, VAR_2 * sizeof(char));
    FUNC_5(&VAR_8, VAR_7);
  }
  return 1;
}
