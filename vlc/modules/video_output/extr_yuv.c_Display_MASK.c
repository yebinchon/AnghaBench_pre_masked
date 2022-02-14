
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int i_sar_num; int i_sar_den; int i_visible_width; int i_visible_height; int i_frame_rate; int i_frame_rate_base; int i_x_offset; int i_chroma; } ;
struct TYPE_10__ {int i_sar_den; int i_sar_num; int orientation; } ;
struct TYPE_11__ {TYPE_4__ fmt; TYPE_1__ source; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_12__ {int is_first; int f; scalar_t__ is_yuv4mpeg2; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef TYPE_4__ video_format_t ;
typedef int uint8_t ;
struct TYPE_14__ {int i_visible_pitch; int i_visible_lines; int i_pitch; int * p_pixels; } ;
typedef TYPE_5__ plane_t ;
struct TYPE_15__ {int i_planes; TYPE_5__* p; scalar_t__ b_top_field_first; scalar_t__ b_progressive; } ;
typedef TYPE_6__ picture_t ;
typedef int buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (int const*,int,int,int ) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_0, picture_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;


    video_format_t VAR_3 = VAR_0->fmt;

    if (FUNC_0(VAR_0->source.orientation))
    {
        VAR_3.i_sar_num = VAR_0->source.i_sar_den;
        VAR_3.i_sar_den = VAR_0->source.i_sar_num;
    }
    else
    {
        VAR_3.i_sar_num = VAR_0->source.i_sar_num;
        VAR_3.i_sar_den = VAR_0->source.i_sar_den;
    }


    char VAR_4;
    if (VAR_1->b_progressive)
        VAR_4 = 'p';
    else if (VAR_1->b_top_field_first)
        VAR_4 = 't';
    else
        VAR_4 = 'b';

    if (VAR_4 != 'p') {
        FUNC_4(VAR_0, "Received a non progressive frame, "
                     "it will be written as progressive.");
        VAR_4 = 'p';
    }


    if (!VAR_2->is_first) {
        const char *VAR_5;
        char VAR_6[5];
        if (VAR_2->is_yuv4mpeg2) {


            VAR_5 = "YUV4MPEG2";
        } else {
            FUNC_5(VAR_6, sizeof(VAR_6), "%4.4s",
                     (const char*)&VAR_3.i_chroma);
            VAR_5 = VAR_6;
        }

        FUNC_2(VAR_2->f, "%s W%d H%d F%d:%d I%c A%d:%d\n",
                VAR_5,
                VAR_3.i_visible_width, VAR_3.i_visible_height,
                VAR_3.i_frame_rate, VAR_3.i_frame_rate_base,
                VAR_4,
                VAR_3.i_sar_num, VAR_3.i_sar_den);
        VAR_2->is_first = 1;
    }


    FUNC_2(VAR_2->f, "FRAME\n");
    for (int VAR_7 = 0; VAR_7 < VAR_1->i_planes; VAR_7++) {
        const plane_t *VAR_8 = &VAR_1->p[VAR_7];
        const uint8_t *VAR_9 = VAR_8->p_pixels;

        VAR_9 += (VAR_0->fmt.i_x_offset * VAR_8->i_visible_pitch)
                  / VAR_0->fmt.i_visible_height;

        for( int VAR_10 = 0; VAR_10 < VAR_8->i_visible_lines; VAR_10++) {
            const size_t VAR_11 = FUNC_3(VAR_9, 1, VAR_8->i_visible_pitch,
                                          VAR_2->f);
            if (VAR_11 != (size_t)VAR_8->i_visible_pitch)
                FUNC_4(VAR_0, "only %zd of %d bytes written",
                         VAR_11, VAR_8->i_visible_pitch);

            VAR_9 += VAR_8->i_pitch;
        }
    }
    FUNC_1(VAR_2->f);
}
