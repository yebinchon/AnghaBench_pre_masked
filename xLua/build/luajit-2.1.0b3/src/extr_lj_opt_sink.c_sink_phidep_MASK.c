
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_3__ {scalar_t__ op1; scalar_t__ op2; int t; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(jit_State *VAR_1, IRRef VAR_2)
{
  IRIns *VAR_3 = FUNC_0(VAR_2);
  if (FUNC_1(VAR_3->t)) return 1;
  if (VAR_3->op1 >= VAR_0 && FUNC_2(VAR_1, VAR_3->op1)) return 1;
  if (VAR_3->op2 >= VAR_0 && FUNC_2(VAR_1, VAR_3->op2)) return 1;
  return 0;
}
