
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_17__ {int lasttarget; int jpc; int h; int * bl; scalar_t__ nactvar; scalar_t__ nlocvars; scalar_t__ np; scalar_t__ nk; scalar_t__ freereg; scalar_t__ pc; TYPE_1__* L; TYPE_3__* ls; struct TYPE_17__* prev; TYPE_2__* f; } ;
struct TYPE_16__ {int source; TYPE_4__* fs; TYPE_1__* L; } ;
struct TYPE_15__ {int maxstacksize; int source; } ;
typedef TYPE_2__ Proto ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(LexState*VAR_0,FuncState*VAR_1){
lua_State*VAR_2=VAR_0->L;
Proto*VAR_3=FUNC_1(VAR_2);
VAR_1->f=VAR_3;
VAR_1->prev=VAR_0->fs;
VAR_1->ls=VAR_0;
VAR_1->L=VAR_2;
VAR_0->fs=VAR_1;
VAR_1->pc=0;
VAR_1->lasttarget=-1;
VAR_1->jpc=(-1);
VAR_1->freereg=0;
VAR_1->nk=0;
VAR_1->np=0;
VAR_1->nlocvars=0;
VAR_1->nactvar=0;
VAR_1->bl=((void*)0);
VAR_3->source=VAR_0->source;
VAR_3->maxstacksize=2;
VAR_1->h=FUNC_2(VAR_2,0,0);
FUNC_3(VAR_2,VAR_2->top,VAR_1->h);
FUNC_0(VAR_2);
FUNC_4(VAR_2,VAR_2->top,VAR_3);
FUNC_0(VAR_2);
}
