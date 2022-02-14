
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_4__ {scalar_t__ lowest_modified_value; int hypertable_relid; } ;
typedef TYPE_1__ ContinuousAggsCacheInvalEntry ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ContinuousAggsCacheInvalEntry *VAR_0)
{
 int64 VAR_1;







 if (FUNC_0())
 {
  FUNC_1(VAR_0);
  return;
 }

 VAR_1 = FUNC_2(VAR_0->hypertable_relid);
 if (VAR_0->lowest_modified_value < VAR_1)
  FUNC_1(VAR_0);
}
