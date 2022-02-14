
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_25__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct TYPE_33__ {int i_chroma; } ;
struct TYPE_31__ {int * subpicture_chromas; } ;
struct TYPE_34__ {scalar_t__ max_luminance; } ;
struct TYPE_36__ {scalar_t__ projection_mode; scalar_t__ i_visible_width; scalar_t__ i_visible_height; TYPE_3__ mastering; } ;
struct TYPE_35__ {int force; } ;
struct TYPE_38__ {TYPE_8__* sys; int close; int control; int display; int prepare; int pool; TYPE_2__ fmt; TYPE_1__ info; TYPE_5__ source; TYPE_4__ obj; } ;
typedef TYPE_7__ vout_display_t ;
struct TYPE_37__ {scalar_t__ MaxTextureWidth; scalar_t__ MaxTextureHeight; int SrcBlendCaps; int DestBlendCaps; int TextureCaps; int TextureOpCaps; } ;
struct TYPE_32__ {TYPE_6__ caps; } ;
struct TYPE_39__ {int reset_device; int lost_not_ready; scalar_t__ d3dregion_format; int sys; TYPE_25__ d3d_dev; int allow_hw_yuv; int hxdll; int area; int * swapCb; int hd3d; int * startEndRenderingCb; int * updateOutputCb; TYPE_7__* outside_opaque; } ;
typedef TYPE_8__ vout_display_sys_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_video_context ;
typedef int video_format_t ;
struct TYPE_40__ {int dev; } ;
typedef TYPE_9__ d3d9_video_context_t ;
struct TYPE_30__ {int adapter; int * device; } ;
typedef TYPE_10__ d3d9_decoder_device_t ;
typedef int HRESULT ;
typedef int * HMODULE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int *,int const*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int *) ;
 int FUNC_6 (TYPE_7__*,int *,int,TYPE_25__*) ;
 int FUNC_7 (int ,int *,TYPE_25__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_7__*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (int ) ;
 TYPE_9__* FUNC_14 (int *) ;
 TYPE_10__* FUNC_15 (int *) ;
 int * FUNC_16 (int ) ;
 int * FUNC_17 (int *,char*) ;
 int * VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_19 (TYPE_7__*) ;
 scalar_t__ VAR_16 ;
 TYPE_8__* FUNC_20 (int,int) ;
 int * VAR_17 ;
 int FUNC_21 (TYPE_8__*) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (TYPE_7__*,char*,...) ;
 int FUNC_25 (TYPE_7__*,char*) ;
 int FUNC_26 (TYPE_7__*,char*) ;
 void* FUNC_27 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_28 (TYPE_7__*,char*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,int *) ;

__attribute__((used)) static int FUNC_31(vout_display_t *VAR_18, const vout_display_cfg_t *VAR_19,
                video_format_t *VAR_20, vlc_video_context *VAR_21)
{
    vout_display_sys_t *VAR_22;

    if ( !VAR_18->obj.force && VAR_18->source.projection_mode != VAR_12)
        return VAR_14;

    if ( !VAR_18->obj.force && VAR_18->source.mastering.max_luminance != 0)
        return VAR_14;


    if (!VAR_18->obj.force)
    {
        bool VAR_23 = 0;
        HMODULE VAR_24 = FUNC_16(FUNC_18("kernel32.dll"));
        if (FUNC_23(VAR_24 != ((void*)0)))
            VAR_23 = FUNC_17(VAR_24, "EnumResourceLanguagesExW") != ((void*)0);
        if (!VAR_23)
            return VAR_14;
    }


    VAR_18->sys = VAR_22 = FUNC_20(1, sizeof(vout_display_sys_t));
    if (!VAR_22)
        return VAR_15;

    FUNC_0(VAR_18, &VAR_22->area, VAR_19);

    VAR_22->outside_opaque = FUNC_27( VAR_18, "vout-cb-opaque" );
    VAR_22->updateOutputCb = FUNC_27( VAR_18, "vout-cb-update-output" );
    VAR_22->swapCb = FUNC_27( VAR_18, "vout-cb-swap" );
    VAR_22->startEndRenderingCb = FUNC_27( VAR_18, "vout-cb-make-current" );

    if ( VAR_22->swapCb == ((void*)0) || VAR_22->startEndRenderingCb == ((void*)0) || VAR_22->updateOutputCb == ((void*)0) )
    {

        if (FUNC_3(FUNC_19(VAR_18), &VAR_22->area, &VAR_22->sys, 0))
            goto error;

        VAR_22->outside_opaque = VAR_18;
        VAR_22->updateOutputCb = VAR_11;
        VAR_22->swapCb = VAR_10;
        VAR_22->startEndRenderingCb = ((void*)0);
    }

    d3d9_decoder_device_t *VAR_25 = FUNC_15(VAR_21);
    if ( VAR_25 == ((void*)0) )
    {

        if (FUNC_5(VAR_18, &VAR_22->hd3d) != VAR_16)
            goto error;
    }
    if (VAR_25 != ((void*)0) && VAR_25->device != ((void*)0))
        FUNC_4( &VAR_22->hd3d, VAR_25->device );

    d3d9_video_context_t *VAR_26 = FUNC_14(VAR_21);
    HRESULT VAR_27;
    if (VAR_26 != ((void*)0))
        VAR_27 = FUNC_7(VAR_26->dev, &VAR_22->hd3d, &VAR_22->d3d_dev);
    else
        VAR_27 = FUNC_6(VAR_18, &VAR_22->hd3d, VAR_25 ? VAR_25->adapter : -1, &VAR_22->d3d_dev);

    if (FUNC_13(VAR_27)) {
        FUNC_24( VAR_18, "D3D9 Creation failed! (hr=0x%lX)", VAR_27);
        FUNC_8(&VAR_22->hd3d);
        FUNC_21(VAR_22);
        return VAR_14;
    }

    if ( VAR_18->source.i_visible_width > VAR_22->d3d_dev.caps.MaxTextureWidth ||
         VAR_18->source.i_visible_height > VAR_22->d3d_dev.caps.MaxTextureHeight )
    {
        FUNC_24(VAR_18, "Textures too large %ux%u max possible: %lx%lx",
                VAR_18->source.i_visible_width, VAR_18->source.i_visible_height,
                VAR_22->d3d_dev.caps.MaxTextureWidth,
                VAR_22->d3d_dev.caps.MaxTextureHeight);
        goto error;
    }

    if (VAR_22->swapCb == VAR_10)
        FUNC_1(FUNC_19(VAR_18), &VAR_22->area, &VAR_22->sys);

    VAR_22->hxdll = FUNC_11();
    if (!VAR_22->hxdll)
        FUNC_25(VAR_18, "cannot load Direct3D9 Shader Library; HLSL pixel shading will be disabled.");

    VAR_22->reset_device = 0;
    VAR_22->lost_not_ready = 0;
    VAR_22->allow_hw_yuv = FUNC_26(VAR_18, "directx-hw-yuv");


    video_format_t VAR_28;
    if (FUNC_12(VAR_18, &VAR_28)) {
        FUNC_24(VAR_18, "Direct3D9 could not be opened");
        goto error;
    }


    if (FUNC_28(VAR_18, "direct3d9-hw-blending") &&
        VAR_22->d3dregion_format != VAR_2 &&
        (VAR_22->d3d_dev.caps.SrcBlendCaps & VAR_4) &&
        (VAR_22->d3d_dev.caps.DestBlendCaps & VAR_3) &&
        (VAR_22->d3d_dev.caps.TextureCaps & VAR_5) &&
        (VAR_22->d3d_dev.caps.TextureOpCaps & VAR_7) &&
        (VAR_22->d3d_dev.caps.TextureOpCaps & VAR_6))
        VAR_18->info.subpicture_chromas = VAR_17;
    else
        VAR_18->info.subpicture_chromas = ((void*)0);

    FUNC_29(VAR_20);
    FUNC_30(VAR_20, &VAR_28);

    if ( FUNC_22(VAR_18->fmt.i_chroma) )
        VAR_18->pool = VAR_9;
    VAR_18->prepare = VAR_13;
    VAR_18->display = VAR_8;
    VAR_18->control = VAR_1;
    VAR_18->close = VAR_0;

    return VAR_16;
error:
    FUNC_9(VAR_18);
    FUNC_2(FUNC_19(VAR_18), &VAR_22->sys);
    FUNC_10(VAR_22);
    FUNC_21(VAR_18->sys);
    return VAR_14;
}
