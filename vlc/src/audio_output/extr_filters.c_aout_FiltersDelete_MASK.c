
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int count; scalar_t__ clock; int ** tab; int * resampler; } ;
typedef TYPE_1__ aout_filters_t ;


 int VAR_0 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4 (vlc_object_t *VAR_1, aout_filters_t *VAR_2)
{
    if (VAR_2->resampler != ((void*)0))
        FUNC_0 (&VAR_2->resampler, 1);
    FUNC_0 (VAR_2->tab, VAR_2->count);
    FUNC_2(VAR_1, "visual", VAR_0, ((void*)0));
    if (VAR_2->clock)
        FUNC_3(VAR_2->clock);
    FUNC_1 (VAR_2);
}
