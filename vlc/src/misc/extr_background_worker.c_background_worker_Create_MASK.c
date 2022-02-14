
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_worker_config {int dummy; } ;
struct background_worker {int closing; int nothreads_wait; int queue_wait; int queue; int threads; scalar_t__ nthreads; scalar_t__ uncompleted; int lock; void* owner; struct background_worker_config conf; } ;


 struct background_worker* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct background_worker *FUNC_5(void *VAR_0,
                                         struct background_worker_config *VAR_1)
{
    struct background_worker* VAR_2 = FUNC_0(sizeof(*VAR_2));
    if (FUNC_1(!VAR_2))
        return ((void*)0);

    VAR_2->conf = *VAR_1;
    VAR_2->owner = VAR_0;

    FUNC_4(&VAR_2->lock);
    VAR_2->uncompleted = 0;
    VAR_2->nthreads = 0;
    FUNC_3(&VAR_2->threads);
    FUNC_3(&VAR_2->queue);
    FUNC_2(&VAR_2->queue_wait);
    FUNC_2(&VAR_2->nothreads_wait);
    VAR_2->closing = 0;
    return VAR_2;
}
