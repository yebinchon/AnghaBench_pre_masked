
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_sync_thread; } ;
struct TYPE_5__ {int dp_sync_taskq; int dp_spa; TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

int
FUNC_2(dsl_pool_t *VAR_1)
{
 return (VAR_0 == VAR_1->dp_tx.tx_sync_thread ||
     FUNC_0(VAR_1->dp_spa) ||
     FUNC_1(VAR_1->dp_sync_taskq, VAR_0));
}
