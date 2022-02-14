
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_4__ {int baseslot; int base; int framedepth; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ BCReg ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

void FUNC_1(jit_State *VAR_0, BCReg VAR_1, ptrdiff_t VAR_2)
{
  FUNC_0(VAR_0, VAR_1, VAR_2);

  VAR_0->framedepth++;
  VAR_0->base += VAR_1+1;
  VAR_0->baseslot += VAR_1+1;
}
