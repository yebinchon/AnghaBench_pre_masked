
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_21__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;


typedef int ptrdiff_t ;
struct TYPE_28__ {scalar_t__ top; scalar_t__ base; scalar_t__ stack_last; int hookmask; int savedpc; TYPE_1__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_31__ {scalar_t__ func; scalar_t__ base; scalar_t__ top; int nresults; scalar_t__ tailcalls; } ;
struct TYPE_30__ {TYPE_4__* p; int isC; } ;
struct TYPE_29__ {scalar_t__ maxstacksize; scalar_t__ numparams; int code; int is_vararg; } ;
struct TYPE_27__ {int (* f ) (TYPE_3__*) ;} ;
struct TYPE_26__ {TYPE_5__ l; } ;
struct TYPE_25__ {int savedpc; } ;
struct TYPE_24__ {TYPE_2__ c; } ;
typedef scalar_t__ StkId ;
typedef TYPE_4__ Proto ;
typedef TYPE_5__ LClosure ;
typedef TYPE_6__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_21__* FUNC_2 (scalar_t__) ;
 TYPE_19__* FUNC_3 (TYPE_3__*) ;
 TYPE_6__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 void* FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;

int FUNC_17 (lua_State *VAR_6, StkId VAR_7, int VAR_8) {
  LClosure *VAR_9;
  ptrdiff_t VAR_10;
  if (!FUNC_16(VAR_7))
    VAR_7 = FUNC_15(VAR_6, VAR_7);
  VAR_10 = FUNC_12(VAR_6, VAR_7);
  VAR_9 = &FUNC_2(VAR_7)->l;
  VAR_6->ci->savedpc = VAR_6->savedpc;
  if (!VAR_9->isC) {
    CallInfo *VAR_11;
    StkId VAR_12, VAR_13;
    Proto *VAR_14 = VAR_9->p;
    FUNC_6(VAR_6, VAR_14->maxstacksize);
    VAR_7 = FUNC_11(VAR_6, VAR_10);
    if (!VAR_14->is_vararg) {
      VAR_13 = VAR_7 + 1;
      if (VAR_6->top > VAR_13 + VAR_14->numparams)
        VAR_6->top = VAR_13 + VAR_14->numparams;
    }
    else {
      int VAR_15 = FUNC_1(VAR_6->top - VAR_7) - 1;
      VAR_13 = FUNC_0(VAR_6, VAR_14, VAR_15);
      VAR_7 = FUNC_11(VAR_6, VAR_10);
    }
    VAR_11 = FUNC_4(VAR_6);
    VAR_11->func = VAR_7;
    VAR_6->base = VAR_11->base = VAR_13;
    VAR_11->top = VAR_6->base + VAR_14->maxstacksize;
    FUNC_8(VAR_11->top <= VAR_6->stack_last);
    VAR_6->savedpc = VAR_14->code;
    VAR_11->tailcalls = 0;
    VAR_11->nresults = VAR_8;
    for (VAR_12 = VAR_6->top; VAR_12 < VAR_11->top; VAR_12++)
      FUNC_13(VAR_12);
    VAR_6->top = VAR_11->top;
    if (VAR_6->hookmask & VAR_1) {
      VAR_6->savedpc++;
      FUNC_5(VAR_6, VAR_0, -1);
      VAR_6->savedpc--;
    }
    return VAR_4;
  }
  else {
    CallInfo *VAR_16;
    int VAR_17;
    FUNC_6(VAR_6, VAR_2);
    VAR_16 = FUNC_4(VAR_6);
    VAR_16->func = FUNC_11(VAR_6, VAR_10);
    VAR_6->base = VAR_16->base = VAR_16->func + 1;
    VAR_16->top = VAR_6->top + VAR_2;
    FUNC_8(VAR_16->top <= VAR_6->stack_last);
    VAR_16->nresults = VAR_8;
    if (VAR_6->hookmask & VAR_1)
      FUNC_5(VAR_6, VAR_0, -1);
    FUNC_10(VAR_6);
    VAR_17 = (*FUNC_3(VAR_6)->c.f)(VAR_6);
    FUNC_9(VAR_6);
    if (VAR_17 < 0)
      return VAR_5;
    else {
      FUNC_7(VAR_6, VAR_6->top - VAR_17);
      return VAR_3;
    }
  }
}
