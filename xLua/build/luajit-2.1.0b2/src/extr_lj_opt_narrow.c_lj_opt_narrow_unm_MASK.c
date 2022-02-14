
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int jit_State ;
typedef int TValue ;
typedef int TRef ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

TRef FUNC_11(jit_State *VAR_6, TRef VAR_7, TValue *VAR_8)
{
  if (FUNC_10(VAR_7)) {
    VAR_7 = FUNC_3(FUNC_0(VAR_4, VAR_1), VAR_7, 0);
    FUNC_6(FUNC_8(VAR_8), VAR_8);
  }
  if (FUNC_9(VAR_7)) {
    if ((uint32_t)FUNC_7(VAR_8) != 0x80000000u)
      return FUNC_3(FUNC_1(VAR_5), FUNC_4(VAR_6, 0), VAR_7);
    VAR_7 = FUNC_3(FUNC_2(VAR_2), VAR_7, VAR_0);
  }
  return FUNC_3(FUNC_2(VAR_3), VAR_7, FUNC_5(VAR_6));
}
