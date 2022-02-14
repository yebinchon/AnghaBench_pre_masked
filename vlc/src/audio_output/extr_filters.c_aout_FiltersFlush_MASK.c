
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * resampler; int ** tab; } ;
typedef TYPE_1__ aout_filters_t ;


 int FUNC_0 (int **,int) ;

void FUNC_1 (aout_filters_t *VAR_0)
{
    FUNC_0 (VAR_0->tab, VAR_0->count);

    if (VAR_0->resampler != ((void*)0))
        FUNC_0 (&VAR_0->resampler, 1);
}
