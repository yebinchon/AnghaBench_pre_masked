
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_KContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_2, int VAR_3, lua_KContext VAR_4) {
  if (VAR_3 != VAR_0 && VAR_3 != VAR_1) {
    FUNC_1(VAR_2, 0);
    FUNC_2(VAR_2, -2);
    return 2;
  }
  else
    return FUNC_0(VAR_2) - (int)VAR_4;
}
