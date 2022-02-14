
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int nactvar; int ls; } ;
typedef int GCstr ;
typedef TYPE_1__ FuncState ;
typedef int BCReg ;


 int * FUNC_0 (int ) ;
 TYPE_3__ FUNC_1 (int ,TYPE_1__*,int) ;

__attribute__((used)) static BCReg FUNC_2(FuncState *VAR_0, GCstr *VAR_1)
{
  int VAR_2;
  for (VAR_2 = VAR_0->nactvar-1; VAR_2 >= 0; VAR_2--) {
    if (VAR_1 == FUNC_0(FUNC_1(VAR_0->ls, VAR_0, VAR_2).name))
      return (BCReg)VAR_2;
  }
  return (BCReg)-1;
}
