
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_CFunction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_2, const char *VAR_3, int VAR_4,
                      lua_CFunction VAR_5) {
  if (FUNC_1(VAR_2, 1, VAR_3) == VAR_0) {
    FUNC_0(VAR_2, 1, VAR_1);
    FUNC_3(VAR_2, VAR_5);
    FUNC_6(VAR_2, 1);
    if (VAR_4) FUNC_4(VAR_2, 0);
    else FUNC_5(VAR_2);
  }
  else {
    FUNC_6(VAR_2, 1);
    FUNC_2(VAR_2, 1, 3);
  }
  return 3;
}
