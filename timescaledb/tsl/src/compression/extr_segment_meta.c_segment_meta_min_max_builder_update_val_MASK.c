
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int empty; int type_len; int type_by_val; void* max; int ssup; void* min; } ;
typedef TYPE_1__ SegmentMetaMinMaxBuilder ;
typedef int Datum ;


 int FUNC_0 (void*,int,int ,int,int *) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(SegmentMetaMinMaxBuilder *VAR_0, Datum VAR_1)
{
 int VAR_2;

 if (VAR_0->empty)
 {
  VAR_0->min = FUNC_2(VAR_1, VAR_0->type_by_val, VAR_0->type_len);
  VAR_0->max = FUNC_2(VAR_1, VAR_0->type_by_val, VAR_0->type_len);
  VAR_0->empty = 0;
  return;
 }

 VAR_2 = FUNC_0(VAR_0->min, 0, VAR_1, 0, &VAR_0->ssup);
 if (VAR_2 > 0)
 {
  if (!VAR_0->type_by_val)
   FUNC_3(FUNC_1(VAR_0->min));
  VAR_0->min = FUNC_2(VAR_1, VAR_0->type_by_val, VAR_0->type_len);
 }

 VAR_2 = FUNC_0(VAR_0->max, 0, VAR_1, 0, &VAR_0->ssup);
 if (VAR_2 < 0)
 {
  if (!VAR_0->type_by_val)
   FUNC_3(FUNC_1(VAR_0->max));
  VAR_0->max = FUNC_2(VAR_1, VAR_0->type_by_val, VAR_0->type_len);
 }
}
