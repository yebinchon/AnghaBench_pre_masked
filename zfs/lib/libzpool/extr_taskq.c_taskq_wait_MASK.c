
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* tqent_next; } ;
struct TYPE_5__ {scalar_t__ tq_active; int tq_lock; int tq_wait_cv; TYPE_1__ tq_task; } ;
typedef TYPE_2__ taskq_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(taskq_t *VAR_0)
{
 FUNC_1(&VAR_0->tq_lock);
 while (VAR_0->tq_task.tqent_next != &VAR_0->tq_task || VAR_0->tq_active != 0)
  FUNC_0(&VAR_0->tq_wait_cv, &VAR_0->tq_lock);
 FUNC_2(&VAR_0->tq_lock);
}
