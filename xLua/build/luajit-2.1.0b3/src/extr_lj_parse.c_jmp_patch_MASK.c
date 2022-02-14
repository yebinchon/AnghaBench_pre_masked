
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pc; } ;
typedef TYPE_1__ FuncState ;
typedef scalar_t__ BCPos ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(FuncState *VAR_1, BCPos VAR_2, BCPos VAR_3)
{
  if (VAR_3 == VAR_1->pc) {
    FUNC_1(VAR_1, VAR_2);
  } else {
    FUNC_2(VAR_3 < VAR_1->pc);
    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, VAR_3);
  }
}
