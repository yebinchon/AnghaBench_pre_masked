
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * varname; } ;
struct TYPE_9__ {size_t nlocvars; TYPE_1__* f; } ;
struct TYPE_8__ {int L; TYPE_3__* fs; } ;
struct TYPE_7__ {int sizelocvars; TYPE_5__* locvars; } ;
typedef int TString ;
typedef TYPE_1__ Proto ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (int ,TYPE_5__*,size_t,int,int ,int ,char*) ;

__attribute__((used)) static int FUNC_2 (LexState *VAR_2, TString *VAR_3) {
  FuncState *VAR_4 = VAR_2->fs;
  Proto *VAR_5 = VAR_4->f;
  int VAR_6 = VAR_5->sizelocvars;
  FUNC_1(VAR_2->L, VAR_5->locvars, VAR_4->nlocvars, VAR_5->sizelocvars,
                  VAR_0, VAR_1, "local variables");
  while (VAR_6 < VAR_5->sizelocvars) VAR_5->locvars[VAR_6++].varname = ((void*)0);
  VAR_5->locvars[VAR_4->nlocvars].varname = VAR_3;
  FUNC_0(VAR_2->L, VAR_5, VAR_3);
  return VAR_4->nlocvars++;
}
