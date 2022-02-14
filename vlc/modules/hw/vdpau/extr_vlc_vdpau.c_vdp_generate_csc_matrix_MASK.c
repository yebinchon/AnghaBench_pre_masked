
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* generate_csc_matrix ) (int *,int ,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int VdpStatus ;
typedef int VdpProcamp ;
typedef int VdpColorStandard ;
typedef int VdpCSCMatrix ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;

VdpStatus FUNC_2(const vdp_t *VAR_1, const VdpProcamp *VAR_2,
    VdpColorStandard VAR_3, VdpCSCMatrix *VAR_4)
{
    VdpProcamp VAR_5, *VAR_6 = ((void*)0);

    if (VAR_2 != ((void*)0))
    {
        VAR_5 = *VAR_2;
        VAR_6 = &VAR_5;
    }
    FUNC_0(VAR_0);
    return VAR_1->vt.generate_csc_matrix(VAR_6, VAR_3, VAR_4);
}
