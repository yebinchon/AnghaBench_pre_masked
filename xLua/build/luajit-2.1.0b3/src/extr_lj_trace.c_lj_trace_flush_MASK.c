
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sizetrace; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ TraceNo ;
struct TYPE_9__ {scalar_t__ root; } ;
typedef TYPE_2__ GCtrace ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,scalar_t__) ;

void FUNC_2(jit_State *VAR_0, TraceNo VAR_1)
{
  if (VAR_1 > 0 && VAR_1 < VAR_0->sizetrace) {
    GCtrace *VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 && VAR_2->root == 0)
      FUNC_0(VAR_0, VAR_2);
  }
}
