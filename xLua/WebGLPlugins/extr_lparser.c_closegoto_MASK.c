
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * varname; } ;
struct TYPE_12__ {scalar_t__ nactvar; int pc; int line; int * name; } ;
struct TYPE_11__ {int n; TYPE_4__* arr; } ;
struct TYPE_10__ {int L; TYPE_1__* dyd; int * fs; } ;
struct TYPE_9__ {TYPE_3__ gt; } ;
typedef int TString ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ Labellist ;
typedef TYPE_4__ Labeldesc ;
typedef int FuncState ;


 int FUNC_0 (int *,int *) ;
 TYPE_6__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 char* FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char const*) ;

__attribute__((used)) static void FUNC_7 (LexState *VAR_0, int VAR_1, Labeldesc *VAR_2) {
  int VAR_3;
  FuncState *VAR_4 = VAR_0->fs;
  Labellist *VAR_5 = &VAR_0->dyd->gt;
  Labeldesc *VAR_6 = &VAR_5->arr[VAR_1];
  FUNC_5(FUNC_0(VAR_6->name, VAR_2->name));
  if (VAR_6->nactvar < VAR_2->nactvar) {
    TString *VAR_7 = FUNC_1(VAR_4, VAR_6->nactvar)->varname;
    const char *VAR_8 = FUNC_4(VAR_0->L,
      "<goto %s> at line %d jumps into the scope of local '%s'",
      FUNC_2(VAR_6->name), VAR_6->line, FUNC_2(VAR_7));
    FUNC_6(VAR_0, VAR_8);
  }
  FUNC_3(VAR_4, VAR_6->pc, VAR_2->pc);

  for (VAR_3 = VAR_1; VAR_3 < VAR_5->n - 1; VAR_3++)
    VAR_5->arr[VAR_3] = VAR_5->arr[VAR_3 + 1];
  VAR_5->n--;
}
