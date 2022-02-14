
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int procfs_list; } ;
struct TYPE_6__ {TYPE_3__ txg_history; } ;
struct TYPE_7__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_history_list_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_0)
{
 spa_history_list_t *VAR_1 = &VAR_0->spa_stats.txg_history;
 FUNC_1(&VAR_1->procfs_list);
 FUNC_2(VAR_1, 0);
 FUNC_0(&VAR_1->procfs_list);
}
