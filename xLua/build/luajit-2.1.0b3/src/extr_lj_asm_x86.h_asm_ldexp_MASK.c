
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int op2; int op1; int r; int s; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ASMState *VAR_6, IRIns *VAR_7)
{
  int32_t VAR_8 = FUNC_6(VAR_7->s);
  Reg VAR_9 = VAR_7->r;
  if (FUNC_4(VAR_9)) {
    FUNC_3(VAR_6, VAR_9);
    FUNC_5(VAR_6, VAR_9);
    FUNC_1(VAR_6, VAR_4, VAR_9, VAR_0, VAR_8);
  }
  FUNC_1(VAR_6, VAR_3, VAR_5, VAR_0, VAR_8);
  FUNC_2(VAR_6, VAR_1);
  FUNC_2(VAR_6, VAR_2);
  FUNC_0(VAR_6, VAR_7->op1);
  FUNC_0(VAR_6, VAR_7->op2);
}
