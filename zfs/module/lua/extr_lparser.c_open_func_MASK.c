
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int top; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_18__ {int h; TYPE_4__* f; int * bl; int firstlocal; scalar_t__ nactvar; scalar_t__ nlocvars; scalar_t__ nups; scalar_t__ np; scalar_t__ nk; scalar_t__ freereg; int jpc; scalar_t__ lasttarget; scalar_t__ pc; TYPE_5__* ls; struct TYPE_18__* prev; } ;
struct TYPE_17__ {int source; TYPE_2__* dyd; TYPE_6__* fs; TYPE_3__* L; } ;
struct TYPE_16__ {int maxstacksize; int source; } ;
struct TYPE_13__ {int n; } ;
struct TYPE_14__ {TYPE_1__ actvar; } ;
typedef TYPE_4__ Proto ;
typedef TYPE_5__ LexState ;
typedef TYPE_6__ FuncState ;
typedef int BlockCnt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_4 (LexState *VAR_1, FuncState *VAR_2, BlockCnt *VAR_3) {
  lua_State *VAR_4 = VAR_1->L;
  Proto *VAR_5;
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
  VAR_5 = VAR_2->f;
  VAR_5->source = VAR_1->source;
  VAR_5->maxstacksize = 2;
  VAR_2->h = FUNC_2(VAR_4);

  FUNC_3(VAR_4, VAR_4->top, VAR_2->h);
  FUNC_1(VAR_4);
  FUNC_0(VAR_2, VAR_3, 0);
}
