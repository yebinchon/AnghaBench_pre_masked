
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tx_threads; int tx_sync_lock; void* tx_sync_thread; void* tx_quiesce_thread; } ;
typedef TYPE_1__ tx_state_t ;
struct TYPE_7__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 void* FUNC_4 (int *,int ,int ,TYPE_2__*,int ,int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(dsl_pool_t *VAR_5)
{
 tx_state_t *VAR_6 = &VAR_5->dp_tx;

 FUNC_2(&VAR_6->tx_sync_lock);

 FUNC_1("pool %p\n", VAR_5);

 FUNC_0(VAR_6->tx_threads);

 VAR_6->tx_threads = 2;

 VAR_6->tx_quiesce_thread = FUNC_4(((void*)0), 0, VAR_3,
     VAR_5, 0, &VAR_2, VAR_0, VAR_1);






 VAR_6->tx_sync_thread = FUNC_4(((void*)0), 0, VAR_4,
     VAR_5, 0, &VAR_2, VAR_0, VAR_1);

 FUNC_3(&VAR_6->tx_sync_lock);
}
