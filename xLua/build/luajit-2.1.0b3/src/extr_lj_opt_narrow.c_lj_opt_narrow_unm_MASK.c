
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int jit_State ;
typedef int TValue ;
typedef int TRef ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

TRef FUNC_8(jit_State *VAR_5, TRef VAR_6, TValue *VAR_7)
{
  VAR_6 = FUNC_2(VAR_5, VAR_6, VAR_7);
  if (FUNC_7(VAR_6)) {
    if ((uint32_t)FUNC_6(VAR_7) != 0x80000000u)
      return FUNC_3(FUNC_0(VAR_3), FUNC_4(VAR_5, 0), VAR_6);
    VAR_6 = FUNC_3(FUNC_1(VAR_1), VAR_6, VAR_0);
  }
  return FUNC_3(FUNC_1(VAR_2), VAR_6, FUNC_5(VAR_5, VAR_4));
}
