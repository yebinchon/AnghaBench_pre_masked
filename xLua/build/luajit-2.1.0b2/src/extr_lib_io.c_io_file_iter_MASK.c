
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_15__ {int nupvalues; int * upvalue; } ;
struct TYPE_18__ {TYPE_1__ c; } ;
struct TYPE_17__ {int type; int * fp; } ;
typedef int TValue ;
typedef int MSize ;
typedef TYPE_3__ IOFileUD ;
typedef TYPE_4__ GCfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (scalar_t__,int *,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_4)
{
  GCfunc *VAR_5 = FUNC_0(VAR_4);
  IOFileUD *VAR_6 = FUNC_11(FUNC_10(&VAR_5->c.upvalue[0]));
  int VAR_7 = VAR_5->c.nupvalues - 1;
  if (VAR_6->fp == ((void*)0))
    FUNC_4(VAR_4, VAR_1);
  VAR_4->top = VAR_4->base;
  if (VAR_7) {
    if (VAR_7 > VAR_3)
      FUNC_4(VAR_4, VAR_2);
    FUNC_6(VAR_4, (MSize)VAR_7);
    FUNC_7(VAR_4->top, &VAR_5->c.upvalue[1], VAR_7*sizeof(TValue));
    VAR_4->top += VAR_7;
  }
  VAR_7 = FUNC_3(VAR_4, VAR_6->fp, 0);
  if (FUNC_1(VAR_6->fp))
    FUNC_5(VAR_4, FUNC_8(VAR_4->top-2));
  if (FUNC_9(VAR_4->base) && (VAR_6->type & VAR_0)) {
    FUNC_2(VAR_4, VAR_6);
    return 0;
  }
  return VAR_7;
}
