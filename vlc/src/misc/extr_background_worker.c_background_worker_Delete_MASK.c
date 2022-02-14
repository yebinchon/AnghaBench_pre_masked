
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_worker {int closing; int lock; int nothreads_wait; scalar_t__ nthreads; int queue_wait; } ;


 int FUNC_0 (struct background_worker*,int *) ;
 int FUNC_1 (struct background_worker*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( struct background_worker* VAR_0 )
{
    FUNC_4(&VAR_0->lock);

    VAR_0->closing = 1;
    FUNC_0(VAR_0, ((void*)0));

    FUNC_2(&VAR_0->queue_wait);

    while (VAR_0->nthreads)
        FUNC_3(&VAR_0->nothreads_wait, &VAR_0->lock);

    FUNC_5(&VAR_0->lock);


    FUNC_1(VAR_0);
}
