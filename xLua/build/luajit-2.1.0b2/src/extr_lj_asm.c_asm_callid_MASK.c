
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op2; int op1; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef size_t IRCallID ;
typedef int CCallInfo ;
typedef int ASMState ;


 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int const*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(ASMState *VAR_1, IRIns *VAR_2, IRCallID VAR_3)
{
  const CCallInfo *VAR_4 = &VAR_0[VAR_3];
  IRRef VAR_5[2];
  VAR_5[0] = VAR_2->op1;
  VAR_5[1] = VAR_2->op2;
  FUNC_1(VAR_1, VAR_2, VAR_4);
  FUNC_0(VAR_1, VAR_4, VAR_5);
}
