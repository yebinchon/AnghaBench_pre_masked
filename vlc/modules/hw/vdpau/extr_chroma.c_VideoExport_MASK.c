
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int vdp; int surface; } ;
typedef TYPE_3__ vlc_vdp_video_frame_t ;
struct TYPE_15__ {TYPE_3__* frame; } ;
typedef TYPE_4__ vlc_vdp_video_field_t ;
typedef int uint32_t ;
struct TYPE_12__ {scalar_t__ i_chroma; } ;
struct TYPE_16__ {int i_planes; TYPE_2__* p; TYPE_1__ format; scalar_t__ context; } ;
typedef TYPE_5__ picture_t ;
typedef int filter_t ;
typedef int VdpYCbCrFormat ;
typedef int VdpVideoSurface ;
typedef scalar_t__ VdpStatus ;
struct TYPE_13__ {int i_pitch; void* p_pixels; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,char*,char*,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ,void**,int *) ;

__attribute__((used)) static picture_t *FUNC_5(filter_t *VAR_4, picture_t *VAR_5, picture_t *VAR_6,
                              VdpYCbCrFormat VAR_7)
{
    vlc_vdp_video_field_t *VAR_8 = (vlc_vdp_video_field_t *)VAR_5->context;
    vlc_vdp_video_frame_t *VAR_9 = VAR_8->frame;
    VdpStatus VAR_10;
    VdpVideoSurface VAR_11 = VAR_9->surface;
    void *VAR_12[3];
    uint32_t VAR_13[3];

    FUNC_1(VAR_6, VAR_5);

    for (int VAR_14 = 0; VAR_14 < VAR_6->i_planes; VAR_14++)
    {
        VAR_12[VAR_14] = VAR_6->p[VAR_14].p_pixels;
        VAR_13[VAR_14] = VAR_6->p[VAR_14].i_pitch;
    }
    if (VAR_6->format.i_chroma == VAR_1
     || VAR_6->format.i_chroma == VAR_2
     || VAR_6->format.i_chroma == VAR_3)
    {
        VAR_12[1] = VAR_6->p[2].p_pixels;
        VAR_12[2] = VAR_6->p[1].p_pixels;
        VAR_13[1] = VAR_6->p[2].i_pitch;
        VAR_13[2] = VAR_6->p[1].i_pitch;
    }
    VAR_10 = FUNC_4(VAR_9->vdp, VAR_11, VAR_7,
                                             VAR_12, VAR_13);
    if (VAR_10 != VAR_0)
    {
        FUNC_0(VAR_4, "video %s %s failure: %s", "surface", "export",
                FUNC_3(VAR_9->vdp, VAR_10));
        FUNC_2(VAR_6);
        VAR_6 = ((void*)0);
    }
    FUNC_2(VAR_5);
    return VAR_6;
}
