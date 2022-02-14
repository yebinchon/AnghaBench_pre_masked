
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int tx_open_txg; int tx_syncing_txg; int tx_synced_txg; int tx_sync_lock; int tx_quiesce_more_cv; } ;
typedef TYPE_1__ tx_state_t ;
typedef scalar_t__ hrtime_t ;
struct TYPE_6__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(dsl_pool_t *VAR_1, uint64_t VAR_2, hrtime_t VAR_3, hrtime_t VAR_4)
{
 tx_state_t *VAR_5 = &VAR_1->dp_tx;
 hrtime_t VAR_6 = FUNC_2();


 if (VAR_5->tx_open_txg > VAR_2 ||
     VAR_5->tx_syncing_txg == VAR_2-1 || VAR_5->tx_synced_txg == VAR_2-1)
  return;

 FUNC_3(&VAR_5->tx_sync_lock);
 if (VAR_5->tx_open_txg > VAR_2 || VAR_5->tx_synced_txg == VAR_2-1) {
  FUNC_4(&VAR_5->tx_sync_lock);
  return;
 }

 while (FUNC_2() - VAR_6 < VAR_3 &&
     VAR_5->tx_syncing_txg < VAR_2-1 && !FUNC_5(VAR_1)) {
  (void) FUNC_1(&VAR_5->tx_quiesce_more_cv,
      &VAR_5->tx_sync_lock, VAR_3, VAR_4, 0);
 }

 FUNC_0(VAR_0);

 FUNC_4(&VAR_5->tx_sync_lock);
}
