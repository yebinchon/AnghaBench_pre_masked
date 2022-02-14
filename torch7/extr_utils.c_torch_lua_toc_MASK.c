
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Number ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 double FUNC_2 () ;

__attribute__((used)) static int FUNC_3(lua_State* VAR_0)
{
  double VAR_1 = FUNC_2();
  lua_Number VAR_2 = FUNC_0(VAR_0,1);
  FUNC_1(VAR_0,VAR_1-VAR_2);
  return 1;
}
