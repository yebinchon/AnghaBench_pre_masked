
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bcbase; } ;
struct TYPE_5__ {int ins; } ;
typedef TYPE_2__ FuncState ;
typedef int BCPos ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(FuncState *VAR_4, BCPos VAR_5)
{
  for (; VAR_5 != VAR_2; VAR_5 = FUNC_2(VAR_4, VAR_5)) {
    BCIns VAR_6 = VAR_4->bcbase[VAR_5 >= 1 ? VAR_5-1 : VAR_5].ins;
    if (!(FUNC_1(VAR_6) == VAR_1 || FUNC_1(VAR_6) == VAR_0 || FUNC_0(VAR_6) == VAR_3))
      return 1;
  }
  return 0;
}
