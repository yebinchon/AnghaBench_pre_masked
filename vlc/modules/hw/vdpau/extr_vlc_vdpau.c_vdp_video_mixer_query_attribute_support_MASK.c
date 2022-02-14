
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* video_mixer_query_attribute_support ) (int ,int ,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int VdpVideoMixerAttribute ;
typedef int VdpStatus ;
typedef int VdpDevice ;
typedef int VdpBool ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpDevice VAR_2, VdpVideoMixerAttribute VAR_3, VdpBool *VAR_4)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.video_mixer_query_attribute_support(VAR_2, VAR_3, VAR_4);
}
