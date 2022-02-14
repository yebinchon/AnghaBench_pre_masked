
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {void* vui_time_scale; void* vui_num_units_in_tick; } ;
struct TYPE_13__ {void* win_bottom_offset; void* win_top_offset; void* win_right_offset; void* win_left_offset; } ;
struct TYPE_12__ {void* sample_loc_type_bottom_field; void* sample_loc_type_top_field; } ;
struct TYPE_10__ {void* matrix_coeffs; void* transfer_characteristics; void* colour_primaries; } ;
struct TYPE_11__ {TYPE_2__ colour; void* colour_description_present_flag; void* video_full_range_flag; void* video_format; } ;
struct TYPE_9__ {int aspect_ratio_idc; void* sar_height; void* sar_width; } ;
struct TYPE_15__ {int default_display_window_flag; TYPE_6__ timing; void* vui_timing_info_present_flag; TYPE_5__ def_disp; void* frame_field_info_present_flag; void* field_seq_flag; void* neutral_chroma_indication_flag; TYPE_4__ chroma; void* chroma_loc_info_present_flag; TYPE_3__ vs; void* video_signal_type_present_flag; void* overscan_appropriate_flag; void* overscan_info_present_flag; TYPE_1__ ar; void* aspect_ratio_info_present_flag; } ;
typedef TYPE_7__ hevc_vui_parameters_t ;
typedef int bs_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4( bs_t *VAR_3, hevc_vui_parameters_t *VAR_4,
                                            bool VAR_5 )
{
    if( FUNC_3( VAR_3 ) < 10 )
        return 0;

    VAR_4->aspect_ratio_info_present_flag = FUNC_1( VAR_3 );
    if( VAR_4->aspect_ratio_info_present_flag )
    {
        VAR_4->ar.aspect_ratio_idc = FUNC_0( VAR_3, 8 );
        if( VAR_4->ar.aspect_ratio_idc == 0xFF )
        {
            VAR_4->ar.sar_width = FUNC_0( VAR_3, 16 );
            VAR_4->ar.sar_height = FUNC_0( VAR_3, 16 );
        }
    }

    VAR_4->overscan_info_present_flag = FUNC_1( VAR_3 );
    if( VAR_4->overscan_info_present_flag )
        VAR_4->overscan_appropriate_flag = FUNC_1( VAR_3 );

    VAR_4->video_signal_type_present_flag = FUNC_1( VAR_3 );
    if( VAR_4->video_signal_type_present_flag )
    {
        VAR_4->vs.video_format = FUNC_0( VAR_3, 3 );
        VAR_4->vs.video_full_range_flag = FUNC_1( VAR_3 );
        VAR_4->vs.colour_description_present_flag = FUNC_1( VAR_3 );
        if( VAR_4->vs.colour_description_present_flag )
        {
            VAR_4->vs.colour.colour_primaries = FUNC_0( VAR_3, 8 );
            VAR_4->vs.colour.transfer_characteristics = FUNC_0( VAR_3, 8 );
            VAR_4->vs.colour.matrix_coeffs = FUNC_0( VAR_3, 8 );
        }
        else
        {
            VAR_4->vs.colour.colour_primaries = VAR_0;
            VAR_4->vs.colour.transfer_characteristics = VAR_2;
            VAR_4->vs.colour.matrix_coeffs = VAR_1;
        }
    }

    VAR_4->chroma_loc_info_present_flag = FUNC_1( VAR_3 );
    if( VAR_4->chroma_loc_info_present_flag )
    {
        VAR_4->chroma.sample_loc_type_top_field = FUNC_2( VAR_3 );
        VAR_4->chroma.sample_loc_type_bottom_field = FUNC_2( VAR_3 );
    }

    VAR_4->neutral_chroma_indication_flag = FUNC_1( VAR_3 );
    VAR_4->field_seq_flag = FUNC_1( VAR_3 );
    VAR_4->frame_field_info_present_flag = FUNC_1( VAR_3 );

    VAR_4->default_display_window_flag = !VAR_5 && FUNC_1( VAR_3 );
    if( VAR_4->default_display_window_flag )
    {
        VAR_4->def_disp.win_left_offset = FUNC_2( VAR_3 );
        VAR_4->def_disp.win_right_offset = FUNC_2( VAR_3 );
        VAR_4->def_disp.win_top_offset = FUNC_2( VAR_3 );
        VAR_4->def_disp.win_bottom_offset = FUNC_2( VAR_3 );
    }

    VAR_4->vui_timing_info_present_flag = FUNC_1( VAR_3 );
    if( VAR_4->vui_timing_info_present_flag )
    {
        VAR_4->timing.vui_num_units_in_tick = FUNC_0( VAR_3, 32 );
        VAR_4->timing.vui_time_scale = FUNC_0( VAR_3, 32 );

        if( FUNC_3( VAR_3 ) < 3 )
            return 0;
    }


    if( FUNC_3( VAR_3 ) < 1 )
        return 0;

    return 1;
}
