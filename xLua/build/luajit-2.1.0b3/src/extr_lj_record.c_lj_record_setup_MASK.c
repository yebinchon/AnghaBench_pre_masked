
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_29__ {scalar_t__ root; int startins; int startpc; int nk; } ;
struct TYPE_24__ {int pc; scalar_t__ idx; } ;
struct TYPE_30__ {scalar_t__ instunroll; scalar_t__* param; scalar_t__ loopunroll; scalar_t__ parent; size_t exitno; int prev_line; int * prev_pt; TYPE_12__* pt; int * startpc; TYPE_3__ cur; TYPE_11__ scev; int * pc; int bc_extent; int * bc_min; scalar_t__ loopref; scalar_t__ tailcalled; scalar_t__ retdepth; scalar_t__ framedepth; scalar_t__ maxslot; scalar_t__ baseslot; scalar_t__ slot; scalar_t__ base; scalar_t__ bpropcache; scalar_t__ rbchash; scalar_t__ chain; } ;
typedef TYPE_4__ jit_State ;
typedef scalar_t__ TraceNo ;
struct TYPE_32__ {scalar_t__ root; scalar_t__ nchild; TYPE_2__* snap; } ;
struct TYPE_26__ {scalar_t__ irt; } ;
struct TYPE_31__ {scalar_t__ prev; int o; TYPE_1__ t; scalar_t__ i; } ;
struct TYPE_28__ {scalar_t__ nent; scalar_t__ count; } ;
struct TYPE_27__ {int hookmask; } ;
struct TYPE_25__ {scalar_t__ framesize; } ;
typedef int TRef ;
typedef int MSize ;
typedef TYPE_5__ IRIns ;
typedef TYPE_6__ GCtrace ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_21__* FUNC_5 (TYPE_4__*) ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,scalar_t__,size_t) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,int *) ;
 int FUNC_13 (TYPE_4__*,int ,int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (scalar_t__,int ,int) ;
 int * FUNC_18 (TYPE_12__*) ;
 int FUNC_19 (TYPE_4__*,int *,TYPE_11__*,int) ;
 int * FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (int ,int *) ;
 TYPE_6__* FUNC_22 (TYPE_4__*,scalar_t__) ;

void FUNC_23(jit_State *VAR_26)
{
  uint32_t VAR_27;


  FUNC_17(VAR_26->slot, 0, sizeof(VAR_26->slot));
  FUNC_17(VAR_26->chain, 0, sizeof(VAR_26->chain));



  FUNC_17(VAR_26->bpropcache, 0, sizeof(VAR_26->bpropcache));
  VAR_26->scev.idx = VAR_24;
  FUNC_21(VAR_26->scev.pc, ((void*)0));

  VAR_26->baseslot = 1+VAR_18;
  VAR_26->base = VAR_26->slot + VAR_26->baseslot;
  VAR_26->maxslot = 0;
  VAR_26->framedepth = 0;
  VAR_26->retdepth = 0;

  VAR_26->instunroll = VAR_26->param[VAR_14];
  VAR_26->loopunroll = VAR_26->param[VAR_15];
  VAR_26->tailcalled = 0;
  VAR_26->loopref = 0;

  VAR_26->bc_min = ((void*)0);
  VAR_26->bc_extent = ~(MSize)0;


  FUNC_10(FUNC_2(VAR_9, VAR_5), VAR_26->parent, VAR_26->exitno);
  for (VAR_27 = 0; VAR_27 <= 2; VAR_27++) {
    IRIns *VAR_28 = FUNC_1(VAR_24-VAR_27);
    VAR_28->i = 0;
    VAR_28->t.irt = (uint8_t)(VAR_4+VAR_27);
    VAR_28->o = VAR_11;
    VAR_28->prev = 0;
  }
  VAR_26->cur.nk = VAR_25;

  VAR_26->startpc = VAR_26->pc;
  FUNC_21(VAR_26->cur.startpc, VAR_26->pc);
  if (VAR_26->parent) {
    GCtrace *VAR_29 = FUNC_22(VAR_26, VAR_26->parent);
    TraceNo VAR_30 = VAR_29->root ? VAR_29->root : VAR_26->parent;
    VAR_26->cur.root = (uint16_t)VAR_30;
    VAR_26->cur.startins = FUNC_0(VAR_3, 0, 0);

    if (VAR_26->exitno == 0 && VAR_29->snap[0].nent == 0) {

      if (VAR_26->pc > FUNC_18(VAR_26->pt) && FUNC_8(VAR_26->pc[-1]) == VAR_2 &&
   FUNC_6(VAR_26->pc[FUNC_7(VAR_26->pc[-1])-1]) == VAR_30) {
 FUNC_14(VAR_26);
 FUNC_19(VAR_26, VAR_26->pc-1, &VAR_26->scev, 1);
 goto sidecheck;
      }
    } else {
      VAR_26->startpc = ((void*)0);
    }
    FUNC_15(VAR_26, VAR_29);
  sidecheck:
    if (FUNC_22(VAR_26, VAR_26->cur.root)->nchild >= VAR_26->param[VAR_16] ||
 VAR_29->snap[VAR_26->exitno].count >= VAR_26->param[VAR_13] +
        VAR_26->param[VAR_17]) {
      FUNC_13(VAR_26, VAR_21, 0);
    }
  } else {
    VAR_26->cur.root = 0;
    VAR_26->cur.startins = *VAR_26->pc;
    VAR_26->pc = FUNC_20(VAR_26);



    FUNC_14(VAR_26);
    if (FUNC_8(VAR_26->cur.startins) == VAR_0)
      FUNC_19(VAR_26, VAR_26->pc-1, &VAR_26->scev, 1);
    else if (FUNC_8(VAR_26->cur.startins) == VAR_1)
      VAR_26->startpc = ((void*)0);
    if (1 + VAR_26->pt->framesize >= VAR_19)
      FUNC_16(VAR_26, VAR_20);
  }
}
