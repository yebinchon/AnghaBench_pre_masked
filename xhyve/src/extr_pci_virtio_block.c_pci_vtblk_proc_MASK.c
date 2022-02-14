
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct vqueue_info {int dummy; } ;
struct virtio_blk_hdr {int vbh_sector; int vbh_type; } ;
struct pci_vtblk_softc {int vbsc_ident; int bc; struct pci_vtblk_ioreq* vbsc_ios; } ;
struct TYPE_5__ {int br_iovcnt; scalar_t__ br_resid; scalar_t__ br_offset; int br_iov; } ;
struct pci_vtblk_ioreq {TYPE_1__ io_req; struct virtio_blk_hdr* io_status; } ;
struct iovec {int iov_len; struct virtio_blk_hdr* iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;





 size_t VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int *,struct iovec*,int) ;
 int FUNC_7 (struct virtio_blk_hdr*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (struct virtio_blk_hdr*,int ,int ) ;
 int FUNC_10 (struct vqueue_info*,size_t*,struct iovec*,int,size_t*) ;

__attribute__((used)) static void
FUNC_11(struct pci_vtblk_softc *VAR_5, struct vqueue_info *VAR_6)
{
 struct virtio_blk_hdr *VAR_7;
 struct pci_vtblk_ioreq *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 ssize_t VAR_12;
 int VAR_13, VAR_14;
 struct iovec VAR_15[VAR_0 + 2];
 uint16_t VAR_16, VAR_17[VAR_0 + 2];

 VAR_10 = FUNC_10(VAR_6, &VAR_16, VAR_15, VAR_0 + 2, VAR_17);
 FUNC_2(VAR_10 >= 2 && VAR_10 <= VAR_0 + 2);

 VAR_8 = &VAR_5->vbsc_ios[VAR_16];
 FUNC_2((VAR_17[0] & VAR_4) == 0);
 FUNC_2(VAR_15[0].iov_len == sizeof(struct virtio_blk_hdr));
 VAR_7 = VAR_15[0].iov_base;
 FUNC_6(&VAR_8->io_req.br_iov, &VAR_15[1],
  sizeof(struct iovec) * (((size_t) VAR_10) - 2));
 VAR_8->io_req.br_iovcnt = VAR_10 - 2;
 VAR_8->io_req.br_offset = (off_t) (VAR_7->vbh_sector * VAR_1);
 VAR_8->io_status = VAR_15[--VAR_10].iov_base;
 FUNC_2(VAR_15[VAR_10].iov_len == 1);
 FUNC_2(VAR_17[VAR_10] & VAR_4);






 VAR_14 = VAR_7->vbh_type & ~VAR_3;
 VAR_13 = (VAR_14 == 128);

 VAR_12 = 0;
 for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9++) {






  FUNC_2(((VAR_17[VAR_9] & VAR_4) == 0) == VAR_13);
  VAR_12 += VAR_15[VAR_9].iov_len;
 }
 VAR_8->io_req.br_resid = VAR_12;

 FUNC_0(("virtio-block: %s op, %zd bytes, %d segs\n\r",
   VAR_13 ? "write" : "read/ident", VAR_12, VAR_9 - 1));

 switch (VAR_14) {
 case 129:
  VAR_11 = FUNC_4(VAR_5->bc, &VAR_8->io_req);
  break;
 case 128:
  VAR_11 = FUNC_5(VAR_5->bc, &VAR_8->io_req);
  break;
 case 132:
 case 131:
  VAR_11 = FUNC_3(VAR_5->bc, &VAR_8->io_req);
  break;
 case 130:


  FUNC_7(VAR_15[1].iov_base, 0, VAR_15[1].iov_len);
  FUNC_9(VAR_15[1].iov_base, VAR_5->vbsc_ident,
      FUNC_1(VAR_15[1].iov_len, sizeof(VAR_5->vbsc_ident)));

  FUNC_8(&VAR_8->io_req, 0);
  return;
 default:

  FUNC_8(&VAR_8->io_req, VAR_2);
  return;
 }
 FUNC_2(VAR_11 == 0);
}
