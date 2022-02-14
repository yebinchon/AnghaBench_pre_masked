
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_nal_type; int i_nal_ref_idc; int i_idr_pic_id; int i_pic_parameter_set_id; int i_bottom_field_flag; int i_pic_order_cnt_type; int i_pic_order_cnt_lsb; int i_delta_pic_order_cnt_bottom; int has_mmco5; scalar_t__ i_delta_pic_order_cnt1; scalar_t__ i_delta_pic_order_cnt0; scalar_t__ i_field_pic_flag; int type; scalar_t__ i_frame_num; } ;
typedef TYPE_1__ h264_slice_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0( h264_slice_t *VAR_1 )
{
    VAR_1->i_nal_type = -1;
    VAR_1->i_nal_ref_idc = -1;
    VAR_1->i_idr_pic_id = -1;
    VAR_1->i_frame_num = 0;
    VAR_1->type = VAR_0;
    VAR_1->i_pic_parameter_set_id = -1;
    VAR_1->i_field_pic_flag = 0;
    VAR_1->i_bottom_field_flag = -1;
    VAR_1->i_pic_order_cnt_type = -1;
    VAR_1->i_pic_order_cnt_lsb = -1;
    VAR_1->i_delta_pic_order_cnt_bottom = -1;
    VAR_1->i_delta_pic_order_cnt0 = 0;
    VAR_1->i_delta_pic_order_cnt1 = 0;
    VAR_1->has_mmco5 = 0;
}
