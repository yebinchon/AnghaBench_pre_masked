
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef scalar_t__ lua_Integer ;
typedef int TValue ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;

__attribute__((used)) static int FUNC_8 (const TValue *VAR_0, const TValue *VAR_1) {
  if (FUNC_7(VAR_0)) {
    lua_Integer VAR_2 = FUNC_3(VAR_0);
    if (FUNC_7(VAR_1))
      return VAR_2 < FUNC_3(VAR_1);
    else
      return FUNC_1(VAR_2, FUNC_2(VAR_1));
  }
  else {
    lua_Number VAR_3 = FUNC_2(VAR_0);
    if (FUNC_6(VAR_1))
      return FUNC_5(VAR_3, FUNC_2(VAR_1));
    else if (FUNC_4(VAR_3))
      return 0;
    else
      return !FUNC_0(FUNC_3(VAR_1), VAR_3);
  }
}
