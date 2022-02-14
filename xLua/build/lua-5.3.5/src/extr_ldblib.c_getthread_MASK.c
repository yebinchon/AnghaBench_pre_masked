
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static lua_State *FUNC_2 (lua_State *VAR_0, int *VAR_1) {
  if (FUNC_0(VAR_0, 1)) {
    *VAR_1 = 1;
    return FUNC_1(VAR_0, 1);
  }
  else {
    *VAR_1 = 0;
    return VAR_0;
  }
}
