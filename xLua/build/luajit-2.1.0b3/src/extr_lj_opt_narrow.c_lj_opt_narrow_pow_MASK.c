
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jit_State ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ hi; } ;
struct TYPE_5__ {double n; TYPE_1__ u32; } ;
typedef int TValue ;
typedef int TRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int ,int,int) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;

TRef FUNC_17(jit_State *VAR_11, TRef VAR_12, TRef VAR_13, TValue *VAR_14, TValue *VAR_15)
{
  VAR_12 = FUNC_4(VAR_11, VAR_12, VAR_14);
  VAR_12 = FUNC_8(VAR_11, VAR_12);
  VAR_13 = FUNC_4(VAR_11, VAR_13, VAR_15);

  if (FUNC_15(VAR_15) || FUNC_11(FUNC_9(VAR_15))) {
    int VAR_16 = 0;

    if (FUNC_13(VAR_12) && (int32_t)FUNC_6(FUNC_0(FUNC_14(VAR_12)))->u32.hi >= 0) {
      int32_t VAR_17 = FUNC_10(VAR_15);
      if (!(VAR_17 >= -65536 && VAR_17 <= 65536)) goto split_pow;
      VAR_16 = 1;
    }
    if (!FUNC_12(VAR_13)) {

      VAR_13 = FUNC_5(FUNC_1(VAR_6), VAR_13, VAR_1|VAR_0);
    }
    if (VAR_16 && !FUNC_13(VAR_13)) {
      TRef VAR_18 = FUNC_5(FUNC_2(VAR_5), VAR_13, FUNC_7(VAR_11, 65536));
      FUNC_5(FUNC_1(VAR_10), VAR_18, FUNC_7(VAR_11, 2*65536));
    }
    return FUNC_5(FUNC_3(VAR_9), VAR_12, VAR_13);
  }
split_pow:

  if (FUNC_13(VAR_12) && FUNC_16(FUNC_6(FUNC_0(FUNC_14(VAR_12)))))
    return VAR_12;
  VAR_13 = FUNC_8(VAR_11, VAR_13);
  if (FUNC_13(VAR_13) && FUNC_6(FUNC_0(FUNC_14(VAR_13)))->n == 0.5)
    return FUNC_5(FUNC_3(VAR_7), VAR_12, VAR_4);

  VAR_12 = FUNC_5(FUNC_3(VAR_7), VAR_12, VAR_3);
  VAR_13 = FUNC_5(FUNC_3(VAR_8), VAR_12, VAR_13);
  return FUNC_5(FUNC_3(VAR_7), VAR_13, VAR_2);
}
