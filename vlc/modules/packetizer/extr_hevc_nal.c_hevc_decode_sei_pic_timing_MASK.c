
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ frame_field_info_present_flag; } ;
struct TYPE_8__ {TYPE_1__ vui; } ;
typedef TYPE_2__ hevc_sequence_parameter_set_t ;
struct TYPE_9__ {int source_scan_type; void* pic_struct; } ;
typedef TYPE_3__ hevc_sei_pic_timing_t ;
typedef int bs_t ;


 void* FUNC_0 (int *,int) ;
 TYPE_3__* FUNC_1 (int) ;

hevc_sei_pic_timing_t * FUNC_2( bs_t *VAR_0,
                                                    const hevc_sequence_parameter_set_t *VAR_1 )
{
    hevc_sei_pic_timing_t *VAR_2 = FUNC_1(sizeof(*VAR_2));
    if( VAR_2 )
    {
        if( VAR_1->vui.frame_field_info_present_flag )
        {
            VAR_2->pic_struct = FUNC_0( VAR_0, 4 );
            VAR_2->source_scan_type = FUNC_0( VAR_0, 2 );
        }
        else
        {
            VAR_2->pic_struct = 0;
            VAR_2->source_scan_type = 1;
        }
    }
    return VAR_2;
}
