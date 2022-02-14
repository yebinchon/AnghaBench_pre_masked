
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ compression_algorithm; } ;
struct TYPE_4__ {int delta_deltas; scalar_t__ has_nulls; int last_delta; int last_value; } ;
typedef int StringInfo ;
typedef int Simple8bRleSerialized ;
typedef TYPE_1__ DeltaDeltaCompressed ;
typedef TYPE_2__ CompressedDataHeader ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(CompressedDataHeader *VAR_1, StringInfo VAR_2)
{
 const DeltaDeltaCompressed *VAR_3 = (DeltaDeltaCompressed *) VAR_1;
 FUNC_0(VAR_1->compression_algorithm == VAR_0);
 FUNC_1(VAR_2, VAR_3->has_nulls);
 FUNC_2(VAR_2, VAR_3->last_value);
 FUNC_2(VAR_2, VAR_3->last_delta);
 FUNC_3(VAR_2, &VAR_3->delta_deltas);
 if (VAR_3->has_nulls)
 {
  Simple8bRleSerialized *VAR_4 =
   (Simple8bRleSerialized *) (((char *) &VAR_3->delta_deltas) +
            FUNC_4(&VAR_3->delta_deltas));
  FUNC_3(VAR_2, VAR_4);
 }
}
