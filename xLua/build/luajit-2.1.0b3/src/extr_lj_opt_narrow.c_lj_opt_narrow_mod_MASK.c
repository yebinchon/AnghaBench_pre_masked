
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
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

TRef FUNC_11(jit_State *VAR_9, TRef VAR_10, TRef VAR_11, TValue *VAR_12, TValue *VAR_13)
{
  TRef VAR_14;
  VAR_10 = FUNC_3(VAR_9, VAR_10, VAR_12);
  VAR_11 = FUNC_3(VAR_9, VAR_11, VAR_13);
  if ((VAR_8 || (VAR_9->flags & VAR_7)) &&
      FUNC_8(VAR_10) && FUNC_8(VAR_11) &&
      (FUNC_9(VAR_13) ? FUNC_5(VAR_13) != 0 : !FUNC_10(VAR_13))) {
    FUNC_4(FUNC_0(VAR_5), VAR_11, FUNC_6(VAR_9, 0));
    return FUNC_4(FUNC_1(VAR_3), VAR_10, VAR_11);
  }

  VAR_10 = FUNC_7(VAR_9, VAR_10);
  VAR_11 = FUNC_7(VAR_9, VAR_11);
  VAR_14 = FUNC_4(FUNC_2(VAR_1), VAR_10, VAR_11);
  VAR_14 = FUNC_4(FUNC_2(VAR_2), VAR_14, VAR_0);
  VAR_14 = FUNC_4(FUNC_2(VAR_4), VAR_14, VAR_11);
  return FUNC_4(FUNC_2(VAR_6), VAR_10, VAR_14);
}
