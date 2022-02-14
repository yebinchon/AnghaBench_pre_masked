
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_all_blkstats_t ;
struct TYPE_9__ {TYPE_2__* dp_blkstats; int dp_iput_taskq; int dp_unlinked_drain_taskq; int dp_spaceavail_cv; int dp_lock; int dp_config_rwlock; int dp_spa; int dp_sync_taskq; int dp_zil_clean_taskq; int dp_dirty_dirs; int dp_early_sync_tasks; int dp_sync_tasks; int dp_dirty_zilogs; int dp_dirty_datasets; int * dp_meta_objset; int dp_obsolete_bpobj; int dp_free_bpobj; int * dp_root_dir; int * dp_leak_dir; int * dp_free_dir; int * dp_mos_dir; int * dp_origin_snap; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_10__ {int zab_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,int) ;

void
FUNC_16(dsl_pool_t *VAR_1)
{







 if (VAR_1->dp_origin_snap != ((void*)0))
  FUNC_5(VAR_1->dp_origin_snap, VAR_1);
 if (VAR_1->dp_mos_dir != ((void*)0))
  FUNC_6(VAR_1->dp_mos_dir, VAR_1);
 if (VAR_1->dp_free_dir != ((void*)0))
  FUNC_6(VAR_1->dp_free_dir, VAR_1);
 if (VAR_1->dp_leak_dir != ((void*)0))
  FUNC_6(VAR_1->dp_leak_dir, VAR_1);
 if (VAR_1->dp_root_dir != ((void*)0))
  FUNC_6(VAR_1->dp_root_dir, VAR_1);

 FUNC_1(&VAR_1->dp_free_bpobj);
 FUNC_1(&VAR_1->dp_obsolete_bpobj);


 if (VAR_1->dp_meta_objset != ((void*)0))
  FUNC_4(VAR_1->dp_meta_objset);

 FUNC_14(&VAR_1->dp_dirty_datasets);
 FUNC_14(&VAR_1->dp_dirty_zilogs);
 FUNC_14(&VAR_1->dp_sync_tasks);
 FUNC_14(&VAR_1->dp_early_sync_tasks);
 FUNC_14(&VAR_1->dp_dirty_dirs);

 FUNC_12(VAR_1->dp_zil_clean_taskq);
 FUNC_12(VAR_1->dp_sync_taskq);







 FUNC_0(VAR_1->dp_spa, VAR_0);

 FUNC_9(VAR_1->dp_spa);
 FUNC_13(VAR_1);
 FUNC_7(VAR_1);
 FUNC_3();

 FUNC_11(&VAR_1->dp_config_rwlock);
 FUNC_10(&VAR_1->dp_lock);
 FUNC_2(&VAR_1->dp_spaceavail_cv);
 FUNC_12(VAR_1->dp_unlinked_drain_taskq);
 FUNC_12(VAR_1->dp_iput_taskq);
 if (VAR_1->dp_blkstats != ((void*)0)) {
  FUNC_10(&VAR_1->dp_blkstats->zab_lock);
  FUNC_15(VAR_1->dp_blkstats, sizeof (zfs_all_blkstats_t));
 }
 FUNC_8(VAR_1, sizeof (dsl_pool_t));
}
