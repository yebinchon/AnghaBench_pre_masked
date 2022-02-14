
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ctypeid; } ;
struct TYPE_5__ {int info; } ;
typedef int TValue ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 TYPE_4__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(CTState *VAR_0, CType *VAR_1, TValue *VAR_2)
{
  if (!(FUNC_1(VAR_1->info) || FUNC_2(VAR_1->info)))
    return 0;
  if (FUNC_6(VAR_2) || (FUNC_5(VAR_2) && !FUNC_2(VAR_1->info)))
    return 0;
  if (FUNC_4(VAR_2) && FUNC_3(VAR_0, FUNC_0(VAR_2)->ctypeid) == VAR_1)
    return 0;
  return 1;
}
