
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ resampling; int * resampler; } ;
typedef TYPE_1__ aout_filters_t ;



bool FUNC_0 (aout_filters_t *VAR_0, int VAR_1)
{
    if (VAR_0->resampler == ((void*)0))
        return 0;

    if (VAR_1)
        VAR_0->resampling += VAR_1;
    else
        VAR_0->resampling = 0;
    return VAR_0->resampling != 0;
}
