
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int x86Op ;
typedef int int32_t ;
struct TYPE_17__ {int ofs; } ;
struct TYPE_19__ {TYPE_1__ mrm; } ;
struct TYPE_18__ {scalar_t__ r; scalar_t__ o; int t; int op1; int op2; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;







 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
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
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int FUNC_23 (TYPE_3__*,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;

__attribute__((used)) static void FUNC_26(ASMState *VAR_20, IRIns *VAR_21)
{
  RegSet VAR_22 = VAR_10;
  Reg VAR_23 = VAR_7, VAR_24 = VAR_7;
  int32_t VAR_25 = 0;
  if (VAR_21->r == VAR_8)
    return;



  if (FUNC_12(VAR_21->t) || FUNC_15(VAR_21->t) || FUNC_11(VAR_21->t) ||
      !FUNC_4(VAR_20, VAR_21->op2, &VAR_25)) {
    RegSet VAR_26 = FUNC_11(VAR_21->t) ? VAR_9 :
      (FUNC_13(VAR_21->t) || FUNC_17(VAR_21->t)) ? VAR_11 : VAR_10;
    VAR_23 = VAR_24 = FUNC_20(VAR_20, VAR_21->op2, VAR_26);
    if (!VAR_4 && !FUNC_25(VAR_26, VAR_23)) {
      FUNC_24(VAR_22, VAR_24);
      VAR_23 = FUNC_23(VAR_20, VAR_26);
    }
    FUNC_24(VAR_22, VAR_23);
  }
  if (VAR_21->o == VAR_1) {
    FUNC_2(VAR_20, FUNC_0(VAR_21->op1), VAR_22);
  } else {
    FUNC_3(VAR_20, VAR_21->op1, VAR_22);
    if (VAR_3 && VAR_21->o == VAR_2) VAR_20->mrm.ofs += 4;
  }
  if (FUNC_21(VAR_23)) {
    x86Op VAR_27;
    switch (FUNC_18(VAR_21->t)) {
    case 132: case 128: VAR_27 = VAR_18; VAR_23 |= VAR_0; break;
    case 133: case 129: VAR_27 = VAR_19; break;
    case 130: VAR_27 = VAR_13; break;
    case 134: VAR_27 = VAR_14; break;



    default:
      if (VAR_4 && FUNC_9(VAR_21->t))
 VAR_23 |= VAR_5;
      else
 FUNC_19(FUNC_14(VAR_21->t) || FUNC_16(VAR_21->t) || FUNC_10(VAR_21->t));
      VAR_27 = VAR_17;
      break;
    }
    FUNC_7(VAR_20, VAR_27, VAR_23, VAR_6);
    if (!VAR_4 && VAR_23 != VAR_24) {
      FUNC_22(VAR_20, VAR_24);
      FUNC_8(VAR_20, VAR_12, VAR_23, VAR_24);
    }
  } else {
    if (FUNC_13(VAR_21->t) || FUNC_17(VAR_21->t)) {
      FUNC_6(VAR_20, VAR_25);
      FUNC_7(VAR_20, VAR_16, 0, VAR_6);
    } else {
      FUNC_19(FUNC_9(VAR_21->t) || FUNC_14(VAR_21->t) || FUNC_16(VAR_21->t) ||
   FUNC_10(VAR_21->t));
      FUNC_5(VAR_20, VAR_25);
      FUNC_7(VAR_20, VAR_15, FUNC_1(VAR_21, 0), VAR_6);
    }
  }
}
