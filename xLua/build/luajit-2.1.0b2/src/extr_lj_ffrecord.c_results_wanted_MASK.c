
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_5__ {TYPE_1__* L; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_4__ {int * base; } ;
typedef int TValue ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static ptrdiff_t FUNC_3(jit_State *VAR_0)
{
  TValue *VAR_1 = VAR_0->L->base-1;
  if (FUNC_1(VAR_1))
    return (ptrdiff_t)FUNC_0(FUNC_2(VAR_1)[-1]) - 1;
  else
    return -1;
}
