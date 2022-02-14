
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_nal_ref_idc; scalar_t__ type; } ;
typedef TYPE_2__ h264_slice_t ;
struct TYPE_6__ {scalar_t__ i_max_num_reorder_frames; scalar_t__ b_valid; } ;
struct TYPE_8__ {scalar_t__ i_profile; TYPE_1__ vui; } ;
typedef TYPE_3__ h264_sequence_parameter_set_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0( const h264_slice_t *VAR_2,
                               const h264_sequence_parameter_set_t *VAR_3 )
{
    if( VAR_2->i_nal_ref_idc == 0 && VAR_2->type == VAR_0 )
        return 1;
    else if( VAR_3->vui.b_valid )
        return VAR_3->vui.i_max_num_reorder_frames == 0;
    else
        return VAR_3->i_profile == VAR_1;
}
