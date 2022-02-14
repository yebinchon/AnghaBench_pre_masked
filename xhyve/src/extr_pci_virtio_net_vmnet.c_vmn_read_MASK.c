
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vmnet_return_t ;
typedef scalar_t__ uint32_t ;
struct vmpktdesc {scalar_t__ vm_pkt_size; scalar_t__ vm_flags; scalar_t__ vm_pkt_iovcnt; struct iovec* vm_pkt_iov; } ;
struct vmnet_state {scalar_t__ max_packet_size; int iface; } ;
struct iovec {scalar_t__ iov_len; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct vmpktdesc*,int*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct vmnet_state *VAR_1, struct iovec *VAR_2, int VAR_3) {
 vmnet_return_t VAR_4;
 struct vmpktdesc VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5.vm_pkt_size = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_5.vm_pkt_size += VAR_2[VAR_7].iov_len;
 }

 FUNC_0(VAR_5.vm_pkt_size >= VAR_1->max_packet_size);

 VAR_5.vm_pkt_iov = VAR_2;
 VAR_5.vm_pkt_iovcnt = (uint32_t) VAR_3;
 VAR_5.vm_flags = 0;

 VAR_6 = 1;

 VAR_4 = FUNC_1(VAR_1->iface, &VAR_5, &VAR_6);

 FUNC_0(VAR_4 == VAR_0);

 if (VAR_6 < 1) {
  return (-1);
 }

 return ((ssize_t) VAR_5.vm_pkt_size);
}
