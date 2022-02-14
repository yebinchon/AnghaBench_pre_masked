
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtblk_softc {int vsc_mtx; } ;
struct pci_vtblk_ioreq {struct pci_vtblk_softc* io_sc; } ;
struct blockif_req {struct pci_vtblk_ioreq* br_param; } ;


 int FUNC_0 (struct blockif_req*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct blockif_req *VAR_0, int VAR_1) {
 struct pci_vtblk_ioreq *VAR_2 = VAR_0->br_param;
 struct pci_vtblk_softc *VAR_3 = VAR_2->io_sc;

 FUNC_1(&VAR_3->vsc_mtx);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_3->vsc_mtx);
}
