
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct vqueue_info {int vq_save_used; TYPE_2__* vq_avail; TYPE_1__* vq_used; struct virtio_softc* vq_vs; } ;
struct virtio_softc {int vs_negotiated_caps; } ;
struct TYPE_4__ {int va_flags; } ;
struct TYPE_3__ {int vu_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vqueue_info*) ;
 int VAR_2 ;
 int FUNC_1 (struct virtio_softc*,struct vqueue_info*) ;

void
FUNC_2(struct vqueue_info *VAR_3, int VAR_4)
{
 struct virtio_softc *VAR_5;
 uint16_t VAR_6, VAR_7, VAR_8;
 int VAR_9;
 VAR_5 = VAR_3->vq_vs;
 VAR_8 = VAR_3->vq_save_used;
 VAR_3->vq_save_used = VAR_7 = VAR_3->vq_used->vu_idx;
 if (VAR_4 &&
     (VAR_5->vs_negotiated_caps & VAR_0))
  VAR_9 = 1;
 else if (VAR_5->vs_negotiated_caps & VAR_1) {
  VAR_6 = FUNC_0(VAR_3);




  VAR_9 = (uint16_t)(VAR_7 - VAR_6 - 1) <
   (uint16_t)(VAR_7 - VAR_8);
 } else {
  VAR_9 = VAR_7 != VAR_8 &&
      !(VAR_3->vq_avail->va_flags & VAR_2);
 }
 if (VAR_9)
  FUNC_1(VAR_5, VAR_3);
}
