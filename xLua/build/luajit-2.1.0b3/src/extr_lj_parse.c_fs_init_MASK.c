
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_11__ {int framesize; int kt; scalar_t__ flags; int * bl; scalar_t__ nuv; scalar_t__ nactvar; scalar_t__ nkn; scalar_t__ nkgc; scalar_t__ freereg; int jpc; scalar_t__ lasttarget; scalar_t__ pc; TYPE_1__* L; int vbase; TYPE_2__* ls; struct TYPE_11__* prev; } ;
struct TYPE_10__ {int vtop; TYPE_3__* fs; TYPE_1__* L; } ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(LexState *VAR_1, FuncState *VAR_2)
{
  lua_State *VAR_3 = VAR_1->L;
  VAR_2->prev = VAR_1->fs; VAR_1->fs = VAR_2;
  VAR_2->ls = VAR_1;
  VAR_2->vbase = VAR_1->vtop;
  VAR_2->L = VAR_3;
  VAR_2->pc = 0;
  VAR_2->lasttarget = 0;
  VAR_2->jpc = VAR_0;
  VAR_2->freereg = 0;
  VAR_2->nkgc = 0;
  VAR_2->nkn = 0;
  VAR_2->nactvar = 0;
  VAR_2->nuv = 0;
  VAR_2->bl = ((void*)0);
  VAR_2->flags = 0;
  VAR_2->framesize = 1;
  VAR_2->kt = FUNC_1(VAR_3, 0, 0);

  FUNC_2(VAR_3, VAR_3->top, VAR_2->kt);
  FUNC_0(VAR_3);
}
