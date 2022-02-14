
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_11__ {TYPE_5__* ir; } ;
struct TYPE_14__ {int* chain; TYPE_1__ cur; } ;
typedef TYPE_4__ jit_State ;
struct TYPE_16__ {scalar_t__ u64; } ;
struct TYPE_13__ {int irt; } ;
struct TYPE_12__ {scalar_t__ u64; } ;
struct TYPE_15__ {int prev; size_t o; scalar_t__ op12; TYPE_3__ t; TYPE_2__ tv; } ;
typedef int TRef ;
typedef int IRType ;
typedef int IRRef1 ;
typedef int IRRef ;
typedef size_t IROp ;
typedef TYPE_5__ IRIns ;


 TYPE_5__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int,int ) ;
 TYPE_8__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;

TRef FUNC_4(jit_State *VAR_3, IROp VAR_4, uint64_t VAR_5)
{
  IRIns *VAR_6, *VAR_7 = VAR_3->cur.ir;
  IRRef VAR_8;
  IRType VAR_9 = VAR_4 == VAR_2 ? VAR_1 : VAR_0;
  for (VAR_8 = VAR_3->chain[VAR_4]; VAR_8; VAR_8 = VAR_7[VAR_8].prev)
    if (FUNC_2(&VAR_7[VAR_8])->u64 == VAR_5)
      goto found;
  VAR_8 = FUNC_3(VAR_3);
  VAR_6 = FUNC_0(VAR_8);
  VAR_6[1].tv.u64 = VAR_5;
  VAR_6->t.irt = VAR_9;
  VAR_6->o = VAR_4;
  VAR_6->op12 = 0;
  VAR_6->prev = VAR_3->chain[VAR_4];
  VAR_3->chain[VAR_4] = (IRRef1)VAR_8;
found:
  return FUNC_1(VAR_8, VAR_9);
}
