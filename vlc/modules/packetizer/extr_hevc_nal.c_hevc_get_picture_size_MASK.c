
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int bottom_offset; unsigned int top_offset; unsigned int left_offset; unsigned int right_offset; } ;
struct TYPE_5__ {unsigned int pic_width_in_luma_samples; unsigned int pic_height_in_luma_samples; int chroma_format_idc; TYPE_1__ conf_win; scalar_t__ conformance_window_flag; } ;
typedef TYPE_2__ hevc_sequence_parameter_set_t ;



bool FUNC_0( const hevc_sequence_parameter_set_t *VAR_0,
                            unsigned *VAR_1, unsigned *VAR_2, unsigned *VAR_3, unsigned *VAR_4 )
{
    *VAR_1 = *VAR_3 = VAR_0->pic_width_in_luma_samples;
    *VAR_2 = *VAR_4 = VAR_0->pic_height_in_luma_samples;
    if( VAR_0->conformance_window_flag )
    {
        unsigned VAR_5, VAR_6;

        if( VAR_0->chroma_format_idc == 1 )
        {
            VAR_5 = 2;
            VAR_6 = 2;
        }
        else if( VAR_0->chroma_format_idc == 2 )
        {
            VAR_5 = 2;
            VAR_6 = 1;
        }
        else
        {
            VAR_5 = 1;
            VAR_6 = 1;
        }

        *VAR_4 -= (VAR_0->conf_win.bottom_offset + VAR_0->conf_win.top_offset) * VAR_6;
        *VAR_3 -= (VAR_0->conf_win.left_offset + VAR_0->conf_win.right_offset) * VAR_5;
    }
    return 1;
}
