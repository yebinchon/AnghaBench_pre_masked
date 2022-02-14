
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type_len; scalar_t__ min; scalar_t__ empty; } ;
typedef TYPE_1__ SegmentMetaMinMaxBuilder ;
typedef scalar_t__ Datum ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

Datum
FUNC_5(SegmentMetaMinMaxBuilder *VAR_1)
{
 if (VAR_1->empty)
  FUNC_3(VAR_0, "trying to get min from an empty builder");
 if (VAR_1->type_len == -1)
 {
  Datum VAR_2 = FUNC_2(FUNC_1(VAR_1->min));
  if (VAR_1->min != VAR_2)
   FUNC_4(FUNC_0(VAR_1->min));
  VAR_1->min = VAR_2;
 }
 return VAR_1->min;
}
