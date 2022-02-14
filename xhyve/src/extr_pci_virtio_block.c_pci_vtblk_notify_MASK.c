
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vqueue_info {int dummy; } ;
struct pci_vtblk_softc {int dummy; } ;


 int FUNC_0 (struct pci_vtblk_softc*,struct vqueue_info*) ;
 scalar_t__ FUNC_1 (struct vqueue_info*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct vqueue_info *VAR_1)
{
 struct pci_vtblk_softc *VAR_2 = VAR_0;

 while (FUNC_1(VAR_1))
  FUNC_0(VAR_2, VAR_1);
}
