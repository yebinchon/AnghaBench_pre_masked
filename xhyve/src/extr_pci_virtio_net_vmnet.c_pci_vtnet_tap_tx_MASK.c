
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtnet_softc {int vms; } ;
struct iovec {char* iov_base; size_t iov_len; } ;


 int FUNC_0 (int ,struct iovec*,int) ;

__attribute__((used)) static void
FUNC_1(struct pci_vtnet_softc *VAR_0, struct iovec *VAR_1, int VAR_2,
   int VAR_3)
{
 static char VAR_4[60];

 if (!VAR_0->vms)
  return;






 if (VAR_3 < 60) {
  VAR_1[VAR_2].iov_base = VAR_4;
  VAR_1[VAR_2].iov_len = (size_t) (60 - VAR_3);
  VAR_2++;
 }
 FUNC_0(VAR_0->vms, VAR_1, VAR_2);
}
