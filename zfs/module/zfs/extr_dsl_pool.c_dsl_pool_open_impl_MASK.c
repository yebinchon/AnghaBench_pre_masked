
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_5__ {void* dp_unlinked_drain_taskq; void* dp_iput_taskq; int dp_spaceavail_cv; int dp_lock; void* dp_zil_clean_taskq; void* dp_sync_taskq; int dp_early_sync_tasks; int dp_sync_tasks; int dp_dirty_dirs; int dp_dirty_zilogs; int dp_dirty_datasets; int dp_config_rwlock; int dp_meta_rootbp; int * dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int blkptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 void* FUNC_7 (char*,int,int ,int,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static dsl_pool_t *
FUNC_10(spa_t *VAR_23, uint64_t VAR_24)
{
 dsl_pool_t *VAR_25;
 blkptr_t *VAR_26 = FUNC_6(VAR_23);

 VAR_25 = FUNC_1(sizeof (dsl_pool_t), VAR_3);
 VAR_25->dp_spa = VAR_23;
 VAR_25->dp_meta_rootbp = *VAR_26;
 FUNC_5(&VAR_25->dp_config_rwlock, VAR_0);
 FUNC_8(VAR_25, VAR_24);
 FUNC_2(VAR_23);

 FUNC_9(&VAR_25->dp_dirty_datasets, VAR_23,
     FUNC_4(VAR_11, VAR_10));
 FUNC_9(&VAR_25->dp_dirty_zilogs, VAR_23,
     FUNC_4(VAR_21, VAR_22));
 FUNC_9(&VAR_25->dp_dirty_dirs, VAR_23,
     FUNC_4(VAR_12, VAR_8));
 FUNC_9(&VAR_25->dp_sync_tasks, VAR_23,
     FUNC_4(VAR_13, VAR_14));
 FUNC_9(&VAR_25->dp_early_sync_tasks, VAR_23,
     FUNC_4(VAR_13, VAR_14));

 VAR_25->dp_sync_taskq = FUNC_7("dp_sync_taskq",
     VAR_17, VAR_16, 1, VAR_2,
     VAR_7);

 VAR_25->dp_zil_clean_taskq = FUNC_7("dp_zil_clean_taskq",
     VAR_20, VAR_16,
     VAR_19,
     VAR_18,
     VAR_6 | VAR_7);

 FUNC_3(&VAR_25->dp_lock, ((void*)0), VAR_4, ((void*)0));
 FUNC_0(&VAR_25->dp_spaceavail_cv, ((void*)0), VAR_1, ((void*)0));

 VAR_25->dp_iput_taskq = FUNC_7("z_iput", VAR_15, VAR_9,
     VAR_15 * 8, VAR_2, VAR_6 | VAR_5);
 VAR_25->dp_unlinked_drain_taskq = FUNC_7("z_unlinked_drain",
     VAR_15, VAR_9, VAR_15, VAR_2,
     VAR_6 | VAR_5);

 return (VAR_25);
}
