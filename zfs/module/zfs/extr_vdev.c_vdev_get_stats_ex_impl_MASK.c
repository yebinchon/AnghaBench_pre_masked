
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct TYPE_21__ {TYPE_18__* vq_class; } ;
struct TYPE_24__ {int * vsx_pend_queue; int * vsx_active_queue; } ;
struct TYPE_23__ {TYPE_5__* vs_bytes; TYPE_5__* vs_ops; } ;
struct TYPE_22__ {int vdev_children; TYPE_2__ vdev_queue; TYPE_5__ vdev_stat_ex; TYPE_4__ vdev_stat; struct TYPE_22__** vdev_child; TYPE_1__* vdev_ops; } ;
typedef TYPE_3__ vdev_t ;
typedef TYPE_4__ vdev_stat_t ;
typedef TYPE_5__ vdev_stat_ex_t ;
struct TYPE_20__ {int vdev_op_leaf; } ;
struct TYPE_19__ {int vqc_queued_tree; int vqc_active; } ;


 int FUNC_0 (TYPE_18__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_6(vdev_t *VAR_0, vdev_stat_t *VAR_1, vdev_stat_ex_t *VAR_2)
{
 int VAR_3;




 if (!VAR_0->vdev_ops->vdev_op_leaf) {
  if (VAR_1) {
   FUNC_3(VAR_1->vs_ops, 0, sizeof (VAR_1->vs_ops));
   FUNC_3(VAR_1->vs_bytes, 0, sizeof (VAR_1->vs_bytes));
  }
  if (VAR_2)
   FUNC_3(VAR_2, 0, sizeof (*VAR_2));

  for (int VAR_4 = 0; VAR_4 < VAR_0->vdev_children; VAR_4++) {
   vdev_t *VAR_5 = VAR_0->vdev_child[VAR_4];
   vdev_stat_t *VAR_6 = &VAR_5->vdev_stat;
   vdev_stat_ex_t *VAR_7 = &VAR_5->vdev_stat_ex;

   FUNC_6(VAR_5, VAR_6, VAR_7);
   if (VAR_1)
    FUNC_4(VAR_5, VAR_1, VAR_6);
   if (VAR_2)
    FUNC_5(VAR_5, VAR_2, VAR_7);

  }
 } else {




  if (!VAR_2)
   return;

  FUNC_2(VAR_2, &VAR_0->vdev_stat_ex, sizeof (VAR_0->vdev_stat_ex));

  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->vdev_queue.vq_class); VAR_3++) {
   VAR_2->vsx_active_queue[VAR_3] =
       VAR_0->vdev_queue.vq_class[VAR_3].vqc_active;
   VAR_2->vsx_pend_queue[VAR_3] = FUNC_1(
       &VAR_0->vdev_queue.vq_class[VAR_3].vqc_queued_tree);
  }
 }
}
