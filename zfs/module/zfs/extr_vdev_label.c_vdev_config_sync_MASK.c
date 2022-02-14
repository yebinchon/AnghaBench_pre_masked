
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_21__ {TYPE_4__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_22__ {scalar_t__ ub_txg; } ;
typedef TYPE_3__ uberblock_t ;
struct TYPE_20__ {int mmp_delay; } ;
struct TYPE_23__ {scalar_t__ spa_final_txg; int spa_vdev_txg_list; int spa_config_dirty_list; TYPE_1__ spa_mmp; int spa_root_vdev; TYPE_3__ spa_uberblock; } ;
typedef TYPE_4__ spa_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_2__* FUNC_7 (int *,int ) ;
 TYPE_2__* FUNC_8 (int *,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ,scalar_t__,int ) ;
 int FUNC_10 (TYPE_4__*,int,scalar_t__,int) ;
 int FUNC_11 (TYPE_2__**,int,TYPE_3__*,int) ;
 int FUNC_12 (char*,int,int ) ;
 int FUNC_13 (int *,TYPE_2__*) ;
 int * FUNC_14 (TYPE_4__*,int *,int *,int) ;
 int FUNC_15 (int *) ;

int
FUNC_16(vdev_t **VAR_3, int VAR_4, uint64_t VAR_5)
{
 spa_t *VAR_6 = VAR_3[0]->vdev_spa;
 uberblock_t *VAR_7 = &VAR_6->spa_uberblock;
 int VAR_8 = 0;
 int VAR_9 = VAR_1 | VAR_0;

 FUNC_0(VAR_4 != 0);
retry:







 if (VAR_8 != 0) {
  if ((VAR_9 & VAR_2) != 0)
   return (VAR_8);
  VAR_9 |= VAR_2;
 }

 FUNC_0(VAR_7->ub_txg <= VAR_5);







 if (VAR_7->ub_txg < VAR_5) {
  boolean_t VAR_10 = FUNC_9(VAR_7, VAR_6->spa_root_vdev,
      VAR_5, VAR_6->spa_mmp.mmp_delay);

  if (!VAR_10 && FUNC_2(&VAR_6->spa_config_dirty_list))
   return (0);
 }

 if (VAR_5 > FUNC_4(VAR_6))
  return (0);

 FUNC_0(VAR_5 <= VAR_6->spa_final_txg);







 zio_t *VAR_11 = FUNC_14(VAR_6, ((void*)0), ((void*)0), VAR_9);

 for (vdev_t *VAR_12 =
     FUNC_7(&VAR_6->spa_vdev_txg_list, FUNC_1(VAR_5)); VAR_12 != ((void*)0);
     VAR_12 = FUNC_8(&VAR_6->spa_vdev_txg_list, VAR_12, FUNC_1(VAR_5)))
  FUNC_13(VAR_11, VAR_12);

 (void) FUNC_15(VAR_11);
 if ((VAR_8 = FUNC_10(VAR_6, 0, VAR_5, VAR_9)) != 0) {
  if ((VAR_9 & VAR_2) != 0) {
   FUNC_12("vdev_label_sync_list() returned error %d "
       "for pool '%s' when syncing out the even labels "
       "of dirty vdevs", VAR_8, FUNC_6(VAR_6));
  }
  goto retry;
 }
 if ((VAR_8 = FUNC_11(VAR_3, VAR_4, VAR_7, VAR_9)) != 0) {
  if ((VAR_9 & VAR_2) != 0) {
   FUNC_12("vdev_uberblock_sync_list() returned error "
       "%d for pool '%s'", VAR_8, FUNC_6(VAR_6));
  }
  goto retry;
 }

 if (FUNC_5(VAR_6))
  FUNC_3(VAR_6, VAR_7);
 if ((VAR_8 = FUNC_10(VAR_6, 1, VAR_5, VAR_9)) != 0) {
  if ((VAR_9 & VAR_2) != 0) {
   FUNC_12("vdev_label_sync_list() returned error %d "
       "for pool '%s' when syncing out the odd labels of "
       "dirty vdevs", VAR_8, FUNC_6(VAR_6));
  }
  goto retry;
 }

 return (0);
}
