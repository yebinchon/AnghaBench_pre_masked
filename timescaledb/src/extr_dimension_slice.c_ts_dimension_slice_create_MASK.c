
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* int64 ;
struct TYPE_5__ {int dimension_id; void* range_end; void* range_start; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ DimensionSlice ;


 TYPE_2__* FUNC_0 () ;

DimensionSlice *
FUNC_1(int VAR_0, int64 VAR_1, int64 VAR_2)
{
 DimensionSlice *VAR_3 = FUNC_0();

 VAR_3->fd.dimension_id = VAR_0;
 VAR_3->fd.range_start = VAR_1;
 VAR_3->fd.range_end = VAR_2;

 return VAR_3;
}
