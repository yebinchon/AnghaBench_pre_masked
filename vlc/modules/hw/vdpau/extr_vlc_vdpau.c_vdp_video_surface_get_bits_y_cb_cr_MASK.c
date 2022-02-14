
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* video_surface_get_bits_y_cb_cr ) (int ,int ,void* const*,int const*) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpYCbCrFormat ;
typedef int VdpVideoSurface ;
typedef int VdpStatus ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void* const*,int const*) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpVideoSurface VAR_2, VdpYCbCrFormat VAR_3,
    void *const *VAR_4, uint32_t const *VAR_5)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.video_surface_get_bits_y_cb_cr(VAR_2, VAR_3, VAR_4, VAR_5);
}
