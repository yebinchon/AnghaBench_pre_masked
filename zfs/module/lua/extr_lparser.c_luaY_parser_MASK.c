
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_30__ {int top; } ;
typedef TYPE_5__ lua_State ;
typedef int ZIO ;
struct TYPE_25__ {TYPE_20__* p; } ;
struct TYPE_34__ {TYPE_1__ l; } ;
struct TYPE_29__ {scalar_t__ n; } ;
struct TYPE_28__ {scalar_t__ n; } ;
struct TYPE_27__ {scalar_t__ n; } ;
struct TYPE_33__ {TYPE_4__ label; TYPE_3__ gt; TYPE_2__ actvar; } ;
struct TYPE_32__ {int nups; int prev; TYPE_20__* f; } ;
struct TYPE_31__ {int fs; TYPE_8__* dyd; int * buff; } ;
struct TYPE_26__ {int source; } ;
typedef int Mbuffer ;
typedef TYPE_6__ LexState ;
typedef TYPE_7__ FuncState ;
typedef TYPE_8__ Dyndata ;
typedef TYPE_9__ Closure ;


 int FUNC_0 (TYPE_5__*) ;
 TYPE_9__* FUNC_1 (TYPE_5__*,int) ;
 TYPE_20__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,char const*) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*,int *,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_5__*,int ,TYPE_9__*) ;

Closure *FUNC_8 (lua_State *VAR_0, ZIO *VAR_1, Mbuffer *VAR_2,
                      Dyndata *VAR_3, const char *VAR_4, int VAR_5) {
  LexState VAR_6;
  FuncState VAR_7;
  Closure *VAR_8 = FUNC_1(VAR_0, 1);

  FUNC_7(VAR_0, VAR_0->top, VAR_8);
  FUNC_0(VAR_0);
  VAR_7.f = VAR_8->l.p = FUNC_2(VAR_0);
  VAR_7.f->source = FUNC_3(VAR_0, VAR_4);
  VAR_6.buff = VAR_2;
  VAR_6.dyd = VAR_3;
  VAR_3->actvar.n = VAR_3->gt.n = VAR_3->label.n = 0;
  FUNC_4(VAR_0, &VAR_6, VAR_1, VAR_7.f->source, VAR_5);
  FUNC_6(&VAR_6, &VAR_7);
  FUNC_5(!VAR_7.prev && VAR_7.nups == 1 && !VAR_6.fs);

  FUNC_5(VAR_3->actvar.n == 0 && VAR_3->gt.n == 0 && VAR_3->label.n == 0);
  return VAR_8;
}
