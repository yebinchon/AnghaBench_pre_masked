
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pps_pic_parameter_set_id; scalar_t__ pps_seq_parameter_set_id; int num_tile_columns_minus1; int num_tile_rows_minus1; void* pps_extension_5bits; void* pps_3d_extension_flag; void* pps_multilayer_extension_flag; void* pps_range_extension_flag; void* pps_extension_present_flag; void* slice_header_extension_present_flag; void* log2_parallel_merge_level_minus2; void* lists_modification_present_flag; void* scaling_list_data_present_flag; void* pps_tc_offset_div2; void* pps_beta_offset_div2; void* pps_deblocking_filter_disabled_flag; void* deblocking_filter_override_enabled_flag; void* deblocking_filter_control_present_flag; void* pps_loop_filter_across_slices_enabled_flag; void* loop_filter_across_tiles_enabled_flag; void* uniform_spacing_flag; void* tiles_enabled_flag; void* entropy_coding_sync_enabled_flag; void* transquant_bypass_enable_flag; void* weighted_bipred_flag; void* weighted_pred_flag; void* pic_slice_level_chroma_qp_offsets_present_flag; void* pps_cr_qp_offset; void* pps_cb_qp_offset; void* diff_cu_qp_delta_depth; void* cu_qp_delta_enabled_flag; void* transform_skip_enabled_flag; void* constrained_intra_pred_flag; void* init_qp_minus26; void* num_ref_idx_l1_default_active_minus1; void* num_ref_idx_l0_default_active_minus1; void* cabac_init_present_flag; void* sign_data_hiding_enabled_flag; void* num_extra_slice_header_bits; void* output_flag_present_flag; void* dependent_slice_segments_enabled_flag; } ;
typedef TYPE_1__ hevc_picture_parameter_set_t ;
typedef int bs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6( bs_t *VAR_2,
                                               hevc_picture_parameter_set_t *VAR_3 )
{
    if( FUNC_4( VAR_2 ) < 1 )
        return 0;
    VAR_3->pps_pic_parameter_set_id = FUNC_3( VAR_2 );
    if( VAR_3->pps_pic_parameter_set_id > VAR_0 || FUNC_4( VAR_2 ) < 1 )
        return 0;
    VAR_3->pps_seq_parameter_set_id = FUNC_3( VAR_2 );
    if( VAR_3->pps_seq_parameter_set_id > VAR_1 )
        return 0;
    VAR_3->dependent_slice_segments_enabled_flag = FUNC_1( VAR_2 );
    VAR_3->output_flag_present_flag = FUNC_1( VAR_2 );
    VAR_3->num_extra_slice_header_bits = FUNC_0( VAR_2, 3 );
    VAR_3->sign_data_hiding_enabled_flag = FUNC_1( VAR_2 );
    VAR_3->cabac_init_present_flag = FUNC_1( VAR_2 );

    VAR_3->num_ref_idx_l0_default_active_minus1 = FUNC_3( VAR_2 );
    VAR_3->num_ref_idx_l1_default_active_minus1 = FUNC_3( VAR_2 );

    VAR_3->init_qp_minus26 = FUNC_2( VAR_2 );
    VAR_3->constrained_intra_pred_flag = FUNC_1( VAR_2 );
    VAR_3->transform_skip_enabled_flag = FUNC_1( VAR_2 );
    VAR_3->cu_qp_delta_enabled_flag = FUNC_1( VAR_2 );
    if( VAR_3->cu_qp_delta_enabled_flag )
        VAR_3->diff_cu_qp_delta_depth = FUNC_3( VAR_2 );

    if( FUNC_4( VAR_2 ) < 1 )
        return 0;

    VAR_3->pps_cb_qp_offset = FUNC_2( VAR_2 );
    VAR_3->pps_cr_qp_offset = FUNC_2( VAR_2 );
    VAR_3->pic_slice_level_chroma_qp_offsets_present_flag = FUNC_1( VAR_2 );
    VAR_3->weighted_pred_flag = FUNC_1( VAR_2 );
    VAR_3->weighted_bipred_flag = FUNC_1( VAR_2 );
    VAR_3->transquant_bypass_enable_flag = FUNC_1( VAR_2 );
    VAR_3->tiles_enabled_flag = FUNC_1( VAR_2 );
    VAR_3->entropy_coding_sync_enabled_flag = FUNC_1( VAR_2 );

    if( VAR_3->tiles_enabled_flag )
    {
        VAR_3->num_tile_columns_minus1 = FUNC_3( VAR_2 );
        VAR_3->num_tile_rows_minus1 = FUNC_3( VAR_2 );
        VAR_3->uniform_spacing_flag = FUNC_1( VAR_2 );
        if( !VAR_3->uniform_spacing_flag )
        {
            if( FUNC_4( VAR_2 ) < VAR_3->num_tile_columns_minus1 +
                                    VAR_3->num_tile_rows_minus1 + 1 )
                return 0;
            for( unsigned VAR_4=0; VAR_4< VAR_3->num_tile_columns_minus1; VAR_4++ )
                (void) FUNC_3( VAR_2 );
            for( unsigned VAR_5=0; VAR_5< VAR_3->num_tile_rows_minus1; VAR_5++ )
                (void) FUNC_3( VAR_2 );
        }
        VAR_3->loop_filter_across_tiles_enabled_flag = FUNC_1( VAR_2 );
    }

    VAR_3->pps_loop_filter_across_slices_enabled_flag = FUNC_1( VAR_2 );
    VAR_3->deblocking_filter_control_present_flag = FUNC_1( VAR_2 );
    if( VAR_3->deblocking_filter_control_present_flag )
    {
        VAR_3->deblocking_filter_override_enabled_flag = FUNC_1( VAR_2 );
        VAR_3->pps_deblocking_filter_disabled_flag = FUNC_1( VAR_2 );
        if( !VAR_3->pps_deblocking_filter_disabled_flag )
        {
            VAR_3->pps_beta_offset_div2 = FUNC_2( VAR_2 );
            VAR_3->pps_tc_offset_div2 = FUNC_2( VAR_2 );
        }
    }

    VAR_3->scaling_list_data_present_flag = FUNC_1( VAR_2 );
    if( VAR_3->scaling_list_data_present_flag && !FUNC_5( VAR_2 ) )
        return 0;

    VAR_3->lists_modification_present_flag = FUNC_1( VAR_2 );
    VAR_3->log2_parallel_merge_level_minus2 = FUNC_3( VAR_2 );
    VAR_3->slice_header_extension_present_flag = FUNC_1( VAR_2 );

    if( FUNC_4( VAR_2 ) < 1 )
        return 0;

    VAR_3->pps_extension_present_flag = FUNC_1( VAR_2 );
    if( VAR_3->pps_extension_present_flag )
    {
        VAR_3->pps_range_extension_flag = FUNC_1( VAR_2 );
        VAR_3->pps_multilayer_extension_flag = FUNC_1( VAR_2 );
        VAR_3->pps_3d_extension_flag = FUNC_1( VAR_2 );
        if( FUNC_4( VAR_2 ) < 5 )
            return 0;
        VAR_3->pps_extension_5bits = FUNC_0( VAR_2, 5 );
    }

    return 1;
}
