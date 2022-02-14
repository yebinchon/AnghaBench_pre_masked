
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {int b_new_sps; int b_new_pps; int b_slice; int i_recovery_frame_cnt; int i_pic_struct; scalar_t__ i_dpb_output_delay; TYPE_1__ slice; void* i_frame_pts; void* i_frame_dts; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_0( decoder_sys_t *VAR_4 )
{
    VAR_4->i_frame_dts = VAR_3;
    VAR_4->i_frame_pts = VAR_3;
    VAR_4->slice.type = VAR_0;
    VAR_4->b_new_sps = 0;
    VAR_4->b_new_pps = 0;
    VAR_4->b_slice = 0;

    VAR_4->i_dpb_output_delay = 0;
    VAR_4->i_pic_struct = VAR_1;
    VAR_4->i_recovery_frame_cnt = VAR_2;
}
