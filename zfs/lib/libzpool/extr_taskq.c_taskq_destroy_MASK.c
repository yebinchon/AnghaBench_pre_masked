
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tq_nthreads; scalar_t__ tq_nalloc; int tq_maxalloc_cv; int tq_wait_cv; int tq_dispatch_cv; int tq_lock; int tq_threadlock; struct TYPE_7__* tq_threadlist; int * tq_freelist; scalar_t__ tq_minalloc; int tq_flags; } ;
typedef TYPE_1__ taskq_t ;
typedef int kthread_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;

void
FUNC_12(taskq_t *VAR_2)
{
 int VAR_3 = VAR_2->tq_nthreads;

 FUNC_11(VAR_2);

 FUNC_6(&VAR_2->tq_lock);

 VAR_2->tq_flags &= ~VAR_1;
 FUNC_1(&VAR_2->tq_dispatch_cv);

 while (VAR_2->tq_nthreads != 0)
  FUNC_3(&VAR_2->tq_wait_cv, &VAR_2->tq_lock);

 VAR_2->tq_minalloc = 0;
 while (VAR_2->tq_nalloc != 0) {
  FUNC_0(VAR_2->tq_freelist != ((void*)0));
  FUNC_10(VAR_2, FUNC_9(VAR_2, VAR_0));
 }

 FUNC_7(&VAR_2->tq_lock);

 FUNC_4(VAR_2->tq_threadlist, VAR_3 * sizeof (kthread_t *));

 FUNC_8(&VAR_2->tq_threadlock);
 FUNC_5(&VAR_2->tq_lock);
 FUNC_2(&VAR_2->tq_dispatch_cv);
 FUNC_2(&VAR_2->tq_wait_cv);
 FUNC_2(&VAR_2->tq_maxalloc_cv);

 FUNC_4(VAR_2, sizeof (taskq_t));
}
