
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ maxslot; int pc; } ;
typedef TYPE_1__ jit_State ;
typedef int LoopEvent ;
typedef scalar_t__ BCReg ;


 int VAR_0 ;

__attribute__((used)) static LoopEvent FUNC_0(jit_State *VAR_1, BCReg VAR_2)
{
  if (VAR_2 < VAR_1->maxslot) VAR_1->maxslot = VAR_2;
  VAR_1->pc++;
  return VAR_0;
}
