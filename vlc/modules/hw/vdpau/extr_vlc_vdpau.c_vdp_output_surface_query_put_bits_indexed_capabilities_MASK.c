
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* output_surface_query_put_bits_indexed_capabilities ) (int ,int ,int ,int ,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int VdpStatus ;
typedef int VdpRGBAFormat ;
typedef int VdpIndexedFormat ;
typedef int VdpDevice ;
typedef int VdpColorTableFormat ;
typedef int VdpBool ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;

VdpStatus FUNC_2(
    const vdp_t *VAR_1, VdpDevice VAR_2, VdpRGBAFormat VAR_3,
    VdpIndexedFormat VAR_4, VdpColorTableFormat VAR_5, VdpBool *VAR_6)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.output_surface_query_put_bits_indexed_capabilities(VAR_2,
                                                      VAR_3, VAR_4, VAR_5, VAR_6);
}
