
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t vdev_id; size_t vdev_children; TYPE_5__* vdev_spa; TYPE_1__* vdev_ops; scalar_t__ vdev_guid_sum; struct TYPE_12__* vdev_parent; struct TYPE_12__* vdev_top; struct TYPE_12__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_13__ {int spa_leaf_list_gen; int spa_leaf_list; } ;
struct TYPE_11__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,size_t) ;
 TYPE_2__** FUNC_3 (size_t,int ) ;
 int FUNC_4 (TYPE_2__**,size_t) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,scalar_t__,int ) ;

void
FUNC_7(vdev_t *VAR_3, vdev_t *VAR_4)
{
 size_t VAR_5, VAR_6;
 uint64_t VAR_7 = VAR_4->vdev_id;
 vdev_t **VAR_8;

 FUNC_0(FUNC_6(VAR_4->vdev_spa, VAR_2, VAR_1) == VAR_2);
 FUNC_0(VAR_4->vdev_parent == ((void*)0));

 VAR_4->vdev_parent = VAR_3;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_7 >= VAR_3->vdev_children || VAR_3->vdev_child[VAR_7] == ((void*)0));

 VAR_5 = VAR_3->vdev_children * sizeof (vdev_t *);
 VAR_3->vdev_children = FUNC_1(VAR_3->vdev_children, VAR_7 + 1);
 VAR_6 = VAR_3->vdev_children * sizeof (vdev_t *);

 VAR_8 = FUNC_3(VAR_6, VAR_0);
 if (VAR_3->vdev_child != ((void*)0)) {
  FUNC_2(VAR_3->vdev_child, VAR_8, VAR_5);
  FUNC_4(VAR_3->vdev_child, VAR_5);
 }

 VAR_3->vdev_child = VAR_8;
 VAR_3->vdev_child[VAR_7] = VAR_4;

 VAR_4->vdev_top = (VAR_3->vdev_top ? VAR_3->vdev_top: VAR_4);
 FUNC_0(VAR_4->vdev_top->vdev_parent->vdev_parent == ((void*)0));




 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->vdev_parent)
  VAR_3->vdev_guid_sum += VAR_4->vdev_guid_sum;

 if (VAR_4->vdev_ops->vdev_op_leaf) {
  FUNC_5(&VAR_4->vdev_spa->spa_leaf_list, VAR_4);
  VAR_4->vdev_spa->spa_leaf_list_gen++;
 }
}
