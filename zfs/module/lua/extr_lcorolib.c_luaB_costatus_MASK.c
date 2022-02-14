
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;




 int FUNC_0 (int *,int *,int,char*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {
  lua_State *VAR_1 = FUNC_5(VAR_0, 1);
  FUNC_0(VAR_0, VAR_1, 1, "coroutine expected");
  if (VAR_0 == VAR_1) FUNC_3(VAR_0, "running");
  else {
    switch (FUNC_4(VAR_1)) {
      case 128:
        FUNC_3(VAR_0, "suspended");
        break;
      case 129: {
        lua_Debug VAR_2;
        if (FUNC_1(VAR_1, 0, &VAR_2) > 0)
          FUNC_3(VAR_0, "normal");
        else if (FUNC_2(VAR_1) == 0)
            FUNC_3(VAR_0, "dead");
        else
          FUNC_3(VAR_0, "suspended");
        break;
      }
      default:
        FUNC_3(VAR_0, "dead");
        break;
    }
  }
  return 1;
}
