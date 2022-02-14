
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int,int) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (int *) ;

TRef FUNC_22(jit_State *VAR_14, TRef VAR_15, TRef VAR_16, TValue *VAR_17)
{
  if (FUNC_21(VAR_17) && !FUNC_9(FUNC_14(VAR_17), VAR_17))
    FUNC_10(VAR_14, VAR_13);

  if (FUNC_19(VAR_17) || FUNC_13(FUNC_11(VAR_17))) {
    int VAR_18 = 0;

    if (FUNC_16(VAR_15) && (int32_t)FUNC_6(FUNC_0(FUNC_18(VAR_15)))->u32.hi >= 0) {
      int32_t VAR_19 = FUNC_12(VAR_17);
      if (!(VAR_19 >= -65536 && VAR_19 <= 65536)) goto split_pow;
      VAR_18 = 1;
    }
    if (!FUNC_15(VAR_16)) {
      if (FUNC_17(VAR_16))
 VAR_16 = FUNC_5(FUNC_1(VAR_11, VAR_5), VAR_16, 0);

      VAR_16 = FUNC_5(FUNC_2(VAR_7), VAR_16, VAR_1|VAR_0);
    }
    if (VAR_18 && !FUNC_16(VAR_16)) {
      TRef VAR_20 = FUNC_5(FUNC_3(VAR_6), VAR_16, FUNC_7(VAR_14, 65536));
      FUNC_5(FUNC_2(VAR_12), VAR_20, FUNC_7(VAR_14, 2*65536));
    }
    return FUNC_5(FUNC_4(VAR_10), VAR_15, VAR_16);
  }
split_pow:

  if (FUNC_16(VAR_15) && FUNC_20(FUNC_6(FUNC_0(FUNC_18(VAR_15)))))
    return VAR_15;
  VAR_16 = FUNC_8(VAR_14, VAR_16);
  if (FUNC_16(VAR_16) && FUNC_6(FUNC_0(FUNC_18(VAR_16)))->n == 0.5)
    return FUNC_5(FUNC_4(VAR_8), VAR_15, VAR_4);

  VAR_15 = FUNC_5(FUNC_4(VAR_8), VAR_15, VAR_3);
  VAR_16 = FUNC_5(FUNC_4(VAR_9), VAR_15, VAR_16);
  return FUNC_5(FUNC_4(VAR_8), VAR_16, VAR_2);
}
