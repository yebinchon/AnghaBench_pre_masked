
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_5__ {int aspect_ratio_idc; unsigned int sar_width; unsigned int sar_height; } ;
struct TYPE_6__ {TYPE_1__ ar; } ;
struct TYPE_7__ {TYPE_2__ vui; scalar_t__ vui_parameters_present_flag; } ;
typedef TYPE_3__ hevc_sequence_parameter_set_t ;



bool FUNC_0( const hevc_sequence_parameter_set_t *VAR_0,
                            unsigned *VAR_1, unsigned *VAR_2 )
{
    if( VAR_0->vui_parameters_present_flag )
    {
        if( VAR_0->vui.ar.aspect_ratio_idc != 255 )
        {
            static const uint8_t VAR_3[16][2] =
            {
                { 1, 1 },
                { 12, 11 },
                { 10, 11 },
                { 16, 11 },
                { 40, 33 },
                { 24, 11 },
                { 20, 11 },
                { 32, 11 },
                { 80, 33 },
                { 18, 11 },
                { 15, 11 },
                { 64, 33 },
                { 160, 99 },
                { 4, 3 },
                { 3, 2 },
                { 2, 1 },
            };
            if( VAR_0->vui.ar.aspect_ratio_idc > 0 &&
                VAR_0->vui.ar.aspect_ratio_idc < 17 )
            {
                *VAR_1 = VAR_3[VAR_0->vui.ar.aspect_ratio_idc - 1][0];
                *VAR_2 = VAR_3[VAR_0->vui.ar.aspect_ratio_idc - 1][1];
                return 1;
            }
        }
        else
        {
            *VAR_1 = VAR_0->vui.ar.sar_width;
            *VAR_2 = VAR_0->vui.ar.sar_height;
            return 1;
        }
    }
    return 0;
}
