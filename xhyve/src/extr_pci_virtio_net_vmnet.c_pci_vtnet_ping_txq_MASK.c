
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {TYPE_1__* vq_used; } ;
struct pci_vtnet_softc {scalar_t__ tx_in_progress; int tx_mtx; int tx_cond; } ;
struct TYPE_2__ {int vu_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vqueue_info*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, struct vqueue_info *VAR_2)
{
 struct pci_vtnet_softc *VAR_3 = VAR_1;




 if (!FUNC_3(VAR_2))
  return;


 FUNC_1(&VAR_3->tx_mtx);
 VAR_2->vq_used->vu_flags |= VAR_0;
 if (VAR_3->tx_in_progress == 0)
  FUNC_0(&VAR_3->tx_cond);
 FUNC_2(&VAR_3->tx_mtx);
}
