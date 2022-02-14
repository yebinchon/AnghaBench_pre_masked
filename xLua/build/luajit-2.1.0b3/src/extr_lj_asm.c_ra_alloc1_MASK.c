
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r; } ;
typedef int RegSet ;
typedef int Reg ;
typedef int IRRef ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static Reg FUNC_4(ASMState *VAR_0, IRRef VAR_1, RegSet VAR_2)
{
  Reg VAR_3 = FUNC_0(VAR_1)->r;

  if (FUNC_2(VAR_3)) VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_3(VAR_0, VAR_3);
  return VAR_3;
}
