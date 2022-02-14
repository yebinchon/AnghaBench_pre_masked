
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * lua_Hook ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int*) ;
 int * VAR_2 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int,char*) ;

__attribute__((used)) static int FUNC_15 (lua_State *VAR_3) {
  int VAR_4;
  lua_State *VAR_5 = FUNC_1(VAR_3, &VAR_4);
  char VAR_6[5];
  int VAR_7 = FUNC_4(VAR_5);
  lua_Hook VAR_8 = FUNC_2(VAR_5);
  if (VAR_8 == ((void*)0))
    FUNC_7(VAR_3);
  else if (VAR_8 != VAR_2)
    FUNC_6(VAR_3, "external hook");
  else {
    FUNC_11(VAR_3, VAR_1, &VAR_0);
    FUNC_0(VAR_3, VAR_5, 1);
    FUNC_9(VAR_5); FUNC_13(VAR_5, VAR_3, 1);
    FUNC_10(VAR_3, -2);
    FUNC_12(VAR_3, -2);
  }
  FUNC_8(VAR_3, FUNC_14(VAR_7, VAR_6));
  FUNC_5(VAR_3, FUNC_3(VAR_5));
  return 3;
}
