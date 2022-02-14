
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int count; scalar_t__ private; } ;
struct TYPE_8__ {TYPE_4__ tx_assign_histogram; } ;
struct TYPE_10__ {TYPE_1__ spa_stats; } ;
typedef TYPE_3__ spa_t ;
typedef TYPE_4__ spa_history_kstat_t ;
struct TYPE_12__ {int ks_ndata; int ks_data_size; TYPE_3__* ks_private; } ;
typedef TYPE_5__ kstat_t ;
struct TYPE_9__ {scalar_t__ ui64; } ;
struct TYPE_13__ {TYPE_2__ value; } ;
typedef TYPE_6__ kstat_named_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(kstat_t *VAR_1, int VAR_2)
{
 spa_t *VAR_3 = VAR_1->ks_private;
 spa_history_kstat_t *VAR_4 = &VAR_3->spa_stats.tx_assign_histogram;
 int VAR_5;

 if (VAR_2 == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++)
   ((kstat_named_t *)VAR_4->private)[VAR_5].value.ui64 = 0;
 }

 for (VAR_5 = VAR_4->count; VAR_5 > 0; VAR_5--)
  if (((kstat_named_t *)VAR_4->private)[VAR_5-1].value.ui64 != 0)
   break;

 VAR_1->ks_ndata = VAR_5;
 VAR_1->ks_data_size = VAR_5 * sizeof (kstat_named_t);

 return (0);
}
