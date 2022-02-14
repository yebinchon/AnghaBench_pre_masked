
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ spa_waiters; int spa_activities_lock; int spa_waiters_cancel; int spa_waiters_cv; int spa_activities_cv; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(spa_t *VAR_2)
{
 FUNC_2(&VAR_2->spa_activities_lock);
 VAR_2->spa_waiters_cancel = VAR_1;
 FUNC_0(&VAR_2->spa_activities_cv);
 while (VAR_2->spa_waiters != 0)
  FUNC_1(&VAR_2->spa_waiters_cv, &VAR_2->spa_activities_lock);
 VAR_2->spa_waiters_cancel = VAR_0;
 FUNC_3(&VAR_2->spa_activities_lock);
}
