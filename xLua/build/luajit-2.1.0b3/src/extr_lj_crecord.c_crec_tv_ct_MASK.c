
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_16__ {int L; int postproc; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_18__ {int L; } ;
struct TYPE_17__ {int info; int size; } ;
typedef int TRef ;
typedef scalar_t__ IRType ;
typedef int GCcdata ;
typedef int CTypeID ;
typedef TYPE_2__ CType ;
typedef TYPE_3__ CTState ;
typedef int CTInfo ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_3__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int ,int ,scalar_t__,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (TYPE_3__*,int ,int ) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,int ) ;

__attribute__((used)) static TRef FUNC_21(jit_State *VAR_19, CType *VAR_20, CTypeID VAR_21, TRef VAR_22)
{
  CTState *VAR_23 = FUNC_6(FUNC_4(VAR_19));
  IRType VAR_24 = FUNC_5(VAR_23, VAR_20);
  CTInfo VAR_25 = VAR_20->info;
  if (FUNC_9(VAR_25)) {
    TRef VAR_26;
    if (VAR_24 == VAR_2)
      goto err_nyi;
    VAR_26 = FUNC_14(FUNC_1(VAR_13, VAR_24), VAR_22, 0);
    if (VAR_24 == VAR_3 || VAR_24 == VAR_7) {
      return FUNC_13(VAR_26, VAR_5, VAR_24, 0);
    } else if (VAR_24 == VAR_4 || VAR_24 == VAR_8) {
      VAR_22 = VAR_26;
      FUNC_19(VAR_19);
    } else if ((VAR_25 & VAR_0)) {

      FUNC_18(VAR_19, FUNC_3(VAR_12), VAR_26, FUNC_16(VAR_19, 0));
      VAR_19->postproc = VAR_15;
      return VAR_18;
    } else {
      return VAR_26;
    }
  } else if (FUNC_10(VAR_25) || FUNC_8(VAR_25)) {
    VAR_22 = FUNC_14(FUNC_1(VAR_13, VAR_24), VAR_22, 0);
  } else if (FUNC_11(VAR_25) || FUNC_12(VAR_25)) {
    VAR_23->L = VAR_19->L;
    VAR_21 = FUNC_15(VAR_23, FUNC_0(VAR_21), VAR_1);
  } else if (FUNC_7(VAR_25)) {
    ptrdiff_t VAR_27 = (ptrdiff_t)(VAR_20->size >> 1);
    TRef VAR_28, VAR_29, VAR_30, VAR_31;
    VAR_31 = FUNC_14(FUNC_2(VAR_10, VAR_2), FUNC_16(VAR_19, VAR_21), VAR_17);
    VAR_29 = FUNC_14(FUNC_1(VAR_13, VAR_24), VAR_22, 0);
    VAR_28 = FUNC_14(FUNC_1(VAR_9, VAR_6), VAR_22, FUNC_17(VAR_19, VAR_27));
    VAR_30 = FUNC_14(FUNC_1(VAR_13, VAR_24), VAR_28, 0);
    VAR_28 = FUNC_14(FUNC_1(VAR_9, VAR_6), VAR_31, FUNC_17(VAR_19, sizeof(GCcdata)));
    FUNC_14(FUNC_1(VAR_14, VAR_24), VAR_28, VAR_29);
    VAR_28 = FUNC_14(FUNC_1(VAR_9, VAR_6), VAR_31, FUNC_17(VAR_19, sizeof(GCcdata)+VAR_27));
    FUNC_14(FUNC_1(VAR_14, VAR_24), VAR_28, VAR_30);
    return VAR_31;
  } else {

  err_nyi:
    FUNC_20(VAR_19, VAR_16);
  }

  return FUNC_14(FUNC_2(VAR_11, VAR_2), FUNC_16(VAR_19, VAR_21), VAR_22);
}
