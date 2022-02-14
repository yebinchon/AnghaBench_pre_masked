
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* output_surface_put_bits_native ) (int ,void const* const*,int const*,int const*) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpStatus ;
typedef int VdpRect ;
typedef int VdpOutputSurface ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,void const* const*,int const*,int const*) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpOutputSurface VAR_2, const void *const *VAR_3, uint32_t const *VAR_4,
    const VdpRect *VAR_5)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.output_surface_put_bits_native(VAR_2, VAR_3, VAR_4, VAR_5);
}
