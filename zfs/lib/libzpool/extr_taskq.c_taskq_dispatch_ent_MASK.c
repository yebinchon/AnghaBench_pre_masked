
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_6__ {void* tqent_arg; int * tqent_func; struct TYPE_6__* tqent_next; struct TYPE_6__* tqent_prev; int tqent_flags; } ;
struct TYPE_5__ {int tq_lock; int tq_dispatch_cv; TYPE_2__ tq_task; } ;
typedef TYPE_1__ taskq_t ;
typedef TYPE_2__ taskq_ent_t ;
typedef int * task_func_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(taskq_t *VAR_2, task_func_t VAR_3, void *VAR_4, uint_t VAR_5,
    taskq_ent_t *VAR_6)
{
 FUNC_0(VAR_3 != ((void*)0));





 VAR_6->tqent_flags |= VAR_0;



 FUNC_2(&VAR_2->tq_lock);

 if (VAR_5 & VAR_1) {
  VAR_6->tqent_next = VAR_2->tq_task.tqent_next;
  VAR_6->tqent_prev = &VAR_2->tq_task;
 } else {
  VAR_6->tqent_next = &VAR_2->tq_task;
  VAR_6->tqent_prev = VAR_2->tq_task.tqent_prev;
 }
 VAR_6->tqent_next->tqent_prev = VAR_6;
 VAR_6->tqent_prev->tqent_next = VAR_6;
 VAR_6->tqent_func = VAR_3;
 VAR_6->tqent_arg = VAR_4;
 FUNC_1(&VAR_2->tq_dispatch_cv);
 FUNC_3(&VAR_2->tq_lock);
}
