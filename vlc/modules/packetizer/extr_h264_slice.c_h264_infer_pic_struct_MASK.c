
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_bottom_field_flag; scalar_t__ i_field_pic_flag; } ;
typedef TYPE_2__ h264_slice_t ;
struct TYPE_6__ {int b_pic_struct_present_flag; } ;
struct TYPE_8__ {TYPE_1__ vui; } ;
typedef TYPE_3__ h264_sequence_parameter_set_t ;



__attribute__((used)) static uint8_t FUNC_0( const h264_sequence_parameter_set_t *VAR_0,
                                      const h264_slice_t *VAR_1,
                                      uint8_t VAR_2, int VAR_3, int VAR_4 )
{

    if( !VAR_0->vui.b_pic_struct_present_flag || VAR_2 >= 9 )
    {
        if( VAR_1->i_field_pic_flag )
            VAR_2 = 1 + VAR_1->i_bottom_field_flag;
        else if( VAR_3 == VAR_4 )
            VAR_2 = 0;
        else if( VAR_3 < VAR_4 )
            VAR_2 = 3;
        else
            VAR_2 = 4;
    }

    return VAR_2;
}
