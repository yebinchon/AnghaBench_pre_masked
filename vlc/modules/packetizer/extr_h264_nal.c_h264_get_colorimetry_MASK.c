
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_transfer_func_t ;
typedef int video_color_space_t ;
typedef int video_color_range_t ;
typedef int video_color_primaries_t ;
struct TYPE_6__ {scalar_t__ b_full_range; int i_matrix_coefficients; int i_transfer_characteristics; int i_colour_primaries; } ;
struct TYPE_5__ {TYPE_2__ colour; int b_valid; } ;
struct TYPE_7__ {TYPE_1__ vui; } ;
typedef TYPE_3__ h264_sequence_parameter_set_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3( const h264_sequence_parameter_set_t *VAR_2,
                           video_color_primaries_t *VAR_3,
                           video_transfer_func_t *VAR_4,
                           video_color_space_t *VAR_5,
                           video_color_range_t *VAR_6 )
{
    if( !VAR_2->vui.b_valid )
        return 0;
    *VAR_3 =
        FUNC_0( VAR_2->vui.colour.i_colour_primaries );
    *VAR_4 =
        FUNC_2( VAR_2->vui.colour.i_transfer_characteristics );
    *VAR_5 =
        FUNC_1( VAR_2->vui.colour.i_matrix_coefficients );
    *VAR_6 = VAR_2->vui.colour.b_full_range ? VAR_0 : VAR_1;
    return 1;
}
