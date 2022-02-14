
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int L; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_21__ {int metatable; } ;
struct TYPE_20__ {int udtype; int metatable; } ;
struct TYPE_19__ {void* tab; void* mt; int mobj; scalar_t__ idxchain; scalar_t__ val; int key; int keyv; int tabv; int * mtv; int mobjv; } ;
typedef void* TRef ;
typedef TYPE_2__ RecordIndex ;
typedef int MMS ;
typedef int GCtab ;
typedef int GCstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 void* FUNC_6 (int ,void*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 void* FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_15 (int *,int *) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int * FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int *,int *) ;
 int FUNC_19 (int ,int *,int *) ;
 TYPE_4__* FUNC_20 (int *) ;
 int * FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (void*) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (void*) ;
 scalar_t__ FUNC_25 (void*) ;
 scalar_t__ FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *) ;
 TYPE_3__* FUNC_29 (int *) ;

int FUNC_30(jit_State *VAR_15, RecordIndex *VAR_16, MMS VAR_17)
{
  RecordIndex VAR_18;
  GCtab *VAR_19;
  if (FUNC_24(VAR_16->tab)) {
    VAR_19 = FUNC_21(FUNC_20(&VAR_16->tabv)->metatable);
    VAR_18.tab = FUNC_6(FUNC_0(VAR_8, VAR_5), VAR_16->tab, VAR_0);
  } else if (FUNC_25(VAR_16->tab)) {
    int VAR_20 = FUNC_29(&VAR_16->tabv)->udtype;
    VAR_19 = FUNC_21(FUNC_29(&VAR_16->tabv)->metatable);

    if (VAR_20 != VAR_14) {
      cTValue *VAR_21;
      if (VAR_10 && VAR_20 == VAR_13) {

 FUNC_6(FUNC_1(VAR_7, VAR_4), VAR_16->tab, FUNC_11(VAR_15, FUNC_29(&VAR_16->tabv)));
      } else {

 TRef VAR_22 = FUNC_6(FUNC_0(VAR_8, VAR_6), VAR_16->tab, VAR_2);
 FUNC_6(FUNC_2(VAR_7), VAR_22, FUNC_9(VAR_15, VAR_20));
      }
  immutable_mt:
      VAR_21 = FUNC_15(VAR_19, FUNC_17(FUNC_3(VAR_15), VAR_17));
      if (!VAR_21 || FUNC_27(VAR_21))
 return 0;

      if (!(FUNC_26(VAR_21) || FUNC_28(VAR_21)))
 FUNC_16(VAR_15, VAR_11);
      FUNC_5(VAR_15->L, &VAR_16->mobjv, VAR_21);
      VAR_16->mobj = FUNC_8(VAR_15, FUNC_7(VAR_21), FUNC_26(VAR_21) ? VAR_3 : VAR_5);
      VAR_16->mtv = VAR_19;
      VAR_16->mt = VAR_12;
      return 1;
    }
    VAR_18.tab = FUNC_6(FUNC_0(VAR_8, VAR_5), VAR_16->tab, VAR_1);
  } else {

    VAR_19 = FUNC_21(FUNC_4(FUNC_3(VAR_15), &VAR_16->tabv));
    if (VAR_19 == ((void*)0)) {
      VAR_16->mt = VAR_12;
      return 0;
    }

    if (VAR_10 && FUNC_22(VAR_16->tab)) goto immutable_mt;
    VAR_16->mt = VAR_18.tab = FUNC_13(VAR_15, VAR_19);
    goto nocheck;
  }
  VAR_16->mt = VAR_19 ? VAR_18.tab : VAR_12;
  FUNC_6(FUNC_1(VAR_19 ? VAR_9 : VAR_7, VAR_5), VAR_18.tab, FUNC_10(VAR_15, VAR_5));
nocheck:
  if (VAR_19) {
    GCstr *VAR_23 = FUNC_17(FUNC_3(VAR_15), VAR_17);
    cTValue *VAR_24 = FUNC_15(VAR_19, VAR_23);
    if (VAR_24 && !FUNC_27(VAR_24))
      FUNC_5(VAR_15->L, &VAR_16->mobjv, VAR_24);
    VAR_16->mtv = VAR_19;
    FUNC_19(VAR_15->L, &VAR_18.tabv, VAR_19);
    FUNC_18(VAR_15->L, &VAR_18.keyv, VAR_23);
    VAR_18.key = FUNC_12(VAR_15, VAR_23);
    VAR_18.val = 0;
    VAR_18.idxchain = 0;
    VAR_16->mobj = FUNC_14(VAR_15, &VAR_18);
    return !FUNC_23(VAR_16->mobj);
  }
  return 0;
}
