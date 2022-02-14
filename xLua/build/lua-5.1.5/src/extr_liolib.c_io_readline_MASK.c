
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10 (lua_State *VAR_1) {
  FILE *VAR_2 = *(FILE **)FUNC_6(VAR_1, FUNC_7(1));
  int VAR_3;
  if (VAR_2 == ((void*)0))
    FUNC_2(VAR_1, "file is already closed");
  VAR_3 = FUNC_8(VAR_1, VAR_2);
  if (FUNC_1(VAR_2))
    return FUNC_2(VAR_1, "%s", FUNC_9(VAR_0));
  if (VAR_3) return 1;
  else {
    if (FUNC_5(VAR_1, FUNC_7(2))) {
      FUNC_4(VAR_1, 0);
      FUNC_3(VAR_1, FUNC_7(1));
      FUNC_0(VAR_1);
    }
    return 0;
  }
}
