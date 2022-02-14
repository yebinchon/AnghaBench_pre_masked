
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_5__ {scalar_t__ dimension_id; scalar_t__ range_end; scalar_t__ range_start; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ DimensionSlice ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

bool
FUNC_2(DimensionSlice *VAR_0, DimensionSlice *VAR_1, int64 VAR_2)
{
 FUNC_0(VAR_0->fd.dimension_id == VAR_1->fd.dimension_id);

 VAR_2 = FUNC_1(VAR_2);

 if (VAR_1->fd.range_end <= VAR_2 && VAR_1->fd.range_end > VAR_0->fd.range_start)
 {

  VAR_0->fd.range_start = VAR_1->fd.range_end;

  return 1;
 }
 else if (VAR_1->fd.range_start > VAR_2 && VAR_1->fd.range_start < VAR_0->fd.range_end)
 {

  VAR_0->fd.range_end = VAR_1->fd.range_start;

  return 1;
 }

 return 0;
}
