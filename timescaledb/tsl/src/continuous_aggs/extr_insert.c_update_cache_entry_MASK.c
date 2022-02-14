
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_3__ {scalar_t__ lowest_modified_value; scalar_t__ greatest_modified_value; } ;
typedef TYPE_1__ ContinuousAggsCacheInvalEntry ;



__attribute__((used)) static inline void
FUNC_0(ContinuousAggsCacheInvalEntry *VAR_0, int64 VAR_1)
{
 if (VAR_1 < VAR_0->lowest_modified_value)
  VAR_0->lowest_modified_value = VAR_1;
 if (VAR_1 > VAR_0->greatest_modified_value)
  VAR_0->greatest_modified_value = VAR_1;
}
