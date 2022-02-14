
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_worker {scalar_t__ nthreads; int lock; int nothreads_wait; } ;
struct background_thread {int node; struct background_worker* owner; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct background_thread*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct background_thread *VAR_0)
{
    struct background_worker *VAR_1 = VAR_0->owner;

    FUNC_4(&VAR_1->lock);

    FUNC_3(&VAR_0->node);
    VAR_1->nthreads--;
    FUNC_0(VAR_1->nthreads >= 0);
    if (!VAR_1->nthreads)
        FUNC_2(&VAR_1->nothreads_wait);

    FUNC_5(&VAR_1->lock);

    FUNC_1(VAR_0);
}
