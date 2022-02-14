
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxslot; int * pc; int * base; } ;
typedef TYPE_1__ jit_State ;
typedef int LoopEvent ;
typedef int BCReg ;
typedef int BCIns ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static LoopEvent FUNC_5(jit_State *VAR_2, const BCIns VAR_3)
{
  BCReg VAR_4 = FUNC_0(VAR_3);
  if (!FUNC_4(FUNC_3(VAR_2, VAR_4))) {
    VAR_2->base[VAR_4-1] = VAR_2->base[VAR_4];
    VAR_2->maxslot = VAR_4-1+FUNC_1(VAR_2->pc[-1]);
    VAR_2->pc += FUNC_2(VAR_3)+1;
    return VAR_0;
  } else {
    VAR_2->maxslot = VAR_4-3;
    VAR_2->pc++;
    return VAR_1;
  }
}
