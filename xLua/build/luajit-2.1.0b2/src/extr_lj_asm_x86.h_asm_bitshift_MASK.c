
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int x86Shift ;
struct TYPE_6__ {int i; scalar_t__ r; int op1; int t; int op2; } ;
typedef scalar_t__ Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*,int ) ;
 int FUNC_9 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_14(ASMState *VAR_5, IRIns *VAR_6, x86Shift VAR_7)
{
  IRRef VAR_8 = VAR_6->op2;
  IRIns *VAR_9 = FUNC_0(VAR_8);
  Reg VAR_10;
  if (FUNC_5(VAR_8)) {
    int VAR_11;
    VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_1);
    VAR_11 = VAR_9->i & (FUNC_6(VAR_6->t) ? 63 : 31);
    switch (VAR_11) {
    case 0: break;
    case 1: FUNC_3(VAR_5, VAR_3, FUNC_1(VAR_6, VAR_7), VAR_10); break;
    default: FUNC_4(VAR_5, FUNC_1(VAR_6, VAR_7), VAR_10, VAR_11); break;
    }
  } else {
    Reg VAR_12;
    VAR_10 = FUNC_8(VAR_5, VAR_6, FUNC_13(VAR_1, VAR_0));
    if (VAR_10 == VAR_0) {
      VAR_10 = FUNC_12(VAR_5, FUNC_13(VAR_1, VAR_0));
      FUNC_3(VAR_5, VAR_2, VAR_0, VAR_10);
    }
    VAR_12 = VAR_9->r;
    if (FUNC_10(VAR_12))
      VAR_12 = FUNC_7(VAR_5, VAR_8, FUNC_2(VAR_0));
    else if (VAR_12 != VAR_0)
      FUNC_12(VAR_5, FUNC_2(VAR_0));
    FUNC_3(VAR_5, VAR_4, FUNC_1(VAR_6, VAR_7), VAR_10);
    FUNC_11(VAR_5, VAR_12);
    if (VAR_12 != VAR_0)
      FUNC_3(VAR_5, VAR_2, VAR_0, VAR_12);
  }
  FUNC_9(VAR_5, VAR_10, VAR_6->op1);





}
