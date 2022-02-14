
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*) ;
 char* FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_0) {
  int VAR_1;
  const char *VAR_2;
  lua_State *VAR_3 = FUNC_1(VAR_0, &VAR_1);
  lua_Debug VAR_4;
  int VAR_5 = (int)FUNC_4(VAR_0, VAR_1 + 1);
  int VAR_6 = (int)FUNC_4(VAR_0, VAR_1 + 2);
  if (!FUNC_5(VAR_3, VAR_5, &VAR_4))
    return FUNC_2(VAR_0, VAR_1+1, "level out of range");
  FUNC_3(VAR_0, VAR_1+3);
  FUNC_9(VAR_0, VAR_1+3);
  FUNC_0(VAR_0, VAR_3, 1);
  FUNC_10(VAR_0, VAR_3, 1);
  VAR_2 = FUNC_8(VAR_3, &VAR_4, VAR_6);
  if (VAR_2 == ((void*)0))
    FUNC_6(VAR_3, 1);
  FUNC_7(VAR_0, VAR_2);
  return 1;
}
