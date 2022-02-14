
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spacemap_zap ;
struct TYPE_8__ {int sus_nblocks; } ;
struct TYPE_9__ {TYPE_1__ spa_unflushed_stats; int spa_sm_logs_by_txg; int spa_metaslabs_by_flushed; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_10__ {scalar_t__ sls_txg; scalar_t__ sls_nblocks; int sls_sm_obj; int sls_mscount; } ;
typedef TYPE_3__ spa_log_sm_t ;
typedef int objset_t ;
typedef int metaslab_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int ,int ,int,int,scalar_t__*) ;
 int FUNC_11 (int *,scalar_t__,scalar_t__,int *) ;

void
FUNC_12(spa_t *VAR_3, dmu_tx_t *VAR_4)
{
 objset_t *VAR_5 = FUNC_8(VAR_3);

 uint64_t VAR_6;
 int VAR_7 = FUNC_10(VAR_5, VAR_0,
     VAR_1, sizeof (VAR_6), 1, &VAR_6);
 if (VAR_7 == VAR_2) {
  FUNC_0(FUNC_4(&VAR_3->spa_sm_logs_by_txg));
  return;
 }
 FUNC_2(VAR_7);

 metaslab_t *VAR_8 = FUNC_3(&VAR_3->spa_metaslabs_by_flushed);
 uint64_t VAR_9 = FUNC_7(VAR_8);


 for (spa_log_sm_t *VAR_10 = FUNC_3(&VAR_3->spa_sm_logs_by_txg);
     VAR_10 && VAR_10->sls_txg < VAR_9;
     VAR_10 = FUNC_3(&VAR_3->spa_sm_logs_by_txg)) {
  FUNC_1(VAR_10->sls_mscount);
  FUNC_5(&VAR_3->spa_sm_logs_by_txg, VAR_10);
  FUNC_9(VAR_5, VAR_10->sls_sm_obj, VAR_4);
  FUNC_2(FUNC_11(VAR_5, VAR_6, VAR_10->sls_txg, VAR_4));
  VAR_3->spa_unflushed_stats.sus_nblocks -= VAR_10->sls_nblocks;
  FUNC_6(VAR_10, sizeof (spa_log_sm_t));
 }
}
