
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_transfer_func_t ;
typedef int video_color_space_t ;
typedef int video_color_range_t ;
typedef int video_color_primaries_t ;
struct TYPE_6__ {int matrix_coeffs; int transfer_characteristics; int colour_primaries; } ;
struct TYPE_7__ {scalar_t__ video_full_range_flag; TYPE_1__ colour; } ;
struct TYPE_8__ {TYPE_2__ vs; } ;
struct TYPE_9__ {TYPE_3__ vui; int vui_parameters_present_flag; } ;
typedef TYPE_4__ hevc_sequence_parameter_set_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3( const hevc_sequence_parameter_set_t *VAR_2,
                           video_color_primaries_t *VAR_3,
                           video_transfer_func_t *VAR_4,
                           video_color_space_t *VAR_5,
                           video_color_range_t *VAR_6 )
{
    if( !VAR_2->vui_parameters_present_flag )
        return 0;
    *VAR_3 =
        FUNC_0( VAR_2->vui.vs.colour.colour_primaries );
    *VAR_4 =
        FUNC_2( VAR_2->vui.vs.colour.transfer_characteristics );
    *VAR_5 =
        FUNC_1( VAR_2->vui.vs.colour.matrix_coeffs );
    *VAR_6 = VAR_2->vui.vs.video_full_range_flag ? VAR_0 : VAR_1;
    return 1;
}
