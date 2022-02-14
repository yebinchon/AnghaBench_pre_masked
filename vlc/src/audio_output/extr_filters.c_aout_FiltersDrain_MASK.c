
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int block_t ;
struct TYPE_9__ {int count; scalar_t__ resampling; TYPE_4__* resampler; TYPE_4__** tab; } ;
typedef TYPE_3__ aout_filters_t ;
struct TYPE_7__ {int i_rate; } ;
struct TYPE_8__ {TYPE_1__ audio; } ;
struct TYPE_10__ {TYPE_2__ fmt_in; } ;


 int * FUNC_0 (TYPE_4__**,int) ;
 int * FUNC_1 (TYPE_4__**,int,int *) ;
 int FUNC_2 (int **,int *) ;
 int * FUNC_3 (int *) ;

block_t *FUNC_4 (aout_filters_t *VAR_0)
{

    block_t *VAR_1 = FUNC_0 (VAR_0->tab, VAR_0->count);

    if (VAR_0->resampler != ((void*)0))
    {
        block_t *VAR_2 = ((void*)0);

        VAR_0->resampler->fmt_in.audio.i_rate += VAR_0->resampling;

        if (VAR_1)
        {

            VAR_1 = FUNC_1 (&VAR_0->resampler, 1, VAR_1);
            if (VAR_1)
                FUNC_2 (&VAR_2, VAR_1);
        }


        VAR_1 = FUNC_0 (&VAR_0->resampler, 1);
        if (VAR_1)
            FUNC_2 (&VAR_2, VAR_1);

        VAR_0->resampler->fmt_in.audio.i_rate -= VAR_0->resampling;

        return VAR_2 ? FUNC_3 (VAR_2) : ((void*)0);
    }
    else
        return VAR_1;
}
