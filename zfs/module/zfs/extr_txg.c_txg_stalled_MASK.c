
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_quiesce_txg_waiting; scalar_t__ tx_open_txg; } ;
typedef TYPE_1__ tx_state_t ;
struct TYPE_5__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int boolean_t ;



boolean_t
FUNC_0(dsl_pool_t *VAR_0)
{
 tx_state_t *VAR_1 = &VAR_0->dp_tx;
 return (VAR_1->tx_quiesce_txg_waiting > VAR_1->tx_open_txg);
}
