
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {int zlp_rewind; scalar_t__ zlp_maxmeta; scalar_t__ zlp_maxdata; } ;
typedef TYPE_2__ zpool_load_policy_t ;
typedef int zio_t ;
typedef scalar_t__ u_longlong_t ;
struct TYPE_15__ {scalar_t__ ub_timestamp; int ub_txg; } ;
struct TYPE_17__ {scalar_t__ spa_load_meta_errors; scalar_t__ spa_load_data_errors; scalar_t__ spa_load_txg_ts; scalar_t__ spa_last_ubsync_txg_ts; TYPE_1__ spa_uberblock; int spa_load_max_txg; int spa_load_info; int spa_load_txg; int spa_load_verify_bytes; int spa_verify_min_txg; scalar_t__ spa_extreme_rewind; TYPE_11__* spa_dsl_pool; int spa_config; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_18__ {scalar_t__ sle_meta_count; scalar_t__ sle_data_count; int member_0; } ;
typedef TYPE_4__ spa_load_error_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {int dp_root_dir_obj; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_11__*,int ,int ,int *,int ) ;
 int FUNC_4 (TYPE_11__*,int ) ;
 int FUNC_5 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_9 (TYPE_3__*,int ,int,int ,int *) ;
 int VAR_19 ;
 int * FUNC_10 (TYPE_3__*,int *,TYPE_4__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_13(spa_t *VAR_20)
{
 zio_t *VAR_21;
 spa_load_error_t VAR_22 = { 0 };
 zpool_load_policy_t VAR_23;
 boolean_t VAR_24 = VAR_0;
 int VAR_25 = 0;

 FUNC_12(VAR_20->spa_config, &VAR_23);

 if (VAR_23.zlp_rewind & VAR_14)
  return (0);

 FUNC_4(VAR_20->spa_dsl_pool, VAR_5);
 VAR_25 = FUNC_3(VAR_20->spa_dsl_pool,
     VAR_20->spa_dsl_pool->dp_root_dir_obj, VAR_19, ((void*)0),
     VAR_2);
 FUNC_5(VAR_20->spa_dsl_pool, VAR_5);
 if (VAR_25 != 0)
  return (VAR_25);

 VAR_21 = FUNC_10(VAR_20, ((void*)0), &VAR_22,
     VAR_9 | VAR_10);

 if (VAR_18) {
  if (VAR_20->spa_extreme_rewind) {
   FUNC_8(VAR_20, "performing a complete scan of the "
       "pool since extreme rewind is on. This may take "
       "a very long time.\n  (spa_load_verify_data=%u, "
       "spa_load_verify_metadata=%u)",
       VAR_16, VAR_18);
  }

  VAR_25 = FUNC_9(VAR_20, VAR_20->spa_verify_min_txg,
      VAR_7 | VAR_8 |
      VAR_6, VAR_15, VAR_21);
 }

 (void) FUNC_11(VAR_21);
 FUNC_0(VAR_20->spa_load_verify_bytes);

 VAR_20->spa_load_meta_errors = VAR_22.sle_meta_count;
 VAR_20->spa_load_data_errors = VAR_22.sle_data_count;

 if (VAR_22.sle_meta_count != 0 || VAR_22.sle_data_count != 0) {
  FUNC_8(VAR_20, "spa_load_verify found %llu metadata errors "
      "and %llu data errors", (u_longlong_t)VAR_22.sle_meta_count,
      (u_longlong_t)VAR_22.sle_data_count);
 }

 if (VAR_17 ||
     (!VAR_25 && VAR_22.sle_meta_count <= VAR_23.zlp_maxmeta &&
     VAR_22.sle_data_count <= VAR_23.zlp_maxdata)) {
  int64_t VAR_26 = 0;

  VAR_24 = VAR_1;
  VAR_20->spa_load_txg = VAR_20->spa_uberblock.ub_txg;
  VAR_20->spa_load_txg_ts = VAR_20->spa_uberblock.ub_timestamp;

  VAR_26 = VAR_20->spa_last_ubsync_txg_ts - VAR_20->spa_load_txg_ts;
  FUNC_2(FUNC_7(VAR_20->spa_load_info,
      VAR_12, VAR_20->spa_load_txg_ts) == 0);
  FUNC_2(FUNC_6(VAR_20->spa_load_info,
      VAR_13, VAR_26) == 0);
  FUNC_2(FUNC_7(VAR_20->spa_load_info,
      VAR_11, VAR_22.sle_data_count) == 0);
 } else {
  VAR_20->spa_load_max_txg = VAR_20->spa_uberblock.ub_txg;
 }

 if (VAR_17)
  return (0);

 if (VAR_25) {
  if (VAR_25 != VAR_4 && VAR_25 != VAR_3)
   VAR_25 = FUNC_1(VAR_3);
  return (VAR_25);
 }

 return (VAR_24 ? 0 : VAR_3);
}
