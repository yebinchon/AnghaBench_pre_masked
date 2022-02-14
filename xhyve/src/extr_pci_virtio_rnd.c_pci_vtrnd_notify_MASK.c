
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct vqueue_info {int dummy; } ;
struct pci_vtrnd_softc {scalar_t__ vrsc_fd; } ;
struct iovec {int iov_len; int iov_base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct vqueue_info*,int) ;
 int FUNC_4 (struct vqueue_info*,int *,struct iovec*,int,int *) ;
 scalar_t__ FUNC_5 (struct vqueue_info*) ;
 int FUNC_6 (struct vqueue_info*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0, struct vqueue_info *VAR_1)
{
 struct iovec VAR_2;
 struct pci_vtrnd_softc *VAR_3;
 int VAR_4;
 uint16_t VAR_5;

 VAR_3 = VAR_0;

 if (VAR_3->vrsc_fd < 0) {
  FUNC_3(VAR_1, 0);
  return;
 }

 while (FUNC_5(VAR_1)) {
  FUNC_4(VAR_1, &VAR_5, &VAR_2, 1, ((void*)0));

  VAR_4 = (int) FUNC_2(VAR_3->vrsc_fd, VAR_2.iov_base, VAR_2.iov_len);

  FUNC_0(("vtrnd: vtrnd_notify(): %d\r\n", VAR_4));


  FUNC_1(VAR_4 > 0);




  FUNC_6(VAR_1, VAR_5, ((uint32_t) VAR_4));
 }
 FUNC_3(VAR_1, 1);
}
