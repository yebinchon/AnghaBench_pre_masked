
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int vlc_video_context ;
struct TYPE_26__ {int * ops; TYPE_3__* sys; } ;
typedef TYPE_2__ vlc_va_t ;
struct TYPE_25__ {scalar_t__ config_id; scalar_t__ context_id; int display; } ;
struct TYPE_27__ {int * va_pool; int * vctx; TYPE_1__ hw_ctx; int * render_targets; } ;
typedef TYPE_3__ vlc_va_sys_t ;
typedef int vlc_object_t ;
struct TYPE_28__ {scalar_t__ type; int opaque; } ;
typedef TYPE_4__ vlc_decoder_device ;
struct TYPE_29__ {scalar_t__ i_chroma; } ;
typedef TYPE_5__ video_format_t ;
struct va_pool_cfg {TYPE_3__* member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_30__ {TYPE_5__ video; } ;
typedef TYPE_6__ es_format_t ;
typedef int VASurfaceID ;
typedef int VAProfile ;
typedef int VADisplay ;
struct TYPE_31__ {int coded_height; int coded_width; } ;
typedef int AVPixFmtDescriptor ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (TYPE_7__*,TYPE_6__ const*,int *,int*,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_1 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_2 (int const*) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (TYPE_2__*,struct va_pool_cfg*) ;
 int FUNC_11 (TYPE_2__*,int *,TYPE_7__*,TYPE_5__*,unsigned int) ;
 scalar_t__ FUNC_12 (int *,int ,int ,int ,int) ;
 scalar_t__ FUNC_13 (int *,int ,scalar_t__,int ,int ,int ,int *,unsigned int) ;
 int * FUNC_14 (TYPE_4__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_15(vlc_va_t *VAR_15, AVCodecContext *VAR_16, const AVPixFmtDescriptor *VAR_17,
                  const es_format_t *VAR_18, vlc_decoder_device *VAR_19,
                  video_format_t *VAR_20, vlc_video_context **VAR_21)
{
    FUNC_2(VAR_17);
    if ( (VAR_20->i_chroma != VAR_7 &&
          VAR_20->i_chroma != VAR_8) || VAR_19 == ((void*)0) ||
        VAR_19->type != VAR_9)
        return VAR_10;

    vlc_va_sys_t *VAR_22 = FUNC_4(sizeof *VAR_22);
    if (FUNC_7(VAR_22 == ((void*)0)))
        return VAR_11;
    FUNC_5(VAR_22, 0, sizeof (*VAR_22));

    vlc_object_t *VAR_23 = FUNC_1(VAR_15);

    int VAR_24 = VAR_10;

    VADisplay VAR_25 = VAR_19->opaque;

    VAProfile VAR_26;
    unsigned VAR_27;
    int VAR_28;
    if (FUNC_0(VAR_16, VAR_18, &VAR_26, &VAR_28, &VAR_27) != VAR_12)
        goto error;


    VAR_22->hw_ctx.display = VAR_25;
    VAR_22->hw_ctx.config_id = VAR_5;
    VAR_22->hw_ctx.context_id = VAR_5;
    VAR_15->sys = VAR_22;

    video_format_t VAR_29 = VAR_18->video;
    VAR_29.i_chroma = VAR_28;

    struct va_pool_cfg VAR_30 = {
        VAR_1,
        VAR_2,
        VAR_0,
        VAR_3,
        VAR_22,
    };
    VAR_22->va_pool = FUNC_10(VAR_15, &VAR_30);
    if (VAR_22->va_pool == ((void*)0))
        goto error;

    int VAR_31 = FUNC_11(VAR_15, VAR_22->va_pool, VAR_16, &VAR_29, VAR_27);
    if (VAR_31 != VAR_12)
        goto error;

    VASurfaceID *VAR_32 = VAR_22->render_targets;

    VAR_22->hw_ctx.config_id =
        FUNC_12(VAR_23, VAR_22->hw_ctx.display, VAR_26,
                                      VAR_4, VAR_28);
    if (VAR_22->hw_ctx.config_id == VAR_5)
        goto error;


    VAR_22->hw_ctx.context_id =
        FUNC_13(VAR_23, VAR_22->hw_ctx.display, VAR_22->hw_ctx.config_id,
                                VAR_16->coded_width, VAR_16->coded_height, VAR_6,
                                VAR_32, VAR_27);
    if (VAR_22->hw_ctx.context_id == VAR_5)
        goto error;

    FUNC_6(VAR_15, "Using %s", FUNC_8(VAR_22->hw_ctx.display));

    VAR_22->vctx = FUNC_14( VAR_19, VAR_13, 0, ((void*)0) );
    if (VAR_22->vctx == ((void*)0))
        goto error;

    VAR_15->ops = &VAR_14;
    *VAR_21 = VAR_22->vctx;
    return VAR_12;

error:
    if (VAR_22->va_pool != ((void*)0))
        FUNC_9(VAR_22->va_pool);
    else
        FUNC_3(VAR_22);
    return VAR_24;
}
