
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* chain; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_9__ {scalar_t__ op1; } ;
struct TYPE_8__ {scalar_t__ op2; scalar_t__ o; scalar_t__ op1; scalar_t__ prev; int i; } ;
typedef int TRef ;
typedef scalar_t__ IRRef ;
typedef TYPE_2__ IRIns ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static TRef FUNC_3(jit_State *VAR_3)
{
  IRIns *VAR_4 = FUNC_0(VAR_2->op1);
  IRIns *VAR_5 = FUNC_0(VAR_4->op2);
  if (VAR_5->o == VAR_0 && FUNC_2(VAR_5->op2)) {
    IRIns *VAR_6 = FUNC_0(VAR_5->op1);
    if (VAR_6->o == VAR_0 && FUNC_2(VAR_6->op2) &&
 FUNC_0(VAR_5->op2)->i == -FUNC_0(VAR_6->op2)->i) {
      IRRef VAR_7 = VAR_3->chain[VAR_1];
      IRRef VAR_8 = VAR_6->op1;
      if (VAR_4->op1 > VAR_8) VAR_8 = VAR_4->op1;
      while (VAR_7 > VAR_8) {
 IRIns *VAR_9 = FUNC_0(VAR_7);
 if (VAR_9->op1 == VAR_4->op1 && VAR_9->op2 == VAR_6->op1)
   return FUNC_1(VAR_3, VAR_7);
 VAR_7 = VAR_9->prev;
      }
    }
  }
  return 0;
}
