
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int jit_State ;
typedef int int32_t ;
typedef int TRef ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

TRef FUNC_3(jit_State *VAR_0, lua_Number VAR_1)
{
  int32_t VAR_2;
  if (FUNC_2(VAR_1, &VAR_2))
    return FUNC_0(VAR_0, VAR_2);
  else
    return FUNC_1(VAR_0, VAR_1);
}
