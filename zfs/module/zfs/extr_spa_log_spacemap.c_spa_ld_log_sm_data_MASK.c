
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int vdev_t ;
typedef int u_longlong_t ;
struct spa_ld_log_sm_arg {int slls_txg; TYPE_3__* slls_spa; } ;
typedef int space_map_t ;
struct TYPE_21__ {int sus_nblocks; int sus_memused; } ;
struct TYPE_22__ {TYPE_2__ spa_unflushed_stats; int spa_metaslabs_by_flushed; int spa_sm_logs_by_txg; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_23__ {int sls_nblocks; int ms_weight; int ms_lock; int * ms_sm; int ms_unflushed_frees; TYPE_1__* ms_group; int ms_unflushed_allocs; scalar_t__ ms_allocated_space; int sls_mscount; int sls_txg; scalar_t__ sls_sm_obj; } ;
typedef TYPE_4__ spa_log_sm_t ;
typedef TYPE_4__ metaslab_t ;
typedef int longlong_t ;
typedef int hrtime_t ;
struct TYPE_20__ {int mg_class; int * mg_vd; } ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int *,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_4 ;
 int FUNC_14 (TYPE_3__*,char*,int ,int) ;
 int FUNC_15 (TYPE_3__*,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int ,struct spa_ld_log_sm_arg*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int **,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_25 (TYPE_3__*,int ,int ,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_26(spa_t *VAR_6)
{
 int VAR_7 = 0;





 if (!FUNC_18(VAR_6))
  return (0);

 FUNC_0(VAR_6->spa_unflushed_stats.sus_nblocks);
 FUNC_0(VAR_6->spa_unflushed_stats.sus_memused);

 hrtime_t VAR_8 = FUNC_5();

 for (spa_log_sm_t *VAR_9 = FUNC_3(&VAR_6->spa_sm_logs_by_txg);
     VAR_9; VAR_9 = FUNC_1(&VAR_6->spa_sm_logs_by_txg, VAR_9)) {
  space_map_t *VAR_10 = ((void*)0);
  VAR_7 = FUNC_24(&VAR_10, FUNC_17(VAR_6),
      VAR_9->sls_sm_obj, 0, VAR_2, VAR_1);
  if (VAR_7 != 0) {
   FUNC_14(VAR_6, "spa_ld_log_sm_data(): failed at "
       "space_map_open(obj=%llu) [error %d]",
       (u_longlong_t)VAR_9->sls_sm_obj, VAR_7);
   goto out;
  }

  struct spa_ld_log_sm_arg VAR_11 = {
   .slls_spa = VAR_6,
   .slls_txg = VAR_9->sls_txg
  };
  VAR_7 = FUNC_21(VAR_10, FUNC_22(VAR_10),
      VAR_4, &VAR_11);
  if (VAR_7 != 0) {
   FUNC_20(VAR_10);
   FUNC_14(VAR_6, "spa_ld_log_sm_data(): failed "
       "at space_map_iterate(obj=%llu) [error %d]",
       (u_longlong_t)VAR_9->sls_sm_obj, VAR_7);
   goto out;
  }

  FUNC_0(VAR_9->sls_nblocks);
  VAR_9->sls_nblocks = FUNC_23(VAR_10);
  VAR_6->spa_unflushed_stats.sus_nblocks += VAR_9->sls_nblocks;
  FUNC_25(VAR_6, VAR_9->sls_txg,
      VAR_9->sls_mscount, VAR_9->sls_nblocks);

  FUNC_20(VAR_10);
 }
 hrtime_t VAR_12 = FUNC_5();
 FUNC_15(VAR_6,
     "read %llu log space maps (%llu total blocks - blksz = %llu bytes) "
     "in %lld ms", (u_longlong_t)FUNC_4(&VAR_6->spa_sm_logs_by_txg),
     (u_longlong_t)FUNC_16(VAR_6),
     (u_longlong_t)VAR_5,
     (longlong_t)((VAR_12 - VAR_8) / 1000000));

out:
 for (metaslab_t *VAR_13 = FUNC_3(&VAR_6->spa_metaslabs_by_flushed);
     VAR_13 != ((void*)0); VAR_13 = FUNC_1(&VAR_6->spa_metaslabs_by_flushed, VAR_13)) {
  FUNC_11(&VAR_13->ms_lock);
  VAR_13->ms_allocated_space = FUNC_19(VAR_13->ms_sm) +
      FUNC_13(VAR_13->ms_unflushed_allocs) -
      FUNC_13(VAR_13->ms_unflushed_frees);

  vdev_t *VAR_14 = VAR_13->ms_group->mg_vd;
  FUNC_9(VAR_14, VAR_13->ms_group->mg_class,
      FUNC_13(VAR_13->ms_unflushed_allocs), 0, 0);
  FUNC_9(VAR_14, VAR_13->ms_group->mg_class,
      -FUNC_13(VAR_13->ms_unflushed_frees), 0, 0);

  FUNC_0(VAR_13->ms_weight & VAR_0);
  FUNC_7(VAR_13);

  VAR_6->spa_unflushed_stats.sus_memused +=
      FUNC_10(VAR_13);

  if (VAR_3 && VAR_13->ms_sm != ((void*)0)) {
   FUNC_2(FUNC_6(VAR_13));
   FUNC_8(VAR_13, 0);
  }
  FUNC_12(&VAR_13->ms_lock);
 }

 return (VAR_7);
}
