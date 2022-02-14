
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jit_State ;
typedef int TValue ;
typedef int TRef ;
typedef scalar_t__ IROp ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

TRef FUNC_12(jit_State *VAR_9, TRef VAR_10, TRef VAR_11,
    TValue *VAR_12, TValue *VAR_13, IROp VAR_14)
{
  if (FUNC_11(VAR_10)) {
    VAR_10 = FUNC_3(FUNC_0(VAR_6, VAR_1), VAR_10, 0);
    FUNC_4(FUNC_8(VAR_12), VAR_12);
  }
  if (FUNC_11(VAR_11)) {
    VAR_11 = FUNC_3(FUNC_0(VAR_6, VAR_1), VAR_11, 0);
    FUNC_4(FUNC_8(VAR_13), VAR_13);
  }

  if ((VAR_14 >= VAR_2 && VAR_14 <= (VAR_8 ? VAR_5 : VAR_7)) &&
      FUNC_9(VAR_10) && FUNC_9(VAR_11) &&
      FUNC_7(FUNC_5(FUNC_6(VAR_12), FUNC_6(VAR_13),
          (int)VAR_14 - (int)VAR_2)))
    return FUNC_3(FUNC_1((int)VAR_14 - (int)VAR_2 + (int)VAR_3), VAR_10, VAR_11);
  if (!FUNC_10(VAR_10)) VAR_10 = FUNC_3(FUNC_2(VAR_4), VAR_10, VAR_0);
  if (!FUNC_10(VAR_11)) VAR_11 = FUNC_3(FUNC_2(VAR_4), VAR_11, VAR_0);
  return FUNC_3(FUNC_2(VAR_14), VAR_10, VAR_11);
}
