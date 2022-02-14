
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dimension_id; } ;
struct TYPE_11__ {TYPE_1__ fd; } ;
struct TYPE_10__ {scalar_t__ num_slices; scalar_t__ capacity; TYPE_3__** slices; } ;
typedef TYPE_2__ DimensionVec ;
typedef TYPE_3__ DimensionSlice ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,scalar_t__) ;

DimensionVec *
FUNC_2(DimensionVec **VAR_0, DimensionSlice *VAR_1)
{
 DimensionVec *VAR_2 = *VAR_0;


 FUNC_0(VAR_2->num_slices == 0 || VAR_2->slices[0]->fd.dimension_id == VAR_1->fd.dimension_id);

 if (VAR_2->num_slices + 1 > VAR_2->capacity)
  *VAR_0 = VAR_2 = FUNC_1(VAR_2, VAR_2->capacity + 10);

 VAR_2->slices[VAR_2->num_slices++] = VAR_1;

 return VAR_2;
}
