
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int * base; int * top; } ;
struct TYPE_13__ {scalar_t__ id; int i32; } ;
struct TYPE_15__ {TYPE_2__ val; TYPE_5__* L; TYPE_1__* cts; int * ct; int str; int * param; } ;
struct TYPE_14__ {scalar_t__ ctypeid; } ;
struct TYPE_12__ {int * tab; } ;
typedef int TValue ;
typedef TYPE_3__ GCcdata ;
typedef scalar_t__ CTypeID ;
typedef char CPToken ;
typedef TYPE_4__ CPState ;
typedef char CPChar ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,char,int ) ;
 char FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (TYPE_5__*,int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static CPToken FUNC_12(CPState *VAR_6)
{
  CPChar VAR_7 = FUNC_4(VAR_6);
  TValue *VAR_8 = VAR_6->param;
  if (FUNC_5(VAR_7) || VAR_7 == '$')
    FUNC_3(VAR_6, VAR_7, VAR_5);
  if (!VAR_8 || VAR_8 >= VAR_6->L->top)
    FUNC_2(VAR_6, VAR_4);
  VAR_6->param = VAR_8+1;
  if (FUNC_11(VAR_8)) {
    VAR_6->str = FUNC_8(VAR_8);
    VAR_6->val.id = 0;
    VAR_6->ct = &VAR_6->cts->tab[0];
    return VAR_2;
  } else if (FUNC_10(VAR_8)) {
    VAR_6->val.i32 = FUNC_7(VAR_8);
    VAR_6->val.id = VAR_1;
    return VAR_3;
  } else {
    GCcdata *VAR_9;
    if (!FUNC_9(VAR_8))
      FUNC_6(VAR_6->L, (int)(VAR_8-VAR_6->L->base)+1, "type parameter");
    VAR_9 = FUNC_0(VAR_8);
    if (VAR_9->ctypeid == VAR_0)
      VAR_6->val.id = *(CTypeID *)FUNC_1(VAR_9);
    else
      VAR_6->val.id = VAR_9->ctypeid;
    return '$';
  }
}
