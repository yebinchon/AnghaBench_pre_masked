
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vdev_trim_state_t ;
struct TYPE_9__ {int vdev_trim_exit_wanted; int * vdev_trim_thread; TYPE_1__* vdev_ops; int vdev_trim_lock; int vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int list_t ;
struct TYPE_8__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(vdev_t *VAR_6, vdev_trim_state_t VAR_7, list_t *VAR_8)
{
 FUNC_0(!FUNC_3(VAR_6->vdev_spa, VAR_2|VAR_3, VAR_1));
 FUNC_0(FUNC_1(&VAR_6->vdev_trim_lock));
 FUNC_0(VAR_6->vdev_ops->vdev_op_leaf);
 FUNC_0(FUNC_4(VAR_6));





 if (VAR_6->vdev_trim_thread == ((void*)0) && VAR_7 != VAR_4)
  return;

 FUNC_5(VAR_6, VAR_7, 0, 0, 0);
 VAR_6->vdev_trim_exit_wanted = VAR_0;

 if (VAR_8 == ((void*)0)) {
  FUNC_6(VAR_6);
 } else {
  FUNC_0(FUNC_1(&VAR_5));
  FUNC_2(VAR_8, VAR_6);
 }
}
