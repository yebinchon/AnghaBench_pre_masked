
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ o; scalar_t__ op2; int op1; } ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(ASMState *VAR_3, IRIns *VAR_4)
{
  IRIns *VAR_5 = FUNC_0(VAR_4->op1);
  if (VAR_5 == VAR_4-1 && VAR_5->o == VAR_2 && !FUNC_2(VAR_5)) {
    IRIns *VAR_6 = FUNC_0(VAR_5->op1);
    if (VAR_6 == VAR_4-2 && VAR_6->o == VAR_1 &&
 VAR_6->op2 == VAR_0 && !FUNC_2(VAR_6)) {
      FUNC_1(VAR_3, VAR_4, VAR_6->op1, VAR_5->op2);
      return 1;
    }
  }
  return 0;
}
