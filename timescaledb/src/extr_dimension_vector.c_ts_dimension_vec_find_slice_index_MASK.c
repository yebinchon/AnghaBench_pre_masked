
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_7__ {int num_slices; TYPE_2__** slices; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_3__ DimensionVec ;



int
FUNC_0(DimensionVec *VAR_0, int32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_slices; VAR_2++)
  if (VAR_1 == VAR_0->slices[VAR_2]->fd.id)
   return VAR_2;

 return -1;
}
