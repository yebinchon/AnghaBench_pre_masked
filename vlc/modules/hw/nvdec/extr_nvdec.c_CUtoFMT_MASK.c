
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_9__ {scalar_t__ i_chroma; unsigned int i_bits_per_pixel; int i_frame_rate_base; int i_frame_rate; scalar_t__ i_visible_height; scalar_t__ i_visible_width; scalar_t__ i_y_offset; scalar_t__ i_x_offset; int i_height; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_8__ {int denominator; int numerator; } ;
struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_10__ {int bit_depth_luma_minus8; TYPE_2__ frame_rate; TYPE_1__ display_area; int coded_height; int chroma_format; } ;
typedef TYPE_4__ CUVIDEOFORMAT ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(video_format_t *VAR_2, const CUVIDEOFORMAT *VAR_3)
{

    unsigned int VAR_4 = VAR_3->bit_depth_luma_minus8 + 8;
    vlc_fourcc_t VAR_5;
    if (FUNC_1(VAR_2->i_chroma))
        VAR_5 = VAR_2->i_chroma;
    else
        VAR_5 = FUNC_0(VAR_3->chroma_format, VAR_4);
    if (VAR_5 == 0)
        return VAR_0;

    VAR_2->i_chroma = VAR_5;

    VAR_2->i_height = VAR_3->coded_height;
    VAR_2->i_x_offset = VAR_3->display_area.left;
    VAR_2->i_y_offset = VAR_3->display_area.top;
    VAR_2->i_visible_width = VAR_3->display_area.right - VAR_3->display_area.left;
    VAR_2->i_visible_height = VAR_3->display_area.bottom - VAR_3->display_area.top;

    VAR_2->i_frame_rate = VAR_3->frame_rate.numerator;
    VAR_2->i_frame_rate_base = VAR_3->frame_rate.denominator;
    VAR_2->i_bits_per_pixel = VAR_4;
    return VAR_1;
}
