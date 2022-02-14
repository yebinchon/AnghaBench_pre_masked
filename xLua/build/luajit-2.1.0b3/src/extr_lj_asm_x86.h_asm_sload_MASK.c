
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_33__ {int flags; } ;
struct TYPE_31__ {scalar_t__ irt; } ;
struct TYPE_32__ {int op2; TYPE_1__ t; scalar_t__ op1; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_1__ IRType1 ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int,int,int,int) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__) ;
 scalar_t__ FUNC_9 (TYPE_1__) ;
 scalar_t__ FUNC_10 (TYPE_1__) ;
 scalar_t__ FUNC_11 (TYPE_1__) ;
 scalar_t__ FUNC_12 (TYPE_1__) ;
 scalar_t__ FUNC_13 (TYPE_1__) ;
 scalar_t__ FUNC_14 (TYPE_1__) ;
 scalar_t__ FUNC_15 (TYPE_1__) ;
 int FUNC_16 (TYPE_1__) ;
 scalar_t__ FUNC_17 (TYPE_1__) ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_3__*,int ,int ) ;
 int FUNC_20 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (int ,int) ;

__attribute__((used)) static void FUNC_25(ASMState *VAR_31, IRIns *VAR_32)
{
  int32_t VAR_33 = 8*((int32_t)VAR_32->op1-1-VAR_11) +
  (!VAR_11 && (VAR_32->op2 & VAR_3) ? 4 : 0);
  IRType1 VAR_34 = VAR_32->t;
  Reg VAR_35;
  FUNC_18(!(VAR_32->op2 & VAR_4));
  FUNC_18(FUNC_9(VAR_34) || !(VAR_32->op2 & VAR_5));
  FUNC_18(VAR_10 ||
      !FUNC_10(VAR_34) || (VAR_32->op2 & (VAR_2|VAR_3)));
  if ((VAR_32->op2 & VAR_2) && FUNC_9(VAR_34) && FUNC_10(VAR_34)) {
    Reg VAR_36 = FUNC_22(VAR_31, VAR_15);
    FUNC_2(VAR_31, VAR_32, VAR_36);
    VAR_35 = FUNC_19(VAR_31, VAR_13, VAR_16);
    FUNC_4(VAR_31, VAR_24, VAR_36, VAR_35, VAR_33);
    VAR_34.irt = VAR_7;
  } else if (FUNC_23(VAR_32)) {
    RegSet VAR_37 = FUNC_14(VAR_34) ? VAR_15 : VAR_16;
    Reg VAR_38 = FUNC_20(VAR_31, VAR_32, VAR_37);
    VAR_35 = FUNC_19(VAR_31, VAR_13, VAR_16);
    FUNC_18(FUNC_14(VAR_34) || FUNC_10(VAR_34) || FUNC_8(VAR_34));
    if ((VAR_32->op2 & VAR_2)) {
      VAR_34.irt = FUNC_10(VAR_34) ? VAR_7 : VAR_6;
      FUNC_4(VAR_31, FUNC_10(VAR_34) ? VAR_21 : VAR_22, VAR_38, VAR_35, VAR_33);
    } else {
      FUNC_4(VAR_31, FUNC_14(VAR_34) ? VAR_24 : VAR_23, VAR_38, VAR_35, VAR_33);
    }
  } else {
    if (!(VAR_32->op2 & VAR_5))
      return;
    VAR_35 = FUNC_19(VAR_31, VAR_13, VAR_16);
  }
  if ((VAR_32->op2 & VAR_5)) {

    FUNC_0(VAR_31, FUNC_14(VAR_34) ? VAR_0 : VAR_1);
    if (VAR_9 && FUNC_17(VAR_34) >= VAR_7) {
      FUNC_18(FUNC_11(VAR_34) || FUNC_14(VAR_34));



      FUNC_7(VAR_31, VAR_12);

      FUNC_4(VAR_31, VAR_19, VAR_25, VAR_35, VAR_33+4);
    } else {
      FUNC_3(VAR_31, FUNC_16(VAR_34));
      FUNC_4(VAR_31, VAR_20, VAR_25, VAR_35, VAR_33+4);

    }
  }
}
