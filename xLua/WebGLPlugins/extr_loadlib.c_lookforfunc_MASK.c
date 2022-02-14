
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * lua_CFunction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,void*) ;
 void* FUNC_1 (int *,char const*) ;
 void* FUNC_2 (int *,char const*,int) ;
 int * FUNC_3 (int *,void*,char const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_2, const char *VAR_3, const char *VAR_4) {
  void *VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5 == ((void*)0)) {
    VAR_5 = FUNC_2(VAR_2, VAR_3, *VAR_4 == '*');
    if (VAR_5 == ((void*)0)) return VAR_1;
    FUNC_0(VAR_2, VAR_3, VAR_5);
  }
  if (*VAR_4 == '*') {
    FUNC_4(VAR_2, 1);
    return 0;
  }
  else {
    lua_CFunction VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_4);
    if (VAR_6 == ((void*)0))
      return VAR_0;
    FUNC_5(VAR_2, VAR_6);
    return 0;
  }
}
