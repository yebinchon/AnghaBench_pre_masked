
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
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static LoopEvent FUNC_6(jit_State *VAR_3, const BCIns VAR_4)
{
  BCReg VAR_5 = FUNC_0(VAR_4);
  FUNC_4(!VAR_0);
  if (!FUNC_5(FUNC_3(VAR_3, VAR_5))) {
    VAR_3->base[VAR_5-1] = VAR_3->base[VAR_5];
    VAR_3->maxslot = VAR_5-1+FUNC_1(VAR_3->pc[-1]);
    VAR_3->pc += FUNC_2(VAR_4)+1;
    return VAR_1;
  } else {
    VAR_3->maxslot = VAR_5-3;
    VAR_3->pc++;
    return VAR_2;
  }
}
