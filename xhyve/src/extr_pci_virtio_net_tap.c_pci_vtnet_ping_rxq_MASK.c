
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {TYPE_1__* vq_used; } ;
struct pci_vtnet_softc {int vsc_rx_ready; } ;
struct TYPE_2__ {int vu_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, struct vqueue_info *VAR_2)
{
 struct pci_vtnet_softc *VAR_3 = VAR_1;




 if (VAR_3->vsc_rx_ready == 0) {
  VAR_3->vsc_rx_ready = 1;
  VAR_2->vq_used->vu_flags |= VAR_0;
 }
}
