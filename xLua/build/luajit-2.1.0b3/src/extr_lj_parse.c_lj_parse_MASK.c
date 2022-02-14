
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_23__ {int * prev; int flags; scalar_t__ bclim; int * bcbase; scalar_t__ numparams; scalar_t__ linedefined; } ;
struct TYPE_22__ {scalar_t__ sizeuv; } ;
struct TYPE_21__ {scalar_t__ tok; int * fs; int linenumber; scalar_t__ level; int chunkname; int chunkarg; TYPE_1__* L; } ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ GCproto ;
typedef TYPE_4__ FuncState ;
typedef int FuncScope ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;

GCproto *FUNC_12(LexState *VAR_3)
{
  FuncState VAR_4;
  FuncScope VAR_5;
  GCproto *VAR_6;
  lua_State *VAR_7 = VAR_3->L;



  VAR_3->chunkname = FUNC_8(VAR_7, VAR_3->chunkarg);

  FUNC_11(VAR_7, VAR_7->top, VAR_3->chunkname);
  FUNC_5(VAR_7);
  VAR_3->level = 0;
  FUNC_3(VAR_3, &VAR_4);
  VAR_4.linedefined = 0;
  VAR_4.numparams = 0;
  VAR_4.bcbase = ((void*)0);
  VAR_4.bclim = 0;
  VAR_4.flags |= VAR_1;
  FUNC_4(&VAR_4, &VAR_5, 0);
  FUNC_0(&VAR_4, VAR_0, 0, 0);
  FUNC_6(VAR_3);
  FUNC_10(VAR_3);
  if (VAR_3->tok != VAR_2)
    FUNC_1(VAR_3, VAR_2);
  VAR_6 = FUNC_2(VAR_3, VAR_3->linenumber);
  VAR_7->top--;
  FUNC_9(VAR_4.prev == ((void*)0));
  FUNC_9(VAR_3->fs == ((void*)0));
  FUNC_9(VAR_6->sizeuv == 0);
  return VAR_6;
}
