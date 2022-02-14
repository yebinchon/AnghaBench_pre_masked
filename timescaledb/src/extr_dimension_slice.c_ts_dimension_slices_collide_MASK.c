
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dimension_id; scalar_t__ range_start; scalar_t__ range_end; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ DimensionSlice ;


 int FUNC_0 (int) ;

bool
FUNC_1(DimensionSlice *VAR_0, DimensionSlice *VAR_1)
{
 FUNC_0(VAR_0->fd.dimension_id == VAR_1->fd.dimension_id);

 return (VAR_0->fd.range_start < VAR_1->fd.range_end &&
   VAR_0->fd.range_end > VAR_1->fd.range_start);
}
