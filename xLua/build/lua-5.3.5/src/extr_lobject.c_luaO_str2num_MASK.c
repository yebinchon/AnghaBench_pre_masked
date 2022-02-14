
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int lua_Integer ;
typedef int TValue ;


 char* FUNC_0 (char const*,int *) ;
 char* FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

size_t FUNC_4 (const char *VAR_0, TValue *VAR_1) {
  lua_Integer VAR_2; lua_Number VAR_3;
  const char *VAR_4;
  if ((VAR_4 = FUNC_1(VAR_0, &VAR_2)) != ((void*)0)) {
    FUNC_3(VAR_1, VAR_2);
  }
  else if ((VAR_4 = FUNC_0(VAR_0, &VAR_3)) != ((void*)0)) {
    FUNC_2(VAR_1, VAR_3);
  }
  else
    return 0;
  return (VAR_4 - VAR_0) + 1;
}
