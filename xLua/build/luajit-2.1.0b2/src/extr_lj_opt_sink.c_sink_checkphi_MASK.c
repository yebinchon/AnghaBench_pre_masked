
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ loopref; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_8__ {scalar_t__ o; scalar_t__ op2; scalar_t__ op1; int prev; int t; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_2__ IRIns ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(jit_State *VAR_3, IRIns *VAR_4, IRRef VAR_5)
{
  if (VAR_5 >= VAR_2) {
    IRIns *VAR_6 = FUNC_0(VAR_5);
    if (FUNC_1(VAR_6->t) || (VAR_6->o == VAR_1 && VAR_6->op2 == VAR_0 &&
        FUNC_1(FUNC_0(VAR_6->op1)->t))) {
      VAR_4->prev++;
      return 1;
    }

    return VAR_5 < VAR_3->loopref && !FUNC_2(VAR_3, VAR_5);
  }
  return 1;
}
