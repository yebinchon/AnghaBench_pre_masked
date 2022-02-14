
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * top; int * base; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_12__ {scalar_t__ id; } ;
struct TYPE_15__ {int mode; TYPE_1__ val; int * param; void* p; void* srcname; int * cts; TYPE_2__* L; } ;
struct TYPE_14__ {scalar_t__ ctypeid; } ;
typedef int TValue ;
typedef int GCstr ;
typedef TYPE_3__ GCcdata ;
typedef scalar_t__ CTypeID ;
typedef int CTState ;
typedef TYPE_4__ CPState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int,char*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int * FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static CTypeID FUNC_10(lua_State *VAR_4, CTState *VAR_5, TValue *VAR_6)
{
  TValue *VAR_7 = VAR_4->base;
  if (!(VAR_7 < VAR_4->top)) {
  err_argtype:
    FUNC_4(VAR_4, 1, "C type");
  }
  if (FUNC_9(VAR_7)) {
    GCstr *VAR_8 = FUNC_6(VAR_7);
    CPState VAR_9;
    int VAR_10;
    VAR_9.L = VAR_4;
    VAR_9.cts = VAR_5;
    VAR_9.srcname = FUNC_7(VAR_8);
    VAR_9.p = FUNC_7(VAR_8);
    VAR_9.param = VAR_6;
    VAR_9.mode = VAR_0|VAR_1;
    VAR_10 = FUNC_2(&VAR_9);
    if (VAR_10) FUNC_5(VAR_4, VAR_10);
    return VAR_9.val.id;
  } else {
    GCcdata *VAR_11;
    if (!FUNC_8(VAR_7)) goto err_argtype;
    if (VAR_6 && VAR_6 < VAR_4->top) FUNC_3(VAR_4, 1, VAR_3);
    VAR_11 = FUNC_0(VAR_7);
    return VAR_11->ctypeid == VAR_2 ? *(CTypeID *)FUNC_1(VAR_11) : VAR_11->ctypeid;
  }
}
