
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i_height; int i_visible_height; int i_y_offset; int i_sar_den; int i_frame_rate; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_5__ {scalar_t__ b_double_rate; scalar_t__ b_half_height; } ;
struct deinterlace_ctx {TYPE_1__ settings; } ;



void FUNC_0( const struct deinterlace_ctx *VAR_0,
                             video_format_t *VAR_1, const video_format_t *VAR_2 )
{
    *VAR_1 = *VAR_2;

    if( VAR_0->settings.b_half_height )
    {
        VAR_1->i_height /= 2;
        VAR_1->i_visible_height /= 2;
        VAR_1->i_y_offset /= 2;
        VAR_1->i_sar_den *= 2;
    }

    if( VAR_0->settings.b_double_rate )
    {
        VAR_1->i_frame_rate *= 2;
    }
}
