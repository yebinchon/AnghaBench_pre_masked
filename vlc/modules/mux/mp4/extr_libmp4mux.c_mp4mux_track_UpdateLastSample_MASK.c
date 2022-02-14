
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_samples_count; int i_read_duration; TYPE_2__* samples; } ;
typedef TYPE_1__ mp4mux_trackinfo_t ;
struct TYPE_6__ {scalar_t__ i_length; } ;
typedef TYPE_2__ mp4mux_sample_t ;



void FUNC_0(mp4mux_trackinfo_t *VAR_0,
                                   const mp4mux_sample_t *VAR_1)
{
    if(VAR_0->i_samples_count)
    {
        mp4mux_sample_t *VAR_2 = &VAR_0->samples[VAR_0->i_samples_count - 1];
        VAR_0->i_read_duration -= VAR_2->i_length;
        VAR_0->i_read_duration += VAR_1->i_length;
        *VAR_2 = *VAR_1;
    }
}
