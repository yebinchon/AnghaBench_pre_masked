
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* L; int * pc; } ;
typedef TYPE_3__ jit_State ;
typedef int cTValue ;
struct TYPE_7__ {scalar_t__ ffid; } ;
struct TYPE_9__ {TYPE_2__ c; } ;
struct TYPE_6__ {int * base; } ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(jit_State *VAR_2)
{
  BCIns VAR_3 = VAR_2->pc[1];
  if (FUNC_3(VAR_3) == VAR_0 && FUNC_1(VAR_3) == 2 && FUNC_2(VAR_3) == 1) {
    cTValue *VAR_4 = &VAR_2->L->base[FUNC_0(VAR_3)];
    if (FUNC_5(VAR_4) && FUNC_4(VAR_4)->c.ffid == VAR_1)
      return 1;
  }
  return 0;
}
