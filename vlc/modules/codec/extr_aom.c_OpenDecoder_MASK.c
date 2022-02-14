
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct aom_codec_dec_cfg {int allow_lowbitdepth; int threads; } ;
struct TYPE_11__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int color_range; int space; int transfer; int primaries; int i_height; int i_width; } ;
struct TYPE_12__ {scalar_t__ i_codec; TYPE_3__ video; } ;
struct TYPE_9__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int color_range; int space; int transfer; int primaries; int i_height; int i_width; } ;
struct TYPE_10__ {TYPE_1__ video; int i_codec; } ;
struct TYPE_13__ {TYPE_4__ fmt_in; TYPE_2__ fmt_out; int pf_flush; int pf_decode; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_14__ {int ctx; scalar_t__ i_next_frame_priv; } ;
typedef TYPE_6__ decoder_sys_t ;
typedef int aom_codec_iface_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int const*,struct aom_codec_dec_cfg*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_6__* FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int,int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(vlc_object_t *VAR_9)
{
    decoder_t *VAR_10 = (decoder_t *)VAR_9;
    const aom_codec_iface_t *VAR_11;
    int VAR_12;

    if (VAR_10->fmt_in.i_codec != VAR_3)
        return VAR_5;

    VAR_11 = &VAR_8;
    VAR_12 = 1;

    decoder_sys_t *VAR_13 = FUNC_6(sizeof(*VAR_13));
    if (!VAR_13)
        return VAR_6;
    VAR_10->p_sys = VAR_13;

    VAR_13->i_next_frame_priv = 0;

    struct aom_codec_dec_cfg VAR_14 = {
        .threads = FUNC_1(FUNC_8(), 16),
        .allow_lowbitdepth = 1
    };

    FUNC_7(VAR_9, "AV%d: using libaom version %s (build options %s)",
        VAR_12, FUNC_4(), FUNC_2());

    if (FUNC_3(&VAR_13->ctx, VAR_11, &VAR_14, 0) != VAR_0) {
        FUNC_0(VAR_9, &VAR_13->ctx, "Failed to initialize decoder");
        FUNC_5(VAR_13);
        return VAR_5;;
    }

    VAR_10->pf_decode = VAR_1;
    VAR_10->pf_flush = VAR_2;

    VAR_10->fmt_out.video.i_width = VAR_10->fmt_in.video.i_width;
    VAR_10->fmt_out.video.i_height = VAR_10->fmt_in.video.i_height;
    VAR_10->fmt_out.i_codec = VAR_4;

    if (VAR_10->fmt_in.video.i_sar_num > 0 && VAR_10->fmt_in.video.i_sar_den > 0) {
        VAR_10->fmt_out.video.i_sar_num = VAR_10->fmt_in.video.i_sar_num;
        VAR_10->fmt_out.video.i_sar_den = VAR_10->fmt_in.video.i_sar_den;
    }
    VAR_10->fmt_out.video.primaries = VAR_10->fmt_in.video.primaries;
    VAR_10->fmt_out.video.transfer = VAR_10->fmt_in.video.transfer;
    VAR_10->fmt_out.video.space = VAR_10->fmt_in.video.space;
    VAR_10->fmt_out.video.color_range = VAR_10->fmt_in.video.color_range;

    return VAR_7;
}
