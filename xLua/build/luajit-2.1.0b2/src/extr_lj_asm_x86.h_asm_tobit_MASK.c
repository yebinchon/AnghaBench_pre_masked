
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int r; } ;
struct TYPE_5__ {int op1; int op2; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(ASMState *VAR_4, IRIns *VAR_5)
{
  Reg VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_1);
  Reg VAR_7 = FUNC_7(FUNC_0(VAR_5->op1)->r) ?
       FUNC_4(VAR_4, VAR_5->op1, VAR_0) :
       FUNC_8(VAR_4, VAR_0);
  Reg VAR_8 = FUNC_1(VAR_4, VAR_5->op2, FUNC_9(VAR_0, VAR_7));
  FUNC_3(VAR_4, VAR_3, VAR_7, VAR_6);
  FUNC_2(VAR_4, VAR_2, VAR_7, VAR_8);
  FUNC_6(VAR_4, VAR_7, VAR_5->op1);
}
