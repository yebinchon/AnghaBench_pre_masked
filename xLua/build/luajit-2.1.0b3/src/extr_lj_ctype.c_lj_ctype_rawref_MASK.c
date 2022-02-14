
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int info; } ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

CType *FUNC_4(CTState *VAR_0, CTypeID VAR_1)
{
  CType *VAR_2 = FUNC_1(VAR_0, VAR_1);
  while (FUNC_2(VAR_2->info) || FUNC_3(VAR_2->info))
    VAR_2 = FUNC_0(VAR_0, VAR_2);
  return VAR_2;
}
