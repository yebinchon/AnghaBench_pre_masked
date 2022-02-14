
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tqent_flags; int tqent_arg; int (* tqent_func ) (int ) ;TYPE_1__* tqent_prev; struct TYPE_8__* tqent_next; } ;
struct TYPE_7__ {int tq_flags; scalar_t__ tq_active; int tq_lock; int tq_wait_cv; int tq_nthreads; int tq_threadlock; int tq_dispatch_cv; TYPE_3__ tq_task; } ;
typedef TYPE_2__ taskq_t ;
typedef TYPE_3__ taskq_ent_t ;
typedef int boolean_t ;
struct TYPE_6__ {TYPE_3__* tqent_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void *VAR_3)
{
 taskq_t *VAR_4 = VAR_3;
 taskq_ent_t *VAR_5;
 boolean_t VAR_6;

 FUNC_2(&VAR_4->tq_lock);
 while (VAR_4->tq_flags & VAR_1) {
  if ((VAR_5 = VAR_4->tq_task.tqent_next) == &VAR_4->tq_task) {
   if (--VAR_4->tq_active == 0)
    FUNC_0(&VAR_4->tq_wait_cv);
   FUNC_1(&VAR_4->tq_dispatch_cv, &VAR_4->tq_lock);
   VAR_4->tq_active++;
   continue;
  }
  VAR_5->tqent_prev->tqent_next = VAR_5->tqent_next;
  VAR_5->tqent_next->tqent_prev = VAR_5->tqent_prev;
  VAR_5->tqent_next = ((void*)0);
  VAR_5->tqent_prev = ((void*)0);
  VAR_6 = VAR_5->tqent_flags & VAR_2;
  FUNC_3(&VAR_4->tq_lock);

  FUNC_4(&VAR_4->tq_threadlock, VAR_0);
  VAR_5->tqent_func(VAR_5->tqent_arg);
  FUNC_5(&VAR_4->tq_threadlock);

  FUNC_2(&VAR_4->tq_lock);
  if (!VAR_6)
   FUNC_7(VAR_4, VAR_5);
 }
 VAR_4->tq_nthreads--;
 FUNC_0(&VAR_4->tq_wait_cv);
 FUNC_3(&VAR_4->tq_lock);
 FUNC_8();
}
