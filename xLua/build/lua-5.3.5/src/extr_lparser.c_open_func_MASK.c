
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* f; int * bl; int firstlocal; scalar_t__ nactvar; scalar_t__ nlocvars; scalar_t__ nups; scalar_t__ np; scalar_t__ nk; scalar_t__ freereg; int jpc; scalar_t__ lasttarget; scalar_t__ pc; TYPE_4__* ls; struct TYPE_13__* prev; } ;
struct TYPE_12__ {int source; TYPE_2__* dyd; TYPE_5__* fs; } ;
struct TYPE_11__ {int maxstacksize; int source; } ;
struct TYPE_9__ {int n; } ;
struct TYPE_10__ {TYPE_1__ actvar; } ;
typedef TYPE_3__ Proto ;
typedef TYPE_4__ LexState ;
typedef TYPE_5__ FuncState ;
typedef int BlockCnt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int ) ;

__attribute__((used)) static void FUNC_1 (LexState *VAR_1, FuncState *VAR_2, BlockCnt *VAR_3) {
  Proto *VAR_4;
  VAR_2->prev = VAR_1->fs;
  VAR_2->ls = VAR_1;
  VAR_1->fs = VAR_2;
  VAR_2->pc = 0;
  VAR_2->lasttarget = 0;
  VAR_2->jpc = VAR_0;
  VAR_2->freereg = 0;
  VAR_2->nk = 0;
  VAR_2->np = 0;
  VAR_2->nups = 0;
  VAR_2->nlocvars = 0;
  VAR_2->nactvar = 0;
  VAR_2->firstlocal = VAR_1->dyd->actvar.n;
  VAR_2->bl = ((void*)0);
  VAR_4 = VAR_2->f;
  VAR_4->source = VAR_1->source;
  VAR_4->maxstacksize = 2;
  FUNC_0(VAR_2, VAR_3, 0);
}
