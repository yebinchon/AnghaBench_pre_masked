
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(lua_State *VAR_0, lua_Debug *VAR_1)
{
  (void)VAR_1;
  FUNC_3(VAR_0, ((void*)0), 0, 0);

  FUNC_0(VAR_0, 0);
  FUNC_2(VAR_0, "%sinterrupted!", FUNC_4(VAR_0, -1));
  FUNC_1(VAR_0);
}
