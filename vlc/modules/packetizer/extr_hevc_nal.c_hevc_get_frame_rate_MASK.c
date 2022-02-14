
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int vps_num_units_in_tick; unsigned int vps_time_scale; scalar_t__ vps_timing_info_present_flag; } ;
typedef TYPE_3__ hevc_video_parameter_set_t ;
struct TYPE_7__ {unsigned int vui_num_units_in_tick; unsigned int vui_time_scale; } ;
struct TYPE_8__ {TYPE_1__ timing; scalar_t__ vui_timing_info_present_flag; } ;
struct TYPE_10__ {TYPE_2__ vui; scalar_t__ vui_parameters_present_flag; } ;
typedef TYPE_4__ hevc_sequence_parameter_set_t ;



bool FUNC_0( const hevc_sequence_parameter_set_t *VAR_0,
                          const hevc_video_parameter_set_t *VAR_1,
                          unsigned *VAR_2, unsigned *VAR_3 )
{
    if( VAR_0->vui_parameters_present_flag && VAR_0->vui.vui_timing_info_present_flag )
    {
        *VAR_3 = VAR_0->vui.timing.vui_num_units_in_tick;
        *VAR_2 = VAR_0->vui.timing.vui_time_scale;
        return (*VAR_3 && *VAR_2);
    }
    else if( VAR_1 && VAR_1->vps_timing_info_present_flag )
    {
        *VAR_3 = VAR_1->vps_num_units_in_tick;
        *VAR_2 = VAR_1->vps_time_scale;
        return (*VAR_3 && *VAR_2);
    }
    return 0;
}
