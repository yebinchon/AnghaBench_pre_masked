
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * lua_CFunction ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,char const*) ;
 void** FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int *,void*,char const*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_2, const char *VAR_3, const char *VAR_4) {
  void **VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (*VAR_5 == ((void*)0)) *VAR_5 = FUNC_0(VAR_2, VAR_3);
  if (*VAR_5 == ((void*)0))
    return VAR_1;
  else {
    lua_CFunction VAR_6 = FUNC_2(VAR_2, *VAR_5, VAR_4);
    if (VAR_6 == ((void*)0))
      return VAR_0;
    FUNC_3(VAR_2, VAR_6);
    return 0;
  }
}
