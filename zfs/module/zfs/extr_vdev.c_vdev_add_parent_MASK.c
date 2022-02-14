
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* vdev_top; int vdev_children; int vdev_id; int vdev_crtxg; int vdev_state; int vdev_ashift; int vdev_psize; int vdev_max_asize; int vdev_min_asize; int vdev_asize; struct TYPE_13__* vdev_parent; int * vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_ops_t ;
typedef int spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;

vdev_t *
FUNC_7(vdev_t *VAR_2, vdev_ops_t *VAR_3)
{
 spa_t *VAR_4 = VAR_2->vdev_spa;
 vdev_t *VAR_5 = VAR_2->vdev_parent;
 vdev_t *VAR_6;

 FUNC_0(FUNC_1(VAR_4, VAR_1, VAR_0) == VAR_1);

 VAR_6 = FUNC_3(VAR_4, VAR_2->vdev_id, 0, VAR_3);

 VAR_6->vdev_asize = VAR_2->vdev_asize;
 VAR_6->vdev_min_asize = VAR_2->vdev_min_asize;
 VAR_6->vdev_max_asize = VAR_2->vdev_max_asize;
 VAR_6->vdev_psize = VAR_2->vdev_psize;
 VAR_6->vdev_ashift = VAR_2->vdev_ashift;
 VAR_6->vdev_state = VAR_2->vdev_state;
 VAR_6->vdev_crtxg = VAR_2->vdev_crtxg;

 FUNC_4(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_6);
 VAR_2->vdev_id = VAR_6->vdev_children;
 FUNC_2(VAR_6, VAR_2);
 FUNC_6(VAR_2->vdev_top, VAR_2->vdev_top);

 if (VAR_6 == VAR_6->vdev_top)
  FUNC_5(VAR_2, VAR_6);

 return (VAR_6);
}
