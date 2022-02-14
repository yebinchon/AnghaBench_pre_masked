
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ szallmcarea; int * mcarea; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_6__ {int size; int * next; } ;
typedef int MCode ;
typedef TYPE_2__ MCLink ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;

void FUNC_1(jit_State *VAR_0)
{
  MCode *VAR_1 = VAR_0->mcarea;
  VAR_0->mcarea = ((void*)0);
  VAR_0->szallmcarea = 0;
  while (VAR_1) {
    MCode *VAR_2 = ((MCLink *)VAR_1)->next;
    FUNC_0(VAR_0, VAR_1, ((MCLink *)VAR_1)->size);
    VAR_1 = VAR_2;
  }
}
