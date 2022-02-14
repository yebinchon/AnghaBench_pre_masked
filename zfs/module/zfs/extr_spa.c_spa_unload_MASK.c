
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_36__ {int vdev_children; TYPE_1__* vdev_mg; struct TYPE_36__** vdev_child; } ;
typedef TYPE_5__ vdev_t ;
struct TYPE_35__ {int sav_count; int * sav_config; TYPE_5__** sav_vdevs; } ;
struct TYPE_34__ {int sav_count; int * sav_config; TYPE_5__** sav_vdevs; } ;
struct TYPE_33__ {scalar_t__ mmp_thread; } ;
struct TYPE_37__ {int * spa_comment; void* spa_indirect_vdevs_loaded; scalar_t__ spa_async_suspended; TYPE_4__ spa_l2cache; TYPE_3__ spa_spares; int * spa_meta_objset; int * spa_dsl_pool; TYPE_5__* spa_root_vdev; int spa_deferred_bpobj; int * spa_vdev_removal; TYPE_5__** spa_async_zio_root; TYPE_2__ spa_mmp; void* spa_sync_on; } ;
typedef TYPE_6__ spa_t ;
struct TYPE_32__ {int mg_taskq; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__**,int) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,int ,TYPE_6__*,int ) ;
 int FUNC_11 (TYPE_6__*,int ,TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_17 (TYPE_6__*) ;
 scalar_t__ FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_6__*) ;
 int FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_6__*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (TYPE_6__*) ;
 int FUNC_27 (TYPE_5__*) ;
 int FUNC_28 (TYPE_5__*) ;
 int FUNC_29 (TYPE_5__*,int ) ;
 int FUNC_30 (TYPE_5__*,int ) ;
 int FUNC_31 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_32(spa_t *VAR_8)
{
 FUNC_0(FUNC_1(&VAR_7));
 FUNC_0(FUNC_18(VAR_8) != VAR_1);

 FUNC_14(FUNC_13(VAR_8));
 FUNC_16(VAR_8, "UNLOADING");

 FUNC_23(VAR_8);







 if (FUNC_17(VAR_8))
  FUNC_20(VAR_8);




 FUNC_8(VAR_8);

 if (VAR_8->spa_root_vdev) {
  vdev_t *VAR_9 = VAR_8->spa_root_vdev;
  FUNC_29(VAR_9, VAR_4);
  FUNC_30(VAR_9, VAR_5);
  FUNC_26(VAR_8);
 }




 if (VAR_8->spa_sync_on) {
  FUNC_25(VAR_8->spa_dsl_pool);
  VAR_8->spa_sync_on = VAR_0;
 }





 if (VAR_8->spa_root_vdev != ((void*)0)) {
  for (int VAR_10 = 0; VAR_10 < VAR_8->spa_root_vdev->vdev_children; VAR_10++) {
   vdev_t *VAR_11 = VAR_8->spa_root_vdev->vdev_child[VAR_10];
   if (VAR_11->vdev_mg != ((void*)0))
    FUNC_24(VAR_11->vdev_mg->mg_taskq);
  }
 }

 if (VAR_8->spa_mmp.mmp_thread)
  FUNC_6(VAR_8);




 if (VAR_8->spa_async_zio_root != ((void*)0)) {
  for (int VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
   (void) FUNC_31(VAR_8->spa_async_zio_root[VAR_12]);
  FUNC_5(VAR_8->spa_async_zio_root, VAR_6 * sizeof (void *));
  VAR_8->spa_async_zio_root = ((void*)0);
 }

 if (VAR_8->spa_vdev_removal != ((void*)0)) {
  FUNC_22(VAR_8->spa_vdev_removal);
  VAR_8->spa_vdev_removal = ((void*)0);
 }

 FUNC_12(VAR_8);

 FUNC_9(VAR_8);

 FUNC_2(&VAR_8->spa_deferred_bpobj);

 FUNC_10(VAR_8, VAR_3, VAR_8, VAR_2);




 if (VAR_8->spa_root_vdev)
  FUNC_28(VAR_8->spa_root_vdev);
 FUNC_0(VAR_8->spa_root_vdev == ((void*)0));




 if (VAR_8->spa_dsl_pool) {
  FUNC_4(VAR_8->spa_dsl_pool);
  VAR_8->spa_dsl_pool = ((void*)0);
  VAR_8->spa_meta_objset = ((void*)0);
 }

 FUNC_3(VAR_8);
 FUNC_21(VAR_8);




 FUNC_15(VAR_8);

 for (int VAR_13 = 0; VAR_13 < VAR_8->spa_spares.sav_count; VAR_13++)
  FUNC_28(VAR_8->spa_spares.sav_vdevs[VAR_13]);
 if (VAR_8->spa_spares.sav_vdevs) {
  FUNC_5(VAR_8->spa_spares.sav_vdevs,
      VAR_8->spa_spares.sav_count * sizeof (void *));
  VAR_8->spa_spares.sav_vdevs = ((void*)0);
 }
 if (VAR_8->spa_spares.sav_config) {
  FUNC_7(VAR_8->spa_spares.sav_config);
  VAR_8->spa_spares.sav_config = ((void*)0);
 }
 VAR_8->spa_spares.sav_count = 0;

 for (int VAR_14 = 0; VAR_14 < VAR_8->spa_l2cache.sav_count; VAR_14++) {
  FUNC_27(VAR_8->spa_l2cache.sav_vdevs[VAR_14]);
  FUNC_28(VAR_8->spa_l2cache.sav_vdevs[VAR_14]);
 }
 if (VAR_8->spa_l2cache.sav_vdevs) {
  FUNC_5(VAR_8->spa_l2cache.sav_vdevs,
      VAR_8->spa_l2cache.sav_count * sizeof (void *));
  VAR_8->spa_l2cache.sav_vdevs = ((void*)0);
 }
 if (VAR_8->spa_l2cache.sav_config) {
  FUNC_7(VAR_8->spa_l2cache.sav_config);
  VAR_8->spa_l2cache.sav_config = ((void*)0);
 }
 VAR_8->spa_l2cache.sav_count = 0;

 VAR_8->spa_async_suspended = 0;

 VAR_8->spa_indirect_vdevs_loaded = VAR_0;

 if (VAR_8->spa_comment != ((void*)0)) {
  FUNC_19(VAR_8->spa_comment);
  VAR_8->spa_comment = ((void*)0);
 }

 FUNC_11(VAR_8, VAR_3, VAR_8);
}
