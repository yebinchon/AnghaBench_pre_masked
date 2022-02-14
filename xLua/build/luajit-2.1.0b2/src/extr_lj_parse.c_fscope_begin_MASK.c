
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {int flags; struct TYPE_8__* prev; int vstart; scalar_t__ nactvar; } ;
struct TYPE_7__ {scalar_t__ nactvar; scalar_t__ freereg; TYPE_3__* bl; TYPE_1__* ls; } ;
struct TYPE_6__ {int vtop; } ;
typedef TYPE_2__ FuncState ;
typedef TYPE_3__ FuncScope ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(FuncState *VAR_0, FuncScope *VAR_1, int VAR_2)
{
  VAR_1->nactvar = (uint8_t)VAR_0->nactvar;
  VAR_1->flags = VAR_2;
  VAR_1->vstart = VAR_0->ls->vtop;
  VAR_1->prev = VAR_0->bl;
  VAR_0->bl = VAR_1;
  FUNC_0(VAR_0->freereg == VAR_0->nactvar);
}
