
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_33__ {size_t nins; TYPE_1__* ir; } ;
struct TYPE_35__ {int flags; scalar_t__ parent; int loopref; TYPE_2__ cur; } ;
typedef TYPE_4__ jit_State ;
struct TYPE_38__ {int flags; scalar_t__ curins; scalar_t__ gcsteps; scalar_t__ stopins; scalar_t__ freeset; int * mcp; int * mctop; int loopref; int * mcloop; TYPE_4__* J; int * parent; TYPE_6__* T; int fuseref; int sectref; scalar_t__ topslot; int * flagmcp; int * mcp_prev; int * realign; scalar_t__ mcbot; scalar_t__ mclim; scalar_t__ loopinv; int ir; } ;
struct TYPE_37__ {scalar_t__ nins; int * mcode; void* szmcode; int link; void* mcloop; TYPE_3__* snap; int ir; } ;
struct TYPE_36__ {int t; } ;
struct TYPE_34__ {scalar_t__ ref; } ;
struct TYPE_32__ {int o; } ;
typedef void* MSize ;
typedef int MCode ;
typedef TYPE_5__ IRIns ;
typedef TYPE_6__ GCtrace ;
typedef TYPE_7__ ASMState ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*,int ) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_5__*) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 size_t FUNC_20 (TYPE_4__*) ;
 int * FUNC_21 (TYPE_4__*,scalar_t__*) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (TYPE_4__*,int ) ;
 int FUNC_24 (int) ;
 int FUNC_25 (TYPE_7__*) ;
 int FUNC_26 (TYPE_5__*) ;
 int * FUNC_27 (TYPE_4__*,scalar_t__) ;

void FUNC_28(jit_State *VAR_8, GCtrace *VAR_9)
{
  ASMState VAR_10;
  ASMState *VAR_11 = &VAR_10;
  MCode *VAR_12;


  VAR_8->cur.nins = FUNC_20(VAR_8);
  VAR_8->cur.ir[VAR_8->cur.nins].o = VAR_1;


  VAR_11->J = VAR_8;
  VAR_11->T = VAR_9;
  VAR_11->ir = VAR_9->ir;
  VAR_11->flags = VAR_8->flags;
  VAR_11->loopref = VAR_8->loopref;
  VAR_11->realign = ((void*)0);
  VAR_11->loopinv = 0;
  VAR_11->parent = VAR_8->parent ? FUNC_27(VAR_8, VAR_8->parent) : ((void*)0);


  VAR_11->mctop = VAR_12 = FUNC_21(VAR_8, &VAR_11->mcbot);
  VAR_11->mcp = VAR_11->mctop;
  VAR_11->mclim = VAR_11->mcbot + VAR_6;
  FUNC_11(VAR_11);

  do {
    VAR_11->mcp = VAR_11->mctop;



    VAR_11->curins = VAR_9->nins;
    FUNC_4();
    FUNC_1((VAR_11, "===== STOP ====="));


    FUNC_15(VAR_11);
    VAR_11->mcloop = ((void*)0);
    VAR_11->flagmcp = ((void*)0);
    VAR_11->topslot = 0;
    VAR_11->gcsteps = 0;
    VAR_11->sectref = VAR_11->loopref;
    VAR_11->fuseref = (VAR_11->flags & VAR_3) ? VAR_11->loopref : VAR_0;
    FUNC_10(VAR_11);
    if (!VAR_11->loopref)
      FUNC_14(VAR_11);


    for (VAR_11->curins--; VAR_11->curins > VAR_11->stopins; VAR_11->curins--) {
      IRIns *VAR_13 = FUNC_0(VAR_11->curins);
      FUNC_24(!(VAR_4 && FUNC_19(VAR_13->t)));
      if (!FUNC_26(VAR_13) && !FUNC_17(VAR_13) && (VAR_11->flags & VAR_2))
 continue;
      if (FUNC_18(VAR_13->t))
 FUNC_12(VAR_11);
      FUNC_3();
      FUNC_16(VAR_11);
      FUNC_8(VAR_11, VAR_13);
    }
  } while (VAR_11->realign);


  FUNC_3();
  FUNC_16(VAR_11);
  if (VAR_11->gcsteps > 0) {
    VAR_11->curins = VAR_11->T->snap[0].ref;
    FUNC_12(VAR_11);
    FUNC_5(VAR_11);
  }
  FUNC_25(VAR_11);
  if (VAR_11->parent)
    FUNC_7(VAR_11);
  else
    FUNC_6(VAR_11);
  FUNC_9(VAR_11);

  FUNC_1((VAR_11, "===== START ===="));
  FUNC_2();
  if (VAR_11->freeset != VAR_7)
    FUNC_23(VAR_11->J, VAR_5);


  VAR_9->mcode = VAR_11->mcp;
  VAR_9->mcloop = VAR_11->mcloop ? (MSize)((char *)VAR_11->mcloop - (char *)VAR_11->mcp) : 0;
  if (!VAR_11->loopref)
    FUNC_13(VAR_11, VAR_9->link);
  VAR_9->szmcode = (MSize)((char *)VAR_11->mctop - (char *)VAR_11->mcp);
  FUNC_22(VAR_9->mcode, VAR_12);
}
