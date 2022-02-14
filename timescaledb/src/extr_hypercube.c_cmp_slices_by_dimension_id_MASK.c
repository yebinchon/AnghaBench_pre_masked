
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dimension_id; } ;
struct TYPE_4__ {TYPE_1__ fd; } ;
typedef TYPE_2__ DimensionSlice ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const DimensionSlice *VAR_2 = *((DimensionSlice **) VAR_0);
 const DimensionSlice *VAR_3 = *((DimensionSlice **) VAR_1);

 if (VAR_2->fd.dimension_id == VAR_3->fd.dimension_id)
  return 0;
 if (VAR_2->fd.dimension_id < VAR_3->fd.dimension_id)
  return -1;
 return 1;
}
