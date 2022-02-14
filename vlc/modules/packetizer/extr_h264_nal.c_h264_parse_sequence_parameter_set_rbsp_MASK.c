
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {void* i_matrix_coefficients; void* i_transfer_characteristics; void* i_colour_primaries; void* b_full_range; } ;
struct TYPE_8__ {int b_valid; int i_sar_num; int i_sar_den; int b_timing_info_present_flag; int b_hrd_parameters_present_flag; int b_bitstream_restriction_flag; scalar_t__ i_max_num_reorder_frames; void* b_pic_struct_present_flag; void* i_dpb_output_delay_length_minus1; void* i_cpb_removal_delay_length_minus1; void* b_fixed_frame_rate; void* i_time_scale; void* i_num_units_in_tick; TYPE_2__ colour; } ;
struct TYPE_6__ {scalar_t__ bottom_offset; scalar_t__ top_offset; scalar_t__ right_offset; scalar_t__ left_offset; } ;
struct TYPE_9__ {int i_profile; int i_chroma_idc; int i_bit_depth_luma; int i_bit_depth_chroma; int i_log2_max_frame_num; scalar_t__ i_pic_order_cnt_type; int i_log2_max_pic_order_cnt_lsb; int i_num_ref_frames_in_pic_order_cnt_cycle; TYPE_3__ vui; TYPE_1__ frame_crop; void* mb_adaptive_frame_field_flag; void* frame_mbs_only_flag; scalar_t__ pic_height_in_map_units_minus1; scalar_t__ pic_width_in_mbs_minus1; void** offset_for_ref_frame; void* offset_for_top_to_bottom_field; void* offset_for_non_ref_pic; void* i_delta_pic_order_always_zero_flag; scalar_t__ b_separate_colour_planes_flag; scalar_t__ i_id; void* i_level; void* i_constraint_set_flags; } ;
typedef TYPE_4__ h264_sequence_parameter_set_t ;
typedef int bs_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static bool FUNC_6( bs_t *VAR_17,
                                                    h264_sequence_parameter_set_t *VAR_18 )
{
    int VAR_19;

    int VAR_20 = FUNC_0( VAR_17, 8 );
    VAR_18->i_profile = VAR_20;
    VAR_18->i_constraint_set_flags = FUNC_0( VAR_17, 8 );
    VAR_18->i_level = FUNC_0( VAR_17, 8 );

    uint32_t VAR_21 = FUNC_3( VAR_17 );
    if( VAR_21 > VAR_0 )
        return 0;
    VAR_18->i_id = VAR_21;

    if( VAR_20 == VAR_5 ||
        VAR_20 == VAR_6 ||
        VAR_20 == VAR_7 ||
        VAR_20 == VAR_8 ||
        VAR_20 == VAR_9 ||
        VAR_20 == VAR_4 ||
        VAR_20 == VAR_15 ||
        VAR_20 == VAR_16 ||
        VAR_20 == VAR_13 ||
        VAR_20 == VAR_14 ||
        VAR_20 == VAR_12 ||
        VAR_20 == VAR_11 ||
        VAR_20 == VAR_10 )
    {

        VAR_18->i_chroma_idc = FUNC_3( VAR_17 );
        if( VAR_18->i_chroma_idc == 3 )
            VAR_18->b_separate_colour_planes_flag = FUNC_1( VAR_17 );
        else
            VAR_18->b_separate_colour_planes_flag = 0;

        VAR_18->i_bit_depth_luma = FUNC_3( VAR_17 ) + 8;

        VAR_18->i_bit_depth_chroma = FUNC_3( VAR_17 ) + 8;

        FUNC_5( VAR_17, 1 );

        VAR_19 = FUNC_0( VAR_17, 1 );
        if( VAR_19 )
        {
            for( int VAR_22 = 0; VAR_22 < ((3 != VAR_18->i_chroma_idc) ? 8 : 12); VAR_22++ )
            {

                VAR_19 = FUNC_0( VAR_17, 1 );
                if( !VAR_19 )
                    continue;
                const int VAR_23 = (VAR_22 < 6 ) ? 16 : 64;

                int VAR_24 = 8;
                int VAR_25 = 8;
                for( int VAR_26 = 0; VAR_26 < VAR_23; VAR_26++ )
                {
                    if( VAR_25 != 0 )
                    {

                        VAR_19 = FUNC_2( VAR_17 );
                        VAR_25 = ( VAR_24 + VAR_19 + 256 ) % 256;

                    }

                    VAR_24 = ( VAR_25 == 0 ) ? VAR_24 : VAR_25;
                }
            }
        }
    }
    else
    {
        VAR_18->i_chroma_idc = 1;
        VAR_18->i_bit_depth_luma = 8;
        VAR_18->i_bit_depth_chroma = 8;
    }


    VAR_18->i_log2_max_frame_num = FUNC_3( VAR_17 );
    if( VAR_18->i_log2_max_frame_num > 12)
        VAR_18->i_log2_max_frame_num = 12;

    VAR_18->i_pic_order_cnt_type = FUNC_3( VAR_17 );
    if( VAR_18->i_pic_order_cnt_type == 0 )
    {

        VAR_18->i_log2_max_pic_order_cnt_lsb = FUNC_3( VAR_17 );
        if( VAR_18->i_log2_max_pic_order_cnt_lsb > 12 )
            VAR_18->i_log2_max_pic_order_cnt_lsb = 12;
    }
    else if( VAR_18->i_pic_order_cnt_type == 1 )
    {
        VAR_18->i_delta_pic_order_always_zero_flag = FUNC_0( VAR_17, 1 );
        VAR_18->offset_for_non_ref_pic = FUNC_2( VAR_17 );
        VAR_18->offset_for_top_to_bottom_field = FUNC_2( VAR_17 );
        VAR_18->i_num_ref_frames_in_pic_order_cnt_cycle = FUNC_3( VAR_17 );
        if( VAR_18->i_num_ref_frames_in_pic_order_cnt_cycle > 255 )
            return 0;
        for( int VAR_27=0; VAR_27<VAR_18->i_num_ref_frames_in_pic_order_cnt_cycle; VAR_27++ )
            VAR_18->offset_for_ref_frame[VAR_27] = FUNC_2( VAR_17 );
    }

    FUNC_3( VAR_17 );

    FUNC_5( VAR_17, 1 );


    VAR_18->pic_width_in_mbs_minus1 = FUNC_3( VAR_17 );
    VAR_18->pic_height_in_map_units_minus1 = FUNC_3( VAR_17 );


    VAR_18->frame_mbs_only_flag = FUNC_0( VAR_17, 1 );
    if( !VAR_18->frame_mbs_only_flag )
        VAR_18->mb_adaptive_frame_field_flag = FUNC_0( VAR_17, 1 );


    FUNC_5( VAR_17, 1 );


    if( FUNC_1( VAR_17 ) )
    {
        VAR_18->frame_crop.left_offset = FUNC_3( VAR_17 );
        VAR_18->frame_crop.right_offset = FUNC_3( VAR_17 );
        VAR_18->frame_crop.top_offset = FUNC_3( VAR_17 );
        VAR_18->frame_crop.bottom_offset = FUNC_3( VAR_17 );
    }


    VAR_19 = FUNC_0( VAR_17, 1 );
    if( VAR_19 )
    {
        VAR_18->vui.b_valid = 1;

        VAR_19 = FUNC_0( VAR_17, 1 );
        if( VAR_19 )
        {
            static const struct { int w, h; } VAR_28[17] =
            {
                { 0, 0 }, { 1, 1 }, { 12, 11 }, { 10, 11 },
                { 16, 11 }, { 40, 33 }, { 24, 11 }, { 20, 11 },
                { 32, 11 }, { 80, 33 }, { 18, 11 }, { 15, 11 },
                { 64, 33 }, { 160,99 }, { 4, 3 }, { 3, 2 },
                { 2, 1 },
            };
            int VAR_29 = FUNC_0( VAR_17, 8 );
            int VAR_30, VAR_31;

            if( VAR_29 < 17 )
            {
                VAR_30 = VAR_28[VAR_29].w;
                VAR_31 = VAR_28[VAR_29].h;
            }
            else if( VAR_29 == 255 )
            {
                VAR_30 = FUNC_0( VAR_17, 16 );
                VAR_31 = FUNC_0( VAR_17, 16 );
            }
            else
            {
                VAR_30 = 0;
                VAR_31 = 0;
            }

            if( VAR_30 != 0 && VAR_31 != 0 )
            {
                VAR_18->vui.i_sar_num = VAR_30;
                VAR_18->vui.i_sar_den = VAR_31;
            }
            else
            {
                VAR_18->vui.i_sar_num = 1;
                VAR_18->vui.i_sar_den = 1;
            }
        }


        VAR_19 = FUNC_0( VAR_17, 1 );
        if ( VAR_19 )
            FUNC_0( VAR_17, 1 );


        VAR_19 = FUNC_0( VAR_17, 1 );
        if( VAR_19 )
        {
            FUNC_0( VAR_17, 3 );
            VAR_18->vui.colour.b_full_range = FUNC_0( VAR_17, 1 );

            VAR_19 = FUNC_0( VAR_17, 1 );
            if ( VAR_19 )
            {
                VAR_18->vui.colour.i_colour_primaries = FUNC_0( VAR_17, 8 );
                VAR_18->vui.colour.i_transfer_characteristics = FUNC_0( VAR_17, 8 );
                VAR_18->vui.colour.i_matrix_coefficients = FUNC_0( VAR_17, 8 );
            }
            else
            {
                VAR_18->vui.colour.i_colour_primaries = VAR_1;
                VAR_18->vui.colour.i_transfer_characteristics = VAR_3;
                VAR_18->vui.colour.i_matrix_coefficients = VAR_2;
            }
        }


        VAR_19 = FUNC_0( VAR_17, 1 );
        if( VAR_19 )
        {
            FUNC_3( VAR_17 );
            FUNC_3( VAR_17 );
        }


        VAR_18->vui.b_timing_info_present_flag = FUNC_0( VAR_17, 1 );
        if( VAR_18->vui.b_timing_info_present_flag )
        {
            VAR_18->vui.i_num_units_in_tick = FUNC_0( VAR_17, 32 );
            VAR_18->vui.i_time_scale = FUNC_0( VAR_17, 32 );
            VAR_18->vui.b_fixed_frame_rate = FUNC_0( VAR_17, 1 );
        }


        VAR_18->vui.b_hrd_parameters_present_flag = 0;
        for ( int VAR_32=0; VAR_32<2; VAR_32++ )
        {
            VAR_19 = FUNC_0( VAR_17, 1 );
            if( VAR_19 )
            {
                VAR_18->vui.b_hrd_parameters_present_flag = 1;
                uint32_t VAR_33 = FUNC_3( VAR_17 ) + 1;
                if( VAR_33 > 31 )
                    return 0;
                FUNC_0( VAR_17, 4 );
                FUNC_0( VAR_17, 4 );
                for( uint32_t VAR_34 = 0; VAR_34 < VAR_33; VAR_34++ )
                {
                    if( FUNC_4( VAR_17 ) < 23 )
                        return 0;
                    FUNC_3( VAR_17 );
                    FUNC_3( VAR_17 );
                    FUNC_0( VAR_17, 1 );
                }
                FUNC_0( VAR_17, 5 );
                VAR_18->vui.i_cpb_removal_delay_length_minus1 = FUNC_0( VAR_17, 5 );
                VAR_18->vui.i_dpb_output_delay_length_minus1 = FUNC_0( VAR_17, 5 );
                FUNC_0( VAR_17, 5 );
            }
        }

        if( VAR_18->vui.b_hrd_parameters_present_flag )
            FUNC_0( VAR_17, 1 );


        VAR_18->vui.b_pic_struct_present_flag = FUNC_0( VAR_17, 1 );

        VAR_18->vui.b_bitstream_restriction_flag = FUNC_0( VAR_17, 1 );
        if( VAR_18->vui.b_bitstream_restriction_flag )
        {
            FUNC_0( VAR_17, 1 );
            FUNC_3( VAR_17 );
            FUNC_3( VAR_17 );
            FUNC_3( VAR_17 );
            FUNC_3( VAR_17 );
            VAR_18->vui.i_max_num_reorder_frames = FUNC_3( VAR_17 );
            FUNC_3( VAR_17 );
        }
    }

    return 1;
}
