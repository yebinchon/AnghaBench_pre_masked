
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nactvar; scalar_t__ freereg; } ;
typedef TYPE_1__ FuncState ;
typedef scalar_t__ BCReg ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(FuncState *VAR_0, BCReg VAR_1)
{
  if (VAR_1 >= VAR_0->nactvar) {
    VAR_0->freereg--;
    FUNC_0(VAR_1 == VAR_0->freereg);
  }
}
