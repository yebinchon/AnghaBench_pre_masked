
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_7__ {int isnull; int value; scalar_t__ lookup_last; } ;
struct TYPE_6__ {scalar_t__ gapfill_start; } ;
typedef TYPE_1__ GapFillState ;
typedef TYPE_2__ GapFillLocfColumnState ;
typedef int Datum ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int*) ;

void
FUNC_1(GapFillLocfColumnState *VAR_0, GapFillState *VAR_1, int64 VAR_2, Datum *VAR_3,
        bool *VAR_4)
{

 if (VAR_0->isnull && VAR_0->lookup_last && VAR_2 == VAR_1->gapfill_start)
  VAR_0->value = FUNC_0(VAR_1, VAR_0->lookup_last, &VAR_0->isnull);

 *VAR_3 = VAR_0->value;
 *VAR_4 = VAR_0->isnull;
}
