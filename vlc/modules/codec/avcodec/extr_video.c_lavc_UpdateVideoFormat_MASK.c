
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int vlc_decoder_device ;
struct TYPE_19__ {scalar_t__ max_luminance; } ;
struct TYPE_22__ {int i_frame_rate; int lighting; TYPE_1__ mastering; int pose; int multiview_mode; int projection_mode; int orientation; int i_chroma; int * p_palette; int i_frame_rate_base; } ;
typedef TYPE_4__ video_format_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_20__ {int lighting; TYPE_1__ mastering; int pose; int multiview_mode; int projection_mode; int orientation; } ;
struct TYPE_21__ {TYPE_2__ video; } ;
struct TYPE_17__ {TYPE_4__ video; } ;
struct TYPE_23__ {TYPE_3__ fmt_in; TYPE_13__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_18__ {scalar_t__ i_divider_num; } ;
struct TYPE_24__ {TYPE_15__ pts; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_25__ {int ticks_per_frame; } ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_15__*,int,int ) ;
 int FUNC_2 (TYPE_15__*,int,int ) ;
 int * FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_13__*,int ,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,TYPE_7__*,int,int) ;

__attribute__((used)) static int FUNC_6(decoder_t *VAR_1, AVCodecContext *VAR_2,
                                  enum AVPixelFormat VAR_3,
                                  enum AVPixelFormat VAR_4,
                                  vlc_decoder_device **VAR_5)
{
    video_format_t VAR_6;
    int VAR_7;

    VAR_7 = FUNC_5(VAR_1, &VAR_6, VAR_2, VAR_3, VAR_4);
    if (VAR_7)
        return VAR_7;

    decoder_sys_t *VAR_8 = VAR_1->p_sys;


    if(VAR_8->pts.i_divider_num)
        FUNC_1(&VAR_8->pts, VAR_6.i_frame_rate *
                                 FUNC_0(VAR_2->ticks_per_frame, 1),
                                 VAR_6.i_frame_rate_base);
    else
        FUNC_2(&VAR_8->pts, VAR_6.i_frame_rate *
                               FUNC_0(VAR_2->ticks_per_frame, 1),
                               VAR_6.i_frame_rate_base);

    VAR_6.p_palette = VAR_1->fmt_out.video.p_palette;
    VAR_1->fmt_out.video.p_palette = ((void*)0);

    FUNC_4(&VAR_1->fmt_out, VAR_0, VAR_6.i_chroma);
    VAR_1->fmt_out.video = VAR_6;
    VAR_1->fmt_out.video.orientation = VAR_1->fmt_in.video.orientation;
    VAR_1->fmt_out.video.projection_mode = VAR_1->fmt_in.video.projection_mode;
    VAR_1->fmt_out.video.multiview_mode = VAR_1->fmt_in.video.multiview_mode;
    VAR_1->fmt_out.video.pose = VAR_1->fmt_in.video.pose;
    if ( VAR_1->fmt_in.video.mastering.max_luminance )
        VAR_1->fmt_out.video.mastering = VAR_1->fmt_in.video.mastering;
    VAR_1->fmt_out.video.lighting = VAR_1->fmt_in.video.lighting;

    if (VAR_5)
    {
        *VAR_5 = FUNC_3(VAR_1);
        return *VAR_5 == ((void*)0);
    }
    return 0;
}
