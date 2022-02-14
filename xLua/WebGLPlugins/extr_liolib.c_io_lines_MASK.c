
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_2) {
  int VAR_3;
  if (FUNC_4(VAR_2, 1)) FUNC_5(VAR_2);
  if (FUNC_3(VAR_2, 1)) {
    FUNC_2(VAR_2, VAR_1, VAR_0);
    FUNC_6(VAR_2, 1);
    FUNC_8(VAR_2);
    VAR_3 = 0;
  }
  else {
    const char *VAR_4 = FUNC_1(VAR_2, 1);
    FUNC_7(VAR_2, VAR_4, "r");
    FUNC_6(VAR_2, 1);
    VAR_3 = 1;
  }
  FUNC_0(VAR_2, VAR_3);
  return 1;
}
