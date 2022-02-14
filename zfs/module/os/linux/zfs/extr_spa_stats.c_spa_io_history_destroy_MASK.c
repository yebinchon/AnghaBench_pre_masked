
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lock; scalar_t__ kstat; } ;
struct TYPE_5__ {TYPE_3__ io_history; } ;
struct TYPE_6__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_history_kstat_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(spa_t *VAR_0)
{
 spa_history_kstat_t *VAR_1 = &VAR_0->spa_stats.io_history;

 if (VAR_1->kstat)
  FUNC_0(VAR_1->kstat);

 FUNC_1(&VAR_1->lock);
}
