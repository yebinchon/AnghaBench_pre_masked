
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ curins; scalar_t__ loopref; } ;
struct TYPE_6__ {scalar_t__ op1; scalar_t__ op2; size_t o; int t; int r; } ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int * VAR_0 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(ASMState *VAR_1, IRIns *VAR_2)
{
  IRIns *VAR_3 = FUNC_0(VAR_2->op1);
  IRIns *VAR_4 = FUNC_0(VAR_2->op2);
  FUNC_4(FUNC_7(VAR_4->r));
  if (!FUNC_1(VAR_0[VAR_2->o]))
    return 0;
  if (FUNC_2(VAR_2->op2))
    return 0;
  if (FUNC_6(VAR_3->r))
    return 1;
  if (FUNC_8(VAR_2->r, VAR_4->r))
    return 1;
  if (VAR_1->curins > VAR_1->loopref) {
    if (VAR_2->op2 < VAR_1->loopref && !FUNC_3(VAR_4->t))
      return 0;
    if (VAR_2->op1 < VAR_1->loopref && !FUNC_3(VAR_3->t))
      return 1;
  }
  if (FUNC_5(VAR_3->o))
    return 1;
  return 0;
}
