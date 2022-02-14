
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ io_timestamp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_11__ {int vq_lock; int vq_active_tree; } ;
struct TYPE_10__ {int vdev_children; int vdev_path; int * vdev_spa; TYPE_4__ vdev_queue; TYPE_1__* vdev_ops; struct TYPE_10__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
typedef TYPE_4__ vdev_queue_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; } ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,char*) ;

void
FUNC_8(vdev_t *VAR_0, char *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < VAR_0->vdev_children; VAR_2++) {
  vdev_t *VAR_3 = VAR_0->vdev_child[VAR_2];

  FUNC_8(VAR_3, VAR_1);
 }

 if (VAR_0->vdev_ops->vdev_op_leaf) {
  vdev_queue_t *VAR_4 = &VAR_0->vdev_queue;

  FUNC_3(&VAR_4->vq_lock);
  if (FUNC_1(&VAR_4->vq_active_tree) > 0) {
   spa_t *VAR_5 = VAR_0->vdev_spa;
   zio_t *VAR_6;
   uint64_t VAR_7;

   FUNC_6("slow vdev: %s has %d active IOs",
       VAR_0->vdev_path, FUNC_1(&VAR_4->vq_active_tree));






   VAR_6 = FUNC_0(&VAR_4->vq_active_tree);
   VAR_7 = FUNC_2() - VAR_6->io_timestamp;
   if (VAR_7 > FUNC_5(VAR_5))
    FUNC_7(VAR_6, VAR_1);
  }
  FUNC_4(&VAR_4->vq_lock);
 }
}
