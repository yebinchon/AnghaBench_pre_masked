
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef scalar_t__ lua_Number ;
typedef int int32_t ;
typedef int cTValue ;
struct TYPE_37__ {int L; } ;
struct TYPE_36__ {int info; int size; } ;
struct TYPE_35__ {scalar_t__ ctypeid; } ;
struct TYPE_34__ {int len; } ;
typedef TYPE_1__ GCstr ;
typedef TYPE_2__ GCcdata ;
typedef scalar_t__ CTypeID ;
typedef TYPE_3__ CType ;
typedef TYPE_4__ CTState ;
typedef scalar_t__ CTSize ;
typedef int CTInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 TYPE_3__* FUNC_16 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* FUNC_17 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int *,scalar_t__,int ) ;
 TYPE_3__* FUNC_20 (TYPE_4__*,TYPE_3__*,TYPE_1__*,scalar_t__*) ;
 TYPE_3__* FUNC_21 (TYPE_4__*,TYPE_3__*,TYPE_1__*,scalar_t__*,int*) ;
 scalar_t__ FUNC_22 (TYPE_4__*,int ) ;
 int FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (scalar_t__ volatile) ;
 int FUNC_25 (int) ;
 scalar_t__ FUNC_26 (int *) ;
 TYPE_1__* FUNC_27 (int *) ;
 char* FUNC_28 (TYPE_1__*) ;
 scalar_t__ FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int *) ;
 scalar_t__ FUNC_32 (int *) ;

CType *FUNC_33(CTState *VAR_10, GCcdata *VAR_11, cTValue *VAR_12, uint8_t **VAR_13,
        CTInfo *VAR_14)
{
  uint8_t *VAR_15 = (uint8_t *)FUNC_2(VAR_11);
  CType *VAR_16 = FUNC_6(VAR_10, VAR_11->ctypeid);
  ptrdiff_t VAR_17;


  if (FUNC_14(VAR_16->info)) {
    FUNC_25(VAR_16->size == VAR_7);
    VAR_15 = *(uint8_t **)VAR_15;
    VAR_16 = FUNC_4(VAR_10, VAR_16);
  }

collect_attrib:

  while (FUNC_7(VAR_16->info)) {
    if (FUNC_3(VAR_16->info) == VAR_0) *VAR_14 |= VAR_16->size;
    VAR_16 = FUNC_4(VAR_10, VAR_16);
  }
  FUNC_25(!FUNC_14(VAR_16->info));

  if (FUNC_30(VAR_12)) {
    VAR_17 = (ptrdiff_t)FUNC_18(VAR_12);
    goto integer_key;
  } else if (FUNC_31(VAR_12)) {




    lua_Number VAR_18 = FUNC_26(VAR_12);
    VAR_17 = VAR_8 ? (ptrdiff_t)VAR_18 : (ptrdiff_t)FUNC_24(VAR_18);
  integer_key:
    if (FUNC_12(VAR_16->info)) {
      CTSize VAR_19 = FUNC_22(VAR_10, FUNC_5(VAR_16->info));
      if (VAR_19 == VAR_6)
 FUNC_23(VAR_10->L, VAR_9);
      if (FUNC_13(VAR_16->info)) {
 VAR_15 = (uint8_t *)FUNC_1(VAR_15, VAR_16->size);
      } else if ((VAR_16->info & (VAR_3|VAR_1))) {
 if ((VAR_16->info & VAR_1)) VAR_17 &= 1;
 *VAR_14 |= VAR_2;
      }
      *VAR_13 = VAR_15 + VAR_17*(int32_t)VAR_19;
      return VAR_16;
    }
  } else if (FUNC_29(VAR_12)) {
    GCcdata *VAR_20 = FUNC_0(VAR_12);
    CType *VAR_21 = FUNC_16(VAR_10, VAR_20->ctypeid);
    if (FUNC_10(VAR_21->info)) VAR_21 = FUNC_4(VAR_10, VAR_21);
    if (FUNC_11(VAR_21->info)) {
      FUNC_19(VAR_10, FUNC_6(VAR_10, VAR_5), VAR_21,
       (uint8_t *)&VAR_17, FUNC_2(VAR_20), 0);
      goto integer_key;
    }
  } else if (FUNC_32(VAR_12)) {
    GCstr *VAR_22 = FUNC_27(VAR_12);
    if (FUNC_15(VAR_16->info)) {
      CTSize VAR_23;
      CType *VAR_24 = FUNC_21(VAR_10, VAR_16, VAR_22, &VAR_23, VAR_14);
      if (VAR_24) {
 *VAR_13 = VAR_15 + VAR_23;
 return VAR_24;
      }
    } else if (FUNC_8(VAR_16->info)) {
      if (VAR_22->len == 2) {
 *VAR_14 |= VAR_2;
 if (FUNC_28(VAR_22)[0] == 'r' && FUNC_28(VAR_22)[1] == 'e') {
   *VAR_13 = VAR_15;
   return VAR_16;
 } else if (FUNC_28(VAR_22)[0] == 'i' && FUNC_28(VAR_22)[1] == 'm') {
   *VAR_13 = VAR_15 + (VAR_16->size >> 1);
   return VAR_16;
 }
      }
    } else if (VAR_11->ctypeid == VAR_4) {

      CType *VAR_25 = FUNC_16(VAR_10, *(CTypeID *)VAR_15);
      if (FUNC_13(VAR_25->info))
 VAR_25 = FUNC_17(VAR_10, VAR_25);
      if (FUNC_15(VAR_25->info)) {
 CTSize VAR_26;
 CType *VAR_27 = FUNC_20(VAR_10, VAR_25, VAR_22, &VAR_26);
 if (VAR_27 && FUNC_9(VAR_27->info))
   return VAR_27;
      }
      VAR_16 = VAR_25;
    }
  }
  if (FUNC_13(VAR_16->info)) {
    if (FUNC_15(FUNC_17(VAR_10, VAR_16)->info)) {
      VAR_15 = (uint8_t *)FUNC_1(VAR_15, VAR_16->size);
      VAR_16 = FUNC_4(VAR_10, VAR_16);
      goto collect_attrib;
    }
  }
  *VAR_14 |= 1;
  return VAR_16;
}
