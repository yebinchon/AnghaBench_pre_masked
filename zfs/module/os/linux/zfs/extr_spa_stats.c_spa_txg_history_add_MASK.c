
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {int * times; int state; int txg; } ;
typedef TYPE_2__ spa_txg_history_t ;
struct TYPE_14__ {int pl_lock; } ;
struct TYPE_13__ {scalar_t__ size; TYPE_7__ procfs_list; } ;
struct TYPE_10__ {TYPE_4__ txg_history; } ;
struct TYPE_12__ {TYPE_1__ spa_stats; } ;
typedef TYPE_3__ spa_t ;
typedef TYPE_4__ spa_history_list_t ;
typedef int hrtime_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_3 ;

void
FUNC_5(spa_t *VAR_4, uint64_t VAR_5, hrtime_t VAR_6)
{
 spa_history_list_t *VAR_7 = &VAR_4->spa_stats.txg_history;
 spa_txg_history_t *VAR_8;

 if (VAR_3 == 0 && VAR_7->size == 0)
  return;

 VAR_8 = FUNC_0(sizeof (spa_txg_history_t), VAR_0);
 VAR_8->txg = VAR_5;
 VAR_8->state = VAR_2;
 VAR_8->times[VAR_1] = VAR_6;

 FUNC_1(&VAR_7->procfs_list.pl_lock);
 FUNC_3(&VAR_7->procfs_list, VAR_8);
 VAR_7->size++;
 FUNC_4(VAR_7, VAR_3);
 FUNC_2(&VAR_7->procfs_list.pl_lock);
}
