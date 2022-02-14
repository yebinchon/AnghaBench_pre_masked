
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* output_surface_put_bits_indexed ) (int ,int ,void const* const*,int const*,int const*,int ,void const*) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpStatus ;
typedef int VdpRect ;
typedef int VdpOutputSurface ;
typedef int VdpIndexedFormat ;
typedef int VdpColorTableFormat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void const* const*,int const*,int const*,int ,void const*) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpOutputSurface VAR_2, VdpIndexedFormat VAR_3, const void *const *VAR_4,
    const uint32_t *VAR_5, const VdpRect *VAR_6,
    VdpColorTableFormat VAR_7, const void *VAR_8)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.output_surface_put_bits_indexed(VAR_2, VAR_3, VAR_4, VAR_5,
                                                   VAR_6, VAR_7, VAR_8);
}
