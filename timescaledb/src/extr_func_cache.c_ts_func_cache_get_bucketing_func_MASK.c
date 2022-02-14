
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_bucketing_func; } ;
typedef int Oid ;
typedef TYPE_1__ FuncInfo ;


 TYPE_1__* FUNC_0 (int ) ;

FuncInfo *
FUNC_1(Oid VAR_0)
{
 FuncInfo *VAR_1 = FUNC_0(VAR_0);

 if (((void*)0) == VAR_1)
  return ((void*)0);

 return VAR_1->is_bucketing_func ? VAR_1 : ((void*)0);
}
