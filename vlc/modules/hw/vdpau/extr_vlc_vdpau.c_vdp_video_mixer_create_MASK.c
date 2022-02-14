
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* video_mixer_create ) (int ,int ,int const*,int ,int const*,void const* const*,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpVideoMixerParameter ;
typedef int VdpVideoMixerFeature ;
typedef int VdpVideoMixer ;
typedef int VdpStatus ;
typedef int VdpDevice ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int const*,int ,int const*,void const* const*,int *) ;

VdpStatus FUNC_2(const vdp_t *VAR_1, VdpDevice VAR_2,
    uint32_t VAR_3, const VdpVideoMixerFeature *VAR_4,
    uint32_t VAR_5, const VdpVideoMixerParameter *VAR_6,
    const void *const *VAR_7, VdpVideoMixer *VAR_8)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.video_mixer_create(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                                      VAR_7, VAR_8);
}
