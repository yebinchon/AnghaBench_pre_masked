
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int op1; int op2; } ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(ASMState *VAR_3, IRIns *VAR_4, int VAR_5)
{
  Reg VAR_6, VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_0);
  IRRef VAR_8 = VAR_4->op1, VAR_9 = VAR_4->op2;
  if (FUNC_2(VAR_9)) { VAR_8 = VAR_9; VAR_9 = VAR_4->op1; }
  VAR_6 = FUNC_3(VAR_3, VAR_9, FUNC_6(VAR_0, VAR_7));
  FUNC_1(VAR_3, VAR_1 + (VAR_5<<24), FUNC_0(VAR_4, VAR_7), VAR_6);
  FUNC_1(VAR_3, VAR_2, FUNC_0(VAR_4, VAR_7), VAR_6);
  FUNC_5(VAR_3, VAR_7, VAR_8);
}
