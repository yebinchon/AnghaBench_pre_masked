
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {TYPE_3__* ir; } ;
struct TYPE_9__ {int* chain; TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_11__ {scalar_t__ irt; } ;
struct TYPE_10__ {int prev; size_t o; TYPE_5__ t; scalar_t__ i; } ;
typedef int TRef ;
typedef scalar_t__ IRType ;
typedef int IRRef1 ;
typedef int IRRef ;
typedef TYPE_3__ IRIns ;


 TYPE_3__* FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_5__) ;

TRef FUNC_4(jit_State *VAR_1, IRType VAR_2)
{
  IRIns *VAR_3, *VAR_4 = VAR_1->cur.ir;
  IRRef VAR_5;
  for (VAR_5 = VAR_1->chain[VAR_0]; VAR_5; VAR_5 = VAR_4[VAR_5].prev)
    if (FUNC_3(VAR_4[VAR_5].t) == VAR_2)
      goto found;
  VAR_5 = FUNC_2(VAR_1);
  VAR_3 = FUNC_0(VAR_5);
  VAR_3->i = 0;
  VAR_3->t.irt = (uint8_t)VAR_2;
  VAR_3->o = VAR_0;
  VAR_3->prev = VAR_1->chain[VAR_0];
  VAR_1->chain[VAR_0] = (IRRef1)VAR_5;
found:
  return FUNC_1(VAR_5, VAR_2);
}
