
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int typlen; int typbyval; } ;
struct TYPE_5__ {int isnull; TYPE_1__ base; int value; } ;
typedef TYPE_2__ GapFillLocfColumnState ;
typedef int Datum ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(GapFillLocfColumnState *VAR_0, Datum VAR_1, bool VAR_2)
{
 VAR_0->isnull = VAR_2;
 if (!VAR_2)
  VAR_0->value = FUNC_0(VAR_1, VAR_0->base.typbyval, VAR_0->base.typlen);
}
