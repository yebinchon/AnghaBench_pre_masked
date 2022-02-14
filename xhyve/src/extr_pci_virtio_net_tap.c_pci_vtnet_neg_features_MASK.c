
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pci_vtnet_softc {int vsc_features; int rx_vhdrlen; scalar_t__ rx_merge; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, uint64_t VAR_2)
{
 struct pci_vtnet_softc *VAR_3 = VAR_1;

 VAR_3->vsc_features = VAR_2;

 if (!(VAR_3->vsc_features & VAR_0)) {
  VAR_3->rx_merge = 0;

  VAR_3->rx_vhdrlen -= 2;
 }
}
