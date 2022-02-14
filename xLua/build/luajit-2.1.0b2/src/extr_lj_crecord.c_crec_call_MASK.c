
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_31__ {int needsnap; int * base; int postproc; TYPE_7__* L; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_36__ {scalar_t__ base; } ;
struct TYPE_35__ {int miscmap; } ;
struct TYPE_34__ {int info; int size; } ;
struct TYPE_33__ {int ctypeid; } ;
struct TYPE_32__ {scalar_t__ nres; } ;
typedef int TValue ;
typedef int TRef ;
typedef TYPE_2__ RecordFFData ;
typedef scalar_t__ IRType ;
typedef TYPE_3__ GCcdata ;
typedef TYPE_4__ CType ;
typedef TYPE_5__ CTState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 TYPE_5__* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int) ;
 TYPE_4__* FUNC_19 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_20 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_21 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_22 (int ,int ,scalar_t__,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 int * FUNC_25 (scalar_t__) ;
 int FUNC_26 (TYPE_1__*,int ) ;
 int FUNC_27 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_7__*,int ,int *) ;
 int FUNC_30 (TYPE_1__*,int ) ;
 int FUNC_31 (int *,int ) ;
 scalar_t__ FUNC_32 (int ) ;

__attribute__((used)) static int FUNC_33(jit_State *VAR_30, RecordFFData *VAR_31, GCcdata *VAR_32)
{
  CTState *VAR_33 = FUNC_12(FUNC_3(VAR_30));
  CType *VAR_34 = FUNC_19(VAR_33, VAR_32->ctypeid);
  IRType VAR_35 = VAR_14;
  if (FUNC_17(VAR_34->info)) {
    VAR_35 = (VAR_24 && VAR_34->size == 8) ? VAR_13 : VAR_12;
    VAR_34 = FUNC_20(VAR_33, VAR_34);
  }
  if (FUNC_15(VAR_34->info)) {
    TRef VAR_36 = FUNC_23(FUNC_0(VAR_22, VAR_35), VAR_30->base[0], VAR_3);
    CType *VAR_37 = FUNC_20(VAR_33, VAR_34);
    IRType VAR_38 = FUNC_8(VAR_33, VAR_37);
    TRef VAR_39;
    TValue VAR_40;

    FUNC_31(&VAR_40,
  FUNC_5(FUNC_6(VAR_32), (VAR_24 && VAR_35 == VAR_13) ? 8 : 4));
    if (FUNC_32(FUNC_29(VAR_30->L, VAR_33->miscmap, &VAR_40)))
      FUNC_30(VAR_30, VAR_26);
    if (FUNC_18(VAR_37->info)) {
      VAR_38 = VAR_10;
      VAR_31->nres = 0;
    } else if (!(FUNC_16(VAR_37->info) || FUNC_17(VAR_37->info) ||
   FUNC_14(VAR_37->info)) || VAR_38 == VAR_4) {
      FUNC_30(VAR_30, VAR_27);
    }
    if ((VAR_34->info & VAR_1)



 )
      VAR_36 = FUNC_23(FUNC_0(VAR_20, VAR_10), VAR_36,
      FUNC_26(VAR_30, FUNC_21(VAR_33, VAR_34)));
    VAR_39 = FUNC_23(FUNC_0(VAR_19, VAR_38), FUNC_7(VAR_30, VAR_31, VAR_33, VAR_34), VAR_36);
    if (FUNC_13(VAR_37->info)) {
      if (FUNC_24(VAR_30->L->base-1) && FUNC_4(FUNC_25(VAR_30->L->base-1)[-1]) == 1) {

 VAR_39 = VAR_28;
      } else {
 FUNC_9(VAR_30);




 FUNC_27(VAR_30, FUNC_2(VAR_23), VAR_39, FUNC_26(VAR_30, 0));

 VAR_30->postproc = VAR_25;
 VAR_39 = VAR_29;
      }
    } else if (VAR_38 == VAR_14 || (VAR_24 && VAR_38 == VAR_12) ||
        VAR_38 == VAR_7 || VAR_38 == VAR_17 || FUNC_14(VAR_37->info)) {
      TRef VAR_41 = FUNC_26(VAR_30, FUNC_11(VAR_34->info));
      VAR_39 = FUNC_23(FUNC_1(VAR_21, VAR_4), VAR_41, VAR_39);
      if (VAR_38 == VAR_7 || VAR_38 == VAR_17) FUNC_28(VAR_30);
    } else if (VAR_38 == VAR_5 || VAR_38 == VAR_16) {
      VAR_39 = FUNC_22(VAR_39, VAR_11, VAR_38, 0);
    } else if (VAR_38 == VAR_8 || VAR_38 == VAR_6) {
      VAR_39 = FUNC_22(VAR_39, VAR_9, VAR_38, VAR_2);
    } else if (VAR_38 == VAR_18 || VAR_38 == VAR_15) {
      VAR_39 = FUNC_22(VAR_39, VAR_9, VAR_38, 0);
    }
    VAR_30->base[0] = VAR_39;
    VAR_30->needsnap = 1;
    return 1;
  }
  return 0;
}
