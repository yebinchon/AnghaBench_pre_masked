
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ x86Shift ;
typedef scalar_t__ x86Op ;
struct TYPE_21__ {int flags; } ;
struct TYPE_20__ {int i; scalar_t__ r; int op1; int t; int op2; } ;
typedef scalar_t__ Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_19(ASMState *VAR_8, IRIns *VAR_9, x86Shift VAR_10, x86Op VAR_11)
{
  IRRef VAR_12 = VAR_9->op2;
  IRIns *VAR_13 = FUNC_0(VAR_12);
  Reg VAR_14;
  if (FUNC_9(VAR_12)) {
    int VAR_15;
    VAR_14 = FUNC_13(VAR_8, VAR_9, VAR_2);
    VAR_15 = VAR_13->i & (FUNC_10(VAR_9->t) ? 63 : 31);
    if (!VAR_11 && VAR_15 && (VAR_8->flags & VAR_0)) {
      Reg VAR_16 = FUNC_4(VAR_8, VAR_9->op1, VAR_2, FUNC_10(VAR_9->t));
      if (VAR_16 != VAR_14) {
 FUNC_5(VAR_8, VAR_10 == VAR_6 ? -VAR_15 : VAR_15);
 FUNC_6(VAR_8, FUNC_3(VAR_9, VAR_7), VAR_14, VAR_16);
 return;
      }
    }
    switch (VAR_15) {
    case 0: break;
    case 1: FUNC_7(VAR_8, VAR_4, FUNC_1(VAR_9, VAR_10), VAR_14); break;
    default: FUNC_8(VAR_8, FUNC_1(VAR_9, VAR_10), VAR_14, VAR_15); break;
    }
  } else if ((VAR_8->flags & VAR_0) && VAR_11) {
    Reg VAR_17, VAR_18;
    VAR_14 = FUNC_13(VAR_8, VAR_9, VAR_2);
    VAR_18 = FUNC_11(VAR_8, VAR_12, VAR_2);
    VAR_17 = FUNC_4(VAR_8, VAR_9->op1, FUNC_18(VAR_2, VAR_18),
    FUNC_10(VAR_9->t));
    FUNC_6(VAR_8, FUNC_3(VAR_9, VAR_11) ^ (VAR_18 << 19), VAR_14, VAR_17);
    return;
  } else {
    Reg VAR_19;
    VAR_14 = FUNC_13(VAR_8, VAR_9, FUNC_18(VAR_2, VAR_1));
    if (VAR_14 == VAR_1) {
      VAR_14 = FUNC_17(VAR_8, FUNC_18(VAR_2, VAR_1));
      FUNC_7(VAR_8, VAR_3, VAR_1, VAR_14);
    }
    VAR_19 = VAR_13->r;
    if (FUNC_15(VAR_19))
      VAR_19 = FUNC_12(VAR_8, VAR_12, FUNC_2(VAR_1));
    else if (VAR_19 != VAR_1)
      FUNC_17(VAR_8, FUNC_2(VAR_1));
    FUNC_7(VAR_8, VAR_5, FUNC_1(VAR_9, VAR_10), VAR_14);
    FUNC_16(VAR_8, VAR_19);
    if (VAR_19 != VAR_1)
      FUNC_7(VAR_8, VAR_3, VAR_1, VAR_19);
  }
  FUNC_14(VAR_8, VAR_14, VAR_9->op1);





}
