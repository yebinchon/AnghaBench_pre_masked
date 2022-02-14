
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_vdp_video_field_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_va_t ;
struct TYPE_6__ {int height; int width; int type; int device; int vctx; } ;
typedef TYPE_2__ vlc_va_sys_t ;
struct video_context_private {int vdp; } ;
typedef int VdpVideoSurface ;
typedef scalar_t__ VdpStatus ;


 struct video_context_private* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int ) ;

__attribute__((used)) static vlc_vdp_video_field_t *FUNC_7(vlc_va_t *VAR_1)
{
    vlc_va_sys_t *VAR_2 = VAR_1->sys;
    struct video_context_private *VAR_3 = FUNC_0(VAR_2->vctx);
    VdpVideoSurface VAR_4;
    VdpStatus VAR_5;

    VAR_5 = FUNC_4(VAR_3->vdp, VAR_2->device, VAR_2->type,
                                   VAR_2->width, VAR_2->height, &VAR_4);
    if (VAR_5 != VAR_0)
    {
        FUNC_1(VAR_1, "%s creation failure: %s", "video surface",
                FUNC_3(VAR_3->vdp, VAR_5));
        return ((void*)0);
    }

    vlc_vdp_video_field_t *VAR_6 = FUNC_6(VAR_3->vdp, VAR_4);
    if (FUNC_2(VAR_6 == ((void*)0)))
        FUNC_5(VAR_3->vdp, VAR_4);
    return VAR_6;
}
