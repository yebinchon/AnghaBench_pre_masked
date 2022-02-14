
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


struct TYPE_21__ {int L; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_24__ {int metatable; } ;
struct TYPE_23__ {int udtype; int metatable; } ;
struct TYPE_22__ {void* tab; void* mt; int mobj; scalar_t__ idxchain; scalar_t__ val; int key; int keyv; int tabv; int * mtv; int mobjv; } ;
struct TYPE_20__ {int * gcroot; } ;
typedef void* TRef ;
typedef TYPE_2__ RecordIndex ;
typedef int MMS ;
typedef int GCtab ;
typedef int GCstr ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 void* FUNC_7 (int ,void*,int ) ;
 TYPE_18__ VAR_16 ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 void* FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 void* FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_18 (int *,int *) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int * FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int *,int *) ;
 int FUNC_22 (int ,int *,int *) ;
 TYPE_4__* FUNC_23 (int *) ;
 int * FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (void*) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (void*) ;
 scalar_t__ FUNC_28 (void*) ;
 scalar_t__ FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int *) ;
 TYPE_3__* FUNC_32 (int *) ;

int FUNC_33(jit_State *VAR_17, RecordIndex *VAR_18, MMS VAR_19)
{
  RecordIndex VAR_20;
  GCtab *VAR_21;
  if (FUNC_27(VAR_18->tab)) {
    VAR_21 = FUNC_24(FUNC_23(&VAR_18->tabv)->metatable);
    VAR_20.tab = FUNC_7(FUNC_1(VAR_9, VAR_6), VAR_18->tab, VAR_1);
  } else if (FUNC_28(VAR_18->tab)) {
    int VAR_22 = FUNC_32(&VAR_18->tabv)->udtype;
    VAR_21 = FUNC_24(FUNC_32(&VAR_18->tabv)->metatable);

    if (VAR_22 != VAR_15) {
      cTValue *VAR_23;
      if (VAR_11 && VAR_22 == VAR_14) {

 FUNC_7(FUNC_2(VAR_8, VAR_5), VAR_18->tab, FUNC_14(VAR_17, FUNC_32(&VAR_18->tabv)));
      } else {

 TRef VAR_24 = FUNC_7(FUNC_1(VAR_9, VAR_7), VAR_18->tab, VAR_3);
 FUNC_7(FUNC_3(VAR_8), VAR_24, FUNC_12(VAR_17, VAR_22));
      }
  immutable_mt:
      VAR_23 = FUNC_18(VAR_21, FUNC_20(FUNC_4(VAR_17), VAR_19));
      if (!VAR_23 || FUNC_30(VAR_23))
 return 0;

      if (!(FUNC_29(VAR_23) || FUNC_31(VAR_23)))
 FUNC_19(VAR_17, VAR_12);
      FUNC_6(VAR_17->L, &VAR_18->mobjv, VAR_23);
      VAR_18->mobj = FUNC_11(VAR_17, FUNC_8(VAR_23), FUNC_29(VAR_23) ? VAR_4 : VAR_6);
      VAR_18->mtv = VAR_21;
      VAR_18->mt = VAR_13;
      return 1;
    }
    VAR_20.tab = FUNC_7(FUNC_1(VAR_9, VAR_6), VAR_18->tab, VAR_2);
  } else {

    VAR_21 = FUNC_24(FUNC_5(FUNC_4(VAR_17), &VAR_18->tabv));
    if (VAR_21 == ((void*)0)) {
      VAR_18->mt = VAR_13;
      return 0;
    }

    if (VAR_11 && FUNC_25(VAR_18->tab)) goto immutable_mt;





    VAR_18->mt = VAR_20.tab = FUNC_16(VAR_17, VAR_21);

    goto nocheck;
  }
  VAR_18->mt = VAR_21 ? VAR_20.tab : VAR_13;
  FUNC_7(FUNC_2(VAR_21 ? VAR_10 : VAR_8, VAR_6), VAR_20.tab, FUNC_13(VAR_17, VAR_6));
nocheck:
  if (VAR_21) {
    GCstr *VAR_25 = FUNC_20(FUNC_4(VAR_17), VAR_19);
    cTValue *VAR_26 = FUNC_18(VAR_21, VAR_25);
    if (VAR_26 && !FUNC_30(VAR_26))
      FUNC_6(VAR_17->L, &VAR_18->mobjv, VAR_26);
    VAR_18->mtv = VAR_21;
    FUNC_22(VAR_17->L, &VAR_20.tabv, VAR_21);
    FUNC_21(VAR_17->L, &VAR_20.keyv, VAR_25);
    VAR_20.key = FUNC_15(VAR_17, VAR_25);
    VAR_20.val = 0;
    VAR_20.idxchain = 0;
    VAR_18->mobj = FUNC_17(VAR_17, &VAR_20);
    return !FUNC_26(VAR_18->mobj);
  }
  return 0;
}
