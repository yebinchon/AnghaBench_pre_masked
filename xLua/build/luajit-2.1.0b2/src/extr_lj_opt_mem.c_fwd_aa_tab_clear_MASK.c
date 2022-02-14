
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* chain; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_7__ {scalar_t__ op2; scalar_t__ op1; scalar_t__ prev; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_2__ IRIns ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(jit_State *VAR_3, IRRef VAR_4, IRRef VAR_5)
{
  IRRef VAR_6 = VAR_3->chain[VAR_2];
  while (VAR_6 > VAR_4) {
    IRIns *VAR_7 = FUNC_0(VAR_6);
    if (VAR_7->op2 == VAR_1 &&
 (VAR_5 == VAR_7->op1 || FUNC_1(VAR_3, VAR_5, VAR_7->op1) != VAR_0))
      return 0;
    VAR_6 = VAR_7->prev;
  }
  return 1;
}
