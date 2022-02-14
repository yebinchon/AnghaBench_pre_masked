
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_rxhdr {int dummy; } ;
struct pci_vtnet_softc {int resetting; int rx_merge; int rx_vhdrlen; int vsc_vs; scalar_t__ vsc_rx_ready; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_vtnet_softc*) ;
 int FUNC_2 (struct pci_vtnet_softc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct pci_vtnet_softc *VAR_1 = VAR_0;

 FUNC_0(("vtnet: device reset requested !\n"));

 VAR_1->resetting = 1;





 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 VAR_1->vsc_rx_ready = 0;
 VAR_1->rx_merge = 1;
 VAR_1->rx_vhdrlen = sizeof(struct virtio_net_rxhdr);


 FUNC_3(&VAR_1->vsc_vs);

 VAR_1->resetting = 0;
}
