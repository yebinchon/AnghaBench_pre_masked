
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; scalar_t__ exitno; scalar_t__ parent; int * pc; int * pt; } ;
typedef TYPE_1__ jit_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(jit_State *VAR_2)
{

  FUNC_2(VAR_2->pt != ((void*)0));
  FUNC_2(FUNC_0(FUNC_1(*VAR_2->pc)));
  if (FUNC_1(*VAR_2->pc) == VAR_0)
    return 0;
  VAR_2->parent = 0;
  VAR_2->exitno = 0;
  VAR_2->state = VAR_1;
  FUNC_3(VAR_2);
  return 1;
}
