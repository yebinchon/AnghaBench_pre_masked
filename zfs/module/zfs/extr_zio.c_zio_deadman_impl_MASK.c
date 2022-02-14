
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int zb_blkid; int zb_level; int zb_object; int zb_objset; } ;
struct TYPE_15__ {scalar_t__ io_timestamp; int io_lock; int io_tqent; int io_spa; int io_error; int io_size; int io_offset; int io_pipeline_trace; int io_pipeline; int io_stage; int io_flags; int io_priority; int io_type; int io_delay; int io_delta; TYPE_3__ io_bookmark; TYPE_4__* io_vd; } ;
typedef TYPE_2__ zio_t ;
typedef int zio_link_t ;
typedef TYPE_3__ zbookmark_phys_t ;
struct TYPE_18__ {int vq_io_complete_ts; } ;
struct TYPE_17__ {char* vdev_path; TYPE_5__ vdev_queue; TYPE_1__* vdev_ops; } ;
typedef TYPE_4__ vdev_t ;
typedef TYPE_5__ vdev_queue_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_14__ {scalar_t__ vdev_op_leaf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int,TYPE_2__*,scalar_t__,scalar_t__,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_4__*,TYPE_3__*,TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,int **) ;

__attribute__((used)) static void
FUNC_9(zio_t *VAR_3, int VAR_4)
{
 zio_t *VAR_5, *VAR_6;
 zio_link_t *VAR_7 = ((void*)0);
 vdev_t *VAR_8 = VAR_3->io_vd;

 if (VAR_2 || (VAR_8 != ((void*)0) && VAR_8->vdev_ops->vdev_op_leaf)) {
  vdev_queue_t *VAR_9 = VAR_8 ? &VAR_8->vdev_queue : ((void*)0);
  zbookmark_phys_t *VAR_10 = &VAR_3->io_bookmark;
  uint64_t VAR_11 = FUNC_0() - VAR_3->io_timestamp;
  uint64_t VAR_12 = FUNC_3(VAR_3->io_spa);

  FUNC_5("slow zio[%d]: zio=%px timestamp=%llu "
      "delta=%llu queued=%llu io=%llu "
      "path=%s last=%llu "
      "type=%d priority=%d flags=0x%x "
      "stage=0x%x pipeline=0x%x pipeline-trace=0x%x "
      "objset=%llu object=%llu level=%llu blkid=%llu "
      "offset=%llu size=%llu error=%d",
      VAR_4, VAR_3, VAR_3->io_timestamp,
      VAR_11, VAR_3->io_delta, VAR_3->io_delay,
      VAR_8 ? VAR_8->vdev_path : "NULL", VAR_9 ? VAR_9->vq_io_complete_ts : 0,
      VAR_3->io_type, VAR_3->io_priority, VAR_3->io_flags,
      VAR_3->io_stage, VAR_3->io_pipeline, VAR_3->io_pipeline_trace,
      VAR_10->zb_objset, VAR_10->zb_object, VAR_10->zb_level, VAR_10->zb_blkid,
      VAR_3->io_offset, VAR_3->io_size, VAR_3->io_error);
  FUNC_6(VAR_0,
      VAR_3->io_spa, VAR_8, VAR_10, VAR_3, 0, 0);

  if (VAR_12 == VAR_1 &&
      FUNC_4(&VAR_3->io_tqent)) {
   FUNC_7(VAR_3);
  }
 }

 FUNC_1(&VAR_3->io_lock);
 for (VAR_5 = FUNC_8(VAR_3, &VAR_7); VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  VAR_6 = FUNC_8(VAR_3, &VAR_7);
  FUNC_9(VAR_5, VAR_4 + 1);
 }
 FUNC_2(&VAR_3->io_lock);
}
