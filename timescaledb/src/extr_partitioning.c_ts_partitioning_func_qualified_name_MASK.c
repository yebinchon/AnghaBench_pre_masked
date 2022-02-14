
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int schema; } ;
typedef TYPE_1__ PartitioningFunc ;
typedef int List ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

List *
FUNC_2(PartitioningFunc *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0->schema), FUNC_1(VAR_0->name));
}
