
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_16__ {scalar_t__ irt; } ;
struct TYPE_17__ {int op2; TYPE_1__ t; scalar_t__ op1; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_1__ IRType1 ;
typedef TYPE_2__ IRIns ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int,int,int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__) ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 scalar_t__ FUNC_8 (TYPE_1__) ;
 scalar_t__ FUNC_9 (TYPE_1__) ;
 scalar_t__ FUNC_10 (TYPE_1__) ;
 scalar_t__ FUNC_11 (TYPE_1__) ;
 int FUNC_12 (TYPE_1__) ;
 scalar_t__ FUNC_13 (TYPE_1__) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int *,int ) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_20(ASMState *VAR_22, IRIns *VAR_23)
{
  int32_t VAR_24 = 8*((int32_t)VAR_23->op1-1) + ((VAR_23->op2 & VAR_3) ? 4 : 0);
  IRType1 VAR_25 = VAR_23->t;
  Reg VAR_26;
  FUNC_14(!(VAR_23->op2 & VAR_4));
  FUNC_14(FUNC_7(VAR_25) || !(VAR_23->op2 & VAR_5));
  FUNC_14(VAR_9 ||
      !FUNC_8(VAR_25) || (VAR_23->op2 & (VAR_2|VAR_3)));
  if ((VAR_23->op2 & VAR_2) && FUNC_7(VAR_25) && FUNC_8(VAR_25)) {
    Reg VAR_27 = FUNC_18(VAR_22, VAR_13);
    FUNC_2(VAR_22, VAR_23, VAR_27);
    VAR_26 = FUNC_15(VAR_22, VAR_11, VAR_14);
    FUNC_4(VAR_22, VAR_20, VAR_27, VAR_26, VAR_24);
    VAR_25.irt = VAR_7;
  } else if (FUNC_19(VAR_23)) {
    RegSet VAR_28 = FUNC_11(VAR_25) ? VAR_13 : VAR_14;
    Reg VAR_29 = FUNC_16(VAR_22, VAR_23, VAR_28);
    VAR_26 = FUNC_15(VAR_22, VAR_11, VAR_14);
    FUNC_14(FUNC_11(VAR_25) || FUNC_8(VAR_25) || FUNC_6(VAR_25));
    if ((VAR_23->op2 & VAR_2)) {
      VAR_25.irt = FUNC_8(VAR_25) ? VAR_7 : VAR_6;
      FUNC_4(VAR_22, FUNC_8(VAR_25) ? VAR_17 : VAR_18, VAR_29, VAR_26, VAR_24);
    } else {
      FUNC_4(VAR_22, FUNC_11(VAR_25) ? VAR_20 : VAR_19, VAR_29, VAR_26, VAR_24);
    }
  } else {
    if (!(VAR_23->op2 & VAR_5))
      return;
    VAR_26 = FUNC_15(VAR_22, VAR_11, VAR_14);
  }
  if ((VAR_23->op2 & VAR_5)) {

    FUNC_0(VAR_22, FUNC_11(VAR_25) ? VAR_0 : VAR_1);
    if (VAR_8 && FUNC_13(VAR_25) >= VAR_7) {
      FUNC_14(FUNC_9(VAR_25) || FUNC_11(VAR_25));
      FUNC_5(VAR_22, VAR_10);
      FUNC_4(VAR_22, VAR_15, VAR_21, VAR_26, VAR_24+4);
    } else {
      FUNC_3(VAR_22, FUNC_12(VAR_25));
      FUNC_4(VAR_22, VAR_16, VAR_21, VAR_26, VAR_24+4);
    }
  }
}
