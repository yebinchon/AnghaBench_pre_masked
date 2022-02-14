
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* presentation_queue_query_surface_status ) (int ,int ,int *,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int VdpTime ;
typedef int VdpStatus ;
typedef int VdpPresentationQueueStatus ;
typedef int VdpPresentationQueue ;
typedef int VdpOutputSurface ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int *) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpPresentationQueue VAR_2, VdpOutputSurface VAR_3,
    VdpPresentationQueueStatus *VAR_4, VdpTime *VAR_5)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.presentation_queue_query_surface_status(VAR_2, VAR_3,
                                                           VAR_4, VAR_5);
}
