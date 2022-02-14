
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ nins; } ;
struct TYPE_11__ {TYPE_1__ cur; scalar_t__* chain; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_13__ {int irt; } ;
struct TYPE_12__ {size_t o; scalar_t__ op1; scalar_t__ op2; TYPE_4__ t; scalar_t__ prev; } ;
typedef scalar_t__ IRRef1 ;
typedef scalar_t__ IRRef ;
typedef TYPE_3__ IRIns ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__) ;
 scalar_t__ FUNC_3 (TYPE_4__) ;
 int FUNC_4 (TYPE_4__) ;

__attribute__((used)) static void FUNC_5(jit_State *VAR_4)
{
  IRRef1 *VAR_5[VAR_2];
  IRRef VAR_6;
  uint32_t VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) VAR_5[VAR_7] = &VAR_4->chain[VAR_7];
  for (VAR_6 = VAR_4->cur.nins-1; VAR_6 >= VAR_3; VAR_6--) {
    IRIns *VAR_8 = FUNC_0(VAR_6);
    if (FUNC_3(VAR_8->t)) {
      FUNC_2(VAR_8->t);
      VAR_5[VAR_8->o] = &VAR_8->prev;
    } else if (!FUNC_1(VAR_8)) {
      *VAR_5[VAR_8->o] = VAR_8->prev;
      VAR_8->t.irt = VAR_0;
      VAR_8->o = VAR_1;
      VAR_8->op1 = VAR_8->op2 = 0;
      VAR_8->prev = 0;
      continue;
    }
    if (VAR_8->op1 >= VAR_3) FUNC_4(FUNC_0(VAR_8->op1)->t);
    if (VAR_8->op2 >= VAR_3) FUNC_4(FUNC_0(VAR_8->op2)->t);
  }
}
