
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ lua_Number ;
typedef int int32_t ;
typedef int cTValue ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static uint32_t FUNC_6(cTValue *VAR_1, uint32_t *VAR_2)
{
  FUNC_2(!FUNC_4(VAR_1));
  if (FUNC_5(VAR_1)) {
    lua_Number VAR_3 = FUNC_3(VAR_1);
    int32_t VAR_4 = FUNC_1(VAR_3);
    if ((uint32_t)VAR_4 < VAR_0 && VAR_3 == (lua_Number)VAR_4) {
      VAR_2[(VAR_4 > 2 ? FUNC_0((uint32_t)(VAR_4-1)) : 0)]++;
      return 1;
    }
  }
  return 0;
}
