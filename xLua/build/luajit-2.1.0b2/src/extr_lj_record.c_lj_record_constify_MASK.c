
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jit_State ;
typedef int cTValue ;
typedef int TRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

TRef FUNC_12(jit_State *VAR_0, cTValue *VAR_1)
{
  if (FUNC_9(VAR_1))
    return FUNC_4(VAR_0, FUNC_1(VAR_1), FUNC_3(VAR_1));
  else if (FUNC_10(VAR_1))
    return FUNC_5(VAR_0, FUNC_2(VAR_1));
  else if (FUNC_11(VAR_1))
    return FUNC_6(VAR_0, FUNC_7(VAR_1));
  else if (FUNC_8(VAR_1))
    return FUNC_0(FUNC_3(VAR_1));
  else
    return 0;
}
