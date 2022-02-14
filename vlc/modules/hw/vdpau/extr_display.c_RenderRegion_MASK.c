
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_21__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vout_display_t ;
struct TYPE_22__ {int width; int height; int vdp; int device; } ;
typedef TYPE_4__ vout_display_sys_t ;
typedef int uint32_t ;
struct TYPE_23__ {int i_original_picture_width; int i_original_picture_height; float i_alpha; } ;
typedef TYPE_5__ subpicture_t ;
struct TYPE_20__ {int i_visible_width; int i_visible_height; } ;
struct TYPE_24__ {int i_x; int i_y; float i_alpha; TYPE_2__ fmt; TYPE_7__* p_picture; } ;
typedef TYPE_6__ subpicture_region_t ;
struct TYPE_25__ {TYPE_1__* p; } ;
typedef TYPE_7__ picture_t ;
typedef scalar_t__ VdpStatus ;
struct TYPE_26__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_8__ VdpRect ;
typedef int VdpRGBAFormat ;
struct TYPE_27__ {int blend_constant; int blend_equation_alpha; int blend_equation_color; int blend_factor_destination_alpha; int blend_factor_source_alpha; int blend_factor_destination_color; int blend_factor_source_color; int struct_version; } ;
typedef TYPE_9__ VdpOutputSurfaceRenderBlendState ;
typedef int VdpOutputSurface ;
struct TYPE_18__ {float member_0; float member_1; float member_2; float member_3; } ;
typedef TYPE_10__ VdpColor ;
typedef int VdpBitmapSurface ;
struct TYPE_19__ {void* p_pixels; int i_pitch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_3__*,char*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,void const**,int *,int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_8__*,int ,int *,TYPE_10__*,TYPE_9__*,int ) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_10, VdpOutputSurface VAR_11,
                         const subpicture_t *VAR_12,
                         const subpicture_region_t *VAR_13)
{
    vout_display_sys_t *VAR_14 = VAR_10->sys;
    VdpBitmapSurface VAR_15;



    VdpRGBAFormat VAR_16 = VAR_8;

    VdpStatus VAR_17;


    VAR_17 = FUNC_1(VAR_14->vdp, VAR_14->device, VAR_16,
        VAR_13->fmt.i_visible_width, VAR_13->fmt.i_visible_height, VAR_0,
                                    &VAR_15);
    if (VAR_17 != VAR_9)
    {
        FUNC_0(VAR_10, "%s creation failure: %s", "bitmap surface",
                FUNC_4(VAR_14->vdp, VAR_17));
        return;
    }


    picture_t *VAR_18 = VAR_13->p_picture;
    const void *VAR_19 = VAR_18->p[0].p_pixels;
    uint32_t VAR_20 = VAR_18->p[0].i_pitch;

    VAR_17 = FUNC_3(VAR_14->vdp, VAR_15, &VAR_19, &VAR_20,
                                             ((void*)0));
    if (VAR_17 != VAR_9)
    {
        FUNC_0(VAR_10, "subpicture upload failure: %s",
                FUNC_4(VAR_14->vdp, VAR_17));
        goto out;
    }


    VdpRect VAR_21 = {
        VAR_13->i_x * VAR_14->width
            / VAR_12->i_original_picture_width,
        VAR_13->i_y * VAR_14->height
            / VAR_12->i_original_picture_height,
        (VAR_13->i_x + VAR_13->fmt.i_visible_width) * VAR_14->width
            / VAR_12->i_original_picture_width,
        (VAR_13->i_y + VAR_13->fmt.i_visible_height) * VAR_14->height
            / VAR_12->i_original_picture_height,
    };
    VdpColor VAR_22 = { 1.f, 1.f, 1.f,
        VAR_13->i_alpha * VAR_12->i_alpha / 65025.f };
    VdpOutputSurfaceRenderBlendState VAR_23 = {
        .struct_version = VAR_6,
        .blend_factor_source_color =
            VAR_4,
        .blend_factor_destination_color =
            VAR_3,
        .blend_factor_source_alpha =
            VAR_5,
        .blend_factor_destination_alpha =
            VAR_2,
        .blend_equation_color = VAR_1,
        .blend_equation_alpha = VAR_1,
        .blend_constant = { 0.f, 0.f, 0.f, 0.f },
    };

    VAR_17 = FUNC_5(VAR_14->vdp, VAR_11, &VAR_21,
                                             VAR_15, ((void*)0), &VAR_22, &VAR_23, 0);
    if (VAR_17 != VAR_9)
        FUNC_0(VAR_10, "blending failure: %s",
                FUNC_4(VAR_14->vdp, VAR_17));

out:
    FUNC_2(VAR_14->vdp, VAR_15);
}
