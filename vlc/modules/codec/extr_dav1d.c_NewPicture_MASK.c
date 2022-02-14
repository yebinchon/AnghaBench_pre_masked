
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_23__ {int i_visible_width; int i_visible_height; int i_width; int i_height; int i_sar_num; int i_sar_den; int i_chroma; int pose; int multiview_mode; int projection_mode; int color_range; int space; int transfer; int primaries; } ;
typedef TYPE_7__ video_format_t ;
struct TYPE_24__ {TYPE_6__* p; } ;
typedef TYPE_8__ picture_t ;
struct TYPE_21__ {int i_codec; TYPE_7__ video; } ;
struct TYPE_19__ {scalar_t__ primaries; int pose; int multiview_mode; int projection_mode; } ;
struct TYPE_20__ {TYPE_3__ video; } ;
struct TYPE_25__ {TYPE_5__ fmt_out; TYPE_4__ fmt_in; } ;
typedef TYPE_9__ decoder_t ;
struct TYPE_22__ {scalar_t__ i_pitch; int p_pixels; } ;
struct TYPE_18__ {scalar_t__ color_range; int mtrx; int trc; int pri; } ;
struct TYPE_17__ {int w; int h; } ;
struct TYPE_16__ {scalar_t__* stride; TYPE_8__* allocator_data; int * data; TYPE_2__* seq_hdr; TYPE_1__ p; } ;
typedef TYPE_10__ Dav1dPicture ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (int) ;
 TYPE_8__* FUNC_2 (TYPE_9__*) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(Dav1dPicture *VAR_3, void *VAR_4)
{
    decoder_t *VAR_5 = VAR_4;

    video_format_t *VAR_6 = &VAR_5->fmt_out.video;

    VAR_6->i_visible_width = VAR_3->p.w;
    VAR_6->i_visible_height = VAR_3->p.h;
    VAR_6->i_width = (VAR_3->p.w + 0x7F) & ~0x7F;
    VAR_6->i_height = (VAR_3->p.h + 0x7F) & ~0x7F;

    if( !VAR_6->i_sar_num || !VAR_6->i_sar_den )
    {
        VAR_6->i_sar_num = 1;
        VAR_6->i_sar_den = 1;
    }

    if(VAR_5->fmt_in.video.primaries == VAR_0 && VAR_3->seq_hdr)
    {
        VAR_6->primaries = FUNC_4(VAR_3->seq_hdr->pri);
        VAR_6->transfer = FUNC_6(VAR_3->seq_hdr->trc);
        VAR_6->space = FUNC_5(VAR_3->seq_hdr->mtrx);
        VAR_6->color_range = VAR_3->seq_hdr->color_range ? VAR_1 : VAR_2;
    }

    VAR_6->projection_mode = VAR_5->fmt_in.video.projection_mode;
    VAR_6->multiview_mode = VAR_5->fmt_in.video.multiview_mode;
    VAR_6->pose = VAR_5->fmt_in.video.pose;
    VAR_5->fmt_out.video.i_chroma = VAR_5->fmt_out.i_codec = FUNC_0(VAR_3);

    if (FUNC_3(VAR_5) == 0)
    {
        picture_t *VAR_7 = FUNC_2(VAR_5);
        if (FUNC_7(VAR_7 != ((void*)0)))
        {
            VAR_3->data[0] = VAR_7->p[0].p_pixels;
            VAR_3->stride[0] = VAR_7->p[0].i_pitch;
            VAR_3->data[1] = VAR_7->p[1].p_pixels;
            VAR_3->data[2] = VAR_7->p[2].p_pixels;
            FUNC_1(VAR_7->p[1].i_pitch == VAR_7->p[2].i_pitch);
            VAR_3->stride[1] = VAR_7->p[1].i_pitch;
            VAR_3->allocator_data = VAR_7;

            return 0;
        }
    }
    return -1;
}
