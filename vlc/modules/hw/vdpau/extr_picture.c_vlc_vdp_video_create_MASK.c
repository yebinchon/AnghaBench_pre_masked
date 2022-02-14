
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int copy; int destroy; } ;
struct TYPE_8__ {float sharpen; int device; int vdp; int surface; int refs; int procamp; int structure; struct TYPE_8__* frame; TYPE_1__ context; } ;
typedef TYPE_2__ vlc_vdp_video_frame_t ;
typedef TYPE_2__ vlc_vdp_video_field_t ;
typedef int vdp_t ;
typedef int VdpVideoSurface ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;

vlc_vdp_video_field_t *FUNC_5(vdp_t *VAR_4,
                                            VdpVideoSurface VAR_5)
{
    vlc_vdp_video_field_t *VAR_6 = FUNC_2(sizeof (*VAR_6));
    vlc_vdp_video_frame_t *VAR_7 = FUNC_2(sizeof (*VAR_7));

    if (FUNC_3(VAR_6 == ((void*)0) || VAR_7 == ((void*)0)))
    {
        FUNC_1(VAR_7);
        FUNC_1(VAR_6);
        return ((void*)0);
    }

    VAR_6->context.destroy = VAR_2;
    VAR_6->context.copy = VAR_1;
    VAR_6->frame = VAR_7;
    VAR_6->structure = VAR_0;
    VAR_6->procamp = VAR_3;
    VAR_6->sharpen = 0.f;

    FUNC_0(&VAR_7->refs, 1);
    VAR_7->surface = VAR_5;
    VAR_7->vdp = FUNC_4(VAR_4, &VAR_7->device);
    return VAR_6;
}
