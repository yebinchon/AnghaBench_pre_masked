
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nactvar; int flags; struct TYPE_5__* prev; } ;
struct TYPE_4__ {TYPE_2__* bl; } ;
typedef TYPE_1__ FuncState ;
typedef TYPE_2__ FuncScope ;
typedef scalar_t__ BCReg ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(FuncState *VAR_1, BCReg VAR_2)
{
  FuncScope *VAR_3;
  for (VAR_3 = VAR_1->bl; VAR_3 && VAR_3->nactvar > VAR_2; VAR_3 = VAR_3->prev)
    ;
  if (VAR_3)
    VAR_3->flags |= VAR_0;
}
