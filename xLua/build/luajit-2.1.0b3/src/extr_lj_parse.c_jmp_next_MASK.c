
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_5__ {TYPE_1__* bcbase; } ;
struct TYPE_4__ {int ins; } ;
typedef TYPE_2__ FuncState ;
typedef size_t BCPos ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static BCPos FUNC_1(FuncState *VAR_1, BCPos VAR_2)
{
  ptrdiff_t VAR_3 = FUNC_0(VAR_1->bcbase[VAR_2].ins);
  if ((BCPos)VAR_3 == VAR_0)
    return VAR_0;
  else
    return (BCPos)(((ptrdiff_t)VAR_2+1)+VAR_3);
}
