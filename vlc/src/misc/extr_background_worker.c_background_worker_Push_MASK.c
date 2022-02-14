
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_threads; } ;
struct background_worker {scalar_t__ uncompleted; scalar_t__ nthreads; int lock; TYPE_1__ conf; } ;


 int FUNC_0 (struct background_worker*,struct task*) ;
 int FUNC_1 (struct background_worker*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct task* FUNC_2 (struct background_worker*,void*,void*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6( struct background_worker* VAR_2, void* VAR_3,
                        void* VAR_4, int VAR_5 )
{
    struct task *VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_3, VAR_5);
    if (FUNC_3(!VAR_6))
        return VAR_0;

    FUNC_4(&VAR_2->lock);
    FUNC_0(VAR_2, VAR_6);
    if (++VAR_2->uncompleted > VAR_2->nthreads
            && VAR_2->nthreads < VAR_2->conf.max_threads)
        FUNC_1(VAR_2);
    FUNC_5(&VAR_2->lock);

    return VAR_1;
}
