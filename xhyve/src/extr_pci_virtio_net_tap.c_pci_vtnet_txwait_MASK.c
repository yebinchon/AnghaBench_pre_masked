
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtnet_softc {int tx_mtx; scalar_t__ tx_in_progress; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct pci_vtnet_softc *VAR_0)
{

 FUNC_0(&VAR_0->tx_mtx);
 while (VAR_0->tx_in_progress) {
  FUNC_1(&VAR_0->tx_mtx);
  FUNC_2(10000);
  FUNC_0(&VAR_0->tx_mtx);
 }
 FUNC_1(&VAR_0->tx_mtx);
}
