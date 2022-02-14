
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ jit_State ;
typedef int TValue ;
typedef int TRef ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

TRef FUNC_14(jit_State *VAR_10, TRef VAR_11, TRef VAR_12, TValue *VAR_13)
{
  TRef VAR_14;
  if (FUNC_12(VAR_13) && !FUNC_7(FUNC_9(VAR_13), VAR_13))
    FUNC_8(VAR_10, VAR_9);
  if ((VAR_8 || (VAR_10->flags & VAR_7)) &&
      FUNC_10(VAR_11) && FUNC_10(VAR_12) &&
      (FUNC_11(VAR_13) ? FUNC_4(VAR_13) != 0 : !FUNC_13(VAR_13))) {
    FUNC_3(FUNC_0(VAR_5), VAR_12, FUNC_5(VAR_10, 0));
    return FUNC_3(FUNC_1(VAR_3), VAR_11, VAR_12);
  }

  VAR_11 = FUNC_6(VAR_10, VAR_11);
  VAR_12 = FUNC_6(VAR_10, VAR_12);
  VAR_14 = FUNC_3(FUNC_2(VAR_1), VAR_11, VAR_12);
  VAR_14 = FUNC_3(FUNC_2(VAR_2), VAR_14, VAR_0);
  VAR_14 = FUNC_3(FUNC_2(VAR_4), VAR_14, VAR_12);
  return FUNC_3(FUNC_2(VAR_6), VAR_11, VAR_14);
}
