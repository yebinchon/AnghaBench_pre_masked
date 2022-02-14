
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
struct vqueue_info {scalar_t__ vq_last_avail; scalar_t__ vq_qsize; struct virtio_desc* vq_desc; TYPE_1__* vq_avail; struct virtio_softc* vq_vs; } ;
struct virtio_softc {TYPE_2__* vs_vc; } ;
struct virtio_desc {scalar_t__ vd_next; int vd_flags; int vd_len; int vd_addr; } ;
struct iovec {int dummy; } ;
struct TYPE_4__ {char* vc_name; int vc_hv_caps; } ;
struct TYPE_3__ {scalar_t__* va_ring; scalar_t__ va_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct virtio_desc volatile*,struct iovec*,int,scalar_t__*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 struct virtio_desc* FUNC_2 (int ,int) ;
 int VAR_4 ;

int
FUNC_3(struct vqueue_info *VAR_5, uint16_t *VAR_6, struct iovec *VAR_7,
 int VAR_8, uint16_t *VAR_9)
{
 int VAR_10;
 u_int VAR_11, VAR_12;
 u_int VAR_13, VAR_14;
 volatile struct virtio_desc *VAR_15, *VAR_16, *VAR_17;
 struct virtio_softc *VAR_18;
 const char *VAR_19;

 VAR_18 = VAR_5->vq_vs;
 VAR_19 = VAR_18->vs_vc->vc_name;
 VAR_13 = VAR_5->vq_last_avail;
 VAR_11 = (uint16_t)((u_int)VAR_5->vq_avail->va_idx - VAR_13);
 if (VAR_11 == 0)
  return (0);
 if (VAR_11 > VAR_5->vq_qsize) {

  FUNC_1(VAR_4,
      "%s: ndesc (%ld) out of range, driver confused?\r\n",
      VAR_19, (u_int)VAR_11);
  return (-1);
 }
 *VAR_6 = VAR_14 = VAR_5->vq_avail->va_ring[VAR_13 & (VAR_5->vq_qsize - 1)];
 VAR_5->vq_last_avail++;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_14 = VAR_15->vd_next) {
  if (VAR_14 >= VAR_5->vq_qsize) {
   FUNC_1(VAR_4,
       "%s: descriptor index %ld out of range, "
       "driver confused?\r\n",
       VAR_19, VAR_14);
   return (-1);
  }
  VAR_15 = &VAR_5->vq_desc[VAR_14];
  if ((VAR_15->vd_flags & VAR_2) == 0) {
   FUNC_0(VAR_10, VAR_15, VAR_7, VAR_8, VAR_9);
   VAR_10++;
  } else if ((VAR_18->vs_vc->vc_hv_caps &
      VAR_0) == 0) {
   FUNC_1(VAR_4,
       "%s: descriptor has forbidden INDIRECT flag, "
       "driver confused?\r\n",
       VAR_19);
   return (-1);
  } else {
   VAR_12 = VAR_15->vd_len / 16;
   if ((VAR_15->vd_len & 0xf) || VAR_12 == 0) {
    FUNC_1(VAR_4,
        "%s: invalid indir len 0x%lx, "
        "driver confused?\r\n",
        VAR_19, (u_int)VAR_15->vd_len);
    return (-1);
   }
   VAR_16 = FUNC_2(VAR_15->vd_addr, VAR_15->vd_len);







   VAR_14 = 0;
   for (;;) {
    VAR_17 = &VAR_16[VAR_14];
    if (VAR_17->vd_flags & VAR_2) {
     FUNC_1(VAR_4,
         "%s: indirect desc has INDIR flag,"
         " driver confused?\r\n",
         VAR_19);
     return (-1);
    }
    FUNC_0(VAR_10, VAR_17, VAR_7, VAR_8, VAR_9);
    if (++VAR_10 > VAR_1)
     goto loopy;
    if ((VAR_17->vd_flags & VAR_3) == 0)
     break;
    VAR_14 = VAR_17->vd_next;
    if (VAR_14 >= VAR_12) {
     FUNC_1(VAR_4,
         "%s: invalid next %ld > %ld, "
         "driver confused?\r\n",
         VAR_19, (u_int)VAR_14, VAR_12);
     return (-1);
    }
   }
  }
  if ((VAR_15->vd_flags & VAR_3) == 0)
   return (VAR_10);
 }
loopy:
 FUNC_1(VAR_4,
     "%s: descriptor loop? count > %d - driver confused?\r\n",
     VAR_19, VAR_10);
 return (-1);
}
