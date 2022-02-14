
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
struct vpx_codec_iface {int dummy; } ;
struct vpx_codec_dec_cfg {int threads; } ;
struct TYPE_11__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int i_height; int i_width; } ;
struct TYPE_12__ {int i_codec; TYPE_3__ video; } ;
struct TYPE_9__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int i_height; int i_width; } ;
struct TYPE_10__ {TYPE_1__ video; } ;
struct TYPE_13__ {TYPE_4__ fmt_in; TYPE_2__ fmt_out; int pf_decode; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_14__ {int ctx; } ;
typedef TYPE_6__ decoder_sys_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,struct vpx_codec_iface const*,struct vpx_codec_dec_cfg*,int ) ;
 int FUNC_8 () ;
 struct vpx_codec_iface VAR_5 ;
 struct vpx_codec_iface VAR_6 ;

__attribute__((used)) static int FUNC_9(vlc_object_t *VAR_7)
{
    decoder_t *VAR_8 = (decoder_t *)VAR_7;
    const struct vpx_codec_iface *VAR_9;
    int VAR_10;

    switch (VAR_8->fmt_in.i_codec)
    {
    default:
        return VAR_1;
    }

    decoder_sys_t *VAR_11 = FUNC_3(sizeof(*VAR_11));
    if (!VAR_11)
        return VAR_2;
    VAR_8->p_sys = VAR_11;

    struct vpx_codec_dec_cfg VAR_12 = {
        .threads = FUNC_1(FUNC_5(), 16)
    };

    FUNC_4(VAR_7, "VP%d: using libvpx version %s (build options %s)",
        VAR_10, FUNC_8(), FUNC_6());

    if (FUNC_7(&VAR_11->ctx, VAR_9, &VAR_12, 0) != VAR_4) {
        FUNC_0(VAR_7, &VAR_11->ctx, "Failed to initialize decoder");
        FUNC_2(VAR_11);
        return VAR_1;;
    }

    VAR_8->pf_decode = VAR_0;

    VAR_8->fmt_out.video.i_width = VAR_8->fmt_in.video.i_width;
    VAR_8->fmt_out.video.i_height = VAR_8->fmt_in.video.i_height;

    if (VAR_8->fmt_in.video.i_sar_num > 0 && VAR_8->fmt_in.video.i_sar_den > 0) {
        VAR_8->fmt_out.video.i_sar_num = VAR_8->fmt_in.video.i_sar_num;
        VAR_8->fmt_out.video.i_sar_den = VAR_8->fmt_in.video.i_sar_den;
    }

    return VAR_3;
}
