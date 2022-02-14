
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* L; int * pc; } ;
typedef TYPE_3__ jit_State ;
typedef int cTValue ;
struct TYPE_10__ {scalar_t__ ffid; } ;
struct TYPE_12__ {TYPE_2__ c; } ;
struct TYPE_9__ {int * base; } ;
typedef int TRef ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 TYPE_6__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,size_t) ;
 int FUNC_8 (TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(jit_State *VAR_4)
{
  BCIns VAR_5 = VAR_4->pc[1];
  if (FUNC_4(VAR_5) == VAR_0 && FUNC_2(VAR_5) == 2 && FUNC_3(VAR_5) == 1) {
    cTValue *VAR_6 = &VAR_4->L->base[FUNC_1(VAR_5)];
    if (FUNC_9(VAR_6) && FUNC_6(VAR_6)->c.ffid == VAR_1) {
      TRef VAR_7 = FUNC_8(VAR_4, FUNC_6(VAR_6));
      FUNC_5(FUNC_0(VAR_3, VAR_2), FUNC_7(VAR_4, FUNC_1(VAR_5)), VAR_7);
      return 1;
    }
  }
  return 0;
}
