
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_4__ {int baseslot; int base; int framedepth; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ BCReg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

void FUNC_1(jit_State *VAR_1, BCReg VAR_2, ptrdiff_t VAR_3)
{
  FUNC_0(VAR_1, VAR_2, VAR_3);

  VAR_1->framedepth++;
  VAR_1->base += VAR_2+1+VAR_0;
  VAR_1->baseslot += VAR_2+1+VAR_0;
}
