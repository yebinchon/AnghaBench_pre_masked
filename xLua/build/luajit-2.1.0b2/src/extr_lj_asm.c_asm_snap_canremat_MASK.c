
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cost; } ;
typedef size_t Reg ;
typedef TYPE_1__ ASMState ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(ASMState *VAR_2)
{
  Reg VAR_3;
  for (VAR_3 = VAR_1; VAR_3 < VAR_0; VAR_3++)
    if (FUNC_0(FUNC_1(VAR_2->cost[VAR_3])))
      return 1;
  return 0;
}
