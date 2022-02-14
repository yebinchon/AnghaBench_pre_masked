
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef scalar_t__ vpx_codec_err_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_27__ {scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_width; scalar_t__ i_height; int i_sar_num; int i_sar_den; int pose; int multiview_mode; int projection_mode; int color_range; int space; int transfer; int primaries; } ;
typedef TYPE_5__ video_format_t ;
typedef int uint8_t ;
struct vpx_image {scalar_t__* user_priv; scalar_t__ d_w; scalar_t__ d_h; size_t cs; scalar_t__ range; int* stride; int ** planes; int fmt; } ;
struct vpx_codec_ctx {int dummy; } ;
struct TYPE_28__ {int i_planes; int b_progressive; scalar_t__ date; TYPE_4__* p; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_24__ {scalar_t__ primaries; int pose; int multiview_mode; int projection_mode; } ;
struct TYPE_25__ {TYPE_2__ video; } ;
struct TYPE_23__ {TYPE_5__ video; int i_codec; } ;
struct TYPE_29__ {TYPE_3__ fmt_in; TYPE_1__ fmt_out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ decoder_t ;
struct TYPE_30__ {struct vpx_codec_ctx ctx; } ;
typedef TYPE_8__ decoder_sys_t ;
struct TYPE_31__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_9__ block_t ;
struct TYPE_26__ {int i_pitch; int i_visible_lines; int * p_pixels; } ;
struct TYPE_22__ {int space; int transfer; int primaries; } ;


 size_t FUNC_0 (TYPE_10__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vpx_image*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_7__*,struct vpx_codec_ctx*,char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_9__*) ;
 TYPE_6__* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (scalar_t__*) ;
 scalar_t__* FUNC_9 (int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (TYPE_7__*,char*,int ) ;
 scalar_t__ FUNC_12 (struct vpx_codec_ctx*,int ,int ,scalar_t__*,int ) ;
 struct vpx_image* FUNC_13 (struct vpx_codec_ctx*,void const**) ;
 TYPE_10__* VAR_10 ;

__attribute__((used)) static int FUNC_14(decoder_t *VAR_11, block_t *VAR_12)
{
    decoder_sys_t *VAR_13 = VAR_11->p_sys;
    struct vpx_codec_ctx *VAR_14 = &VAR_13->ctx;

    if (VAR_12 == ((void*)0))
        return VAR_5;

    if (VAR_12->i_flags & (VAR_0)) {
        FUNC_4(VAR_12);
        return VAR_5;
    }


    vlc_tick_t *VAR_15 = FUNC_9(sizeof(*VAR_15));
    if (!VAR_15) {
        FUNC_4(VAR_12);
        return VAR_5;
    }

    *VAR_15 = (VAR_12->i_pts != VAR_6) ? VAR_12->i_pts : VAR_12->i_dts;

    vpx_codec_err_t VAR_16;
    VAR_16 = FUNC_12(VAR_14, VAR_12->p_buffer, VAR_12->i_buffer, VAR_15, 0);

    FUNC_4(VAR_12);

    if (VAR_16 != VAR_7) {
        FUNC_8(VAR_15);
        FUNC_2(VAR_11, VAR_14, "Failed to decode frame");
        if (VAR_16 == VAR_8)
            return VAR_4;
        else
            return VAR_5;
    }

    const void *VAR_17 = ((void*)0);
    struct vpx_image *VAR_18 = FUNC_13(VAR_14, &VAR_17);
    if (!VAR_18) {
        FUNC_8(VAR_15);
        return VAR_5;
    }


    VAR_15 = VAR_18->user_priv;
    vlc_tick_t VAR_19 = *VAR_15;
    FUNC_8(VAR_15);

    VAR_11->fmt_out.i_codec = FUNC_1(VAR_18);

    if( VAR_11->fmt_out.i_codec == 0 ) {
        FUNC_11(VAR_11, "Unsupported output colorspace %d", VAR_18->fmt);
        return VAR_5;
    }

    video_format_t *VAR_20 = &VAR_11->fmt_out.video;

    if (VAR_18->d_w != VAR_20->i_visible_width || VAR_18->d_h != VAR_20->i_visible_height) {
        VAR_20->i_visible_width = VAR_11->fmt_out.video.i_width = VAR_18->d_w;
        VAR_20->i_visible_height = VAR_11->fmt_out.video.i_height = VAR_18->d_h;
    }

    if( !VAR_11->fmt_out.video.i_sar_num || !VAR_11->fmt_out.video.i_sar_den )
    {
        VAR_11->fmt_out.video.i_sar_num = 1;
        VAR_11->fmt_out.video.i_sar_den = 1;
    }

    if(VAR_11->fmt_in.video.primaries == VAR_1 &&
       VAR_18->cs >= 0 && VAR_18->cs < FUNC_0(VAR_10))
    {
        VAR_20->primaries = VAR_10[VAR_18->cs].primaries;
        VAR_20->transfer = VAR_10[VAR_18->cs].transfer;
        VAR_20->space = VAR_10[VAR_18->cs].space;
        VAR_20->color_range = VAR_18->range == VAR_9 ? VAR_2 : VAR_3;
    }

    VAR_11->fmt_out.video.projection_mode = VAR_11->fmt_in.video.projection_mode;
    VAR_11->fmt_out.video.multiview_mode = VAR_11->fmt_in.video.multiview_mode;
    VAR_11->fmt_out.video.pose = VAR_11->fmt_in.video.pose;

    if (FUNC_7(VAR_11))
        return VAR_5;
    picture_t *VAR_21 = FUNC_5(VAR_11);
    if (!VAR_21)
        return VAR_5;

    for (int VAR_22 = 0; VAR_22 < VAR_21->i_planes; VAR_22++ ) {
        uint8_t *VAR_23 = VAR_18->planes[VAR_22];
        uint8_t *VAR_24 = VAR_21->p[VAR_22].p_pixels;
        int VAR_25 = VAR_18->stride[VAR_22];
        int VAR_26 = VAR_21->p[VAR_22].i_pitch;

        int VAR_27 = FUNC_3( VAR_25, VAR_26 );
        for( int VAR_28 = 0; VAR_28 < VAR_21->p[VAR_22].i_visible_lines; VAR_28++ ) {
            FUNC_10( VAR_24, VAR_23, VAR_27 );
            VAR_23 += VAR_25;
            VAR_24 += VAR_26;
        }
    }

    VAR_21->b_progressive = 1;
    VAR_21->date = VAR_19;

    FUNC_6(VAR_11, VAR_21);
    return VAR_5;
}
