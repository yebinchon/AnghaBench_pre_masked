
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {size_t maxslot; scalar_t__* base; int pc; } ;
typedef TYPE_1__ jit_State ;
typedef size_t BCReg ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,scalar_t__*,int ,size_t) ;

void FUNC_1(jit_State *VAR_1)
{
  uint8_t VAR_2[VAR_0];
  BCReg VAR_3 = VAR_1->maxslot;
  BCReg VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_1->pc, VAR_3);
  for (; VAR_4 < VAR_3; VAR_4++)
    if (VAR_2[VAR_4] != 0)
      VAR_1->base[VAR_4] = 0;
}
