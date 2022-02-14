
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lua_Number ;
typedef int jit_State ;
typedef int cTValue ;
typedef int IRType ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

IRType FUNC_4(jit_State *VAR_5, cTValue *VAR_6)
{
  FUNC_0(FUNC_3(&VAR_6[VAR_0]) &&
      FUNC_3(&VAR_6[VAR_2]) &&
      FUNC_3(&VAR_6[VAR_1]));

  if (FUNC_1(VAR_5, &VAR_6[VAR_0]) &&
      FUNC_1(VAR_5, &VAR_6[VAR_2]) &&
      FUNC_1(VAR_5, &VAR_6[VAR_1])) {

    lua_Number VAR_7 = FUNC_2(&VAR_6[VAR_1]);
    lua_Number VAR_8 = FUNC_2(&VAR_6[VAR_2]) + VAR_7;
    if (0 <= VAR_7 ? (VAR_8 <= 2147483647.0) : (VAR_8 >= -2147483648.0))
      return VAR_3;
  }
  return VAR_4;
}
