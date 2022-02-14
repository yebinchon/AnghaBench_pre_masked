
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_3__ {size_t num_slices; int ** slices; } ;
typedef TYPE_1__ DimensionVec ;
typedef int DimensionSlice ;



DimensionSlice *
FUNC_0(DimensionVec *VAR_0, int32 VAR_1)
{
 if (VAR_1 >= VAR_0->num_slices)
  return ((void*)0);

 return VAR_0->slices[VAR_1];
}
