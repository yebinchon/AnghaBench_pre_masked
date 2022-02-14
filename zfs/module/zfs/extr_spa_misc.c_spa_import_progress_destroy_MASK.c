
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int procfs_list; } ;
typedef TYPE_1__ spa_history_list_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 spa_history_list_t *VAR_1 = VAR_0;
 FUNC_2(&VAR_1->procfs_list);
 FUNC_3(VAR_1, 0);
 FUNC_1(&VAR_1->procfs_list);
 FUNC_0(VAR_1, sizeof (spa_history_list_t));
}
