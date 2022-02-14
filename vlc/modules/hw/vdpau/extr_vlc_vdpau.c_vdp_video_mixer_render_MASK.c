
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* video_mixer_render ) (int ,int ,int const*,int ,int ,int const*,int ,int ,int const*,int const*,int ,int const*,int const*,int ,int const*) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpVideoSurface ;
typedef int VdpVideoMixerPictureStructure ;
typedef int VdpVideoMixer ;
typedef int VdpStatus ;
typedef int VdpRect ;
typedef int VdpOutputSurface ;
typedef int VdpLayer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int const*,int ,int ,int const*,int ,int ,int const*,int const*,int ,int const*,int const*,int ,int const*) ;

VdpStatus FUNC_2(const vdp_t *VAR_1, VdpVideoMixer VAR_2,
    VdpOutputSurface VAR_3, const VdpRect *VAR_4,
    VdpVideoMixerPictureStructure VAR_5, uint32_t VAR_6,
    const VdpVideoSurface *VAR_7, VdpVideoSurface VAR_8, uint32_t VAR_9,
    const VdpVideoSurface *VAR_10, const VdpRect *VAR_11,
    VdpOutputSurface VAR_12, const VdpRect *VAR_13, const VdpRect *VAR_14,
    uint32_t VAR_15, const VdpLayer *VAR_16)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.video_mixer_render(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14, VAR_15, VAR_16);
}
