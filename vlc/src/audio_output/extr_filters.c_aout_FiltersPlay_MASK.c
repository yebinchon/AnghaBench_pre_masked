
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int i_rate; } ;
struct TYPE_12__ {TYPE_3__ audio; } ;
struct TYPE_13__ {TYPE_4__ fmt_in; } ;
typedef TYPE_5__ filter_t ;
typedef int block_t ;
struct TYPE_14__ {int count; TYPE_5__* rate_filter; scalar_t__ resampling; TYPE_8__* resampler; TYPE_8__** tab; } ;
typedef TYPE_6__ aout_filters_t ;
struct TYPE_9__ {int i_rate; } ;
struct TYPE_10__ {TYPE_1__ audio; } ;
struct TYPE_15__ {TYPE_2__ fmt_in; } ;


 int * FUNC_0 (TYPE_8__**,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

block_t *FUNC_4(aout_filters_t *VAR_0, block_t *VAR_1, float VAR_2)
{
    int VAR_3 = 0;

    if (VAR_2 != 1.f)
    {
        filter_t *VAR_4 = VAR_0->rate_filter;

        if (VAR_4 == ((void*)0))
            goto drop;


        VAR_3 = VAR_4->fmt_in.audio.i_rate;
        VAR_4->fmt_in.audio.i_rate = FUNC_3(VAR_3 * VAR_2);
    }

    VAR_1 = FUNC_0 (VAR_0->tab, VAR_0->count, VAR_1);
    if (VAR_0->resampler != ((void*)0))
    {

        VAR_0->resampler->fmt_in.audio.i_rate += VAR_0->resampling;
        VAR_1 = FUNC_0 (&VAR_0->resampler, 1, VAR_1);
        VAR_0->resampler->fmt_in.audio.i_rate -= VAR_0->resampling;
    }

    if (VAR_3 != 0)
    {
        FUNC_1 (VAR_0->rate_filter != ((void*)0));
        VAR_0->rate_filter->fmt_in.audio.i_rate = VAR_3;
    }
    return VAR_1;

drop:
    FUNC_2 (VAR_1);
    return ((void*)0);
}
