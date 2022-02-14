
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_38__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_50__ {scalar_t__ size; int info; } ;
struct TYPE_49__ {scalar_t__ len; } ;
struct TYPE_48__ {int ctypeid; } ;
struct TYPE_47__ {scalar_t__ udtype; } ;
struct TYPE_46__ {int n; int i; } ;
typedef TYPE_1__ TValue ;
typedef TYPE_2__ GCudata ;
typedef TYPE_3__ GCstr ;
typedef int CTypeID ;
typedef TYPE_4__ CType ;
typedef int CTState ;
typedef scalar_t__ CTSize ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_4__*,int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_4__*,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_4__*,int *,int ,int ) ;
 TYPE_38__* FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_38__*) ;
 TYPE_4__* FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int ) ;
 TYPE_4__* FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 TYPE_4__* FUNC_19 (int *,int) ;
 TYPE_4__* FUNC_20 (int *,TYPE_4__*) ;
 int FUNC_21 (TYPE_1__*) ;
 void* FUNC_22 (TYPE_1__*) ;
 void* FUNC_23 (int *,TYPE_4__*,int ) ;
 int FUNC_24 (int *,TYPE_4__*,TYPE_4__*,int *,int *,int ) ;
 TYPE_4__* FUNC_25 (int *,TYPE_4__*,TYPE_3__*,scalar_t__*) ;
 int FUNC_26 (int *,int ,scalar_t__) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int *,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_29 (TYPE_1__*) ;
 scalar_t__ FUNC_30 (TYPE_3__*) ;
 int FUNC_31 (TYPE_1__*) ;
 scalar_t__ FUNC_32 (TYPE_1__*) ;
 scalar_t__ FUNC_33 (TYPE_1__*) ;
 scalar_t__ FUNC_34 (TYPE_1__*) ;
 int FUNC_35 (TYPE_1__*) ;
 scalar_t__ FUNC_36 (TYPE_1__*) ;
 scalar_t__ FUNC_37 (TYPE_1__*) ;
 int FUNC_38 (TYPE_1__*) ;
 scalar_t__ FUNC_39 (TYPE_1__*) ;
 scalar_t__ FUNC_40 (TYPE_1__*) ;
 scalar_t__ FUNC_41 (TYPE_1__*) ;
 TYPE_2__* FUNC_42 (TYPE_1__*) ;
 void* FUNC_43 (TYPE_2__*) ;

void FUNC_44(CTState *VAR_10, CType *VAR_11,
      uint8_t *VAR_12, TValue *VAR_13, CTInfo VAR_14)
{
  CTypeID VAR_15 = VAR_6;
  CType *VAR_16;
  void *VAR_17;
  uint8_t VAR_18, *VAR_19 = (uint8_t *)&VAR_17;
  if (FUNC_1(FUNC_35(VAR_13))) {
    VAR_19 = (uint8_t *)&VAR_13->i;
    VAR_15 = VAR_5;
    VAR_14 |= VAR_0;
  } else if (FUNC_1(FUNC_38(VAR_13))) {
    VAR_19 = (uint8_t *)&VAR_13->n;
    VAR_15 = VAR_4;
    VAR_14 |= VAR_0;
  } else if (FUNC_33(VAR_13)) {
    VAR_19 = FUNC_7(FUNC_6(VAR_13));
    VAR_15 = FUNC_6(VAR_13)->ctypeid;
    VAR_16 = FUNC_10(VAR_10, VAR_15);
    if (FUNC_16(VAR_16->info)) {
      FUNC_27(VAR_16->size == VAR_7);
      VAR_19 = *(void **)VAR_19;
      VAR_15 = FUNC_9(VAR_16->info);
    }
    VAR_16 = FUNC_19(VAR_10, VAR_15);
    if (FUNC_14(VAR_16->info)) {
      VAR_15 = FUNC_26(VAR_10, FUNC_0(VAR_8, VAR_1|VAR_15), VAR_7);
    } else {
      if (FUNC_13(VAR_16->info)) VAR_16 = FUNC_8(VAR_10, VAR_16);
      goto doconv;
    }
  } else if (FUNC_39(VAR_13)) {
    GCstr *VAR_20 = FUNC_29(VAR_13);
    if (FUNC_13(VAR_11->info)) {
      CTSize VAR_21;
      CType *VAR_22 = FUNC_25(VAR_10, VAR_11, VAR_20, &VAR_21);
      if (!VAR_22 || !FUNC_12(VAR_22->info))
 goto err_conv;
      FUNC_27(VAR_11->size == 4);
      VAR_19 = (uint8_t *)&VAR_22->size;
      VAR_15 = FUNC_9(VAR_22->info);
    } else if (FUNC_17(VAR_11->info)) {
      CType *VAR_23 = FUNC_20(VAR_10, VAR_11);
      CTSize VAR_24 = VAR_20->len+1;
      if (!FUNC_15(VAR_23->info) || VAR_23->size != 1)
 goto err_conv;
      if (VAR_11->size != 0 && VAR_11->size < VAR_24)
 VAR_24 = VAR_11->size;
      FUNC_28(VAR_12, FUNC_30(VAR_20), VAR_24);
      return;
    } else {
      VAR_19 = (uint8_t *)FUNC_30(VAR_20);
      VAR_15 = VAR_2;
      VAR_14 |= VAR_0;
    }
  } else if (FUNC_40(VAR_13)) {
    if (FUNC_11(VAR_11->info)) {
      FUNC_3(VAR_10, VAR_11, VAR_12, FUNC_31(VAR_13), VAR_14);
      return;
    } else if (FUNC_18(VAR_11->info)) {
      FUNC_5(VAR_10, VAR_11, VAR_12, FUNC_31(VAR_13), VAR_14);
      return;
    } else {
      goto err_conv;
    }
  } else if (FUNC_32(VAR_13)) {
    VAR_18 = FUNC_2(VAR_13);
    VAR_19 = &VAR_18;
    VAR_15 = VAR_3;
  } else if (FUNC_37(VAR_13)) {
    VAR_17 = (void *)0;
    VAR_14 |= VAR_0;
  } else if (FUNC_41(VAR_13)) {
    GCudata *VAR_25 = FUNC_42(VAR_13);
    VAR_17 = FUNC_43(VAR_25);
    if (VAR_25->udtype == VAR_9)
      VAR_17 = *(void **)VAR_17;
  } else if (FUNC_36(VAR_13)) {
    VAR_17 = FUNC_22(VAR_13);
  } else if (FUNC_34(VAR_13)) {
    void *VAR_26 = FUNC_23(VAR_10, VAR_11, FUNC_21(VAR_13));
    if (VAR_26) {
      *(void **)VAR_12 = VAR_26;
      return;
    }
    goto err_conv;
  } else {
  err_conv:
    FUNC_4(VAR_10, VAR_11, VAR_13, VAR_14);
  }
  VAR_16 = FUNC_10(VAR_10, VAR_15);
doconv:
  if (FUNC_13(VAR_11->info)) VAR_11 = FUNC_8(VAR_10, VAR_11);
  FUNC_24(VAR_10, VAR_11, VAR_16, VAR_12, VAR_19, VAR_14);
}
