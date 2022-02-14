
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t txg_state_t ;
struct TYPE_12__ {scalar_t__ txg; int state; int * times; } ;
typedef TYPE_3__ spa_txg_history_t ;
struct TYPE_11__ {int pl_lock; int pl_list; } ;
struct TYPE_14__ {TYPE_2__ procfs_list; } ;
struct TYPE_10__ {TYPE_5__ txg_history; } ;
struct TYPE_13__ {TYPE_1__ spa_stats; } ;
typedef TYPE_4__ spa_t ;
typedef TYPE_5__ spa_history_list_t ;
typedef int hrtime_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

int
FUNC_4(spa_t *VAR_2, uint64_t VAR_3, txg_state_t VAR_4,
    hrtime_t VAR_5)
{
 spa_history_list_t *VAR_6 = &VAR_2->spa_stats.txg_history;
 spa_txg_history_t *VAR_7;
 int VAR_8 = VAR_0;

 if (VAR_1 == 0)
  return (0);

 FUNC_2(&VAR_6->procfs_list.pl_lock);
 for (VAR_7 = FUNC_1(&VAR_6->procfs_list.pl_list); VAR_7 != ((void*)0);
     VAR_7 = FUNC_0(&VAR_6->procfs_list.pl_list, VAR_7)) {
  if (VAR_7->txg == VAR_3) {
   VAR_7->times[VAR_4] = VAR_5;
   VAR_7->state++;
   VAR_8 = 0;
   break;
  }
 }
 FUNC_3(&VAR_6->procfs_list.pl_lock);

 return (VAR_8);
}
