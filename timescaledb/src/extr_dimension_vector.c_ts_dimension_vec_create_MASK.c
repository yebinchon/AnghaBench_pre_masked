
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {scalar_t__ num_slices; int capacity; } ;
typedef TYPE_1__ DimensionVec ;


 TYPE_1__* FUNC_0 (int *,int ) ;

DimensionVec *
FUNC_1(int32 VAR_0)
{
 DimensionVec *VAR_1 = FUNC_0(((void*)0), VAR_0);

 VAR_1->capacity = VAR_0;
 VAR_1->num_slices = 0;

 return VAR_1;
}
