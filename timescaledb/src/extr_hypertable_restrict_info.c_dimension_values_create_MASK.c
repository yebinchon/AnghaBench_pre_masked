
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int use_or; int type; int * values; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ DimensionValues ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static DimensionValues *
FUNC_1(List *VAR_0, Oid VAR_1, bool VAR_2)
{
 DimensionValues *VAR_3;

 VAR_3 = FUNC_0(sizeof(DimensionValues));
 VAR_3->values = VAR_0;
 VAR_3->use_or = VAR_2;
 VAR_3->type = VAR_1;

 return VAR_3;
}
