
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 char const* FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int *,int) ;

__attribute__((used)) static int FUNC_12 (lua_State *VAR_0) {
  int VAR_1;
  lua_State *VAR_2 = FUNC_1(VAR_0, &VAR_1);
  lua_Debug VAR_3;
  const char *VAR_4;
  int VAR_5 = (int)FUNC_3(VAR_0, VAR_1 + 2);
  if (FUNC_6(VAR_0, VAR_1 + 1)) {
    FUNC_9(VAR_0, VAR_1 + 1);
    FUNC_8(VAR_0, FUNC_4(VAR_0, ((void*)0), VAR_5));
    return 1;
  }
  else {
    int VAR_6 = (int)FUNC_3(VAR_0, VAR_1 + 1);
    if (!FUNC_5(VAR_2, VAR_6, &VAR_3))
      return FUNC_2(VAR_0, VAR_1+1, "level out of range");
    FUNC_0(VAR_0, VAR_2, 1);
    VAR_4 = FUNC_4(VAR_2, &VAR_3, VAR_5);
    if (VAR_4) {
      FUNC_11(VAR_2, VAR_0, 1);
      FUNC_8(VAR_0, VAR_4);
      FUNC_10(VAR_0, -2, 1);
      return 2;
    }
    else {
      FUNC_7(VAR_0);
      return 1;
    }
  }
}
