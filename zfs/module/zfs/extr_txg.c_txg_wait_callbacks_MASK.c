
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * tx_commit_cb_taskq; } ;
typedef TYPE_1__ tx_state_t ;
struct TYPE_5__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(dsl_pool_t *VAR_0)
{
 tx_state_t *VAR_1 = &VAR_0->dp_tx;

 if (VAR_1->tx_commit_cb_taskq != ((void*)0))
  FUNC_0(VAR_1->tx_commit_cb_taskq, 0);
}
