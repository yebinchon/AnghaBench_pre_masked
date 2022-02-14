
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t obu_u5_t ;
typedef int obu_u4_t ;
typedef void* obu_u1_t ;
typedef int bs_t ;
struct TYPE_9__ {int buffer_delay_length_minus_1; } ;
struct TYPE_8__ {size_t operating_points_cnt_minus_1; void* film_grain_params_present; void* seq_profile; int color_config; void* enable_restoration; void* enable_cdef; void* enable_superres; void* order_hint_bits_minus_1; void* enable_order_hint; void* seq_force_integer_mv; void* seq_force_screen_content_tools; void* enable_ref_frame_mvs; void* enable_jnt_comp; void* enable_dual_filter; void* enable_warped_motion; void* enable_masked_compound; void* enable_interintra_compound; void* enable_intra_edge_filter; void* enable_filter_intra; void* use_128x128_superblock; void* additional_frame_id_length_minus_1; void* delta_frame_id_length_minus_2; void* frame_id_numbers_present_flag; void* max_frame_height_minus_1; void* max_frame_width_minus_1; TYPE_1__* operating_points; void* initial_display_delay_present_flag; TYPE_4__ decoder_model_info; void* decoder_model_info_present_flag; int timing_info; void* timing_info_present_flag; void* still_picture; int obu_header; } ;
typedef TYPE_2__ av1_OBU_sequence_header_t ;
struct TYPE_7__ {int seq_level_idx; void* initial_display_delay_minus_1; void* initial_display_delay_present_for_this_op; int operating_parameters_info; void* decoder_model_present_for_this_op; void* seq_tier; void* operating_point_idc; } ;


 int FUNC_0 (TYPE_2__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int const*,size_t) ;
 void* FUNC_7 (int *,int) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int,int) ;

av1_OBU_sequence_header_t *
    FUNC_11(const uint8_t *VAR_2, size_t VAR_3)
{
    bs_t VAR_4;
    FUNC_6(&VAR_4, VAR_2, VAR_3);

    av1_OBU_sequence_header_t *VAR_5 = FUNC_10(1, sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);

    if(!FUNC_5(&VAR_4, &VAR_5->obu_header))
    {
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    VAR_5->seq_force_screen_content_tools = VAR_1;
    VAR_5->seq_force_integer_mv = VAR_0;


    VAR_5->seq_profile = FUNC_7(&VAR_4, 3);
    VAR_5->still_picture = FUNC_8(&VAR_4);
    const obu_u1_t VAR_6 = FUNC_8(&VAR_4);
    if(VAR_6)
    {
        VAR_5->operating_points[0].seq_level_idx = FUNC_7(&VAR_4, 5);
    }
    else
    {
        VAR_5->timing_info_present_flag = FUNC_8(&VAR_4);
        if(VAR_5->timing_info_present_flag)
        {
            FUNC_4(&VAR_4, &VAR_5->timing_info);
            VAR_5->decoder_model_info_present_flag = FUNC_8(&VAR_4);
            if(VAR_5->decoder_model_info_present_flag)
                FUNC_2(&VAR_4, &VAR_5->decoder_model_info);
        }

        VAR_5->initial_display_delay_present_flag = FUNC_8(&VAR_4);
        VAR_5->operating_points_cnt_minus_1 = FUNC_7(&VAR_4, 5);
        for(obu_u5_t VAR_7=0; VAR_7<=VAR_5->operating_points_cnt_minus_1; VAR_7++)
        {
            VAR_5->operating_points[VAR_7].operating_point_idc = FUNC_7(&VAR_4, 12);
            VAR_5->operating_points[VAR_7].seq_level_idx = FUNC_7(&VAR_4, 5);
            if(VAR_5->operating_points[VAR_7].seq_level_idx > 7)
                VAR_5->operating_points[VAR_7].seq_tier = FUNC_8(&VAR_4);
            if(VAR_5->decoder_model_info_present_flag)
            {
                VAR_5->operating_points[VAR_7].decoder_model_present_for_this_op = FUNC_8(&VAR_4);
                if(VAR_5->operating_points[VAR_7].decoder_model_present_for_this_op)
                    FUNC_3(&VAR_4, &VAR_5->operating_points[VAR_7].operating_parameters_info,
                                                  VAR_5->decoder_model_info.buffer_delay_length_minus_1);
            }
            if(VAR_5->initial_display_delay_present_flag)
            {
                VAR_5->operating_points[VAR_7].initial_display_delay_present_for_this_op = FUNC_8(&VAR_4);
                if(VAR_5->operating_points[VAR_7].initial_display_delay_present_for_this_op)
                {
                    VAR_5->operating_points[VAR_7].initial_display_delay_minus_1 = FUNC_7(&VAR_4, 4);
                }
            }
        }
    }
    const obu_u4_t VAR_8 = FUNC_7(&VAR_4, 4);
    const obu_u4_t VAR_9 = FUNC_7(&VAR_4, 4);
    VAR_5->max_frame_width_minus_1 = FUNC_7(&VAR_4, 1 + VAR_8);
    VAR_5->max_frame_height_minus_1 = FUNC_7(&VAR_4, 1 + VAR_9);
    if(!VAR_6)
    {
        VAR_5->frame_id_numbers_present_flag = FUNC_8(&VAR_4);
        if(VAR_5->frame_id_numbers_present_flag)
        {
            VAR_5->delta_frame_id_length_minus_2 = FUNC_7(&VAR_4, 4);
            VAR_5->additional_frame_id_length_minus_1 = FUNC_7(&VAR_4, 3);
        }
    }
    VAR_5->use_128x128_superblock = FUNC_8(&VAR_4);
    VAR_5->enable_filter_intra = FUNC_8(&VAR_4);
    VAR_5->enable_intra_edge_filter = FUNC_8(&VAR_4);
    if(!VAR_6)
    {
        VAR_5->enable_interintra_compound = FUNC_8(&VAR_4);
        VAR_5->enable_masked_compound = FUNC_8(&VAR_4);
        VAR_5->enable_warped_motion = FUNC_8(&VAR_4);
        VAR_5->enable_dual_filter = FUNC_8(&VAR_4);
        VAR_5->enable_order_hint = FUNC_8(&VAR_4);
        if(VAR_5->enable_order_hint)
        {
            VAR_5->enable_jnt_comp = FUNC_8(&VAR_4);
            VAR_5->enable_ref_frame_mvs = FUNC_8(&VAR_4);
        }
        const obu_u1_t VAR_10 = FUNC_8(&VAR_4);
        if(!VAR_10)
            VAR_5->seq_force_screen_content_tools = FUNC_8(&VAR_4);

        if(VAR_5->seq_force_screen_content_tools)
        {
            const obu_u1_t VAR_11 = FUNC_8(&VAR_4);
            if(!VAR_11)
                VAR_5->seq_force_integer_mv = FUNC_8(&VAR_4);
        }

        if(VAR_5->enable_order_hint)
            VAR_5->order_hint_bits_minus_1 = FUNC_7(&VAR_4, 3);
    }
    VAR_5->enable_superres = FUNC_8(&VAR_4);
    VAR_5->enable_cdef = FUNC_8(&VAR_4);
    VAR_5->enable_restoration = FUNC_8(&VAR_4);
    FUNC_1(&VAR_4, &VAR_5->color_config, VAR_5->seq_profile);
    if(FUNC_9(&VAR_4) < 1)
    {
        FUNC_0(VAR_5);
        return ((void*)0);
    }
    VAR_5->film_grain_params_present = FUNC_8(&VAR_4);

    return VAR_5;
}
