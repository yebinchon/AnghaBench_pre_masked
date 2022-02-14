
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef scalar_t__ hrtime_t ;
struct TYPE_10__ {scalar_t__ dp_dirty_total; int dp_lock; int dp_spaceavail_cv; int * dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_11__ {scalar_t__ dn_assigned_txg; int dn_mtx; int dn_notxholds; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_12__ {scalar_t__ tx_txg; scalar_t__ tx_lasttried_txg; TYPE_1__* tx_needassign_txh; int tx_dirty_delayed; scalar_t__ tx_wait_dirty; TYPE_2__* tx_pool; } ;
typedef TYPE_4__ dmu_tx_t ;
struct TYPE_9__ {TYPE_3__* txh_dnode; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_3 ;

void
FUNC_12(dmu_tx_t *VAR_4)
{
 spa_t *VAR_5 = VAR_4->tx_pool->dp_spa;
 dsl_pool_t *VAR_6 = VAR_4->tx_pool;
 hrtime_t VAR_7;

 FUNC_0(VAR_4->tx_txg == 0);
 FUNC_0(!FUNC_4(VAR_4->tx_pool));

 VAR_7 = FUNC_5();

 if (VAR_4->tx_wait_dirty) {
  uint64_t VAR_8;






  FUNC_6(&VAR_6->dp_lock);
  if (VAR_6->dp_dirty_total >= VAR_3)
   FUNC_1(VAR_2);
  while (VAR_6->dp_dirty_total >= VAR_3)
   FUNC_2(&VAR_6->dp_spaceavail_cv, &VAR_6->dp_lock);
  VAR_8 = VAR_6->dp_dirty_total;
  FUNC_7(&VAR_6->dp_lock);

  FUNC_3(VAR_4, VAR_8);

  VAR_4->tx_wait_dirty = VAR_0;







  VAR_4->tx_dirty_delayed = VAR_1;
 } else if (FUNC_9(VAR_5) || VAR_4->tx_lasttried_txg == 0) {







  FUNC_11(VAR_6, FUNC_8(VAR_5) + 1);
 } else if (VAR_4->tx_needassign_txh) {
  dnode_t *VAR_9 = VAR_4->tx_needassign_txh->txh_dnode;

  FUNC_6(&VAR_9->dn_mtx);
  while (VAR_9->dn_assigned_txg == VAR_4->tx_lasttried_txg - 1)
   FUNC_2(&VAR_9->dn_notxholds, &VAR_9->dn_mtx);
  FUNC_7(&VAR_9->dn_mtx);
  VAR_4->tx_needassign_txh = ((void*)0);
 } else {





  FUNC_11(VAR_6, FUNC_8(VAR_5) + 1);
 }

 FUNC_10(VAR_5, FUNC_5() - VAR_7);
}
