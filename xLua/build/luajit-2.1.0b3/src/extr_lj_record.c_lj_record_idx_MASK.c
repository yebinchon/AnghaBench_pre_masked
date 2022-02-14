
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__* base; int flags; int needsnap; void* guardemit; TYPE_4__* L; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_30__ {int * base; } ;
struct TYPE_29__ {int metatable; } ;
struct TYPE_28__ {scalar_t__ tab; scalar_t__ idxchain; scalar_t__ val; scalar_t__ mobj; scalar_t__ key; int tabv; int * oldv; int keyv; int mobjv; int valv; } ;
struct TYPE_27__ {scalar_t__ o; } ;
typedef int TValue ;
typedef scalar_t__ TRef ;
typedef TYPE_2__ RecordIndex ;
typedef void* IRType1 ;
typedef scalar_t__ IRType ;
typedef scalar_t__ IRRef ;
typedef scalar_t__ IROp ;
typedef int GCtab ;
typedef int BCReg ;


 TYPE_22__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_4__*,int *,int *) ;
 void* FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_22__*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_17 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*,TYPE_2__*,int ) ;
 int * FUNC_19 (int *,int ) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ,int ) ;
 int * FUNC_23 (int ) ;
 int FUNC_24 (TYPE_1__*,scalar_t__) ;
 int FUNC_25 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_26 (TYPE_1__*,TYPE_2__*,scalar_t__*,void**) ;
 int FUNC_27 (TYPE_1__*,int ) ;
 int FUNC_28 (TYPE_4__*,int *,int ) ;
 TYPE_3__* FUNC_29 (int *) ;
 int * FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (scalar_t__) ;
 scalar_t__ FUNC_32 (scalar_t__) ;
 scalar_t__ FUNC_33 (scalar_t__) ;
 scalar_t__ FUNC_34 (scalar_t__) ;
 int FUNC_35 (scalar_t__) ;
 int FUNC_36 (scalar_t__) ;
 scalar_t__ FUNC_37 (scalar_t__) ;
 scalar_t__ FUNC_38 (scalar_t__) ;
 scalar_t__ FUNC_39 (int *) ;
 scalar_t__ FUNC_40 (int *) ;
 scalar_t__ FUNC_41 (int *) ;

TRef FUNC_42(jit_State *VAR_32, RecordIndex *VAR_33)
{
  TRef VAR_34;
  IROp VAR_35, VAR_36;
  IRRef VAR_37;
  IRType1 VAR_38;
  cTValue *VAR_39;

  while (!FUNC_36(VAR_33->tab)) {

    FUNC_21(VAR_33->idxchain != 0);
    if (!FUNC_18(VAR_32, VAR_33, VAR_33->val ? VAR_28 : VAR_27))
      FUNC_20(VAR_32, VAR_25);
  handlemm:
    if (FUNC_31(VAR_33->mobj)) {
      BCReg VAR_40 = FUNC_27(VAR_32, VAR_33->val ? VAR_30 : VAR_31);
      TRef *VAR_41 = VAR_32->base + VAR_40 + VAR_23;
      TValue *VAR_42 = VAR_32->L->base + VAR_40 + VAR_23;
      VAR_41[-VAR_23] = VAR_33->mobj; VAR_41[1] = VAR_33->tab; VAR_41[2] = VAR_33->key;
      FUNC_28(VAR_32->L, VAR_42-VAR_23, FUNC_8(&VAR_33->mobjv));
      FUNC_6(VAR_32->L, VAR_42+1, &VAR_33->tabv);
      FUNC_6(VAR_32->L, VAR_42+2, &VAR_33->keyv);
      if (VAR_33->val) {
 VAR_41[3] = VAR_33->val;
 FUNC_6(VAR_32->L, VAR_42+3, &VAR_33->valv);
 FUNC_17(VAR_32, VAR_40, 3);
 return 0;
      } else {
 FUNC_17(VAR_32, VAR_40, 2);
 return 0;
      }
    }

    VAR_33->tab = VAR_33->mobj;
    FUNC_6(VAR_32->L, &VAR_33->tabv, &VAR_33->mobjv);
    if (--VAR_33->idxchain == 0)
      FUNC_20(VAR_32, VAR_24);
  }


  if (FUNC_40(&VAR_33->keyv) || (FUNC_41(&VAR_33->keyv) && FUNC_39(&VAR_33->keyv))) {
    if (VAR_33->val)
      FUNC_20(VAR_32, VAR_26);
    if (FUNC_34(VAR_33->key)) {
      if (VAR_33->idxchain && FUNC_18(VAR_32, VAR_33, VAR_27))
 goto handlemm;
      return VAR_29;
    }
  }


  VAR_34 = FUNC_26(VAR_32, VAR_33, &VAR_37, &VAR_38);
  VAR_35 = FUNC_0(FUNC_37(VAR_34))->o;
  VAR_36 = VAR_35 == VAR_9 ? VAR_8 : VAR_15;

  VAR_39 = VAR_35 == VAR_17 ? (cTValue *)FUNC_9(FUNC_0(FUNC_37(VAR_34))) : VAR_33->oldv;

  if (VAR_33->val == 0) {
    IRType VAR_43 = FUNC_11(VAR_39);
    TRef VAR_44;
    if (VAR_39 == FUNC_23(FUNC_4(VAR_32))) {
      FUNC_7(FUNC_2(VAR_11, VAR_5), VAR_34, FUNC_13(VAR_32, FUNC_23(FUNC_4(VAR_32))));
      VAR_44 = VAR_29;
    } else {
      VAR_44 = FUNC_7(FUNC_2(VAR_36, VAR_43), VAR_34, 0);
    }
    if (FUNC_37(VAR_44) < VAR_37) {
      FUNC_15(VAR_32, VAR_37);
      VAR_32->guardemit = VAR_38;
    }
    if (VAR_43 == VAR_4 && VAR_33->idxchain && FUNC_18(VAR_32, VAR_33, VAR_27))
      goto handlemm;
    if (FUNC_10(VAR_43)) VAR_44 = FUNC_5(VAR_43);
    return VAR_44;
  } else {
    GCtab *VAR_45 = FUNC_30(FUNC_29(&VAR_33->tabv)->metatable);
    int VAR_46 = FUNC_32(VAR_33->key) && !FUNC_35(VAR_33->val);
    if (FUNC_37(VAR_34) < VAR_37) {
      FUNC_15(VAR_32, VAR_37);
      VAR_32->guardemit = VAR_38;
    }
    if (FUNC_40(VAR_39)) {

      int VAR_47 = 0;
      if (VAR_33->idxchain && VAR_45) {
 cTValue *VAR_48 = FUNC_19(VAR_45, FUNC_22(FUNC_4(VAR_32), VAR_28));
 VAR_47 = VAR_48 && !FUNC_40(VAR_48);
      }
      if (VAR_47)
 FUNC_7(FUNC_2(VAR_36, VAR_4), VAR_34, 0);
      else if (VAR_35 == VAR_16)
 FUNC_7(FUNC_2(VAR_39 == FUNC_23(FUNC_4(VAR_32)) ? VAR_11 : VAR_18, VAR_5),
        VAR_34, FUNC_13(VAR_32, FUNC_23(FUNC_4(VAR_32))));
      if (VAR_33->idxchain && FUNC_18(VAR_32, VAR_33, VAR_28)) {
 FUNC_21(VAR_47);
 goto handlemm;
      }
      FUNC_21(!VAR_47);
      if (VAR_39 == FUNC_23(FUNC_4(VAR_32))) {
 TRef VAR_49 = VAR_33->key;
 if (FUNC_33(VAR_49))
   VAR_49 = FUNC_7(FUNC_3(VAR_10), VAR_49, VAR_0);
 VAR_34 = FUNC_7(FUNC_1(VAR_19, VAR_5), VAR_33->tab, VAR_49);
 VAR_46 = 0;




      }
    } else if (!FUNC_16(VAR_32, VAR_36, FUNC_37(VAR_34))) {

      if (VAR_35 == VAR_16)
 FUNC_7(FUNC_2(VAR_18, VAR_5), VAR_34, FUNC_13(VAR_32, FUNC_23(FUNC_4(VAR_32))));
      if (VAR_33->idxchain) {

 if (!VAR_45) {
   TRef VAR_50 = FUNC_7(FUNC_1(VAR_12, VAR_6), VAR_33->tab, VAR_2);
   FUNC_7(FUNC_2(VAR_11, VAR_6), VAR_50, FUNC_14(VAR_32, VAR_6));
 } else {
   IRType VAR_51 = FUNC_11(VAR_39);
   FUNC_7(FUNC_2(VAR_36, VAR_51), VAR_34, 0);
 }
      }
    } else {
      VAR_46 = 0;
    }

    if (!VAR_22 && FUNC_33(VAR_33->val))
      VAR_33->val = FUNC_7(FUNC_3(VAR_10), VAR_33->val, VAR_0);
    FUNC_7(FUNC_1(VAR_36+VAR_1, FUNC_38(VAR_33->val)), VAR_34, VAR_33->val);
    if (VAR_46 || FUNC_32(VAR_33->val))
      FUNC_7(FUNC_1(VAR_20, VAR_4), VAR_33->tab, 0);

    if (!FUNC_24(VAR_32, VAR_33->key)) {
      TRef VAR_52 = FUNC_7(FUNC_1(VAR_13, VAR_5), VAR_33->tab, VAR_3);
      FUNC_7(FUNC_1(VAR_14, VAR_7), VAR_52, FUNC_12(VAR_32, 0));
    }
    VAR_32->needsnap = 1;
    return 0;
  }
}
