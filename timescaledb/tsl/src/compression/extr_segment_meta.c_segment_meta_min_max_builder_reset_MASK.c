
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int empty; int has_null; scalar_t__ max; scalar_t__ min; int type_by_val; } ;
typedef TYPE_1__ SegmentMetaMinMaxBuilder ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void
FUNC_2(SegmentMetaMinMaxBuilder *VAR_0)
{
 if (!VAR_0->empty)
 {
  if (!VAR_0->type_by_val)
  {
   FUNC_1(FUNC_0(VAR_0->min));
   FUNC_1(FUNC_0(VAR_0->max));
  }
  VAR_0->min = 0;
  VAR_0->max = 0;
 }
 VAR_0->empty = 1;
 VAR_0->has_null = 0;
}
