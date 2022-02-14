
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_samples_count; scalar_t__ i_samples_max; int b_hasbframes; int i_read_duration; TYPE_2__* samples; } ;
typedef TYPE_1__ mp4mux_trackinfo_t ;
struct TYPE_8__ {scalar_t__ i_pts_dts; int i_length; } ;
typedef TYPE_2__ mp4mux_sample_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,scalar_t__,int) ;

bool FUNC_2(mp4mux_trackinfo_t *VAR_0, const mp4mux_sample_t *VAR_1)
{

    if (VAR_0->i_samples_count + 2 >= VAR_0->i_samples_max)
    {
        if(VAR_0->i_samples_max + 1000 < VAR_0->i_samples_max)
            return 0;
        mp4mux_sample_t *VAR_2 = FUNC_1(VAR_0->samples,
                                                      VAR_0->i_samples_max + 1000,
                                                      sizeof(*VAR_2));
        if(!VAR_2)
            return 0;
        VAR_0->samples = VAR_2;
        VAR_0->i_samples_max += 1000;
    }
    VAR_0->samples[VAR_0->i_samples_count++] = *VAR_1;
    if(!VAR_0->b_hasbframes && VAR_1->i_pts_dts != 0)
        VAR_0->b_hasbframes = 1;
    VAR_0->i_read_duration += FUNC_0(0, VAR_1->i_length);
    return 1;
}
