
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ frame_field_info_present_flag; scalar_t__ field_seq_flag; } ;
struct TYPE_12__ {scalar_t__ progressive_source_flag; scalar_t__ interlaced_source_flag; } ;
struct TYPE_9__ {TYPE_5__ general; } ;
struct TYPE_10__ {TYPE_1__ vui; TYPE_2__ profile_tier_level; scalar_t__ vui_parameters_present_flag; } ;
typedef TYPE_3__ hevc_sequence_parameter_set_t ;
struct TYPE_11__ {int source_scan_type; } ;
typedef TYPE_4__ hevc_sei_pic_timing_t ;
typedef TYPE_5__ hevc_inner_profile_tier_level_t ;



bool FUNC_0( const hevc_sequence_parameter_set_t *VAR_0,
                                const hevc_sei_pic_timing_t *VAR_1 )
{
    if( VAR_0->vui_parameters_present_flag &&
        VAR_0->vui.field_seq_flag )
        return 0;

    const hevc_inner_profile_tier_level_t *VAR_2 = &VAR_0->profile_tier_level.general;

    if( VAR_2->progressive_source_flag != VAR_2->interlaced_source_flag )
    {
        return VAR_2->progressive_source_flag > VAR_2->interlaced_source_flag;
    }

    else if( VAR_2->progressive_source_flag )
    {
        if( VAR_1 && VAR_0->vui.frame_field_info_present_flag )
        {
            if( VAR_1->source_scan_type < 2 )
                return VAR_1->source_scan_type != 0;
        }
    }


    return 1;
}
