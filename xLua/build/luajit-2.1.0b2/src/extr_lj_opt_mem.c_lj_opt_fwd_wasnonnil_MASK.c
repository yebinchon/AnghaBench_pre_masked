
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* chain; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {scalar_t__ op1; scalar_t__ op2; scalar_t__ prev; int t; } ;
typedef scalar_t__ IRRef ;
typedef size_t IROpT ;
typedef TYPE_2__ IRIns ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(jit_State *VAR_2, IROpT VAR_3, IRRef VAR_4)
{

  IRRef VAR_5 = VAR_2->chain[VAR_3+VAR_0];
  while (VAR_5 > VAR_4) {
    IRIns *VAR_6 = FUNC_0(VAR_5);
    if (VAR_6->op1 == VAR_4) {

      return !FUNC_2(VAR_6->t);
    } else if (FUNC_2(VAR_6->t)) {
      IRRef VAR_7 = FUNC_0(VAR_6->op1)->op2;
      IRRef VAR_8 = FUNC_0(VAR_4)->op2;

      if (VAR_3 == VAR_1 || FUNC_3(FUNC_0(VAR_7)->t, FUNC_0(VAR_8)->t)) {
 if (VAR_7 == VAR_8 || !FUNC_1(VAR_7) || !FUNC_1(VAR_8))
   return 0;

      }
    }
    VAR_5 = VAR_6->prev;
  }


  VAR_5 = VAR_2->chain[VAR_3];
  while (VAR_5 > VAR_4) {
    IRIns *VAR_9 = FUNC_0(VAR_5);
    if (VAR_9->op1 == VAR_4) {

      return !FUNC_2(VAR_9->t);
    }
    VAR_5 = VAR_9->prev;
  }
  return 0;
}
