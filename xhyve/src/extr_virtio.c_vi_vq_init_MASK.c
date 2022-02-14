
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct vring_used {int dummy; } ;
struct vring_avail {int dummy; } ;
struct vqueue_info {int vq_qsize; scalar_t__ vq_save_used; scalar_t__ vq_last_avail; int vq_flags; struct vring_used* vq_used; struct vring_avail* vq_avail; struct virtio_desc* vq_desc; scalar_t__ vq_pfn; } ;
struct virtio_softc {size_t vs_curq; struct vqueue_info* vs_queues; } ;
struct virtio_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (uintptr_t,uintptr_t) ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct virtio_softc *VAR_3, uint32_t VAR_4)
{
 struct vqueue_info *VAR_5;
 uint64_t VAR_6;
 size_t VAR_7;
 char *VAR_8;

 VAR_5 = &VAR_3->vs_queues[VAR_3->vs_curq];
 VAR_5->vq_pfn = VAR_4;
 VAR_6 = (uint64_t)VAR_4 << VAR_2;
 VAR_7 = FUNC_2(VAR_5->vq_qsize);
 VAR_8 = FUNC_0(VAR_6, VAR_7);


 VAR_5->vq_desc = (struct virtio_desc *)VAR_8;
 VAR_8 += VAR_5->vq_qsize * sizeof(struct virtio_desc);


 VAR_5->vq_avail = (struct vring_avail *)VAR_8;
 VAR_8 += (2 + VAR_5->vq_qsize + 1) * sizeof(uint16_t);


 VAR_8 = (char *) FUNC_1(((uintptr_t) VAR_8), ((uintptr_t) VAR_1));


 VAR_5->vq_used = (struct vring_used *)VAR_8;


 VAR_5->vq_flags = VAR_0;
 VAR_5->vq_last_avail = 0;
 VAR_5->vq_save_used = 0;
}
