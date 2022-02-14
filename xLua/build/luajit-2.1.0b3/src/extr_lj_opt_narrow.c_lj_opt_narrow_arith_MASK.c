
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jit_State ;
typedef int TValue ;
typedef int TRef ;
typedef scalar_t__ IROp ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

TRef FUNC_9(jit_State *VAR_7, TRef VAR_8, TRef VAR_9,
    TValue *VAR_10, TValue *VAR_11, IROp VAR_12)
{
  VAR_8 = FUNC_2(VAR_7, VAR_8, VAR_10);
  VAR_9 = FUNC_2(VAR_7, VAR_9, VAR_11);

  if ((VAR_12 >= VAR_1 && VAR_12 <= (VAR_6 ? VAR_4 : VAR_5)) &&
      FUNC_7(VAR_8) && FUNC_7(VAR_9) &&
      FUNC_6(FUNC_4(FUNC_5(VAR_10), FUNC_5(VAR_11),
          (int)VAR_12 - (int)VAR_1)))
    return FUNC_3(FUNC_0((int)VAR_12 - (int)VAR_1 + (int)VAR_2), VAR_8, VAR_9);
  if (!FUNC_8(VAR_8)) VAR_8 = FUNC_3(FUNC_1(VAR_3), VAR_8, VAR_0);
  if (!FUNC_8(VAR_9)) VAR_9 = FUNC_3(FUNC_1(VAR_3), VAR_9, VAR_0);
  return FUNC_3(FUNC_1(VAR_12), VAR_8, VAR_9);
}
