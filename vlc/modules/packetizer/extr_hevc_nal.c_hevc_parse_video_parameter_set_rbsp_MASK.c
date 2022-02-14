
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int vps_max_sub_layers_minus1; int vps_max_layer_id; int vps_num_layer_set_minus1; void* vps_time_scale; void* vps_num_units_in_tick; void* vps_timing_info_present_flag; TYPE_1__* vps_max; void* vps_sub_layer_ordering_info_present_flag; int profile_tier_level; void* vps_temporal_id_nesting_flag; void* vps_max_layers_minus1; void* vps_base_layer_available_flag; void* vps_base_layer_internal_flag; void* vps_video_parameter_set_id; } ;
typedef TYPE_2__ hevc_video_parameter_set_t ;
typedef int bs_t ;
struct TYPE_4__ {void* max_latency_increase_plus1; void* num_reorder_pics; void* dec_pic_buffering_minus1; } ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,unsigned int,int *) ;

__attribute__((used)) static bool FUNC_6( bs_t *VAR_0,
                                                 hevc_video_parameter_set_t *VAR_1 )
{
    if( FUNC_3( VAR_0 ) < 134 )
        return 0;

    VAR_1->vps_video_parameter_set_id = FUNC_0( VAR_0, 4 );
    VAR_1->vps_base_layer_internal_flag = FUNC_1( VAR_0 );
    VAR_1->vps_base_layer_available_flag = FUNC_1( VAR_0 );
    VAR_1->vps_max_layers_minus1 = FUNC_0( VAR_0, 6 );
    VAR_1->vps_max_sub_layers_minus1 = FUNC_0( VAR_0, 3 );
    VAR_1->vps_temporal_id_nesting_flag = FUNC_1( VAR_0 );
    FUNC_4( VAR_0, 16 );

    if( !FUNC_5( VAR_0, 1, VAR_1->vps_max_sub_layers_minus1,
                                            &VAR_1->profile_tier_level ) )
        return 0;

    VAR_1->vps_sub_layer_ordering_info_present_flag = FUNC_1( VAR_0 );
    for( unsigned VAR_2= (VAR_1->vps_sub_layer_ordering_info_present_flag ?
                      0 : VAR_1->vps_max_sub_layers_minus1);
         VAR_2<= VAR_1->vps_max_sub_layers_minus1; VAR_2++ )
    {
        VAR_1->vps_max[VAR_2].dec_pic_buffering_minus1 = FUNC_2( VAR_0 );
        VAR_1->vps_max[VAR_2].num_reorder_pics = FUNC_2( VAR_0 );
        VAR_1->vps_max[VAR_2].max_latency_increase_plus1 = FUNC_2( VAR_0 );
    }
    if( FUNC_3( VAR_0 ) < 10 )
        return 0;

    VAR_1->vps_max_layer_id = FUNC_0( VAR_0, 6 );
    VAR_1->vps_num_layer_set_minus1 = FUNC_2( VAR_0 );

    FUNC_4( VAR_0, VAR_1->vps_num_layer_set_minus1 * (VAR_1->vps_max_layer_id + 1) );
    if( FUNC_3( VAR_0 ) < 2 )
        return 0;

    VAR_1->vps_timing_info_present_flag = FUNC_1( VAR_0 );
    if( VAR_1->vps_timing_info_present_flag )
    {
        VAR_1->vps_num_units_in_tick = FUNC_0( VAR_0, 32 );
        VAR_1->vps_time_scale = FUNC_0( VAR_0, 32 );
    }


    if( FUNC_3( VAR_0 ) < 1 )
        return 0;

    return 1;
}
