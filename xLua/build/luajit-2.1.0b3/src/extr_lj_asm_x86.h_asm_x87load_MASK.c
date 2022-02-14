
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cTValue ;
struct TYPE_6__ {scalar_t__ o; scalar_t__ op2; int op1; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(ASMState *VAR_11, IRRef VAR_12)
{
  IRIns *VAR_13 = FUNC_0(VAR_12);
  if (VAR_13->o == VAR_2) {
    cTValue *VAR_14 = FUNC_6(VAR_13);
    if (FUNC_12(VAR_14))
      FUNC_5(VAR_11, VAR_6);
    else if (FUNC_11(VAR_14))
      FUNC_5(VAR_11, VAR_5);
    else
      FUNC_3(VAR_11, VAR_8, VAR_10, VAR_14);
  } else if (VAR_13->o == VAR_1 && VAR_13->op2 == VAR_0 && !FUNC_10(VAR_13) &&
      !FUNC_7(VAR_13->op1) && FUNC_8(VAR_11, VAR_13->op1)) {
    IRIns *VAR_15 = FUNC_0(VAR_13->op1);
    FUNC_4(VAR_11, VAR_7, VAR_9, VAR_3, FUNC_9(VAR_11, VAR_15));
  } else {
    FUNC_2(VAR_11, VAR_8, VAR_10, FUNC_1(VAR_11, VAR_12, VAR_4));
  }
}
