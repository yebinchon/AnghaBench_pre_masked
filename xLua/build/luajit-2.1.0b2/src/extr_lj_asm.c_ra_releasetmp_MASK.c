
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r; int s; } ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static Reg FUNC_6(ASMState *VAR_1, IRRef VAR_2)
{
  IRIns *VAR_3 = FUNC_0(VAR_2);
  Reg VAR_4 = VAR_3->r;
  FUNC_1(FUNC_3(VAR_4) && !FUNC_4(VAR_3->s));
  FUNC_2(VAR_1, VAR_4);
  FUNC_5(VAR_1, VAR_4);
  VAR_3->r = VAR_0;
  return VAR_4;
}
