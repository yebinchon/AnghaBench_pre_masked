
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_frame_num; scalar_t__ i_pic_parameter_set_id; scalar_t__ i_field_pic_flag; int i_bottom_field_flag; int i_pic_order_cnt_type; scalar_t__ i_pic_order_cnt_lsb; scalar_t__ i_delta_pic_order_cnt_bottom; scalar_t__ i_delta_pic_order_cnt0; scalar_t__ i_delta_pic_order_cnt1; scalar_t__ i_nal_type; scalar_t__ i_idr_pic_id; int i_nal_ref_idc; } ;
typedef TYPE_1__ h264_slice_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0( const h264_slice_t *VAR_1, const h264_slice_t *VAR_2 )
{


    if( VAR_2->i_frame_num != VAR_1->i_frame_num ||
        VAR_2->i_pic_parameter_set_id != VAR_1->i_pic_parameter_set_id ||
        VAR_2->i_field_pic_flag != VAR_1->i_field_pic_flag ||
       !VAR_2->i_nal_ref_idc != !VAR_1->i_nal_ref_idc )
        return 1;
    if( (VAR_2->i_bottom_field_flag != -1) &&
        (VAR_1->i_bottom_field_flag != -1) &&
        (VAR_2->i_bottom_field_flag != VAR_1->i_bottom_field_flag) )
        return 1;
    if( VAR_2->i_pic_order_cnt_type == 0 &&
       ( VAR_2->i_pic_order_cnt_lsb != VAR_1->i_pic_order_cnt_lsb ||
         VAR_2->i_delta_pic_order_cnt_bottom != VAR_1->i_delta_pic_order_cnt_bottom ) )
        return 1;
    else if( VAR_2->i_pic_order_cnt_type == 1 &&
           ( VAR_2->i_delta_pic_order_cnt0 != VAR_1->i_delta_pic_order_cnt0 ||
             VAR_2->i_delta_pic_order_cnt1 != VAR_1->i_delta_pic_order_cnt1 ) )
        return 1;
    if( ( VAR_2->i_nal_type == VAR_0 || VAR_1->i_nal_type == VAR_0 ) &&
        ( VAR_2->i_nal_type != VAR_1->i_nal_type || VAR_2->i_idr_pic_id != VAR_1->i_idr_pic_id ) )
        return 1;

    return 0;
}
