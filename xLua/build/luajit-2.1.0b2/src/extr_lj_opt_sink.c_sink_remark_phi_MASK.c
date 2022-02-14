
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nins; } ;
struct TYPE_8__ {TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_10__ {int irt; } ;
struct TYPE_9__ {scalar_t__ o; scalar_t__ prev; TYPE_5__ t; scalar_t__ op2; scalar_t__ op1; } ;
typedef TYPE_3__ IRIns ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__) ;

__attribute__((used)) static void FUNC_2(jit_State *VAR_2)
{
  IRIns *VAR_3;
  int VAR_4;
  do {
    VAR_4 = 0;
    for (VAR_3 = FUNC_0(VAR_2->cur.nins-1); VAR_3->o == VAR_1; VAR_3--) {
      IRIns *VAR_5 = FUNC_0(VAR_3->op1), *VAR_6 = FUNC_0(VAR_3->op2);
      if (((VAR_5->t.irt ^ VAR_6->t.irt) & VAR_0))
 VAR_4 = 1;
      else if (VAR_5->prev == VAR_6->prev)
 continue;
      FUNC_1(FUNC_0(VAR_3->op1)->t);
      FUNC_1(FUNC_0(VAR_3->op2)->t);
    }
  } while (VAR_4);
}
