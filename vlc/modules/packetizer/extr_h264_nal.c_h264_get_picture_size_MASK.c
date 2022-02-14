
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int left_offset; unsigned int right_offset; unsigned int bottom_offset; unsigned int top_offset; } ;
struct TYPE_5__ {int frame_mbs_only_flag; int b_separate_colour_planes_flag; int i_chroma_idc; int pic_width_in_mbs_minus1; int pic_height_in_map_units_minus1; TYPE_1__ frame_crop; } ;
typedef TYPE_2__ h264_sequence_parameter_set_t ;



bool FUNC_0( const h264_sequence_parameter_set_t *VAR_0, unsigned *VAR_1, unsigned *VAR_2,
                            unsigned *VAR_3, unsigned *VAR_4 )
{
    unsigned VAR_5 = 1;
    unsigned VAR_6 = 2 - VAR_0->frame_mbs_only_flag;
    if( VAR_0->b_separate_colour_planes_flag != 1 )
    {
        if( VAR_0->i_chroma_idc > 0 )
        {
            unsigned VAR_7 = 2;
            unsigned VAR_8 = 2;
            if( VAR_0->i_chroma_idc > 1 )
            {
                VAR_8 = 1;
                if( VAR_0->i_chroma_idc > 2 )
                    VAR_7 = 1;
            }
            VAR_5 *= VAR_7;
            VAR_6 *= VAR_8;
        }
    }

    *VAR_1 = 16 * VAR_0->pic_width_in_mbs_minus1 + 16;
    *VAR_2 = 16 * VAR_0->pic_height_in_map_units_minus1 + 16;
    *VAR_2 *= ( 2 - VAR_0->frame_mbs_only_flag );

    *VAR_3 = *VAR_1 - ( VAR_0->frame_crop.left_offset + VAR_0->frame_crop.right_offset ) * VAR_5;
    *VAR_4 = *VAR_2 - ( VAR_0->frame_crop.bottom_offset + VAR_0->frame_crop.top_offset ) * VAR_6;

    return 1;
}
