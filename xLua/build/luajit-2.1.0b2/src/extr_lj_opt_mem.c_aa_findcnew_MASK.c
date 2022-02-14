
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_5__ {scalar_t__ o; int op2; int op1; } ;
typedef TYPE_1__ IRIns ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static IRIns *FUNC_2(jit_State *VAR_2, IRIns *VAR_3)
{
  while (VAR_3->o == VAR_0) {
    if (!FUNC_1(VAR_3->op1)) {
      IRIns *VAR_4 = FUNC_2(VAR_2, FUNC_0(VAR_3->op1));
      if (VAR_4) return VAR_4;
    }
    if (FUNC_1(VAR_3->op2)) return ((void*)0);
    VAR_3 = FUNC_0(VAR_3->op2);
  }
  return VAR_3->o == VAR_1 ? VAR_3 : ((void*)0);
}
