
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dimension_id; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
struct TYPE_9__ {scalar_t__ capacity; scalar_t__ num_slices; TYPE_3__** slices; } ;
typedef TYPE_2__ Hypercube ;
typedef TYPE_3__ DimensionSlice ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(Hypercube *VAR_0, DimensionSlice *VAR_1)
{
 FUNC_0(VAR_0->capacity > VAR_0->num_slices);

 VAR_0->slices[VAR_0->num_slices++] = VAR_1;


 if (VAR_0->num_slices > 1 &&
  VAR_1->fd.dimension_id < VAR_0->slices[VAR_0->num_slices - 2]->fd.dimension_id)
  FUNC_2(VAR_0);

 FUNC_0(FUNC_1(VAR_0));
}
