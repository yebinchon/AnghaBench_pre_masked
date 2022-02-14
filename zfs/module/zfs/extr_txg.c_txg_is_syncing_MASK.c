
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_syncing_txg; int tx_sync_lock; } ;
typedef TYPE_1__ tx_state_t ;
struct TYPE_5__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static boolean_t
FUNC_2(dsl_pool_t *VAR_0)
{
 tx_state_t *VAR_1 = &VAR_0->dp_tx;
 FUNC_0(FUNC_1(&VAR_1->tx_sync_lock));
 return (VAR_1->tx_syncing_txg != 0);
}
