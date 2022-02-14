
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* chain; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {scalar_t__ op1; scalar_t__ op2; scalar_t__ prev; } ;
typedef scalar_t__ IRRef ;
typedef size_t IROp ;
typedef TYPE_2__ IRIns ;


 TYPE_2__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static IRRef FUNC_1(jit_State *VAR_0, IROp VAR_1, IRRef VAR_2, IRRef VAR_3)
{
  IRRef VAR_4 = VAR_0->chain[VAR_1];
  IRRef VAR_5 = VAR_2;
  if (VAR_3 > VAR_5) { VAR_5 = VAR_3; VAR_3 = VAR_2; VAR_2 = VAR_5; }
  while (VAR_4 > VAR_5) {
    IRIns *VAR_6 = FUNC_0(VAR_4);
    if (VAR_6->op1 == VAR_2 && VAR_6->op2 == VAR_3)
      return VAR_4;
    VAR_4 = VAR_6->prev;
  }
  return 0;
}
