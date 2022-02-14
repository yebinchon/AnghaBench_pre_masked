
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int global_State ;
typedef int GCObject ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

void FUNC_9 (lua_State *VAR_0, GCObject *VAR_1, GCObject *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_0);
  FUNC_6(FUNC_1(VAR_1) && FUNC_4(VAR_2) && !FUNC_2(VAR_3, VAR_2) && !FUNC_2(VAR_3, VAR_1));
  if (FUNC_5(VAR_3))
    FUNC_8(VAR_3, VAR_2);
  else {
    FUNC_6(FUNC_3(VAR_3));
    FUNC_7(VAR_3, VAR_1);
  }
}
