
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tx_quiesce_txg_waiting; scalar_t__ tx_open_txg; scalar_t__ tx_sync_txg_waiting; scalar_t__ tx_synced_txg; scalar_t__ tx_quiesced_txg; int tx_sync_lock; int tx_quiesce_more_cv; } ;
typedef TYPE_1__ tx_state_t ;
struct TYPE_8__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(dsl_pool_t *VAR_0)
{
 tx_state_t *VAR_1 = &VAR_0->dp_tx;

 FUNC_0(!FUNC_2(VAR_0));

 FUNC_3(&VAR_1->tx_sync_lock);
 if (!FUNC_6(VAR_0) &&
     !FUNC_5(VAR_0) &&
     VAR_1->tx_quiesce_txg_waiting <= VAR_1->tx_open_txg &&
     VAR_1->tx_sync_txg_waiting <= VAR_1->tx_synced_txg &&
     VAR_1->tx_quiesced_txg <= VAR_1->tx_synced_txg) {
  VAR_1->tx_quiesce_txg_waiting = VAR_1->tx_open_txg + 1;
  FUNC_1(&VAR_1->tx_quiesce_more_cv);
 }
 FUNC_4(&VAR_1->tx_sync_lock);
}
