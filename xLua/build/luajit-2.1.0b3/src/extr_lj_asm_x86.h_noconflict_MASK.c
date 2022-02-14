
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ curins; TYPE_1__* ir; } ;
struct TYPE_4__ {scalar_t__ o; scalar_t__ op1; scalar_t__ op2; } ;
typedef scalar_t__ IRRef ;
typedef scalar_t__ IROp ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(ASMState *VAR_1, IRRef VAR_2, IROp VAR_3, int VAR_4)
{
  IRIns *VAR_5 = VAR_1->ir;
  IRRef VAR_6 = VAR_1->curins;
  if (VAR_6 > VAR_2 + VAR_0)
    return 0;
  while (--VAR_6 > VAR_2) {
    if (VAR_5[VAR_6].o == VAR_3)
      return 0;
    else if (!VAR_4 && (VAR_5[VAR_6].op1 == VAR_2 || VAR_5[VAR_6].op2 == VAR_2))
      return 0;
  }
  return 1;
}
