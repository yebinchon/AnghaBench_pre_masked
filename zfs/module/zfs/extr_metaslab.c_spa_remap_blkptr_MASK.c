
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ vdev_id; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int spa_remap_cb_t ;
struct TYPE_14__ {TYPE_4__* rbca_bp; void* rbca_cb_arg; int rbca_remap_offset; TYPE_2__* rbca_remap_vd; int rbca_cb; } ;
typedef TYPE_3__ remap_blkptr_cb_arg_t ;
typedef int dva_t ;
typedef int boolean_t ;
struct TYPE_15__ {int * blk_dva; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_12__ {int (* vdev_op_remap ) (TYPE_2__*,int ,int ,int ,TYPE_3__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_8 (int *,scalar_t__) ;
 int VAR_4 ;

boolean_t
FUNC_9(spa_t *VAR_5, blkptr_t *VAR_6, spa_remap_cb_t VAR_7, void *VAR_8)
{
 remap_blkptr_cb_arg_t VAR_9;

 if (!VAR_4)
  return (VAR_0);

 if (!FUNC_6(VAR_5, VAR_2))
  return (VAR_0);





 if (FUNC_0(VAR_6))
  return (VAR_0);







 if (FUNC_2(VAR_6))
  return (VAR_0);




 if (FUNC_1(VAR_6) < 1)
  return (VAR_0);





 dva_t *VAR_10 = &VAR_6->blk_dva[0];

 uint64_t VAR_11 = FUNC_4(VAR_10);
 uint64_t VAR_12 = FUNC_3(VAR_10);
 vdev_t *VAR_13 = FUNC_8(VAR_5, FUNC_5(VAR_10));

 if (VAR_13->vdev_ops->vdev_op_remap == ((void*)0))
  return (VAR_0);

 VAR_9.rbca_bp = VAR_6;
 VAR_9.rbca_cb = VAR_7;
 VAR_9.rbca_remap_vd = VAR_13;
 VAR_9.rbca_remap_offset = VAR_11;
 VAR_9.rbca_cb_arg = VAR_8;
 VAR_13->vdev_ops->vdev_op_remap(VAR_13, VAR_11, VAR_12, VAR_3, &VAR_9);


 if (FUNC_5(&VAR_9.rbca_bp->blk_dva[0]) == VAR_13->vdev_id)
  return (VAR_0);

 return (VAR_1);
}
