
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {TYPE_6__* bl; } ;
struct TYPE_16__ {int firstlabel; scalar_t__ upval; } ;
struct TYPE_12__ {int n; TYPE_4__* arr; } ;
struct TYPE_11__ {TYPE_4__* arr; } ;
struct TYPE_15__ {TYPE_2__ label; TYPE_1__ gt; } ;
struct TYPE_14__ {scalar_t__ nactvar; int pc; int name; } ;
struct TYPE_13__ {TYPE_7__* fs; TYPE_5__* dyd; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ Labeldesc ;
typedef TYPE_5__ Dyndata ;
typedef TYPE_6__ BlockCnt ;


 int FUNC_0 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_1 (TYPE_7__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3 (LexState *VAR_0, int VAR_1) {
  int VAR_2;
  BlockCnt *VAR_3 = VAR_0->fs->bl;
  Dyndata *VAR_4 = VAR_0->dyd;
  Labeldesc *VAR_5 = &VAR_4->gt.arr[VAR_1];

  for (VAR_2 = VAR_3->firstlabel; VAR_2 < VAR_4->label.n; VAR_2++) {
    Labeldesc *VAR_6 = &VAR_4->label.arr[VAR_2];
    if (FUNC_2(VAR_6->name, VAR_5->name)) {
      if (VAR_5->nactvar > VAR_6->nactvar &&
          (VAR_3->upval || VAR_4->label.n > VAR_3->firstlabel))
        FUNC_1(VAR_0->fs, VAR_5->pc, VAR_6->nactvar);
      FUNC_0(VAR_0, VAR_1, VAR_6);
      return 1;
    }
  }
  return 0;
}
