
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int vdev_children; struct TYPE_14__* vdev_top; int vdev_id; int vdev_asize; TYPE_12__* vdev_spa; int vdev_guid_sum; scalar_t__ vdev_guid; scalar_t__ vdev_orig_guid; int vdev_ashift; int * vdev_ops; struct TYPE_14__* vdev_parent; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int spa_autoexpand; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_12__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;

void
FUNC_7(vdev_t *VAR_5)
{
 vdev_t *VAR_6 = VAR_5->vdev_parent;
 vdev_t *VAR_7 = VAR_6->vdev_parent;

 FUNC_0(FUNC_1(VAR_5->vdev_spa, VAR_1, VAR_0) == VAR_1);

 FUNC_0(VAR_6->vdev_children == 1);
 FUNC_0(VAR_6->vdev_ops == &VAR_2 ||
     VAR_6->vdev_ops == &VAR_3 ||
     VAR_6->vdev_ops == &VAR_4);
 VAR_5->vdev_ashift = VAR_6->vdev_ashift;

 FUNC_4(VAR_6, VAR_5);
 FUNC_4(VAR_7, VAR_6);







 if (VAR_6->vdev_top == VAR_6) {
  uint64_t VAR_8 = VAR_6->vdev_guid - VAR_5->vdev_guid;
  VAR_5->vdev_orig_guid = VAR_5->vdev_guid;
  VAR_5->vdev_guid += VAR_8;
  VAR_5->vdev_guid_sum += VAR_8;
  if (!VAR_5->vdev_spa->spa_autoexpand)
   VAR_5->vdev_asize = VAR_6->vdev_asize;
 }
 VAR_5->vdev_id = VAR_6->vdev_id;
 FUNC_2(VAR_7, VAR_5);
 FUNC_6(VAR_5->vdev_top, VAR_5->vdev_top);

 if (VAR_5 == VAR_5->vdev_top)
  FUNC_5(VAR_6, VAR_5);

 FUNC_0(VAR_6->vdev_children == 0);
 FUNC_3(VAR_6);
}
