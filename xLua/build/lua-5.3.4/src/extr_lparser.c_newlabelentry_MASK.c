
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int line; int pc; int nactvar; int * name; } ;
struct TYPE_9__ {int n; TYPE_6__* arr; int size; } ;
struct TYPE_8__ {TYPE_1__* fs; int L; } ;
struct TYPE_7__ {int nactvar; } ;
typedef int TString ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ Labellist ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*,int,int ,int ,int ,char*) ;

__attribute__((used)) static int FUNC_1 (LexState *VAR_2, Labellist *VAR_3, TString *VAR_4,
                          int VAR_5, int VAR_6) {
  int VAR_7 = VAR_3->n;
  FUNC_0(VAR_2->L, VAR_3->arr, VAR_7, VAR_3->size,
                  VAR_0, VAR_1, "labels/gotos");
  VAR_3->arr[VAR_7].name = VAR_4;
  VAR_3->arr[VAR_7].line = VAR_5;
  VAR_3->arr[VAR_7].nactvar = VAR_2->fs->nactvar;
  VAR_3->arr[VAR_7].pc = VAR_6;
  VAR_3->n = VAR_7 + 1;
  return VAR_7;
}
