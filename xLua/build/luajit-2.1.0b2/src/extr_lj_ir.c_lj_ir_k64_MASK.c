
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* ir; } ;
struct TYPE_11__ {int* chain; TYPE_1__ cur; } ;
typedef TYPE_3__ jit_State ;
typedef int cTValue ;
struct TYPE_10__ {int irt; } ;
struct TYPE_12__ {int prev; size_t o; TYPE_2__ t; int ptr; } ;
typedef int TRef ;
typedef int IRType ;
typedef int IRRef1 ;
typedef int IRRef ;
typedef size_t IROp ;
typedef TYPE_4__ IRIns ;


 TYPE_4__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

TRef FUNC_7(jit_State *VAR_3, IROp VAR_4, cTValue *VAR_5)
{
  IRIns *VAR_6, *VAR_7 = VAR_3->cur.ir;
  IRRef VAR_8;
  IRType VAR_9 = VAR_4 == VAR_2 ? VAR_1 : VAR_0;
  for (VAR_8 = VAR_3->chain[VAR_4]; VAR_8; VAR_8 = VAR_7[VAR_8].prev)
    if (FUNC_3(&VAR_7[VAR_8]) == VAR_5)
      goto found;
  VAR_8 = FUNC_4(VAR_3);
  VAR_6 = FUNC_0(VAR_8);
  FUNC_5(FUNC_2(VAR_5));
  FUNC_6(VAR_6->ptr, VAR_5);
  VAR_6->t.irt = VAR_9;
  VAR_6->o = VAR_4;
  VAR_6->prev = VAR_3->chain[VAR_4];
  VAR_3->chain[VAR_4] = (IRRef1)VAR_8;
found:
  return FUNC_1(VAR_8, VAR_9);
}
