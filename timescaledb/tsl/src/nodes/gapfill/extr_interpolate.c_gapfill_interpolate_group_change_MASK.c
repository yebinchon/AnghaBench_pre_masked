
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_8__ {int typlen; int typbyval; } ;
struct TYPE_7__ {int isnull; int value; int time; } ;
struct TYPE_6__ {int isnull; } ;
struct TYPE_9__ {TYPE_3__ base; TYPE_2__ next; TYPE_1__ prev; } ;
typedef TYPE_4__ GapFillInterpolateColumnState ;
typedef int Datum ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(GapFillInterpolateColumnState *VAR_0, int64 VAR_1, Datum VAR_2,
         bool VAR_3)
{
 VAR_0->prev.isnull = 1;
 VAR_0->next.isnull = VAR_3;
 if (!VAR_3)
 {
  VAR_0->next.time = VAR_1;
  VAR_0->next.value = FUNC_0(VAR_2, VAR_0->base.typbyval, VAR_0->base.typlen);
 }
}
