
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int th_txg; TYPE_2__* th_cpu; } ;
typedef TYPE_1__ txg_handle_t ;
struct TYPE_5__ {int tc_lock; int * tc_callbacks; } ;
typedef TYPE_2__ tx_cpu_t ;
typedef int list_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(txg_handle_t *VAR_1, list_t *VAR_2)
{
 tx_cpu_t *VAR_3 = VAR_1->th_cpu;
 int VAR_4 = VAR_1->th_txg & VAR_0;

 FUNC_1(&VAR_3->tc_lock);
 FUNC_0(&VAR_3->tc_callbacks[VAR_4], VAR_2);
 FUNC_2(&VAR_3->tc_lock);
}
