
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_10__ {TYPE_4__* ir; } ;
struct TYPE_12__ {int* chain; TYPE_1__ cur; } ;
typedef TYPE_3__ jit_State ;
struct TYPE_11__ {scalar_t__ irt; } ;
struct TYPE_13__ {int prev; size_t o; TYPE_2__ t; int gcr; scalar_t__ op12; } ;
typedef int TRef ;
typedef scalar_t__ IRType ;
typedef int IRRef1 ;
typedef int IRRef ;
typedef TYPE_4__ IRIns ;
typedef int GCobj ;


 TYPE_4__* FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 size_t VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;
 int * FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;

TRef FUNC_8(jit_State *VAR_2, GCobj *VAR_3, IRType VAR_4)
{
  IRIns *VAR_5, *VAR_6 = VAR_2->cur.ir;
  IRRef VAR_7;
  FUNC_6(!FUNC_5(FUNC_1(VAR_2), VAR_3));
  for (VAR_7 = VAR_2->chain[VAR_0]; VAR_7; VAR_7 = VAR_6[VAR_7].prev)
    if (FUNC_3(&VAR_6[VAR_7]) == VAR_3)
      goto found;
  VAR_7 = FUNC_4(VAR_2);
  VAR_5 = FUNC_0(VAR_7);

  VAR_5->op12 = 0;
  FUNC_7(VAR_5[VAR_1].gcr, VAR_3);
  VAR_5->t.irt = (uint8_t)VAR_4;
  VAR_5->o = VAR_0;
  VAR_5->prev = VAR_2->chain[VAR_0];
  VAR_2->chain[VAR_0] = (IRRef1)VAR_7;
found:
  return FUNC_2(VAR_7, VAR_4);
}
