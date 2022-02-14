
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 scalar_t__ FUNC_0 (int *,int,int *) ;

__attribute__((used)) static int FUNC_1 (lua_State *VAR_0) {
  lua_Debug VAR_1;
  int VAR_2 = 1, VAR_3 = 1;

  while (FUNC_0(VAR_0, VAR_3, &VAR_1)) { VAR_2 = VAR_3; VAR_3 *= 2; }

  while (VAR_2 < VAR_3) {
    int VAR_4 = (VAR_2 + VAR_3)/2;
    if (FUNC_0(VAR_0, VAR_4, &VAR_1)) VAR_2 = VAR_4 + 1;
    else VAR_3 = VAR_4;
  }
  return VAR_3 - 1;
}
