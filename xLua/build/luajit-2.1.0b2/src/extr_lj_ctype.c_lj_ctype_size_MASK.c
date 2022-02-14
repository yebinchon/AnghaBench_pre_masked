
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int info; } ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTSize ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

CTSize FUNC_2(CTState *VAR_1, CTypeID VAR_2)
{
  CType *VAR_3 = FUNC_1(VAR_1, VAR_2);
  return FUNC_0(VAR_3->info) ? VAR_3->size : VAR_0;
}
