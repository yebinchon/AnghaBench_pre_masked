
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* bitmap_surface_get_parameters ) (int ,int *,int *,int *,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpStatus ;
typedef int VdpRGBAFormat ;
typedef int VdpBool ;
typedef int VdpBitmapSurface ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpBitmapSurface VAR_2, VdpRGBAFormat *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5,
    VdpBool *VAR_6)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.bitmap_surface_get_parameters(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
