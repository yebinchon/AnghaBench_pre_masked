
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_10__ {int size; scalar_t__ private; } ;
struct TYPE_7__ {TYPE_4__ tx_assign_histogram; } ;
struct TYPE_9__ {TYPE_1__ spa_stats; } ;
typedef TYPE_3__ spa_t ;
typedef TYPE_4__ spa_history_kstat_t ;
struct TYPE_8__ {int ui64; } ;
struct TYPE_11__ {TYPE_2__ value; } ;
typedef TYPE_5__ kstat_named_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(spa_t *VAR_0, uint64_t VAR_1)
{
 spa_history_kstat_t *VAR_2 = &VAR_0->spa_stats.tx_assign_histogram;
 uint64_t VAR_3 = 0;

 while (((1ULL << VAR_3) < VAR_1) && (VAR_3 < VAR_2->size - 1))
  VAR_3++;

 FUNC_0(&((kstat_named_t *)VAR_2->private)[VAR_3].value.ui64);
}
