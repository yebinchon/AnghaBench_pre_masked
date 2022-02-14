
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int const*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int const*,int const*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;

int FUNC_8 (lua_State *VAR_2, const TValue *VAR_3, const TValue *VAR_4) {
  int VAR_5;
  if (FUNC_6(VAR_3) && FUNC_6(VAR_4))
    return FUNC_3(VAR_2, FUNC_4(VAR_3), FUNC_4(VAR_4));
  else if (FUNC_7(VAR_3) && FUNC_7(VAR_4))
    return FUNC_1(FUNC_5(VAR_3), FUNC_5(VAR_4)) <= 0;
  else if ((VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0)) >= 0)
    return VAR_5;
  else if ((VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3, VAR_1)) < 0)
    FUNC_2(VAR_2, VAR_3, VAR_4);
  return !VAR_5;
}
