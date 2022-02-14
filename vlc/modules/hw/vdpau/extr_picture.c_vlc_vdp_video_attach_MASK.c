
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int context; } ;
typedef TYPE_2__ vlc_vdp_video_field_t ;
typedef int vdp_t ;
struct TYPE_6__ {scalar_t__ i_chroma; } ;
struct TYPE_8__ {int * context; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
typedef int VdpVideoSurface ;
typedef int VdpStatus ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *,int ) ;

VdpStatus FUNC_3(vdp_t *VAR_5, VdpVideoSurface VAR_6,
                               picture_t *VAR_7)
{
    vlc_vdp_video_field_t *VAR_8 = FUNC_2(VAR_5, VAR_6);
    if (FUNC_1(VAR_8 == ((void*)0)))
        return VAR_1;

    FUNC_0(VAR_7->format.i_chroma == VAR_2
        || VAR_7->format.i_chroma == VAR_3
        || VAR_7->format.i_chroma == VAR_4);
    FUNC_0(VAR_7->context == ((void*)0));
    VAR_7->context = &VAR_8->context;
    return VAR_0;
}
