
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int th_txg; TYPE_2__* th_cpu; } ;
typedef TYPE_1__ txg_handle_t ;
struct TYPE_5__ {scalar_t__* tc_count; int tc_lock; int * tc_cv; } ;
typedef TYPE_2__ tx_cpu_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(txg_handle_t *VAR_1)
{
 tx_cpu_t *VAR_2 = VAR_1->th_cpu;
 int VAR_3 = VAR_1->th_txg & VAR_0;

 FUNC_2(&VAR_2->tc_lock);
 FUNC_0(VAR_2->tc_count[VAR_3] != 0);
 if (--VAR_2->tc_count[VAR_3] == 0)
  FUNC_1(&VAR_2->tc_cv[VAR_3]);
 FUNC_3(&VAR_2->tc_lock);

 VAR_1->th_cpu = ((void*)0);
}
