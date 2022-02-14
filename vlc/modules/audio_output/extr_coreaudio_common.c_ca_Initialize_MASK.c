
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct aout_sys_common {int b_paused; size_t i_rate; size_t i_bytes_per_frame; size_t i_frame_length; size_t i_out_max_size; int b_played; int i_dev_latency_us; scalar_t__ chans_to_reorder; scalar_t__ i_render_frames; scalar_t__ i_first_render_host_time; scalar_t__ i_render_host_time; scalar_t__ i_underrun_size; } ;
struct TYPE_6__ {size_t i_rate; size_t i_bytes_per_frame; size_t i_frame_length; scalar_t__ channel_type; } ;
typedef TYPE_1__ audio_sample_format_t ;
struct TYPE_7__ {scalar_t__ sys; } ;
typedef TYPE_2__ audio_output_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

int
FUNC_1(audio_output_t *VAR_2, const audio_sample_format_t *VAR_3,
              vlc_tick_t VAR_4)
{
    struct aout_sys_common *VAR_5 = (struct aout_sys_common *) VAR_2->sys;

    VAR_5->i_underrun_size = 0;
    VAR_5->b_paused = 0;
    VAR_5->i_render_host_time = VAR_5->i_first_render_host_time = 0;
    VAR_5->i_render_frames = 0;

    VAR_5->i_rate = VAR_3->i_rate;
    VAR_5->i_bytes_per_frame = VAR_3->i_bytes_per_frame;
    VAR_5->i_frame_length = VAR_3->i_frame_length;
    VAR_5->chans_to_reorder = 0;

    VAR_5->i_dev_latency_us = VAR_4;


    size_t VAR_6 = VAR_3->i_rate * VAR_3->i_bytes_per_frame
                              / VAR_5->i_frame_length;
    if (VAR_3->channel_type == VAR_0)
    {


        VAR_5->i_out_max_size = VAR_6 / 5;
    }
    else
    {

        VAR_5->i_out_max_size = VAR_6 * 2;
    }

    FUNC_0(VAR_2);
    VAR_5->b_played = 0;

    return VAR_1;
}
