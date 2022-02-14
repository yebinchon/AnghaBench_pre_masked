
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_4__ {scalar_t__ range_start; scalar_t__ range_end; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef TYPE_2__ DimensionSlice ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int
FUNC_1(const DimensionSlice *VAR_0, int64 VAR_1)
{
 VAR_1 = FUNC_0(VAR_1);
 if (VAR_1 < VAR_0->fd.range_start)
  return -1;

 if (VAR_1 >= VAR_0->fd.range_end)
  return 1;

 return 0;
}
