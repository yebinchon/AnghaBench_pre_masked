
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ls; TYPE_1__* bcbase; } ;
struct TYPE_4__ {int ins; } ;
typedef TYPE_2__ FuncState ;
typedef size_t BCPos ;
typedef int BCIns ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static void FUNC_3(FuncState *VAR_4, BCPos VAR_5, BCPos VAR_6)
{
  BCIns *VAR_7 = &VAR_4->bcbase[VAR_5].ins;
  BCPos VAR_8 = VAR_6-(VAR_5+1)+VAR_0;
  FUNC_1(VAR_6 != VAR_3);
  if (VAR_8 > VAR_1)
    FUNC_0(VAR_4->ls, VAR_2);
  FUNC_2(VAR_7, VAR_8);
}
