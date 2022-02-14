
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_frame_rate; int i_frame_rate_base; int i_sar_den; int i_sar_num; int i_height; int i_y_offset; int i_visible_height; int i_width; int i_x_offset; int i_visible_width; } ;
struct TYPE_8__ {TYPE_1__ video; int i_codec; } ;
struct TYPE_9__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_10__ {int i_frame_pts_delta; TYPE_5__* p_format; int p_schro; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_11__ {int frame_rate_denominator; int frame_rate_numerator; int chroma_format; int aspect_ratio_denominator; int aspect_ratio_numerator; int height; int top_offset; int clean_height; int width; int left_offset; int clean_width; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_3->p_sys;

    VAR_4->p_format = FUNC_1(VAR_4->p_schro);
    if( VAR_4->p_format == ((void*)0) ) return;

    VAR_4->i_frame_pts_delta = FUNC_0(1)
                            * VAR_4->p_format->frame_rate_denominator
                            / VAR_4->p_format->frame_rate_numerator;

    switch( VAR_4->p_format->chroma_format )
    {
    case 130: VAR_3->fmt_out.i_codec = VAR_0; break;
    case 129: VAR_3->fmt_out.i_codec = VAR_1; break;
    case 128: VAR_3->fmt_out.i_codec = VAR_2; break;
    default:
        VAR_3->fmt_out.i_codec = 0;
        break;
    }

    VAR_3->fmt_out.video.i_visible_width = VAR_4->p_format->clean_width;
    VAR_3->fmt_out.video.i_x_offset = VAR_4->p_format->left_offset;
    VAR_3->fmt_out.video.i_width = VAR_4->p_format->width;

    VAR_3->fmt_out.video.i_visible_height = VAR_4->p_format->clean_height;
    VAR_3->fmt_out.video.i_y_offset = VAR_4->p_format->top_offset;
    VAR_3->fmt_out.video.i_height = VAR_4->p_format->height;


    VAR_3->fmt_out.video.i_sar_num = VAR_4->p_format->aspect_ratio_numerator;
    VAR_3->fmt_out.video.i_sar_den = VAR_4->p_format->aspect_ratio_denominator;

    VAR_3->fmt_out.video.i_frame_rate =
        VAR_4->p_format->frame_rate_numerator;
    VAR_3->fmt_out.video.i_frame_rate_base =
        VAR_4->p_format->frame_rate_denominator;
}
