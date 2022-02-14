
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* ir; } ;
struct TYPE_12__ {int* chain; TYPE_1__ cur; } ;
typedef TYPE_3__ jit_State ;
struct TYPE_11__ {int irt; } ;
struct TYPE_13__ {int prev; size_t o; TYPE_2__ t; int ptr; scalar_t__ op12; } ;
typedef int TRef ;
typedef int IRRef1 ;
typedef int IRRef ;
typedef size_t IROp ;
typedef TYPE_4__ IRIns ;


 TYPE_4__* FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int,int ) ;
 void* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,void*) ;
 scalar_t__ FUNC_7 (void*) ;

TRef FUNC_8(jit_State *VAR_2, IROp VAR_3, void *VAR_4)
{
  IRIns *VAR_5, *VAR_6 = VAR_2->cur.ir;
  IRRef VAR_7;



  for (VAR_7 = VAR_2->chain[VAR_3]; VAR_7; VAR_7 = VAR_6[VAR_7].prev)
    if (FUNC_2(&VAR_6[VAR_7]) == VAR_4)
      goto found;



  VAR_7 = FUNC_3(VAR_2);

  VAR_5 = FUNC_0(VAR_7);
  VAR_5->op12 = 0;
  FUNC_6(VAR_5[VAR_1].ptr, VAR_4);
  VAR_5->t.irt = VAR_0;
  VAR_5->o = VAR_3;
  VAR_5->prev = VAR_2->chain[VAR_3];
  VAR_2->chain[VAR_3] = (IRRef1)VAR_7;
found:
  return FUNC_1(VAR_7, VAR_0);
}
