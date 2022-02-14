
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_11__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;
struct TYPE_31__ {scalar_t__ topslot; size_t stopins; size_t* parentmap; int freeset; TYPE_2__* T; TYPE_11__* J; TYPE_1__* parent; int * cost; scalar_t__ snapno; } ;
struct TYPE_30__ {scalar_t__ o; int op2; size_t r; int s; int t; } ;
struct TYPE_29__ {scalar_t__ topslot; int nsnap; scalar_t__ traceno; scalar_t__ spadjust; } ;
struct TYPE_28__ {scalar_t__ topslot; scalar_t__ spadjust; TYPE_3__* ir; } ;
struct TYPE_27__ {int exitno; } ;
typedef int RegSet ;
typedef size_t RegSP ;
typedef size_t Reg ;
typedef size_t IRRef1 ;
typedef size_t IRRef ;
typedef TYPE_3__ IRIns ;
typedef int ExitNo ;
typedef TYPE_4__ ASMState ;


 TYPE_3__* FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,size_t,size_t) ;
 int FUNC_7 (TYPE_4__*,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,size_t,scalar_t__) ;
 int FUNC_9 (TYPE_4__*,scalar_t__) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_11__*,int ) ;
 int FUNC_15 (int) ;
 size_t FUNC_16 (TYPE_4__*,size_t,int) ;
 int FUNC_17 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_18 (size_t) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (TYPE_4__*,size_t,size_t) ;
 int FUNC_21 (TYPE_4__*,TYPE_3__*,size_t) ;
 int FUNC_22 (size_t,size_t) ;
 scalar_t__ FUNC_23 (TYPE_3__*) ;
 size_t FUNC_24 (int ) ;
 int FUNC_25 (size_t) ;
 int FUNC_26 (int,size_t) ;
 size_t FUNC_27 (int) ;
 int FUNC_28 (int,size_t) ;
 scalar_t__ FUNC_29 (int ) ;

__attribute__((used)) static void FUNC_30(ASMState *VAR_13)
{
  IRRef1 VAR_14[VAR_8];
  RegSet VAR_15 = VAR_9;
  RegSet VAR_16 = VAR_10;
  IRIns *VAR_17 = &VAR_13->parent->ir[VAR_6];
  int32_t VAR_18, VAR_19;
  int VAR_20 = 0;
  int VAR_21 = 0;
  IRRef VAR_22;

  if (VAR_13->snapno && VAR_13->topslot > VAR_13->parent->topslot) {

    VAR_13->snapno = 0;
    FUNC_2(VAR_13);
  }
  VAR_15 = FUNC_1(VAR_13, VAR_17, VAR_15);


  for (VAR_22 = VAR_13->stopins; VAR_22 > VAR_6; VAR_22--) {
    IRIns *VAR_23 = FUNC_0(VAR_22);
    RegSP VAR_24;
    FUNC_15((VAR_23->o == VAR_3 && (VAR_23->op2 & VAR_0)) ||
        (VAR_4 && VAR_23->o == VAR_1) || VAR_23->o == VAR_2);
    VAR_24 = VAR_13->parentmap[VAR_22 - VAR_7];
    if (FUNC_18(VAR_23->r)) {
      FUNC_26(VAR_15, VAR_23->r);
      if (FUNC_19(VAR_23->s)) {
 FUNC_21(VAR_13, VAR_23, VAR_23->r);
 FUNC_5(VAR_13);
      }
    } else if (FUNC_19(VAR_23->s)) {
      FUNC_13(VAR_23->t);
      VAR_20 = 1;
    }
    if (VAR_23->r == VAR_24) {
      FUNC_17(VAR_13, VAR_23->r);
    } else if (FUNC_19(FUNC_25(VAR_24))) {
      if (FUNC_18(VAR_23->r))
 VAR_21 = 1;
    } else if (FUNC_23(VAR_23)) {
      VAR_14[VAR_24] = (IRRef1)VAR_22;
      FUNC_28(VAR_16, VAR_24);
    }
  }


  VAR_18 = FUNC_3(VAR_13);
  VAR_19 = VAR_18 - (int32_t)VAR_13->parent->spadjust;
  if (VAR_19 < 0) {
    VAR_18 = (int32_t)VAR_13->parent->spadjust;
    VAR_19 = 0;
  }
  VAR_13->T->spadjust = (uint16_t)VAR_18;


  if (VAR_20) {
    for (VAR_22 = VAR_13->stopins; VAR_22 > VAR_6; VAR_22--) {
      IRIns *VAR_25 = FUNC_0(VAR_22);
      if (FUNC_12(VAR_25->t)) {
 RegSet VAR_26;
 Reg VAR_27;
 RegSP VAR_28;
 FUNC_10(VAR_25->t);
 VAR_28 = VAR_13->parentmap[VAR_22 - VAR_7];
 if (!FUNC_19(FUNC_25(VAR_28)))
   FUNC_22(VAR_25->r, VAR_28);
 else if (FUNC_29(FUNC_25(VAR_28))+VAR_19 == FUNC_29(VAR_25->s))
   continue;
 VAR_26 = ((!VAR_4 && FUNC_11(VAR_25->t)) ? VAR_11 : VAR_12) & VAR_15;
 if (VAR_26 == VAR_10)
   FUNC_14(VAR_13->J, VAR_5);
 VAR_27 = FUNC_16(VAR_13, VAR_22, VAR_26);
 FUNC_21(VAR_13, VAR_25, VAR_27);
 FUNC_26(VAR_15, VAR_27);
 if (VAR_27 == VAR_28) {
   FUNC_17(VAR_13, VAR_27);
   FUNC_26(VAR_16, VAR_27);
 } else if (FUNC_19(FUNC_25(VAR_28))) {
   VAR_21 = 1;
 }
 FUNC_5(VAR_13);
      }
    }
  }


  FUNC_7(VAR_13, (int32_t)VAR_13->T->traceno);
  FUNC_9(VAR_13, VAR_19);



  if (FUNC_19(VAR_17->s))
    FUNC_8(VAR_13, FUNC_0(VAR_6), FUNC_0(VAR_6)->r, FUNC_29(VAR_17->s));



  if (VAR_21) {
    RegSet VAR_29 = ~VAR_13->freeset & VAR_9;
    while (VAR_29) {
      Reg VAR_30 = FUNC_27(VAR_29);
      IRRef VAR_31 = FUNC_24(VAR_13->cost[VAR_30]);
      RegSP VAR_32 = VAR_13->parentmap[VAR_31 - VAR_7];
      FUNC_26(VAR_29, VAR_30);
      if (FUNC_19(FUNC_25(VAR_32))) {
 int32_t VAR_33 = FUNC_29(FUNC_25(VAR_32));
 FUNC_17(VAR_13, VAR_30);
 FUNC_8(VAR_13, FUNC_0(VAR_31), VAR_30, VAR_33);
 FUNC_5(VAR_13);
      }
    }
  }


  for (;;) {
    RegSet VAR_34;


    while ((VAR_34 = VAR_13->freeset & VAR_16) != VAR_10) {
      Reg VAR_35 = FUNC_27(VAR_34);
      IRIns *VAR_36 = FUNC_0(VAR_14[VAR_35]);
      FUNC_26(VAR_16, VAR_35);
      FUNC_26(VAR_15, VAR_35);
      FUNC_17(VAR_13, VAR_36->r);
      FUNC_6(VAR_13, VAR_36, VAR_36->r, VAR_35);
      FUNC_5(VAR_13);
    }


    if (VAR_16 == VAR_10)
      break;


    if (VAR_16 & VAR_12) {
      RegSet VAR_37 = VAR_13->freeset & ~VAR_16 & VAR_15 & VAR_12;
      if (VAR_37 == VAR_10)
 FUNC_14(VAR_13->J, VAR_5);
      FUNC_20(VAR_13, FUNC_27(VAR_16 & VAR_12), FUNC_27(VAR_37));
    }
    if (!VAR_4 && (VAR_16 & VAR_11)) {
      RegSet VAR_38 = VAR_13->freeset & ~VAR_16 & VAR_15 & VAR_11;
      if (VAR_38 == VAR_10)
 FUNC_14(VAR_13->J, VAR_5);
      FUNC_20(VAR_13, FUNC_27(VAR_16 & VAR_11), FUNC_27(VAR_38));
    }
    FUNC_5(VAR_13);

  }


  VAR_13->T->topslot = VAR_13->parent->topslot;
  if (VAR_13->topslot > VAR_13->T->topslot) {





    ExitNo VAR_39 = VAR_13->J->exitno;

    VAR_13->T->topslot = (uint8_t)VAR_13->topslot;
    FUNC_4(VAR_13, VAR_13->topslot, VAR_17, VAR_15 & VAR_12, VAR_39);
  }
}
