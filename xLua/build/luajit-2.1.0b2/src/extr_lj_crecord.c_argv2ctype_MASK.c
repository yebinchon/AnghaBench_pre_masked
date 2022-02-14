
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int L; } ;
typedef TYPE_2__ jit_State ;
typedef int cTValue ;
struct TYPE_19__ {scalar_t__ top; } ;
struct TYPE_15__ {scalar_t__ id; } ;
struct TYPE_18__ {int mode; TYPE_1__ val; TYPE_8__* cts; int * param; void* p; void* srcname; int L; } ;
struct TYPE_17__ {scalar_t__ ctypeid; } ;
typedef int TRef ;
typedef int GCstr ;
typedef TYPE_3__ GCcdata ;
typedef scalar_t__ CTypeID ;
typedef TYPE_4__ CPState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*,int ) ;
 TYPE_8__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int * FUNC_9 (int *) ;
 void* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static CTypeID FUNC_12(jit_State *VAR_6, TRef VAR_7, cTValue *VAR_8)
{
  if (FUNC_11(VAR_7)) {
    GCstr *VAR_9 = FUNC_9(VAR_8);
    CPState VAR_10;
    CTypeID VAR_11;

    FUNC_5(FUNC_0(VAR_4, VAR_3), VAR_7, FUNC_7(VAR_6, VAR_9));
    VAR_10.L = VAR_6->L;
    VAR_10.cts = FUNC_4(FUNC_1(VAR_6));
    VAR_11 = VAR_10.cts->top;
    VAR_10.srcname = FUNC_10(VAR_9);
    VAR_10.p = FUNC_10(VAR_9);
    VAR_10.param = ((void*)0);
    VAR_10.mode = VAR_0|VAR_1;
    if (FUNC_6(&VAR_10) || VAR_10.cts->top > VAR_11)
      FUNC_8(VAR_6, VAR_5);
    return VAR_10.val.id;
  } else {
    GCcdata *VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_8);
    return VAR_12->ctypeid == VAR_2 ? FUNC_3(VAR_6, VAR_12, VAR_7) :
     VAR_12->ctypeid;
  }
}
