
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t vdev_id; size_t vdev_children; scalar_t__ vdev_guid_sum; struct TYPE_9__* vdev_parent; TYPE_3__* vdev_spa; TYPE_1__* vdev_ops; struct TYPE_9__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint_t ;
struct TYPE_10__ {int spa_leaf_list_gen; int spa_leaf_list; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__**,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;

void
FUNC_3(vdev_t *VAR_0, vdev_t *VAR_1)
{
 int VAR_2;
 uint_t VAR_3 = VAR_1->vdev_id;

 FUNC_0(VAR_1->vdev_parent == VAR_0);

 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_3 < VAR_0->vdev_children);
 FUNC_0(VAR_0->vdev_child[VAR_3] == VAR_1);

 VAR_0->vdev_child[VAR_3] = ((void*)0);
 VAR_1->vdev_parent = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->vdev_children; VAR_2++)
  if (VAR_0->vdev_child[VAR_2])
   break;

 if (VAR_2 == VAR_0->vdev_children) {
  FUNC_1(VAR_0->vdev_child, VAR_2 * sizeof (vdev_t *));
  VAR_0->vdev_child = ((void*)0);
  VAR_0->vdev_children = 0;
 }

 if (VAR_1->vdev_ops->vdev_op_leaf) {
  spa_t *VAR_4 = VAR_1->vdev_spa;
  FUNC_2(&VAR_4->spa_leaf_list, VAR_1);
  VAR_4->spa_leaf_list_gen++;
 }




 for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->vdev_parent)
  VAR_0->vdev_guid_sum -= VAR_1->vdev_guid_sum;
}
