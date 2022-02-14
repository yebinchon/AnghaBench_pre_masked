
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct vqueue_info {int dummy; } ;
struct pci_vtnet_softc {int dummy; } ;
struct iovec {scalar_t__ iov_len; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_vtnet_softc*,struct iovec*,int,int) ;
 int FUNC_3 (struct vqueue_info*,int *,struct iovec*,int,int *) ;
 int FUNC_4 (struct vqueue_info*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct pci_vtnet_softc *VAR_1, struct vqueue_info *VAR_2)
{
 struct iovec VAR_3[VAR_0 + 1];
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;
 uint16_t VAR_8;






 VAR_5 = FUNC_3(VAR_2, &VAR_8, VAR_3, VAR_0, ((void*)0));
 FUNC_1(VAR_5 >= 1 && VAR_5 <= VAR_0);
 VAR_6 = 0;
 VAR_7 = (int) VAR_3[0].iov_len;
 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++) {
  VAR_6 += VAR_3[VAR_4].iov_len;
  VAR_7 += VAR_3[VAR_4].iov_len;
 }

 FUNC_0(("virtio: packet send, %d bytes, %d segs\n\r", VAR_6, VAR_5));
 FUNC_2(VAR_1, &VAR_3[1], VAR_5 - 1, VAR_6);


 FUNC_4(VAR_2, VAR_8, ((uint32_t) VAR_7));
}
