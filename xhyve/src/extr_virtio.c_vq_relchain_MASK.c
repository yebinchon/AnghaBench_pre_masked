
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uint16_t ;
struct vring_used {size_t vu_idx; struct virtio_used* vu_ring; } ;
struct vqueue_info {size_t vq_qsize; struct vring_used* vq_used; } ;
struct virtio_used {size_t vu_idx; int vu_tlen; } ;



void
FUNC_0(struct vqueue_info *VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 uint16_t VAR_3, VAR_4;
 volatile struct vring_used *VAR_5;
 volatile struct virtio_used *VAR_6;
 VAR_4 = VAR_0->vq_qsize - 1;
 VAR_5 = VAR_0->vq_used;

 VAR_3 = VAR_5->vu_idx;
 VAR_6 = &VAR_5->vu_ring[VAR_3++ & VAR_4];
 VAR_6->vu_idx = VAR_1;
 VAR_6->vu_tlen = VAR_2;
 VAR_5->vu_idx = VAR_3;
}
