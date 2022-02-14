
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* video_mixer_set_attribute_values ) (int ,int ,int const* const,void const* const*) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpVideoMixerAttribute ;
typedef int VdpVideoMixer ;
typedef int VdpStatus ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int const* const,void const* const*) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpVideoMixer VAR_2, uint32_t VAR_3,
    const VdpVideoMixerAttribute *const VAR_4, const void *const *VAR_5)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.video_mixer_set_attribute_values(VAR_2, VAR_3, VAR_4, VAR_5);
}
