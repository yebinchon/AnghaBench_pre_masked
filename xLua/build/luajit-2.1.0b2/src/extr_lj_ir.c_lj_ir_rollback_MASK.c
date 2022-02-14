
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nins; } ;
struct TYPE_7__ {TYPE_1__ cur; int * chain; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_8__ {size_t o; int prev; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_3__ IRIns ;


 TYPE_3__* FUNC_0 (scalar_t__) ;

void FUNC_1(jit_State *VAR_0, IRRef VAR_1)
{
  IRRef VAR_2 = VAR_0->cur.nins;
  while (VAR_2 > VAR_1) {
    IRIns *VAR_3;
    VAR_2--;
    VAR_3 = FUNC_0(VAR_2);
    VAR_0->chain[VAR_3->o] = VAR_3->prev;
  }
  VAR_0->cur.nins = VAR_2;
}
