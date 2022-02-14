
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int progressive_source_flag; scalar_t__ interlaced_source_flag; } ;
struct TYPE_8__ {TYPE_3__ general; } ;
struct TYPE_9__ {scalar_t__ field_seq_flag; scalar_t__ frame_field_info_present_flag; } ;
struct TYPE_11__ {TYPE_1__ profile_tier_level; TYPE_2__ vui; scalar_t__ vui_parameters_present_flag; } ;
typedef TYPE_4__ hevc_sequence_parameter_set_t ;
struct TYPE_12__ {int pic_struct; } ;
typedef TYPE_5__ hevc_sei_pic_timing_t ;



uint8_t FUNC_0( const hevc_sequence_parameter_set_t *VAR_0,
                               const hevc_sei_pic_timing_t *VAR_1 )
{
    if( VAR_0->vui.frame_field_info_present_flag && VAR_1 && VAR_1->pic_struct < 13 )
    {

        const uint8_t VAR_2[13] = { 2, 1, 1, 2, 2, 3, 3, 4, 6, 1, 1, 1, 1 };
        return VAR_2[VAR_1->pic_struct];
    }

    if( VAR_0->vui_parameters_present_flag )
    {
        if( VAR_0->vui.field_seq_flag )
            return 1;
    }
    else if( VAR_0->profile_tier_level.general.interlaced_source_flag &&
            !VAR_0->profile_tier_level.general.progressive_source_flag )
    {
        return 1;
    }

    return 2;
}
