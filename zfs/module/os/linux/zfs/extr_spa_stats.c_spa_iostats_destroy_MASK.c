
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int lock; TYPE_4__* kstat; } ;
struct TYPE_7__ {TYPE_3__ iostats; } ;
struct TYPE_8__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef int spa_iostats_t ;
typedef TYPE_3__ spa_history_kstat_t ;
struct TYPE_10__ {int ks_data; } ;
typedef TYPE_4__ kstat_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_0)
{
 spa_history_kstat_t *VAR_1 = &VAR_0->spa_stats.iostats;
 kstat_t *VAR_2 = VAR_1->kstat;
 if (VAR_2) {
  FUNC_0(VAR_2->ks_data, sizeof (spa_iostats_t));
  FUNC_1(VAR_2);
 }

 FUNC_2(&VAR_1->lock);
}
