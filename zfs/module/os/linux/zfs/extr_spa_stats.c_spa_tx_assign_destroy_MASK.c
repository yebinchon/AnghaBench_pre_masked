
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lock; int size; int private; int * kstat; } ;
struct TYPE_5__ {TYPE_3__ tx_assign_histogram; } ;
struct TYPE_6__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_history_kstat_t ;
typedef int kstat_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_0)
{
 spa_history_kstat_t *VAR_1 = &VAR_0->spa_stats.tx_assign_histogram;
 kstat_t *VAR_2;

 VAR_2 = VAR_1->kstat;
 if (VAR_2)
  FUNC_1(VAR_2);

 FUNC_0(VAR_1->private, VAR_1->size);
 FUNC_2(&VAR_1->lock);
}
