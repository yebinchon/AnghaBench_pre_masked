
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int L; int fn; int * pt; int const* pc; } ;
typedef TYPE_1__ jit_State ;
typedef int BCIns ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,void*,int ) ;
 int VAR_1 ;

void FUNC_4(jit_State *VAR_2, const BCIns *VAR_3)
{

  VAR_2->pc = VAR_3;
  VAR_2->fn = FUNC_0(VAR_2->L);
  VAR_2->pt = FUNC_2(VAR_2->fn) ? FUNC_1(VAR_2->fn) : ((void*)0);
  while (FUNC_3(VAR_2->L, ((void*)0), (void *)VAR_2, VAR_1) != 0)
    VAR_2->state = VAR_0;
}
