
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int vdev_trim_lock; int vdev_initialize_lock; TYPE_1__* vdev_ops; int * vdev_dtl_sm; int vdev_detached; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_23__ {int spa_dsl_pool; int spa_config_generation; int spa_config_dirty_list; int spa_root_vdev; int * spa_pending_vdev; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_21__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int,int) ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int ,int ,int ,int) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,int ,int *) ;
 int FUNC_19 (TYPE_2__*,int ,int *) ;
 int FUNC_20 (TYPE_3__*,char*,int ) ;
 scalar_t__ VAR_7 ;

void
FUNC_21(spa_t *VAR_8, vdev_t *VAR_9, uint64_t VAR_10, int VAR_11, char *VAR_12)
{
 FUNC_0(FUNC_1(&VAR_6));

 int VAR_13 = VAR_0;

 FUNC_0(VAR_10 > FUNC_9(VAR_8));

 VAR_8->spa_pending_vdev = ((void*)0);




 FUNC_16(VAR_8->spa_root_vdev, 0, 0, VAR_0);

 if (VAR_11 == 0 && !FUNC_2(&VAR_8->spa_config_dirty_list)) {
  VAR_13 = VAR_1;
  VAR_8->spa_config_generation++;
 }




 FUNC_0(FUNC_3(FUNC_11(VAR_8)) == 0);
 FUNC_0(FUNC_3(FUNC_10(VAR_8)) == 0);
 FUNC_0(FUNC_3(FUNC_12(VAR_8)) == 0);
 FUNC_0(FUNC_3(FUNC_8(VAR_8)) == 0);

 FUNC_7(VAR_8, VAR_3, VAR_8);






 if (VAR_7)
  FUNC_20(VAR_8, VAR_12, 0);






 if (VAR_11 == 0)
  FUNC_14(VAR_8->spa_dsl_pool, VAR_10);

 if (VAR_9 != ((void*)0)) {
  FUNC_0(!VAR_9->vdev_detached || VAR_9->vdev_dtl_sm == ((void*)0));
  if (VAR_9->vdev_ops->vdev_op_leaf) {
   FUNC_4(&VAR_9->vdev_initialize_lock);
   FUNC_18(VAR_9, VAR_4,
       ((void*)0));
   FUNC_5(&VAR_9->vdev_initialize_lock);

   FUNC_4(&VAR_9->vdev_trim_lock);
   FUNC_19(VAR_9, VAR_5, ((void*)0));
   FUNC_5(&VAR_9->vdev_trim_lock);
  }




  FUNC_15(VAR_9);

  FUNC_6(VAR_8, VAR_3, VAR_8, VAR_2);
  FUNC_17(VAR_9);
  FUNC_7(VAR_8, VAR_3, VAR_8);
 }




 if (VAR_13)
  FUNC_13(VAR_8, VAR_0, VAR_1);
}
