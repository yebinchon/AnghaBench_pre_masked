
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ curins; scalar_t__ snapref; size_t snapno; scalar_t__ snaprename; TYPE_2__* T; } ;
struct TYPE_11__ {scalar_t__ op2; int op1; } ;
struct TYPE_10__ {scalar_t__ nins; TYPE_1__* snap; } ;
struct TYPE_9__ {scalar_t__ ref; } ;
typedef TYPE_3__ IRIns ;
typedef TYPE_4__ ASMState ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(ASMState *VAR_1)
{
  if (VAR_1->curins < VAR_1->snapref) {
    do {
      if (VAR_1->snapno == 0) return;
      VAR_1->snapno--;
      VAR_1->snapref = VAR_1->T->snap[VAR_1->snapno].ref;
    } while (VAR_1->curins < VAR_1->snapref);
    FUNC_1(VAR_1);
    VAR_1->snaprename = VAR_1->T->nins;
  } else {

    for (; VAR_1->snaprename < VAR_1->T->nins; VAR_1->snaprename++) {
      IRIns *VAR_2 = FUNC_0(VAR_1->snaprename);
      if (FUNC_2(VAR_1, VAR_2->op1))
 VAR_2->op2 = VAR_0-1;
    }
  }
}
