
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nulls; int delta_delta; } ;
typedef TYPE_1__ DeltaDeltaCompressor ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

DeltaDeltaCompressor *
FUNC_2(void)
{
 DeltaDeltaCompressor *VAR_0 = FUNC_0(sizeof(*VAR_0));
 FUNC_1(&VAR_0->delta_delta);
 FUNC_1(&VAR_0->nulls);
 return VAR_0;
}
