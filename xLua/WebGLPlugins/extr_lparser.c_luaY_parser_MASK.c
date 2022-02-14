
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_21__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_31__ {int top; } ;
typedef TYPE_4__ lua_State ;
typedef int ZIO ;
struct TYPE_30__ {scalar_t__ n; } ;
struct TYPE_29__ {scalar_t__ n; } ;
struct TYPE_27__ {scalar_t__ n; } ;
struct TYPE_35__ {TYPE_3__ label; TYPE_2__ gt; TYPE_1__ actvar; } ;
struct TYPE_34__ {int nups; int prev; TYPE_21__* f; } ;
struct TYPE_33__ {TYPE_21__* p; } ;
struct TYPE_32__ {int fs; TYPE_8__* dyd; int * buff; int h; } ;
struct TYPE_28__ {int source; } ;
typedef int Mbuffer ;
typedef TYPE_5__ LexState ;
typedef TYPE_6__ LClosure ;
typedef TYPE_7__ FuncState ;
typedef TYPE_8__ Dyndata ;


 int FUNC_0 (TYPE_21__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_6__* FUNC_2 (TYPE_4__*,int) ;
 TYPE_21__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char const*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,int *,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_9 (TYPE_4__*,int ,TYPE_6__*) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;

LClosure *FUNC_11 (lua_State *VAR_0, ZIO *VAR_1, Mbuffer *VAR_2,
                       Dyndata *VAR_3, const char *VAR_4, int VAR_5) {
  LexState VAR_6;
  FuncState VAR_7;
  LClosure *VAR_8 = FUNC_2(VAR_0, 1);
  FUNC_9(VAR_0, VAR_0->top, VAR_8);
  FUNC_1(VAR_0);
  VAR_6.h = FUNC_4(VAR_0);
  FUNC_10(VAR_0, VAR_0->top, VAR_6.h);
  FUNC_1(VAR_0);
  VAR_7.f = VAR_8->p = FUNC_3(VAR_0);
  VAR_7.f->source = FUNC_5(VAR_0, VAR_4);
  FUNC_7(FUNC_0(VAR_7.f));
  VAR_6.buff = VAR_2;
  VAR_6.dyd = VAR_3;
  VAR_3->actvar.n = VAR_3->gt.n = VAR_3->label.n = 0;
  FUNC_6(VAR_0, &VAR_6, VAR_1, VAR_7.f->source, VAR_5);
  FUNC_8(&VAR_6, &VAR_7);
  FUNC_7(!VAR_7.prev && VAR_7.nups == 1 && !VAR_6.fs);

  FUNC_7(VAR_3->actvar.n == 0 && VAR_3->gt.n == 0 && VAR_3->label.n == 0);
  VAR_0->top--;
  return VAR_8;
}
