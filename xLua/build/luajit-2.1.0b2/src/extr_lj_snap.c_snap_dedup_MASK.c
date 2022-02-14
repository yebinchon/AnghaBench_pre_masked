
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* slot; } ;
typedef TYPE_1__ jit_State ;
typedef int TRef ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef scalar_t__ IRRef ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static TRef FUNC_2(jit_State *VAR_2, SnapEntry *VAR_3, MSize VAR_4, IRRef VAR_5)
{
  MSize VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    if (FUNC_0(VAR_3[VAR_6]) == VAR_5)
      return VAR_2->slot[FUNC_1(VAR_3[VAR_6])] & ~(VAR_0|VAR_1);
  return 0;
}
