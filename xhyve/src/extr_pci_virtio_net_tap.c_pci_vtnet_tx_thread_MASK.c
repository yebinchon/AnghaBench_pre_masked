
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {TYPE_1__* vq_used; } ;
struct pci_vtnet_softc {int tx_in_progress; int tx_mtx; int tx_cond; scalar_t__ resetting; struct vqueue_info* vsc_queues; } ;
struct TYPE_2__ {int vu_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pci_vtnet_softc*,struct vqueue_info*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vqueue_info*,int) ;
 scalar_t__ FUNC_7 (struct vqueue_info*) ;

__attribute__((used)) static void *
FUNC_8(void *VAR_2)
{
 struct pci_vtnet_softc *VAR_3 = VAR_2;
 struct vqueue_info *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->vsc_queues[VAR_1];





 FUNC_4(&VAR_3->tx_mtx);
 VAR_5 = FUNC_3(&VAR_3->tx_cond, &VAR_3->tx_mtx);
 FUNC_0(VAR_5 == 0);

 for (;;) {

  while (VAR_3->resetting || !FUNC_7(VAR_4)) {
   VAR_4->vq_used->vu_flags &= ~VAR_0;
   FUNC_1();
   if (!VAR_3->resetting && FUNC_7(VAR_4))
    break;

   VAR_3->tx_in_progress = 0;
   VAR_5 = FUNC_3(&VAR_3->tx_cond, &VAR_3->tx_mtx);
   FUNC_0(VAR_5 == 0);
  }
  VAR_4->vq_used->vu_flags |= VAR_0;
  VAR_3->tx_in_progress = 1;
  FUNC_5(&VAR_3->tx_mtx);

  do {





   FUNC_2(VAR_3, VAR_4);
  } while (FUNC_7(VAR_4));




  FUNC_6(VAR_4, 1);

  FUNC_4(&VAR_3->tx_mtx);
 }
}
