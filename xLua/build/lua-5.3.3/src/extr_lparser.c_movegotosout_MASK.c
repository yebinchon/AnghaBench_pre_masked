
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* dyd; } ;
struct TYPE_14__ {int firstgoto; int nactvar; scalar_t__ upval; } ;
struct TYPE_13__ {TYPE_9__* ls; } ;
struct TYPE_12__ {int nactvar; int pc; } ;
struct TYPE_11__ {int n; TYPE_3__* arr; } ;
struct TYPE_10__ {TYPE_2__ gt; } ;
typedef TYPE_2__ Labellist ;
typedef TYPE_3__ Labeldesc ;
typedef TYPE_4__ FuncState ;
typedef TYPE_5__ BlockCnt ;


 int FUNC_0 (TYPE_9__*,int) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_2 (FuncState *VAR_0, BlockCnt *VAR_1) {
  int VAR_2 = VAR_1->firstgoto;
  Labellist *VAR_3 = &VAR_0->ls->dyd->gt;


  while (VAR_2 < VAR_3->n) {
    Labeldesc *VAR_4 = &VAR_3->arr[VAR_2];
    if (VAR_4->nactvar > VAR_1->nactvar) {
      if (VAR_1->upval)
        FUNC_1(VAR_0, VAR_4->pc, VAR_1->nactvar);
      VAR_4->nactvar = VAR_1->nactvar;
    }
    if (!FUNC_0(VAR_0->ls, VAR_2))
      VAR_2++;
  }
}
