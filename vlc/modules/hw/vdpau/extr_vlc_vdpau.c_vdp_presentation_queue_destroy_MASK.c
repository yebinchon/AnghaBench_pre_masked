
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* presentation_queue_destroy ) (int ) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int VdpStatus ;
typedef int VdpPresentationQueue ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

VdpStatus FUNC_2(const vdp_t *VAR_1,
    VdpPresentationQueue VAR_2)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.presentation_queue_destroy(VAR_2);
}
