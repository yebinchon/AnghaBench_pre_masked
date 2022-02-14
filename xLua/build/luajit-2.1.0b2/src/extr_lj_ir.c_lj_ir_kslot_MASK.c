
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* ir; } ;
struct TYPE_10__ {scalar_t__* chain; TYPE_1__ cur; } ;
typedef TYPE_3__ jit_State ;
struct TYPE_9__ {int irt; } ;
struct TYPE_11__ {scalar_t__ prev; scalar_t__ op12; size_t o; TYPE_2__ t; } ;
typedef scalar_t__ TRef ;
typedef scalar_t__ IRRef2 ;
typedef scalar_t__ IRRef1 ;
typedef scalar_t__ IRRef ;
typedef TYPE_4__ IRIns ;


 TYPE_4__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

TRef FUNC_6(jit_State *VAR_2, TRef VAR_3, IRRef VAR_4)
{
  IRIns *VAR_5, *VAR_6 = VAR_2->cur.ir;
  IRRef2 VAR_7 = FUNC_1((IRRef1)VAR_3, (IRRef1)VAR_4);
  IRRef VAR_8;

  FUNC_4(FUNC_5(VAR_3) && VAR_4 == (IRRef)(IRRef1)VAR_4);
  for (VAR_8 = VAR_2->chain[VAR_1]; VAR_8; VAR_8 = VAR_6[VAR_8].prev)
    if (VAR_6[VAR_8].op12 == VAR_7)
      goto found;
  VAR_8 = FUNC_3(VAR_2);
  VAR_5 = FUNC_0(VAR_8);
  VAR_5->op12 = VAR_7;
  VAR_5->t.irt = VAR_0;
  VAR_5->o = VAR_1;
  VAR_5->prev = VAR_2->chain[VAR_1];
  VAR_2->chain[VAR_1] = (IRRef1)VAR_8;
found:
  return FUNC_2(VAR_8, VAR_0);
}
