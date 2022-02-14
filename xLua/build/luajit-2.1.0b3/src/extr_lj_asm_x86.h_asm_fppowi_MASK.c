
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op2; int op1; int r; } ;
typedef int RegSet ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(ASMState *VAR_4, IRIns *VAR_5)
{

  RegSet VAR_6 = FUNC_1(VAR_1, VAR_2+1)|FUNC_0(VAR_0);
  if (FUNC_5(VAR_5->r))
    FUNC_7(VAR_6, VAR_5->r);
  FUNC_4(VAR_4, VAR_6);
  FUNC_3(VAR_4, VAR_5, VAR_1);
  FUNC_2(VAR_4, VAR_3);
  FUNC_6(VAR_4, VAR_1, VAR_5->op1);
  FUNC_6(VAR_4, VAR_0, VAR_5->op2);
}
