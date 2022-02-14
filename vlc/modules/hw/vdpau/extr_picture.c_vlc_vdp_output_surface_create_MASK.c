
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int surface; int device; scalar_t__ gl_nv_surface; int vdp; } ;
typedef TYPE_1__ vlc_vdp_output_surface_t ;
struct TYPE_10__ {int i_visible_height; int i_visible_width; } ;
typedef TYPE_2__ video_format_t ;
typedef int vdp_t ;
typedef int picture_t ;
struct TYPE_11__ {int pf_destroy; TYPE_1__* p_sys; } ;
typedef TYPE_3__ picture_resource_t ;
typedef scalar_t__ VdpStatus ;
typedef int VdpRGBAFormat ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (TYPE_2__ const*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;

__attribute__((used)) static
picture_t *FUNC_8(vdp_t *VAR_2, VdpRGBAFormat VAR_3,
                                         const video_format_t *restrict VAR_4)
{
    vlc_vdp_output_surface_t *VAR_5 = FUNC_1(sizeof (*VAR_5));
    if (FUNC_3(VAR_5 == ((void*)0)))
        return ((void*)0);

    VAR_5->vdp = FUNC_4(VAR_2, &VAR_5->device);
    VAR_5->gl_nv_surface = 0;

    VdpStatus VAR_6 = FUNC_5(VAR_2, VAR_5->device, VAR_3,
        VAR_4->i_visible_width, VAR_4->i_visible_height, &VAR_5->surface);
    if (VAR_6 != VAR_0)
    {
error:
        FUNC_7(VAR_2);
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    picture_resource_t VAR_7 = {
        .p_sys = VAR_5,
        .pf_destroy = VAR_1,
    };

    picture_t *VAR_8 = FUNC_2(VAR_4, &VAR_7);
    if (FUNC_3(VAR_8 == ((void*)0)))
    {
        FUNC_6(VAR_2, VAR_5->surface);
        goto error;
    }
    return VAR_8;
}
